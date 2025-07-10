/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageCompensatorUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VoltageCompensatorUserDefined(),
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
		{ "VoltageCompensatorUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "VoltageCompensatorUserDefined.proprietary", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

VoltageCompensatorUserDefined::VoltageCompensatorUserDefined() {}
VoltageCompensatorUserDefined::~VoltageCompensatorUserDefined() {}

const std::list<std::string>& VoltageCompensatorUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VoltageCompensatorUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VoltageCompensatorUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VoltageCompensatorUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VoltageCompensatorUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VoltageCompensatorUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VoltageCompensatorUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined(BaseClass*, BaseClass*);
bool assign_VoltageCompensatorUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageCompensatorUserDefined* element = dynamic_cast<VoltageCompensatorUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageCompensatorUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VoltageCompensatorUserDefined* element = dynamic_cast<VoltageCompensatorUserDefined*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->proprietary;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_VoltageCompensatorUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VoltageCompensatorUserDefined* element = dynamic_cast<const VoltageCompensatorUserDefined*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->proprietary;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char VoltageCompensatorUserDefined::debugName[] = "VoltageCompensatorUserDefined";
const char* VoltageCompensatorUserDefined::debugString() const
{
	return VoltageCompensatorUserDefined::debugName;
}

void VoltageCompensatorUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VoltageCompensatorUserDefined", &VoltageCompensatorUserDefined_factory);
}

void VoltageCompensatorUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("VoltageCompensatorUserDefined.proprietary", &assign_VoltageCompensatorUserDefined_proprietary);
}

void VoltageCompensatorUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("VoltageCompensatorUserDefined.ProprietaryParameterDynamics", &assign_VoltageCompensatorUserDefined_ProprietaryParameterDynamics);
}

void VoltageCompensatorUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageCompensatorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("VoltageCompensatorUserDefined.proprietary", &get_VoltageCompensatorUserDefined_proprietary);
}

void VoltageCompensatorUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	VoltageCompensatorDynamics::addClassGetFnsToMap(get_map);
}

void VoltageCompensatorUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageCompensatorDynamics::addEnumGetFnsToMap(get_map);
}

bool VoltageCompensatorUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VoltageCompensatorUserDefined" &&
		dynamic_cast<VoltageCompensatorUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner VoltageCompensatorUserDefined::declare()
{
	return BaseClassDefiner(VoltageCompensatorUserDefined::addConstructToMap, VoltageCompensatorUserDefined::addPrimitiveAssignFnsToMap, VoltageCompensatorUserDefined::addClassAssignFnsToMap, VoltageCompensatorUserDefined::debugName);
}

std::map<std::string, AttrDetails> VoltageCompensatorUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = VoltageCompensatorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VoltageCompensatorUserDefined_factory()
	{
		return new VoltageCompensatorUserDefined;
	}
}
