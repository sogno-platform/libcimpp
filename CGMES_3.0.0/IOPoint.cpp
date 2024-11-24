/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "IOPoint.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

IOPoint::IOPoint() {};
IOPoint::~IOPoint() {};



const char IOPoint::debugName[] = "IOPoint";
const char* IOPoint::debugString() const
{
	return IOPoint::debugName;
}

void IOPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:IOPoint"), &IOPoint_factory));
}

void IOPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void IOPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner IOPoint::declare()
{
	return BaseClassDefiner(IOPoint::addConstructToMap, IOPoint::addPrimitiveAssignFnsToMap, IOPoint::addClassAssignFnsToMap, IOPoint::debugName);
}

namespace CIMPP
{
	BaseClass* IOPoint_factory()
	{
		return new IOPoint;
	}
}
