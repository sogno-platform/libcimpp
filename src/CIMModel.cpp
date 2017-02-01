#include "CIMModel.hpp"
#include "CIMContentHandler.hpp"
#include "SAX/InputSource.hpp"
#include "SAX/XMLReader.hpp"

CIMModel::CIMModel()
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
	Files.push_back(file);
	// TODO: Check file
	return true;
}

bool CIMModel::addCIMFile(std::string path)
{
	Files.push_back(CIMFile(path));
	// TODO: Check file
	return false;
}

void CIMModel::parseFiles()
{
	// TODO: What happens when run twice?!
	CIMContentHandler ContentHandler;
	ContentHandler.setObjectsContainer(&Objects);
	ContentHandler.setRDFMap(&RDFMap);

	Arabica::SAX::XMLReader<std::string> Reader;
	Reader.setContentHandler(ContentHandler);

	for(CIMFile& file : Files)
	{
		Arabica::SAX::InputSource<std::string> source(file.getpath());
		Reader.parse(source);
	}

	ContentHandler.resolveRDFRelations();
}
