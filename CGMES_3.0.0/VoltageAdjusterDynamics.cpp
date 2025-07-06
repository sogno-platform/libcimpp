/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageAdjusterDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PFVArControllerType1Dynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VoltageAdjusterDynamics(),
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
		{ "VoltageAdjusterDynamics.PFVArControllerType1Dynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

VoltageAdjusterDynamics::VoltageAdjusterDynamics() : PFVArControllerType1Dynamics(nullptr) {}
VoltageAdjusterDynamics::~VoltageAdjusterDynamics() {}

const std::list<std::string>& VoltageAdjusterDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VoltageAdjusterDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VoltageAdjusterDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VoltageAdjusterDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VoltageAdjusterDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VoltageAdjusterDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VoltageAdjusterDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics(BaseClass*, BaseClass*);
bool assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageAdjusterDynamics* element = dynamic_cast<VoltageAdjusterDynamics*>(BaseClass_ptr1);
	PFVArControllerType1Dynamics* element2 = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PFVArControllerType1Dynamics != element2)
		{
			element->PFVArControllerType1Dynamics = element2;
			return assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_VoltageAdjusterDynamics_PFVArControllerType1Dynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const VoltageAdjusterDynamics* element = dynamic_cast<const VoltageAdjusterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PFVArControllerType1Dynamics != 0)
		{
			BaseClass_list.push_back(element->PFVArControllerType1Dynamics);
			return true;
		}
	}
	return false;
}

const char VoltageAdjusterDynamics::debugName[] = "VoltageAdjusterDynamics";
const char* VoltageAdjusterDynamics::debugString() const
{
	return VoltageAdjusterDynamics::debugName;
}

void VoltageAdjusterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VoltageAdjusterDynamics", &VoltageAdjusterDynamics_factory);
}

void VoltageAdjusterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void VoltageAdjusterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("VoltageAdjusterDynamics.PFVArControllerType1Dynamics", &assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics);
}

void VoltageAdjusterDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void VoltageAdjusterDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("VoltageAdjusterDynamics.PFVArControllerType1Dynamics", &get_VoltageAdjusterDynamics_PFVArControllerType1Dynamics);
}

void VoltageAdjusterDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool VoltageAdjusterDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VoltageAdjusterDynamics" &&
		dynamic_cast<VoltageAdjusterDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner VoltageAdjusterDynamics::declare()
{
	return BaseClassDefiner(VoltageAdjusterDynamics::addConstructToMap, VoltageAdjusterDynamics::addPrimitiveAssignFnsToMap, VoltageAdjusterDynamics::addClassAssignFnsToMap, VoltageAdjusterDynamics::debugName);
}

std::map<std::string, AttrDetails> VoltageAdjusterDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VoltageAdjusterDynamics_factory()
	{
		return new VoltageAdjusterDynamics;
	}
}
