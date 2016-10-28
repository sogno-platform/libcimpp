#ifndef CIMPARSER_HPP
#define CIMPARSER_HPP

#include <vector>

#include "BaseClass.h"

class CIMContentHandler;

class CIMParser
{
public:
	CIMParser();
	~CIMParser();

	void parse_file(std::string file);

	std::vector<BaseClass*> Objects;
private:
	CIMContentHandler* ContentHandler;
};

#endif // CIMPARSER_HPP
