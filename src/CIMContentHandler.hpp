#ifndef CIMCONTENTHANDLER_HPP
#define CIMCONTENTHANDLER_HPP

#include <SAX/ContentHandler.hpp>
#include <SAX/Locator.hpp>

#include <deque>
#include <stack>
#include <unordered_map>
#include <vector>

#include "BaseClass.h"
#include "Task.hpp"
#include "Folders.hpp"

class CIMContentHandler : public Arabica::SAX::ContentHandler<std::string>
{
public:
	CIMContentHandler();
	~CIMContentHandler();

	std::vector<BaseClass*> *Objects;
	std::unordered_map<std::string, BaseClass*> *RDFMap;
	void setObjectsContainer(std::vector<BaseClass*> *Objects);
	void setRDFMap(std::unordered_map<std::string, BaseClass*> *RDFMap);

	void checkStacksEmpty(); //Check if tagStack or ObjectStack is empty, throw CriticalError if true

	bool resolveRDFRelations(); // AKA work through task queue

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
	static std::string get_rdf_enum(const AttributesT &properties);
	static bool is_only_whitespace(const std::string &characters);

private:
	std::stack<BaseClass*> objectStack;
	std::stack<std::string> tagStack;
	std::deque<Task> taskQueue;
	std::string value;
	BaseClass* retypeObject(BaseClass* oldObject_ptr, const std::string& className, const std::string& rdfid);
};



#endif // CIMCONTENTHANDLER_HPP
