#include "CIMFile.hpp"
#include "ModelDescription.hpp"

#include "ModelDescriptionHandler.hpp"
#include "ModelDescription.hpp"
#include "SAX/InputSource.hpp"
#include "SAX/XMLReader.hpp"

#include <iostream>
#include <fstream>

CIMFile::CIMFile(std::string path) : path(path), modelDescription(nullptr)
{
}

std::string CIMFile::getpath()
{
	return path;
}

ModelDescription* CIMFile::getModelDescription()
{
	if(modelDescription == nullptr)
	{
		if(!this->good())
		{
			//TODO: file not good, say something
			return nullptr;
		}
		modelDescription = new ModelDescription();
		ModelDescriptionHandler DescriptionHandler;

		DescriptionHandler.setModelDescription(modelDescription);

		Arabica::SAX::XMLReader<std::string> Reader;
		Reader.setContentHandler(DescriptionHandler);

		Arabica::SAX::InputSource<std::string> source(path);
	}

	return modelDescription;
}

bool CIMFile::good()
{
	if(path.find(".xml") == std::string::npos)
	{
		return false;
	}

	std::ifstream infile(path);
	return infile.good();
}
