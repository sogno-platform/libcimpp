/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "NuclearGeneratingUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

NuclearGeneratingUnit::NuclearGeneratingUnit() {}
NuclearGeneratingUnit::~NuclearGeneratingUnit() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
NuclearGeneratingUnit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
NuclearGeneratingUnit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = GeneratingUnit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char NuclearGeneratingUnit::debugName[] = "NuclearGeneratingUnit";
const char* NuclearGeneratingUnit::debugString() const
{
	return NuclearGeneratingUnit::debugName;
}

void NuclearGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:NuclearGeneratingUnit", &NuclearGeneratingUnit_factory);
}

void NuclearGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void NuclearGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void NuclearGeneratingUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addPrimitiveGetFnsToMap(get_map);
}

void NuclearGeneratingUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	GeneratingUnit::addClassGetFnsToMap(get_map);
}

void NuclearGeneratingUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner NuclearGeneratingUnit::declare()
{
	return BaseClassDefiner(NuclearGeneratingUnit::addConstructToMap, NuclearGeneratingUnit::addPrimitiveAssignFnsToMap, NuclearGeneratingUnit::addClassAssignFnsToMap, NuclearGeneratingUnit::debugName);
}

namespace CIMPP
{
	BaseClass* NuclearGeneratingUnit_factory()
	{
		return new NuclearGeneratingUnit;
	}
}
