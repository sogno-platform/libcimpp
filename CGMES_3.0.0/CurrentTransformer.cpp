/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CurrentTransformer.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

CurrentTransformer::CurrentTransformer() {};
CurrentTransformer::~CurrentTransformer() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
CurrentTransformer::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
CurrentTransformer::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Sensor::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






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

void CurrentTransformer::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Sensor::addPrimitiveGetFnsToMap(get_map);
}

void CurrentTransformer::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Sensor::addClassGetFnsToMap(get_map);
}

void CurrentTransformer::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Sensor::addEnumGetFnsToMap(get_map);
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
