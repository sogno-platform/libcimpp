/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCBusbar.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

DCBusbar::DCBusbar() {};
DCBusbar::~DCBusbar() {};



const char DCBusbar::debugName[] = "DCBusbar";
const char* DCBusbar::debugString() const
{
	return DCBusbar::debugName;
}

void DCBusbar::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCBusbar"), &DCBusbar_factory));
}

void DCBusbar::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCBusbar::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner DCBusbar::declare()
{
	return BaseClassDefiner(DCBusbar::addConstructToMap, DCBusbar::addPrimitiveAssignFnsToMap, DCBusbar::addClassAssignFnsToMap, DCBusbar::debugName);
}

namespace CIMPP
{
	BaseClass* DCBusbar_factory()
	{
		return new DCBusbar;
	}
}
