/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageAdjusterUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VoltageAdjusterUserDefined(),
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
		{ "VoltageAdjusterUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "VoltageAdjusterUserDefined.proprietary", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

VoltageAdjusterUserDefined::VoltageAdjusterUserDefined() {}
VoltageAdjusterUserDefined::~VoltageAdjusterUserDefined() {}

const std::list<std::string>& VoltageAdjusterUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VoltageAdjusterUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VoltageAdjusterUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VoltageAdjusterUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VoltageAdjusterUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VoltageAdjusterUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VoltageAdjusterUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined(BaseClass*, BaseClass*);
bool assign_VoltageAdjusterUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageAdjusterUserDefined* element = dynamic_cast<VoltageAdjusterUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageAdjusterUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VoltageAdjusterUserDefined* element = dynamic_cast<VoltageAdjusterUserDefined*>(BaseClass_ptr1);
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


bool get_VoltageAdjusterUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VoltageAdjusterUserDefined* element = dynamic_cast<const VoltageAdjusterUserDefined*>(BaseClass_ptr1);
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

const char VoltageAdjusterUserDefined::debugName[] = "VoltageAdjusterUserDefined";
const char* VoltageAdjusterUserDefined::debugString() const
{
	return VoltageAdjusterUserDefined::debugName;
}

void VoltageAdjusterUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VoltageAdjusterUserDefined", &VoltageAdjusterUserDefined_factory);
}

void VoltageAdjusterUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("VoltageAdjusterUserDefined.proprietary", &assign_VoltageAdjusterUserDefined_proprietary);
}

void VoltageAdjusterUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("VoltageAdjusterUserDefined.ProprietaryParameterDynamics", &assign_VoltageAdjusterUserDefined_ProprietaryParameterDynamics);
}

void VoltageAdjusterUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageAdjusterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("VoltageAdjusterUserDefined.proprietary", &get_VoltageAdjusterUserDefined_proprietary);
}

void VoltageAdjusterUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	VoltageAdjusterDynamics::addClassGetFnsToMap(get_map);
}

void VoltageAdjusterUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageAdjusterDynamics::addEnumGetFnsToMap(get_map);
}

bool VoltageAdjusterUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VoltageAdjusterUserDefined" &&
		dynamic_cast<VoltageAdjusterUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner VoltageAdjusterUserDefined::declare()
{
	return BaseClassDefiner(VoltageAdjusterUserDefined::addConstructToMap, VoltageAdjusterUserDefined::addPrimitiveAssignFnsToMap, VoltageAdjusterUserDefined::addClassAssignFnsToMap, VoltageAdjusterUserDefined::debugName);
}

std::map<std::string, AttrDetails> VoltageAdjusterUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = VoltageAdjusterDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VoltageAdjusterUserDefined_factory()
	{
		return new VoltageAdjusterUserDefined;
	}
}
