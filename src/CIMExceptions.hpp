#ifndef CIMEXCEPTIONS_HPP
#define CIMEXCEPTIONS_HPP

#include <string>
#include <stdexcept>

class CIMModel;
class ModelDescriptionHandler;
class CIMContentHandler;

class critical_error: public std::runtime_error
{
public:
	critical_error(const std::string& what) : runtime_error(what) {}

private:

};

class missingFile_exception: public std::runtime_error
{
public:
	CIMModel* Model;
	std::string rdfID;

	missingFile_exception(CIMModel* model, std::string id, const std::string& what) : Model(model), rdfID(id), runtime_error(what) {}

};

class NoModelDescriptionHandler : public std::logic_error
{
public:
	ModelDescriptionHandler* DescriptionHandler;

	NoModelDescriptionHandler(ModelDescriptionHandler* desc, const std::string& what) : DescriptionHandler(desc), logic_error(what){}
};

class NoObjectsContainer : public std::logic_error
{
public:
	CIMContentHandler* ContentHandler;

	NoObjectsContainer(CIMContentHandler* handler, const std::string& what) : ContentHandler(handler), logic_error(what){}
};

class NoRdfID : public std::logic_error
{
public:

	NoRdfID(const std::string& what) : logic_error(what){};
};

class NoRdfMap : public std::logic_error
{
public:
	CIMContentHandler* ContentHandler;

	NoRdfMap(CIMContentHandler* handler, const std::string& what) : ContentHandler(handler), logic_error(what){}
};

#endif // CIMEXCEPTIONS_HPP
