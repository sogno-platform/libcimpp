/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MechanicalLoadDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AsynchronousMachineDynamics.hpp"
#include "SynchronousMachineDynamics.hpp"

using namespace CIMPP;

MechanicalLoadDynamics::MechanicalLoadDynamics() : AsynchronousMachineDynamics(nullptr), SynchronousMachineDynamics(nullptr) {}
MechanicalLoadDynamics::~MechanicalLoadDynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:MechanicalLoadDynamics.AsynchronousMachineDynamics", { CGMESProfile::DY, } },
	{ "cim:MechanicalLoadDynamics.SynchronousMachineDynamics", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
MechanicalLoadDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
MechanicalLoadDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_AsynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass*, BaseClass*);
bool assign_MechanicalLoadDynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MechanicalLoadDynamics* element = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr1);
	AsynchronousMachineDynamics* element2 = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AsynchronousMachineDynamics != element2)
		{
			element->AsynchronousMachineDynamics = element2;
			return assign_AsynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass*, BaseClass*);
bool assign_MechanicalLoadDynamics_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MechanicalLoadDynamics* element = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SynchronousMachineDynamics != element2)
		{
			element->SynchronousMachineDynamics = element2;
			return assign_SynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_MechanicalLoadDynamics_AsynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const MechanicalLoadDynamics* element = dynamic_cast<const MechanicalLoadDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->AsynchronousMachineDynamics != 0)
		{
			BaseClass_list.push_back(element->AsynchronousMachineDynamics);
			return true;
		}
	}
	return false;
}

bool get_MechanicalLoadDynamics_SynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const MechanicalLoadDynamics* element = dynamic_cast<const MechanicalLoadDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->SynchronousMachineDynamics != 0)
		{
			BaseClass_list.push_back(element->SynchronousMachineDynamics);
			return true;
		}
	}
	return false;
}

const char MechanicalLoadDynamics::debugName[] = "MechanicalLoadDynamics";
const char* MechanicalLoadDynamics::debugString() const
{
	return MechanicalLoadDynamics::debugName;
}

void MechanicalLoadDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:MechanicalLoadDynamics", &MechanicalLoadDynamics_factory);
}

void MechanicalLoadDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void MechanicalLoadDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:MechanicalLoadDynamics.AsynchronousMachineDynamics", &assign_MechanicalLoadDynamics_AsynchronousMachineDynamics);
	assign_map.emplace("cim:MechanicalLoadDynamics.SynchronousMachineDynamics", &assign_MechanicalLoadDynamics_SynchronousMachineDynamics);
}

void MechanicalLoadDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void MechanicalLoadDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:MechanicalLoadDynamics.AsynchronousMachineDynamics", &get_MechanicalLoadDynamics_AsynchronousMachineDynamics);
	get_map.emplace("cim:MechanicalLoadDynamics.SynchronousMachineDynamics", &get_MechanicalLoadDynamics_SynchronousMachineDynamics);
}

void MechanicalLoadDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner MechanicalLoadDynamics::declare()
{
	return BaseClassDefiner(MechanicalLoadDynamics::addConstructToMap, MechanicalLoadDynamics::addPrimitiveAssignFnsToMap, MechanicalLoadDynamics::addClassAssignFnsToMap, MechanicalLoadDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* MechanicalLoadDynamics_factory()
	{
		return new MechanicalLoadDynamics;
	}
}
