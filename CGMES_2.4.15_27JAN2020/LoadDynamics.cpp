/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "EnergyConsumer.hpp"

using namespace CIMPP;

LoadDynamics::LoadDynamics() {}
LoadDynamics::~LoadDynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:LoadDynamics.EnergyConsumer", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
LoadDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
LoadDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_EnergyConsumer_LoadDynamics(BaseClass*, BaseClass*);
bool assign_LoadDynamics_EnergyConsumer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadDynamics* element = dynamic_cast<LoadDynamics*>(BaseClass_ptr1);
	EnergyConsumer* element2 = dynamic_cast<EnergyConsumer*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EnergyConsumer.begin(), element->EnergyConsumer.end(), element2) == element->EnergyConsumer.end())
		{
			element->EnergyConsumer.push_back(element2);
			return assign_EnergyConsumer_LoadDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char LoadDynamics::debugName[] = "LoadDynamics";
const char* LoadDynamics::debugString() const
{
	return LoadDynamics::debugName;
}

void LoadDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:LoadDynamics", &LoadDynamics_factory);
}

void LoadDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LoadDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:LoadDynamics.EnergyConsumer", &assign_LoadDynamics_EnergyConsumer);
}

void LoadDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void LoadDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void LoadDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner LoadDynamics::declare()
{
	return BaseClassDefiner(LoadDynamics::addConstructToMap, LoadDynamics::addPrimitiveAssignFnsToMap, LoadDynamics::addClassAssignFnsToMap, LoadDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* LoadDynamics_factory()
	{
		return new LoadDynamics;
	}
}
