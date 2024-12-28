/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscontinuousExcitationControlDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"
#include "RemoteInputSignal.hpp"

using namespace CIMPP;

DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics() : ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr) {};
DiscontinuousExcitationControlDynamics::~DiscontinuousExcitationControlDynamics() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DiscontinuousExcitationControlDynamics.ExcitationSystemDynamics", { CGMESProfile::DY, } },
	{ "cim:DiscontinuousExcitationControlDynamics.RemoteInputSignal", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
DiscontinuousExcitationControlDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DiscontinuousExcitationControlDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_ExcitationSystemDynamics_DiscontinuousExcitationControlDynamics(BaseClass*, BaseClass*);
bool assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiscontinuousExcitationControlDynamics* element = dynamic_cast<DiscontinuousExcitationControlDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_DiscontinuousExcitationControlDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_RemoteInputSignal_DiscontinuousExcitationControlDynamics(BaseClass*, BaseClass*);
bool assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiscontinuousExcitationControlDynamics* element = dynamic_cast<DiscontinuousExcitationControlDynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_DiscontinuousExcitationControlDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const DiscontinuousExcitationControlDynamics* element = dynamic_cast<const DiscontinuousExcitationControlDynamics*>(BaseClass_ptr1))
	{
		if (element->ExcitationSystemDynamics != 0)
		{
			BaseClass_list.push_back(element->ExcitationSystemDynamics);
			return true;
		}
	}
	return false;
}


const char DiscontinuousExcitationControlDynamics::debugName[] = "DiscontinuousExcitationControlDynamics";
const char* DiscontinuousExcitationControlDynamics::debugString() const
{
	return DiscontinuousExcitationControlDynamics::debugName;
}

void DiscontinuousExcitationControlDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DiscontinuousExcitationControlDynamics"), &DiscontinuousExcitationControlDynamics_factory));
}

void DiscontinuousExcitationControlDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DiscontinuousExcitationControlDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DiscontinuousExcitationControlDynamics.ExcitationSystemDynamics"), &assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics));
	assign_map.insert(std::make_pair(std::string("cim:DiscontinuousExcitationControlDynamics.RemoteInputSignal"), &assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal));
}

void DiscontinuousExcitationControlDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void DiscontinuousExcitationControlDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:DiscontinuousExcitationControlDynamics.ExcitationSystemDynamics", &get_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics);
}

void DiscontinuousExcitationControlDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DiscontinuousExcitationControlDynamics::declare()
{
	return BaseClassDefiner(DiscontinuousExcitationControlDynamics::addConstructToMap, DiscontinuousExcitationControlDynamics::addPrimitiveAssignFnsToMap, DiscontinuousExcitationControlDynamics::addClassAssignFnsToMap, DiscontinuousExcitationControlDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* DiscontinuousExcitationControlDynamics_factory()
	{
		return new DiscontinuousExcitationControlDynamics;
	}
}
