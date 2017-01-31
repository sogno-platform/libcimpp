#include "CIMParser.hpp"
#include "CIMContentHandler.hpp"
#include "SAX/InputSource.hpp"
#include "SAX/XMLReader.hpp"

CIMParser::CIMParser() : ContentHandler(new CIMContentHandler)
{
	ContentHandler->setObjectsContainer(&Objects);
	ContentHandler->setRDFMap(&RDFMap);
}

CIMParser::~CIMParser()
{
	delete ContentHandler;
}

void CIMParser::parse_file(std::string file)
{
	Arabica::SAX::XMLReader<std::string> Reader;
	Reader.setContentHandler(*ContentHandler);
	Arabica::SAX::InputSource<std::string> source(file);
	Reader.parse(source);
}
