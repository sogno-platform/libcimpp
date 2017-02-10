#ifndef MODELDESCRIPTIONHANDLER_HPP
#define MODELDESCRIPTIONHANDLER_HPP

#include <string>
#include <stack>

#include <SAX/ContentHandler.hpp>
#include <SAX/Locator.hpp>

#include "ModelDescription.hpp"

class ModelDescriptionHandler : public Arabica::SAX::ContentHandler<std::string>
{
public:
	ModelDescriptionHandler();

	void setModelDescription(ModelDescription* mDesc);
protected:
	void setDocumentLocator(const LocatorT &locator) override;
	void startDocument() override;
	void endDocument() override;
	void startPrefixMapping(const std::string &prefix, const std::string &uri) override;
	void endPrefixMapping(const std::string &prefix) override;
	void startElement(const std::string &namespaceURI, const std::string &localName, const std::string &qName, const AttributesT &atts) override;
	void endElement(const std::string &namespaceURI, const std::string &localName, const std::string &qName) override;
	void characters(const std::string &ch) override;
	void ignorableWhitespace(const std::string &ch) override;
	void processingInstruction(const std::string &target, const std::string &data) override;
	void skippedEntity(const std::string &name) override;

	static std::string get_rdf_id(const AttributesT &properties);
	static std::string get_rdf_resource(const AttributesT &properties);

private: 
	ModelDescription* modelDescription;
	
	std::stack<std::string> tagStack;

};

#endif // MODELDESCRIPTIONHANDLER_HPP
