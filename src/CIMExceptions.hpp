#ifndef CIMEXCEPTIONS_HPP
#define CIMEXCEPTIONS_HPP

#include <string>
#include <stdexcept>

class CIMModel;
class ModelDescriptionHandler;
class CIMContentHandler;

class CriticalError : public std::runtime_error
{
public:
	CriticalError(const std::string& what);
};



class MissingDependencyFile : public std::exception
{
public:
	MissingDependencyFile(const CIMModel* model, const std::string id);
	virtual const char* what() const noexcept override;

	const CIMModel* Model;
	const std::string rdfID;
};



class MissingModelDescription : public std::exception
{
public:
	MissingModelDescription(const ModelDescriptionHandler* desc);
	virtual const char* what() const noexcept override;

	const ModelDescriptionHandler* DescriptionHandler;
};



class NoObjectsContainer : public std::exception
{
public:
	NoObjectsContainer(const CIMContentHandler* handler);
	virtual const char* what() const noexcept override;

	const CIMContentHandler* ContentHandler;
};



class NoRdfID : public std::exception
{
public:
	NoRdfID();
	virtual const char* what() const noexcept override;
};



class NoRdfMap : public std::exception
{
public:
	NoRdfMap(const CIMContentHandler* handler);
	virtual const char* what() const noexcept override;

	const CIMContentHandler* ContentHandler;
};



class ReadingUninitializedField : public std::exception
{
public:
	ReadingUninitializedField();
	virtual const char* what() const noexcept override;
};

#endif // CIMEXCEPTIONS_HPP
