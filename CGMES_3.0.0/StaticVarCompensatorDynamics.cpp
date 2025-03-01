/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StaticVarCompensatorDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "StaticVarCompensator.hpp"

using namespace CIMPP;

StaticVarCompensatorDynamics::StaticVarCompensatorDynamics() : StaticVarCompensator(nullptr) {}
StaticVarCompensatorDynamics::~StaticVarCompensatorDynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:StaticVarCompensatorDynamics.StaticVarCompensator", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
StaticVarCompensatorDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
StaticVarCompensatorDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_StaticVarCompensator_StaticVarCompensatorDynamics(BaseClass*, BaseClass*);
bool assign_StaticVarCompensatorDynamics_StaticVarCompensator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	StaticVarCompensatorDynamics* element = dynamic_cast<StaticVarCompensatorDynamics*>(BaseClass_ptr1);
	StaticVarCompensator* element2 = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->StaticVarCompensator != element2)
		{
			element->StaticVarCompensator = element2;
			return assign_StaticVarCompensator_StaticVarCompensatorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_StaticVarCompensatorDynamics_StaticVarCompensator(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const StaticVarCompensatorDynamics* element = dynamic_cast<const StaticVarCompensatorDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->StaticVarCompensator != 0)
		{
			BaseClass_list.push_back(element->StaticVarCompensator);
			return true;
		}
	}
	return false;
}

const char StaticVarCompensatorDynamics::debugName[] = "StaticVarCompensatorDynamics";
const char* StaticVarCompensatorDynamics::debugString() const
{
	return StaticVarCompensatorDynamics::debugName;
}

void StaticVarCompensatorDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:StaticVarCompensatorDynamics", &StaticVarCompensatorDynamics_factory);
}

void StaticVarCompensatorDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void StaticVarCompensatorDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:StaticVarCompensatorDynamics.StaticVarCompensator", &assign_StaticVarCompensatorDynamics_StaticVarCompensator);
}

void StaticVarCompensatorDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void StaticVarCompensatorDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:StaticVarCompensatorDynamics.StaticVarCompensator", &get_StaticVarCompensatorDynamics_StaticVarCompensator);
}

void StaticVarCompensatorDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner StaticVarCompensatorDynamics::declare()
{
	return BaseClassDefiner(StaticVarCompensatorDynamics::addConstructToMap, StaticVarCompensatorDynamics::addPrimitiveAssignFnsToMap, StaticVarCompensatorDynamics::addClassAssignFnsToMap, StaticVarCompensatorDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* StaticVarCompensatorDynamics_factory()
	{
		return new StaticVarCompensatorDynamics;
	}
}
