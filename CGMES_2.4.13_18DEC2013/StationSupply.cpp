/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StationSupply.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

StationSupply::StationSupply() {};
StationSupply::~StationSupply() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
StationSupply::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
StationSupply::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EnergyConsumer::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






const char StationSupply::debugName[] = "StationSupply";
const char* StationSupply::debugString() const
{
	return StationSupply::debugName;
}

void StationSupply::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:StationSupply"), &StationSupply_factory));
}

void StationSupply::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void StationSupply::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void StationSupply::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConsumer::addPrimitiveGetFnsToMap(get_map);
}

void StationSupply::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyConsumer::addClassGetFnsToMap(get_map);
}

void StationSupply::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConsumer::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner StationSupply::declare()
{
	return BaseClassDefiner(StationSupply::addConstructToMap, StationSupply::addPrimitiveAssignFnsToMap, StationSupply::addClassAssignFnsToMap, StationSupply::debugName);
}

namespace CIMPP
{
	BaseClass* StationSupply_factory()
	{
		return new StationSupply;
	}
}
