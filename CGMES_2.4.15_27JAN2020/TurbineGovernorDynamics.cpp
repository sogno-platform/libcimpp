/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TurbineGovernorDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AsynchronousMachineDynamics.hpp"
#include "SynchronousMachineDynamics.hpp"
#include "TurbineLoadControllerDynamics.hpp"

using namespace CIMPP;

TurbineGovernorDynamics::TurbineGovernorDynamics() : AsynchronousMachineDynamics(nullptr), TurbineLoadControllerDynamics(nullptr) {};
TurbineGovernorDynamics::~TurbineGovernorDynamics() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:TurbineGovernorDynamics.AsynchronousMachineDynamics", { CGMESProfile::DY, } },
	{ "cim:TurbineGovernorDynamics.SynchronousMachineDynamics", { CGMESProfile::DY, } },
	{ "cim:TurbineGovernorDynamics.TurbineLoadControllerDynamics", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
TurbineGovernorDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
TurbineGovernorDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_AsynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass*, BaseClass*);
bool assign_TurbineGovernorDynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineGovernorDynamics* element = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr1);
	AsynchronousMachineDynamics* element2 = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AsynchronousMachineDynamics != element2)
		{
			element->AsynchronousMachineDynamics = element2;
			return assign_AsynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_SynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass*, BaseClass*);
bool assign_TurbineGovernorDynamics_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineGovernorDynamics* element = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->SynchronousMachineDynamics.begin(), element->SynchronousMachineDynamics.end(), element2) == element->SynchronousMachineDynamics.end())
		{
			element->SynchronousMachineDynamics.push_back(element2);
			return assign_SynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics(BaseClass*, BaseClass*);
bool assign_TurbineGovernorDynamics_TurbineLoadControllerDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineGovernorDynamics* element = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr1);
	TurbineLoadControllerDynamics* element2 = dynamic_cast<TurbineLoadControllerDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TurbineLoadControllerDynamics != element2)
		{
			element->TurbineLoadControllerDynamics = element2;
			return assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_TurbineGovernorDynamics_AsynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const TurbineGovernorDynamics* element = dynamic_cast<const TurbineGovernorDynamics*>(BaseClass_ptr1))
	{
		if (element->AsynchronousMachineDynamics != 0)
		{
			BaseClass_list.push_back(element->AsynchronousMachineDynamics);
			return true;
		}
	}
	return false;
}

bool get_TurbineGovernorDynamics_SynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const TurbineGovernorDynamics* element = dynamic_cast<const TurbineGovernorDynamics*>(BaseClass_ptr1))
	{
		std::copy(element->SynchronousMachineDynamics.begin(), element->SynchronousMachineDynamics.end(), std::back_inserter(BaseClass_list));
		return !BaseClass_list.empty();
	}
	return false;
}


const char TurbineGovernorDynamics::debugName[] = "TurbineGovernorDynamics";
const char* TurbineGovernorDynamics::debugString() const
{
	return TurbineGovernorDynamics::debugName;
}

void TurbineGovernorDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TurbineGovernorDynamics"), &TurbineGovernorDynamics_factory));
}

void TurbineGovernorDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void TurbineGovernorDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorDynamics.AsynchronousMachineDynamics"), &assign_TurbineGovernorDynamics_AsynchronousMachineDynamics));
	assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorDynamics.SynchronousMachineDynamics"), &assign_TurbineGovernorDynamics_SynchronousMachineDynamics));
	assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorDynamics.TurbineLoadControllerDynamics"), &assign_TurbineGovernorDynamics_TurbineLoadControllerDynamics));
}

void TurbineGovernorDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void TurbineGovernorDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:TurbineGovernorDynamics.AsynchronousMachineDynamics", &get_TurbineGovernorDynamics_AsynchronousMachineDynamics);
	get_map.emplace("cim:TurbineGovernorDynamics.SynchronousMachineDynamics", &get_TurbineGovernorDynamics_SynchronousMachineDynamics);
}

void TurbineGovernorDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner TurbineGovernorDynamics::declare()
{
	return BaseClassDefiner(TurbineGovernorDynamics::addConstructToMap, TurbineGovernorDynamics::addPrimitiveAssignFnsToMap, TurbineGovernorDynamics::addClassAssignFnsToMap, TurbineGovernorDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* TurbineGovernorDynamics_factory()
	{
		return new TurbineGovernorDynamics;
	}
}
