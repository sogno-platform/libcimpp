#ifndef CIMPARSER_H
#define CIMPARSER_H

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

#endif // CIMPARSER_H
