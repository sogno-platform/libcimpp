/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcitationLimiterDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"
#include "RemoteInputSignal.hpp"

using namespace CIMPP;

UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics() : ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr) {}
UnderexcitationLimiterDynamics::~UnderexcitationLimiterDynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:UnderexcitationLimiterDynamics.ExcitationSystemDynamics", { CGMESProfile::DY, } },
	{ "cim:UnderexcitationLimiterDynamics.RemoteInputSignal", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
UnderexcitationLimiterDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
UnderexcitationLimiterDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcitationSystemDynamics_UnderexcitationLimiterDynamics(BaseClass*, BaseClass*);
bool assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	UnderexcitationLimiterDynamics* element = dynamic_cast<UnderexcitationLimiterDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_UnderexcitationLimiterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RemoteInputSignal_UnderexcitationLimiterDynamics(BaseClass*, BaseClass*);
bool assign_UnderexcitationLimiterDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	UnderexcitationLimiterDynamics* element = dynamic_cast<UnderexcitationLimiterDynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_UnderexcitationLimiterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_UnderexcitationLimiterDynamics_ExcitationSystemDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const UnderexcitationLimiterDynamics* element = dynamic_cast<const UnderexcitationLimiterDynamics*>(BaseClass_ptr1);
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


const char UnderexcitationLimiterDynamics::debugName[] = "UnderexcitationLimiterDynamics";
const char* UnderexcitationLimiterDynamics::debugString() const
{
	return UnderexcitationLimiterDynamics::debugName;
}

void UnderexcitationLimiterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:UnderexcitationLimiterDynamics", &UnderexcitationLimiterDynamics_factory);
}

void UnderexcitationLimiterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void UnderexcitationLimiterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:UnderexcitationLimiterDynamics.ExcitationSystemDynamics", &assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics);
	assign_map.emplace("cim:UnderexcitationLimiterDynamics.RemoteInputSignal", &assign_UnderexcitationLimiterDynamics_RemoteInputSignal);
}

void UnderexcitationLimiterDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void UnderexcitationLimiterDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:UnderexcitationLimiterDynamics.ExcitationSystemDynamics", &get_UnderexcitationLimiterDynamics_ExcitationSystemDynamics);
}

void UnderexcitationLimiterDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner UnderexcitationLimiterDynamics::declare()
{
	return BaseClassDefiner(UnderexcitationLimiterDynamics::addConstructToMap, UnderexcitationLimiterDynamics::addPrimitiveAssignFnsToMap, UnderexcitationLimiterDynamics::addClassAssignFnsToMap, UnderexcitationLimiterDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* UnderexcitationLimiterDynamics_factory()
	{
		return new UnderexcitationLimiterDynamics;
	}
}
