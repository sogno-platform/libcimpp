/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType1or2Dynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AsynchronousMachineDynamics.hpp"
#include "RemoteInputSignal.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindTurbineType1or2Dynamics(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "WindTurbineType1or2Dynamics.AsynchronousMachineDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindTurbineType1or2Dynamics.RemoteInputSignal", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindTurbineType1or2Dynamics::WindTurbineType1or2Dynamics() : AsynchronousMachineDynamics(nullptr), RemoteInputSignal(nullptr) {}
WindTurbineType1or2Dynamics::~WindTurbineType1or2Dynamics() {}

const std::list<std::string>& WindTurbineType1or2Dynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindTurbineType1or2Dynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindTurbineType1or2Dynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindTurbineType1or2Dynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindTurbineType1or2Dynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindTurbineType1or2Dynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindTurbineType1or2Dynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics(BaseClass*, BaseClass*);
bool assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType1or2Dynamics* element = dynamic_cast<WindTurbineType1or2Dynamics*>(BaseClass_ptr1);
	AsynchronousMachineDynamics* element2 = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AsynchronousMachineDynamics != element2)
		{
			element->AsynchronousMachineDynamics = element2;
			return assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RemoteInputSignal_WindTurbineType1or2Dynamics(BaseClass*, BaseClass*);
bool assign_WindTurbineType1or2Dynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType1or2Dynamics* element = dynamic_cast<WindTurbineType1or2Dynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_WindTurbineType1or2Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType1or2Dynamics* element = dynamic_cast<const WindTurbineType1or2Dynamics*>(BaseClass_ptr1);
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

bool get_WindTurbineType1or2Dynamics_RemoteInputSignal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType1or2Dynamics* element = dynamic_cast<const WindTurbineType1or2Dynamics*>(BaseClass_ptr1);
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

const char WindTurbineType1or2Dynamics::debugName[] = "WindTurbineType1or2Dynamics";
const char* WindTurbineType1or2Dynamics::debugString() const
{
	return WindTurbineType1or2Dynamics::debugName;
}

void WindTurbineType1or2Dynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindTurbineType1or2Dynamics", &WindTurbineType1or2Dynamics_factory);
}

void WindTurbineType1or2Dynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType1or2Dynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindTurbineType1or2Dynamics.AsynchronousMachineDynamics", &assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics);
	assign_map.emplace("WindTurbineType1or2Dynamics.RemoteInputSignal", &assign_WindTurbineType1or2Dynamics_RemoteInputSignal);
}

void WindTurbineType1or2Dynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void WindTurbineType1or2Dynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("WindTurbineType1or2Dynamics.AsynchronousMachineDynamics", &get_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics);
	get_map.emplace("WindTurbineType1or2Dynamics.RemoteInputSignal", &get_WindTurbineType1or2Dynamics_RemoteInputSignal);
}

void WindTurbineType1or2Dynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool WindTurbineType1or2Dynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindTurbineType1or2Dynamics" &&
		dynamic_cast<WindTurbineType1or2Dynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner WindTurbineType1or2Dynamics::declare()
{
	return BaseClassDefiner(WindTurbineType1or2Dynamics::addConstructToMap, WindTurbineType1or2Dynamics::addPrimitiveAssignFnsToMap, WindTurbineType1or2Dynamics::addClassAssignFnsToMap, WindTurbineType1or2Dynamics::debugName);
}

std::map<std::string, AttrDetails> WindTurbineType1or2Dynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindTurbineType1or2Dynamics_factory()
	{
		return new WindTurbineType1or2Dynamics;
	}
}
