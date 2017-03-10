#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <string>
#include <stdexcept>

class CIMModel;

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

#endif // EXCEPTIONS_H
