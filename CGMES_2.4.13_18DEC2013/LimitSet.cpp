/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LimitSet.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

LimitSet::LimitSet() {}
LimitSet::~LimitSet() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
LimitSet::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
LimitSet::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char LimitSet::debugName[] = "LimitSet";
const char* LimitSet::debugString() const
{
	return LimitSet::debugName;
}

void LimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:LimitSet", &LimitSet_factory);
}

void LimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void LimitSet::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void LimitSet::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void LimitSet::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner LimitSet::declare()
{
	return BaseClassDefiner(LimitSet::addConstructToMap, LimitSet::addPrimitiveAssignFnsToMap, LimitSet::addClassAssignFnsToMap, LimitSet::debugName);
}

namespace CIMPP
{
	BaseClass* LimitSet_factory()
	{
		return new LimitSet;
	}
}
