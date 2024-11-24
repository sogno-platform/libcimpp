/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CurrentTransformer.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

CurrentTransformer::CurrentTransformer() {};
CurrentTransformer::~CurrentTransformer() {};



const char CurrentTransformer::debugName[] = "CurrentTransformer";
const char* CurrentTransformer::debugString() const
{
	return CurrentTransformer::debugName;
}

void CurrentTransformer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:CurrentTransformer"), &CurrentTransformer_factory));
}

void CurrentTransformer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CurrentTransformer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner CurrentTransformer::declare()
{
	return BaseClassDefiner(CurrentTransformer::addConstructToMap, CurrentTransformer::addPrimitiveAssignFnsToMap, CurrentTransformer::addClassAssignFnsToMap, CurrentTransformer::debugName);
}

namespace CIMPP
{
	BaseClass* CurrentTransformer_factory()
	{
		return new CurrentTransformer;
	}
}
