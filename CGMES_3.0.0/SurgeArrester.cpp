/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SurgeArrester.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

SurgeArrester::SurgeArrester() {};
SurgeArrester::~SurgeArrester() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
SurgeArrester::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SurgeArrester::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = AuxiliaryEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






const char SurgeArrester::debugName[] = "SurgeArrester";
const char* SurgeArrester::debugString() const
{
	return SurgeArrester::debugName;
}

void SurgeArrester::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SurgeArrester"), &SurgeArrester_factory));
}

void SurgeArrester::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SurgeArrester::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SurgeArrester::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addPrimitiveGetFnsToMap(get_map);
}

void SurgeArrester::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AuxiliaryEquipment::addClassGetFnsToMap(get_map);
}

void SurgeArrester::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SurgeArrester::declare()
{
	return BaseClassDefiner(SurgeArrester::addConstructToMap, SurgeArrester::addPrimitiveAssignFnsToMap, SurgeArrester::addClassAssignFnsToMap, SurgeArrester::debugName);
}

namespace CIMPP
{
	BaseClass* SurgeArrester_factory()
	{
		return new SurgeArrester;
	}
}
