#ifndef CIMEXCEPTIONS_HPP
#define CIMEXCEPTIONS_HPP

#include <string>
#include <stdexcept>

class CIMException;
class CIMModel;
class ModelDescriptionHandler;
class CIMContentHandler;

class CIMException : public std::exception
{	
public:
	CIMException();
protected:
	std::string message;
	virtual const char* what() const noexcept override;
};


class CriticalError : public std::runtime_error
{
public:
	CriticalError(const std::string& what);
};


class MissingDependencyFile : CIMException
{
public:
	MissingDependencyFile(const CIMModel* model, const std::string id);

	const CIMModel* Model;
	const std::string rdfID;
};



class MissingModelDescription : CIMException
{
public:
	MissingModelDescription(const ModelDescriptionHandler* desc);
	const ModelDescriptionHandler* DescriptionHandler;
};



class NoObjectsContainer : CIMException
{
public:
	NoObjectsContainer(const CIMContentHandler* handler);
	const CIMContentHandler* ContentHandler;
};



class NoRdfID : CIMException
{
public:
	NoRdfID();
};



class NoRdfMap : CIMException
{
public:
	NoRdfMap(const CIMContentHandler* handler);
	const CIMContentHandler* ContentHandler;
};



class ReadingUninitializedField : CIMException
{
public:
	ReadingUninitializedField();
};

#endif // CIMEXCEPTIONS_HPP
