/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGeneratingUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

WindGeneratingUnit::WindGeneratingUnit() {}
WindGeneratingUnit::~WindGeneratingUnit() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindGeneratingUnit.windGenUnitType", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
WindGeneratingUnit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindGeneratingUnit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = GeneratingUnit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_WindGeneratingUnit_windGenUnitType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGeneratingUnit* element = dynamic_cast<WindGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->windGenUnitType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_WindGeneratingUnit_windGenUnitType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGeneratingUnit* element = dynamic_cast<const WindGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->windGenUnitType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindGeneratingUnit::debugName[] = "WindGeneratingUnit";
const char* WindGeneratingUnit::debugString() const
{
	return WindGeneratingUnit::debugName;
}

void WindGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindGeneratingUnit", &WindGeneratingUnit_factory);
}

void WindGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:WindGeneratingUnit.windGenUnitType", &assign_WindGeneratingUnit_windGenUnitType);
}

void WindGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void WindGeneratingUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addPrimitiveGetFnsToMap(get_map);
}

void WindGeneratingUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	GeneratingUnit::addClassGetFnsToMap(get_map);
}

void WindGeneratingUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:WindGeneratingUnit.windGenUnitType", &get_WindGeneratingUnit_windGenUnitType);
}

const BaseClassDefiner WindGeneratingUnit::declare()
{
	return BaseClassDefiner(WindGeneratingUnit::addConstructToMap, WindGeneratingUnit::addPrimitiveAssignFnsToMap, WindGeneratingUnit::addClassAssignFnsToMap, WindGeneratingUnit::debugName);
}

namespace CIMPP
{
	BaseClass* WindGeneratingUnit_factory()
	{
		return new WindGeneratingUnit;
	}
}
