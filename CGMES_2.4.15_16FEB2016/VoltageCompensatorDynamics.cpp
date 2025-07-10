/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageCompensatorDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"
#include "RemoteInputSignal.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VoltageCompensatorDynamics(),
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
		{ "VoltageCompensatorDynamics.ExcitationSystemDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "VoltageCompensatorDynamics.RemoteInputSignal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

VoltageCompensatorDynamics::VoltageCompensatorDynamics() : ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr) {}
VoltageCompensatorDynamics::~VoltageCompensatorDynamics() {}

const std::list<std::string>& VoltageCompensatorDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VoltageCompensatorDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VoltageCompensatorDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VoltageCompensatorDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VoltageCompensatorDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VoltageCompensatorDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VoltageCompensatorDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcitationSystemDynamics_VoltageCompensatorDynamics(BaseClass*, BaseClass*);
bool assign_VoltageCompensatorDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageCompensatorDynamics* element = dynamic_cast<VoltageCompensatorDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_VoltageCompensatorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RemoteInputSignal_VoltageCompensatorDynamics(BaseClass*, BaseClass*);
bool assign_VoltageCompensatorDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageCompensatorDynamics* element = dynamic_cast<VoltageCompensatorDynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_VoltageCompensatorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_VoltageCompensatorDynamics_ExcitationSystemDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const VoltageCompensatorDynamics* element = dynamic_cast<const VoltageCompensatorDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ExcitationSystemDynamics != 0)
		{
			BaseClass_list.push_back(element->ExcitationSystemDynamics);
			return true;
		}
	}
	return false;
}


const char VoltageCompensatorDynamics::debugName[] = "VoltageCompensatorDynamics";
const char* VoltageCompensatorDynamics::debugString() const
{
	return VoltageCompensatorDynamics::debugName;
}

void VoltageCompensatorDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VoltageCompensatorDynamics", &VoltageCompensatorDynamics_factory);
}

void VoltageCompensatorDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void VoltageCompensatorDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("VoltageCompensatorDynamics.ExcitationSystemDynamics", &assign_VoltageCompensatorDynamics_ExcitationSystemDynamics);
	assign_map.emplace("VoltageCompensatorDynamics.RemoteInputSignal", &assign_VoltageCompensatorDynamics_RemoteInputSignal);
}

void VoltageCompensatorDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void VoltageCompensatorDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("VoltageCompensatorDynamics.ExcitationSystemDynamics", &get_VoltageCompensatorDynamics_ExcitationSystemDynamics);
}

void VoltageCompensatorDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool VoltageCompensatorDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VoltageCompensatorDynamics" &&
		dynamic_cast<VoltageCompensatorDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner VoltageCompensatorDynamics::declare()
{
	return BaseClassDefiner(VoltageCompensatorDynamics::addConstructToMap, VoltageCompensatorDynamics::addPrimitiveAssignFnsToMap, VoltageCompensatorDynamics::addClassAssignFnsToMap, VoltageCompensatorDynamics::debugName);
}

std::map<std::string, AttrDetails> VoltageCompensatorDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VoltageCompensatorDynamics_factory()
	{
		return new VoltageCompensatorDynamics;
	}
}
