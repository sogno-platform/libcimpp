/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Junction.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

Junction::Junction() {};
Junction::~Junction() {};



const char Junction::debugName[] = "Junction";
const char* Junction::debugString() const
{
	return Junction::debugName;
}

void Junction::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Junction"), &Junction_factory));
}

void Junction::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Junction::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner Junction::declare()
{
	return BaseClassDefiner(Junction::addConstructToMap, Junction::addPrimitiveAssignFnsToMap, Junction::addClassAssignFnsToMap, Junction::debugName);
}

namespace CIMPP
{
	BaseClass* Junction_factory()
	{
		return new Junction;
	}
}
