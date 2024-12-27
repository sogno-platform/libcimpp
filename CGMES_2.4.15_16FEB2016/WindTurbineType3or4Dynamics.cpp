/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType3or4Dynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "EnergySource.hpp"
#include "RemoteInputSignal.hpp"
#include "WindPlantDynamics.hpp"

using namespace CIMPP;

WindTurbineType3or4Dynamics::WindTurbineType3or4Dynamics() : EnergySource(nullptr), RemoteInputSignal(nullptr), WindPlantDynamics(nullptr) {};
WindTurbineType3or4Dynamics::~WindTurbineType3or4Dynamics() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindTurbineType3or4Dynamics.EnergySource", { CGMESProfile::DY, } },
	{ "cim:WindTurbineType3or4Dynamics.RemoteInputSignal", { CGMESProfile::DY, } },
	{ "cim:WindTurbineType3or4Dynamics.WindPlantDynamics", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindTurbineType3or4Dynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindTurbineType3or4Dynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_EnergySource_WindTurbineType3or4Dynamics(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4Dynamics_EnergySource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3or4Dynamics* element = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr1);
	EnergySource* element2 = dynamic_cast<EnergySource*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->EnergySource != element2)
		{
			element->EnergySource = element2;
			return assign_EnergySource_WindTurbineType3or4Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_RemoteInputSignal_WindTurbineType3or4Dynamics(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4Dynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3or4Dynamics* element = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_WindTurbineType3or4Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_WindPlantDynamics_WindTurbineType3or4Dynamics(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4Dynamics_WindPlantDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3or4Dynamics* element = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr1);
	WindPlantDynamics* element2 = dynamic_cast<WindPlantDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantDynamics != element2)
		{
			element->WindPlantDynamics = element2;
			return assign_WindPlantDynamics_WindTurbineType3or4Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_WindTurbineType3or4Dynamics_EnergySource(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const WindTurbineType3or4Dynamics* element = dynamic_cast<const WindTurbineType3or4Dynamics*>(BaseClass_ptr1))
	{
		if (element->EnergySource != 0)
		{
			BaseClass_list.push_back(element->EnergySource);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3or4Dynamics_RemoteInputSignal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const WindTurbineType3or4Dynamics* element = dynamic_cast<const WindTurbineType3or4Dynamics*>(BaseClass_ptr1))
	{
		if (element->RemoteInputSignal != 0)
		{
			BaseClass_list.push_back(element->RemoteInputSignal);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3or4Dynamics_WindPlantDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const WindTurbineType3or4Dynamics* element = dynamic_cast<const WindTurbineType3or4Dynamics*>(BaseClass_ptr1))
	{
		if (element->WindPlantDynamics != 0)
		{
			BaseClass_list.push_back(element->WindPlantDynamics);
			return true;
		}
	}
	return false;
}


const char WindTurbineType3or4Dynamics::debugName[] = "WindTurbineType3or4Dynamics";
const char* WindTurbineType3or4Dynamics::debugString() const
{
	return WindTurbineType3or4Dynamics::debugName;
}

void WindTurbineType3or4Dynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindTurbineType3or4Dynamics"), &WindTurbineType3or4Dynamics_factory));
}

void WindTurbineType3or4Dynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType3or4Dynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3or4Dynamics.EnergySource"), &assign_WindTurbineType3or4Dynamics_EnergySource));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3or4Dynamics.RemoteInputSignal"), &assign_WindTurbineType3or4Dynamics_RemoteInputSignal));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3or4Dynamics.WindPlantDynamics"), &assign_WindTurbineType3or4Dynamics_WindPlantDynamics));
}

void WindTurbineType3or4Dynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void WindTurbineType3or4Dynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:WindTurbineType3or4Dynamics.EnergySource", &get_WindTurbineType3or4Dynamics_EnergySource);
	get_map.emplace("cim:WindTurbineType3or4Dynamics.RemoteInputSignal", &get_WindTurbineType3or4Dynamics_RemoteInputSignal);
	get_map.emplace("cim:WindTurbineType3or4Dynamics.WindPlantDynamics", &get_WindTurbineType3or4Dynamics_WindPlantDynamics);
}

void WindTurbineType3or4Dynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindTurbineType3or4Dynamics::declare()
{
	return BaseClassDefiner(WindTurbineType3or4Dynamics::addConstructToMap, WindTurbineType3or4Dynamics::addPrimitiveAssignFnsToMap, WindTurbineType3or4Dynamics::addClassAssignFnsToMap, WindTurbineType3or4Dynamics::debugName);
}

namespace CIMPP
{
	BaseClass* WindTurbineType3or4Dynamics_factory()
	{
		return new WindTurbineType3or4Dynamics;
	}
}
