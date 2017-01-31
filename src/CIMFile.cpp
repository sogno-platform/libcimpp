#include "CIMFile.hpp"

CIMFile::CIMFile(std::string path) : path(path)
{
}

std::string CIMFile::getpath()
{
	return path;
}
