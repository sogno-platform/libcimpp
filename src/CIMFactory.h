#ifndef CIMFACTORY_H
#define CIMFACTORY_H

#include <string>
#include <unordered_map>
#include "BaseClass.h"

class CIMFactory
{
public:
	CIMFactory();
	static BaseClass* CreateNew(const std::string& name);
	static bool IsCIMClass(const std::string& name);

private:
	static std::unordered_map<std::string, BaseClass* (*)()> factory_map;
};

#endif // CIMFACTORY_H
