#include "CIMFile.hpp"
#include "ModelDescription.hpp"

CIMFile::CIMFile(std::string path) : path(path)
{
}

std::string CIMFile::getpath()
{
	return path;
}

ModelDescription* CIMFile::getModelDescription()
{
	return &modelDescription;
}
