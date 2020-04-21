#include <sstream>
#include <utility>
#include <unordered_map>

#include "Folders.hpp"
#include "cimpp/CIMClassList.hpp"
#include "assignments.hpp"
#include <iostream>
#include "BaseClass.hpp"

using namespace CGMES;

static std::unordered_map<std::string, assign_function> dynamic_switch_factory();
static std::unordered_map<std::string, assign_function> dynamic_switch = dynamic_switch_factory();

bool assign(BaseClass* CIMObj, const std::string& CIMAttrName, const std::string& Value)
{
	std::unordered_map<std::string, assign_function>::iterator prim_it = dynamic_switch.find(CIMAttrName);
	if(prim_it != dynamic_switch.end()) {
		std::stringstream str;
		str << Value;
		return (*prim_it->second)(str, CIMObj);
	}

	std::cerr << "Couldn't assign attribute with value: " << Value << " to " << CIMAttrName << " in object of type " << CIMObj->debugString() << std::endl;
	return false;
}

std::unordered_map<std::string, assign_function> dynamic_switch_factory()
{
	std::unordered_map<std::string, assign_function> assign_map;
	for (const BaseClassDefiner& CIMClass : CIMClassList)
	{
		CIMClass.addPrimitiveAssignFnsToMap(assign_map);
	}

	return assign_map;
}

