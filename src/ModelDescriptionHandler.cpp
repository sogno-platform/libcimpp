#include "ModelDescriptionHandler.hpp"

#include <iostream>
#include <string>

#include "CIMExceptions.hpp"
#include "IEC61970/IEC61970CIMVersion.h"

using CIMPP::IEC61970CIMVersion;

ModelDescriptionHandler::ModelDescriptionHandler() : modelDescription(nullptr)
{
}

void ModelDescriptionHandler::setDocumentLocator(const LocatorT &locator)
{}

void ModelDescriptionHandler::startDocument()
{
	if(modelDescription == nullptr)
		throw MissingModelDescription(this);
}

void ModelDescriptionHandler::endDocument()
{}

void ModelDescriptionHandler::startPrefixMapping(const std::string &prefix, const std::string &uri)
{
	if(prefix == "cim")
	{
		std::string version = IEC61970CIMVersion::version;
		std::size_t pos = version.find("CIM");
		std::string versionParser = version.substr(pos+3, 2);

		pos = uri.find("cim");
		std::string versionFile = uri.substr(pos+3,2);

		if(versionParser != versionFile)
		{
			std::cout << "CIM version(" << versionFile << ") in File does not match CIM version(" << versionParser << ") in Parser" << std::endl;
		}
	}
}

void ModelDescriptionHandler::endPrefixMapping(const std::string &prefix)
{}

void ModelDescriptionHandler::startElement(const std::string &namespaceURI, const std::string &localName, const std::string &qName, const AttributesT &atts)
{
	//Only process tags in md namespace
	if(qName.find("md:") == std::string::npos)
	{
		return;
	}

	tagStack.push(qName);

	if(qName.find("DependentOn") != std::string::npos)
	{
		std::string rdfID = get_rdf_resource(atts);

		modelDescription->dependencyID.push_back(rdfID);
	}
	else if(qName.find("FullModel") != std::string::npos)
	{
		std::string rdfID = get_rdf_id(atts);

		modelDescription->rdfID = rdfID;
	}
}

void ModelDescriptionHandler::endElement(const std::string &namespaceURI, const std::string &localName, const std::string &qName)
{
	//Only process tags in md namespace
	if(qName.find("md:") == std::string::npos)
	{
		return;
	}

	tagStack.pop();
}

void ModelDescriptionHandler::characters(const std::string &ch) //TODO:getter
{
	if(!tagStack.empty() && tagStack.top().find("md:") != std::string::npos)
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
			return attributes.getValue(i).substr(0);
	}
	return std::string();
}

std::string ModelDescriptionHandler::get_rdf_resource(const AttributesT &attributes) //TODO: Resource in get_rdf_id ?
{
	for(int i = 0; i < attributes.getLength(); i++)
	{
		if(attributes.getQName(i) == "rdf:resource")
		{
			return attributes.getValue(i).substr(0);
		}
	}
	return std::string();
}

void ModelDescriptionHandler::setModelDescription(ModelDescription* mDesc)
{
	modelDescription = mDesc;
}
