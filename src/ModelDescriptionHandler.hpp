#ifndef MODELDESCRIPTIONHANDLER_HPP
#define MODELDESCRIPTIONHANDLER_HPP

#include <string>
#include <stack>
#include <xercesc/sax2/DefaultHandler.hpp>
#include <xercesc/sax2/Attributes.hpp>
#include <xercesc/util/XMLString.hpp>


#include "ModelDescription.hpp"

class ModelDescriptionHandler : public xercesc::DefaultHandler
{
public:
	ModelDescriptionHandler();

	void setModelDescription(ModelDescription* mDesc);
protected:
	void startDocument() override;
	void endDocument() override;
	void startPrefixMapping(const std::string &prefix, const std::string &uri);
	// void endPrefixMapping(const std::string &prefix) override;
	void startElement(const std::string &namespaceURI, const std::string &localName, const std::string &qName, const xercesc::Attributes &atts);
	void endElement(const std::string &namespaceURI, const std::string &localName, const std::string &qName);
	void characters(const std::string &ch) ;
	void ignorableWhitespace(const std::string &ch) ;
	void processingInstruction(const std::string &target, const std::string &data) ;
	void skippedEntity(const std::string &name) ;

	static std::string get_rdf_id(const xercesc::Attributes &properties);
	static std::string get_rdf_resource(const xercesc::Attributes &properties);
	void error(const xercesc::SAXParseException& ex);
	void fatalError(const xercesc::SAXParseException& ex);


private: 
	ModelDescription* modelDescription;
	
	std::stack<std::string> tagStack;

};

#endif // MODELDESCRIPTIONHANDLER_HPP
