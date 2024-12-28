/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "FaultIndicator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

FaultIndicator::FaultIndicator() {};
FaultIndicator::~FaultIndicator() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
FaultIndicator::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
FaultIndicator::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = AuxiliaryEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






const char FaultIndicator::debugName[] = "FaultIndicator";
const char* FaultIndicator::debugString() const
{
	return FaultIndicator::debugName;
}

void FaultIndicator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:FaultIndicator"), &FaultIndicator_factory));
}

void FaultIndicator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void FaultIndicator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void FaultIndicator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addPrimitiveGetFnsToMap(get_map);
}

void FaultIndicator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AuxiliaryEquipment::addClassGetFnsToMap(get_map);
}

void FaultIndicator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner FaultIndicator::declare()
{
	return BaseClassDefiner(FaultIndicator::addConstructToMap, FaultIndicator::addPrimitiveAssignFnsToMap, FaultIndicator::addClassAssignFnsToMap, FaultIndicator::debugName);
}

namespace CIMPP
{
	BaseClass* FaultIndicator_factory()
	{
		return new FaultIndicator;
	}
}
