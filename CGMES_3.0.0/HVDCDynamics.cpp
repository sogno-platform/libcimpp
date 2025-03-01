/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "HVDCDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

HVDCDynamics::HVDCDynamics() {}
HVDCDynamics::~HVDCDynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
HVDCDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
HVDCDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char HVDCDynamics::debugName[] = "HVDCDynamics";
const char* HVDCDynamics::debugString() const
{
	return HVDCDynamics::debugName;
}

void HVDCDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:HVDCDynamics", &HVDCDynamics_factory);
}

void HVDCDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void HVDCDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void HVDCDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void HVDCDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
}

void HVDCDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner HVDCDynamics::declare()
{
	return BaseClassDefiner(HVDCDynamics::addConstructToMap, HVDCDynamics::addPrimitiveAssignFnsToMap, HVDCDynamics::addClassAssignFnsToMap, HVDCDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* HVDCDynamics_factory()
	{
		return new HVDCDynamics;
	}
}
