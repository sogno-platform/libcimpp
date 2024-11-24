/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Limit.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

Limit::Limit() {};
Limit::~Limit() {};



const char Limit::debugName[] = "Limit";
const char* Limit::debugString() const
{
	return Limit::debugName;
}

void Limit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Limit"), &Limit_factory));
}

void Limit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Limit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner Limit::declare()
{
	return BaseClassDefiner(Limit::addConstructToMap, Limit::addPrimitiveAssignFnsToMap, Limit::addClassAssignFnsToMap, Limit::debugName);
}

namespace CIMPP
{
	BaseClass* Limit_factory()
	{
		return new Limit;
	}
}
