#include "ModelDescriptionHandler.hpp"
#include "ModelDescription.hpp"

#include <stdexcept>
#include <iostream>
#include <string>


ModelDescriptionHandler::ModelDescriptionHandler() : modelDescription(nullptr)
{
}

void ModelDescriptionHandler::setDocumentLocator(const LocatorT &locator)
{}

void ModelDescriptionHandler::startDocument()
{
	if(modelDescription == nullptr)
		throw std::runtime_error("ModelDescriptionHandler: modelDescription not set");
}

void ModelDescriptionHandler::endDocument()
{}

void ModelDescriptionHandler::startPrefixMapping(const std::string &prefix, const std::string &uri)
{}

void ModelDescriptionHandler::endPrefixMapping(const std::string &prefix)
{}

void ModelDescriptionHandler::startElement(const std::string &namespaceURI, const std::string &localName, const std::string &qName, const AttributesT &atts)
{
	//Only process tags in md namespace
	if(qName.find("md:") == std::string::npos)
	{
		return;
	}

	if(qName.find("DependentOn") != std::string::npos) //TODO:Exception
	{
		std::string rdfID = get_rdf_resource(atts);
		if(rdfID != "urn:uuid:2399cbd1-9a39-11e0-aa80-0800200c9a66")
		{
			modelDescription->dependencyID.push_back(rdfID);
		}
	}
	else if(qName.find("FullModel") != std::string::npos)
	{
		std::string rdfID = get_rdf_id(atts);

		modelDescription->rdfID = rdfID;
	}

	tagStack.push(qName);

}

void ModelDescriptionHandler::endElement(const std::string &namespaceURI, const std::string &localName, const std::string &qName)
{
	tagStack.pop();
}

void ModelDescriptionHandler::characters(const std::string &ch) //TODO:getter
{
	if(tagStack.top().find("md:") != std::string::npos)
	{
		std::string name = tagStack.top();
		if(name.find("created") != std::string::npos)
		{
			modelDescription->created = ch;
		}
		else if(name.find("scenarioTime") != std::string::npos)
		{
			modelDescription->scenarioTime = ch;
		}
		else if(name.find("version") != std::string::npos)
		{
			modelDescription->version = ch;
		}
		else if(name.find("description") != std::string::npos)
		{
			modelDescription->description = ch;
		}
		else if(name.find("modelingAuthoritySet") != std::string::npos)
		{
			modelDescription->modelingAuthoritySet = ch;
		}
		else if(name.find("profile") != std::string::npos)
		{
			modelDescription->profile = ch;
		}

	}

}

void ModelDescriptionHandler::ignorableWhitespace(const std::string &ch)
{}

void ModelDescriptionHandler::processingInstruction(const std::string &target, const std::string &data)
{}

void ModelDescriptionHandler::skippedEntity(const std::string &name)
{}

std::string ModelDescriptionHandler::get_rdf_id(const AttributesT &attributes)
{
 	for(int i = 0; i < attributes.getLength(); i++)
 	{
 		if(attributes.getQName(i) == "rdf:ID")
 			return attributes.getValue(i);
 		if(attributes.getQName(i) == "rdf:about")
 			return attributes.getValue(i).substr(1);
 	}
 	return std::string();
}

std::string ModelDescriptionHandler::get_rdf_resource(const AttributesT &attributes) //TODO: Resource in get_rdf_id ?
{
	for(int i = 0; i < attributes.getLength(); i++)
 	{
 		if(attributes.getQName(i) == "rdf:resource")
 		{
 			if(attributes.getValue(i).at(0) == '#')
 			{
 				return attributes.getValue(i).substr(1);
 			}
 		}
 	}
 	return std::string();
}

void ModelDescriptionHandler::setModelDescription(ModelDescription* mDesc)
{
	modelDescription = mDesc;
}
