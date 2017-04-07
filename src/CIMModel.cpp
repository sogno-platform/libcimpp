#include "CIMModel.hpp"
#include "CIMContentHandler.hpp"
#include "ModelDescriptionHandler.hpp"
#include "ModelDescription.hpp"
#include "SAX/InputSource.hpp"
#include "SAX/XMLReader.hpp"
#include "exceptions.h"

#include <vector>
#include <string>
#include <stdexcept>
#include <iostream>

CIMModel::CIMModel() : DependencyCheck(true)
{
}

CIMModel::~CIMModel()
{
	// Clean up the mess
	for(BaseClass* Object : Objects)
		delete Object;
}

bool CIMModel::addCIMFile(CIMFile file)
{
	if(!file.good())
	{
		return false;
	}

	Files.push_back(file);

	return true;
}

bool CIMModel::addCIMFile(std::string path)
{
	CIMFile file(path);

	if(!file.good())
	{
		return false;
	}

	Files.push_back(file);

	return true;
}

void CIMModel::parseFiles()
{
	// TODO: What happens when run twice?!
	CIMContentHandler ContentHandler;
	ContentHandler.setObjectsContainer(&Objects);
	ContentHandler.setRDFMap(&RDFMap);

	Arabica::SAX::XMLReader<std::string> Reader;
	Reader.setContentHandler(ContentHandler);

	for(CIMFile& file : Files) //TODO: Suche evtl. mit eigener dependency-liste beschleunigen
	{
		if(DependencyCheck == true)
		{
			if(!(file.getModelDescription()->dependencyID).empty()) //TODO: Ueberpruefung besser Implementieren
			{
				bool depFound;
				for(std::string& fileDepID : (file.getModelDescription()->dependencyID))
				{
					depFound = 0;
					for(CIMFile& fileDep : Files)
					{
						if(fileDep.getModelDescription()->rdfID == fileDepID)
						{
							depFound = 1;
							break;
						}
					}
					if(!depFound)
					{
						throw missingFile_exception(this, fileDepID, "CIMModel: Error: Dependency is missing");
					}
				}
			}
		}


		Arabica::SAX::InputSource<std::string> source(file.getpath());
		Reader.parse(source);
	}

	ContentHandler.resolveRDFRelations();
}

void CIMModel::setDependencyCheckOn()
{
	DependencyCheck = true;
}

void CIMModel::setDependencyCheckOff()
{
	DependencyCheck = false;
}

bool CIMModel::getDependencyCheck()
{
	return DependencyCheck;
}
