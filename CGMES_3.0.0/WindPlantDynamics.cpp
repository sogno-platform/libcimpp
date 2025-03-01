/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "RemoteInputSignal.hpp"
#include "WindTurbineType3or4Dynamics.hpp"

using namespace CIMPP;

WindPlantDynamics::WindPlantDynamics() : RemoteInputSignal(nullptr) {}
WindPlantDynamics::~WindPlantDynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindPlantDynamics.RemoteInputSignal", { CGMESProfile::DY, } },
	{ "cim:WindPlantDynamics.WindTurbineType3or4Dynamics", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindPlantDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindPlantDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_RemoteInputSignal_WindPlantDynamics(BaseClass*, BaseClass*);
bool assign_WindPlantDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantDynamics* element = dynamic_cast<WindPlantDynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_WindPlantDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4Dynamics_WindPlantDynamics(BaseClass*, BaseClass*);
bool assign_WindPlantDynamics_WindTurbineType3or4Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantDynamics* element = dynamic_cast<WindPlantDynamics*>(BaseClass_ptr1);
	WindTurbineType3or4Dynamics* element2 = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindTurbineType3or4Dynamics.begin(), element->WindTurbineType3or4Dynamics.end(), element2) == element->WindTurbineType3or4Dynamics.end())
		{
			element->WindTurbineType3or4Dynamics.push_back(element2);
			return assign_WindTurbineType3or4Dynamics_WindPlantDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindPlantDynamics_RemoteInputSignal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindPlantDynamics* element = dynamic_cast<const WindPlantDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->RemoteInputSignal != 0)
		{
			BaseClass_list.push_back(element->RemoteInputSignal);
			return true;
		}
	}
	return false;
}


const char WindPlantDynamics::debugName[] = "WindPlantDynamics";
const char* WindPlantDynamics::debugString() const
{
	return WindPlantDynamics::debugName;
}

void WindPlantDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindPlantDynamics", &WindPlantDynamics_factory);
}

void WindPlantDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindPlantDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindPlantDynamics.RemoteInputSignal", &assign_WindPlantDynamics_RemoteInputSignal);
	assign_map.emplace("cim:WindPlantDynamics.WindTurbineType3or4Dynamics", &assign_WindPlantDynamics_WindTurbineType3or4Dynamics);
}

void WindPlantDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void WindPlantDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:WindPlantDynamics.RemoteInputSignal", &get_WindPlantDynamics_RemoteInputSignal);
}

void WindPlantDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindPlantDynamics::declare()
{
	return BaseClassDefiner(WindPlantDynamics::addConstructToMap, WindPlantDynamics::addPrimitiveAssignFnsToMap, WindPlantDynamics::addClassAssignFnsToMap, WindPlantDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* WindPlantDynamics_factory()
	{
		return new WindPlantDynamics;
	}
}
