/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcitationLimiterDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"

using namespace CIMPP;

OverexcitationLimiterDynamics::OverexcitationLimiterDynamics() : ExcitationSystemDynamics(nullptr) {}
OverexcitationLimiterDynamics::~OverexcitationLimiterDynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:OverexcitationLimiterDynamics.ExcitationSystemDynamics", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
OverexcitationLimiterDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
OverexcitationLimiterDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcitationSystemDynamics_OverexcitationLimiterDynamics(BaseClass*, BaseClass*);
bool assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OverexcitationLimiterDynamics* element = dynamic_cast<OverexcitationLimiterDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_OverexcitationLimiterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_OverexcitationLimiterDynamics_ExcitationSystemDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const OverexcitationLimiterDynamics* element = dynamic_cast<const OverexcitationLimiterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ExcitationSystemDynamics != 0)
		{
			BaseClass_list.push_back(element->ExcitationSystemDynamics);
			return true;
		}
	}
	return false;
}

const char OverexcitationLimiterDynamics::debugName[] = "OverexcitationLimiterDynamics";
const char* OverexcitationLimiterDynamics::debugString() const
{
	return OverexcitationLimiterDynamics::debugName;
}

void OverexcitationLimiterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:OverexcitationLimiterDynamics", &OverexcitationLimiterDynamics_factory);
}

void OverexcitationLimiterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void OverexcitationLimiterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:OverexcitationLimiterDynamics.ExcitationSystemDynamics", &assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics);
}

void OverexcitationLimiterDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void OverexcitationLimiterDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:OverexcitationLimiterDynamics.ExcitationSystemDynamics", &get_OverexcitationLimiterDynamics_ExcitationSystemDynamics);
}

void OverexcitationLimiterDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner OverexcitationLimiterDynamics::declare()
{
	return BaseClassDefiner(OverexcitationLimiterDynamics::addConstructToMap, OverexcitationLimiterDynamics::addPrimitiveAssignFnsToMap, OverexcitationLimiterDynamics::addClassAssignFnsToMap, OverexcitationLimiterDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* OverexcitationLimiterDynamics_factory()
	{
		return new OverexcitationLimiterDynamics;
	}
}
