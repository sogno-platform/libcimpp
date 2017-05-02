#include "CIMExceptions.hpp"

CriticalError::CriticalError(const std::string& what) : runtime_error(what)
{
}



MissingDependencyFile::MissingDependencyFile(const CIMModel* model, const std::string id)
	: Model(model),
	  rdfID(id)
{
}

const char* MissingDependencyFile::what() const noexcept
{
	return "CIMModel: Dependency is missing";
}



MissingModelDescription::MissingModelDescription(const ModelDescriptionHandler* desc)
	: DescriptionHandler(desc)
{
}

const char* MissingModelDescription::what() const noexcept
{
	return "ModelDescriptionHandler: modelDescription not set";
}



NoObjectsContainer::NoObjectsContainer(const CIMContentHandler* handler)
	: ContentHandler(handler)
{
}

const char* NoObjectsContainer::what() const noexcept
{
	return "CIMContentHandler: Object container not set";
}



NoRdfID::NoRdfID()
{
}

const char* NoRdfID::what() const noexcept
{
	return "CIMContentHandler: Attributes contain no rdf:ID";
}



NoRdfMap::NoRdfMap(const CIMContentHandler* handler)
	: ContentHandler(handler)
{
}

const char* NoRdfMap::what() const noexcept
{
	return "CIMContentHandler: RDFMap not set";
}



ReadingUninitializedField::ReadingUninitializedField()
{
}

const char* ReadingUninitializedField::what() const noexcept
{
	return "Error: Uninitilized Field";
}
