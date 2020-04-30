#include "CIMExceptions.hpp"


CIMException::CIMException()
{
}

CriticalError::CriticalError(const std::string& what) : runtime_error(what)
{
}

MissingDependencyFile::MissingDependencyFile(const CIMModel* model, const std::string id)
	: Model(model),
	  rdfID(id)
{
	message = "CIMModel: Dependency is missing";
}

const char* CIMException::what() const noexcept
{
	return message.c_str();
}



MissingModelDescription::MissingModelDescription(const ModelDescriptionHandler* desc)
	: DescriptionHandler(desc)
{
	message = "ModelDescriptionHandler: modelDescription not set";
}


NoObjectsContainer::NoObjectsContainer(const CIMContentHandler* handler)
	: ContentHandler(handler)
{
	message = "CIMContentHandler: Object container not set";
}


NoRdfID::NoRdfID()
{
	message = "CIMContentHandler: Attributes contain no rdf:ID";
}


NoRdfMap::NoRdfMap(const CIMContentHandler* handler)
	: ContentHandler(handler)
{
	message = "CIMContentHandler: RDFMap not set";
}


ReadingUninitializedField::ReadingUninitializedField()
{
	message = "Error: Uninitialized Field";
}

