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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindTurbineType3or4Dynamics(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "WindTurbineType3or4Dynamics.EnergySource", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindTurbineType3or4Dynamics.RemoteInputSignal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindTurbineType3or4Dynamics.WindPlantDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindTurbineType3or4Dynamics::WindTurbineType3or4Dynamics() : EnergySource(nullptr), RemoteInputSignal(nullptr), WindPlantDynamics(nullptr) {}
WindTurbineType3or4Dynamics::~WindTurbineType3or4Dynamics() {}

const std::list<std::string>& WindTurbineType3or4Dynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindTurbineType3or4Dynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindTurbineType3or4Dynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindTurbineType3or4Dynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindTurbineType3or4Dynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindTurbineType3or4Dynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindTurbineType3or4Dynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	const WindTurbineType3or4Dynamics* element = dynamic_cast<const WindTurbineType3or4Dynamics*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const WindTurbineType3or4Dynamics* element = dynamic_cast<const WindTurbineType3or4Dynamics*>(BaseClass_ptr1);
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

bool get_WindTurbineType3or4Dynamics_WindPlantDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3or4Dynamics* element = dynamic_cast<const WindTurbineType3or4Dynamics*>(BaseClass_ptr1);
	if (element != nullptr)
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
	factory_map.emplace("WindTurbineType3or4Dynamics", &WindTurbineType3or4Dynamics_factory);
}

void WindTurbineType3or4Dynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType3or4Dynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindTurbineType3or4Dynamics.EnergySource", &assign_WindTurbineType3or4Dynamics_EnergySource);
	assign_map.emplace("WindTurbineType3or4Dynamics.RemoteInputSignal", &assign_WindTurbineType3or4Dynamics_RemoteInputSignal);
	assign_map.emplace("WindTurbineType3or4Dynamics.WindPlantDynamics", &assign_WindTurbineType3or4Dynamics_WindPlantDynamics);
}

void WindTurbineType3or4Dynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void WindTurbineType3or4Dynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("WindTurbineType3or4Dynamics.EnergySource", &get_WindTurbineType3or4Dynamics_EnergySource);
	get_map.emplace("WindTurbineType3or4Dynamics.RemoteInputSignal", &get_WindTurbineType3or4Dynamics_RemoteInputSignal);
	get_map.emplace("WindTurbineType3or4Dynamics.WindPlantDynamics", &get_WindTurbineType3or4Dynamics_WindPlantDynamics);
}

void WindTurbineType3or4Dynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool WindTurbineType3or4Dynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindTurbineType3or4Dynamics" &&
		dynamic_cast<WindTurbineType3or4Dynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner WindTurbineType3or4Dynamics::declare()
{
	return BaseClassDefiner(WindTurbineType3or4Dynamics::addConstructToMap, WindTurbineType3or4Dynamics::addPrimitiveAssignFnsToMap, WindTurbineType3or4Dynamics::addClassAssignFnsToMap, WindTurbineType3or4Dynamics::debugName);
}

std::map<std::string, AttrDetails> WindTurbineType3or4Dynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindTurbineType3or4Dynamics_factory()
	{
		return new WindTurbineType3or4Dynamics;
	}
}
