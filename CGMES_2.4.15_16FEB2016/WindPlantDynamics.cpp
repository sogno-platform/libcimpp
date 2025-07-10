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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindPlantDynamics(),
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
		{ "WindPlantDynamics.RemoteInputSignal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantDynamics.WindTurbineType3or4Dynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindPlantDynamics::WindPlantDynamics() : RemoteInputSignal(nullptr) {}
WindPlantDynamics::~WindPlantDynamics() {}

const std::list<std::string>& WindPlantDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindPlantDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindPlantDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindPlantDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindPlantDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindPlantDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindPlantDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("WindPlantDynamics", &WindPlantDynamics_factory);
}

void WindPlantDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindPlantDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindPlantDynamics.RemoteInputSignal", &assign_WindPlantDynamics_RemoteInputSignal);
	assign_map.emplace("WindPlantDynamics.WindTurbineType3or4Dynamics", &assign_WindPlantDynamics_WindTurbineType3or4Dynamics);
}

void WindPlantDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void WindPlantDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("WindPlantDynamics.RemoteInputSignal", &get_WindPlantDynamics_RemoteInputSignal);
}

void WindPlantDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool WindPlantDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindPlantDynamics" &&
		dynamic_cast<WindPlantDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner WindPlantDynamics::declare()
{
	return BaseClassDefiner(WindPlantDynamics::addConstructToMap, WindPlantDynamics::addPrimitiveAssignFnsToMap, WindPlantDynamics::addClassAssignFnsToMap, WindPlantDynamics::debugName);
}

std::map<std::string, AttrDetails> WindPlantDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindPlantDynamics_factory()
	{
		return new WindPlantDynamics;
	}
}
