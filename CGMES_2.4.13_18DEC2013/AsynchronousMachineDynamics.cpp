/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachineDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AsynchronousMachine.hpp"
#include "MechanicalLoadDynamics.hpp"
#include "TurbineGovernorDynamics.hpp"
#include "WindTurbineType1or2Dynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AsynchronousMachineDynamics(),
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
		{ "AsynchronousMachineDynamics.AsynchronousMachine", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "AsynchronousMachineDynamics.MechanicalLoadDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "AsynchronousMachineDynamics.TurbineGovernorDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "AsynchronousMachineDynamics.WindTurbineType1or2Dynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

AsynchronousMachineDynamics::AsynchronousMachineDynamics() : AsynchronousMachine(nullptr), MechanicalLoadDynamics(nullptr), TurbineGovernorDynamics(nullptr), WindTurbineType1or2Dynamics(nullptr) {}
AsynchronousMachineDynamics::~AsynchronousMachineDynamics() {}

const std::list<std::string>& AsynchronousMachineDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AsynchronousMachineDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AsynchronousMachineDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AsynchronousMachineDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AsynchronousMachineDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AsynchronousMachineDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AsynchronousMachineDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_AsynchronousMachine_AsynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_AsynchronousMachineDynamics_AsynchronousMachine(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AsynchronousMachineDynamics* element = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr1);
	AsynchronousMachine* element2 = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AsynchronousMachine != element2)
		{
			element->AsynchronousMachine = element2;
			return assign_AsynchronousMachine_AsynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_MechanicalLoadDynamics_AsynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_AsynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AsynchronousMachineDynamics* element = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr1);
	MechanicalLoadDynamics* element2 = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->MechanicalLoadDynamics != element2)
		{
			element->MechanicalLoadDynamics = element2;
			return assign_MechanicalLoadDynamics_AsynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TurbineGovernorDynamics_AsynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_AsynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AsynchronousMachineDynamics* element = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr1);
	TurbineGovernorDynamics* element2 = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TurbineGovernorDynamics != element2)
		{
			element->TurbineGovernorDynamics = element2;
			return assign_TurbineGovernorDynamics_AsynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AsynchronousMachineDynamics* element = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr1);
	WindTurbineType1or2Dynamics* element2 = dynamic_cast<WindTurbineType1or2Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType1or2Dynamics != element2)
		{
			element->WindTurbineType1or2Dynamics = element2;
			return assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_AsynchronousMachineDynamics_AsynchronousMachine(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AsynchronousMachineDynamics* element = dynamic_cast<const AsynchronousMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->AsynchronousMachine != 0)
		{
			BaseClass_list.push_back(element->AsynchronousMachine);
			return true;
		}
	}
	return false;
}




const char AsynchronousMachineDynamics::debugName[] = "AsynchronousMachineDynamics";
const char* AsynchronousMachineDynamics::debugString() const
{
	return AsynchronousMachineDynamics::debugName;
}

void AsynchronousMachineDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("AsynchronousMachineDynamics", &AsynchronousMachineDynamics_factory);
}

void AsynchronousMachineDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void AsynchronousMachineDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("AsynchronousMachineDynamics.AsynchronousMachine", &assign_AsynchronousMachineDynamics_AsynchronousMachine);
	assign_map.emplace("AsynchronousMachineDynamics.MechanicalLoadDynamics", &assign_AsynchronousMachineDynamics_MechanicalLoadDynamics);
	assign_map.emplace("AsynchronousMachineDynamics.TurbineGovernorDynamics", &assign_AsynchronousMachineDynamics_TurbineGovernorDynamics);
	assign_map.emplace("AsynchronousMachineDynamics.WindTurbineType1or2Dynamics", &assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics);
}

void AsynchronousMachineDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RotatingMachineDynamics::addPrimitiveGetFnsToMap(get_map);
}

void AsynchronousMachineDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RotatingMachineDynamics::addClassGetFnsToMap(get_map);
	get_map.emplace("AsynchronousMachineDynamics.AsynchronousMachine", &get_AsynchronousMachineDynamics_AsynchronousMachine);
}

void AsynchronousMachineDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RotatingMachineDynamics::addEnumGetFnsToMap(get_map);
}

bool AsynchronousMachineDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AsynchronousMachineDynamics" &&
		dynamic_cast<AsynchronousMachineDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner AsynchronousMachineDynamics::declare()
{
	return BaseClassDefiner(AsynchronousMachineDynamics::addConstructToMap, AsynchronousMachineDynamics::addPrimitiveAssignFnsToMap, AsynchronousMachineDynamics::addClassAssignFnsToMap, AsynchronousMachineDynamics::debugName);
}

std::map<std::string, AttrDetails> AsynchronousMachineDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = RotatingMachineDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AsynchronousMachineDynamics_factory()
	{
		return new AsynchronousMachineDynamics;
	}
}
