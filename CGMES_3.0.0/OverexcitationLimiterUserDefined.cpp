/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcitationLimiterUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		OverexcitationLimiterUserDefined(),
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
		{ "OverexcitationLimiterUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "OverexcitationLimiterUserDefined.proprietary", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

OverexcitationLimiterUserDefined::OverexcitationLimiterUserDefined() {}
OverexcitationLimiterUserDefined::~OverexcitationLimiterUserDefined() {}

const std::list<std::string>& OverexcitationLimiterUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& OverexcitationLimiterUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& OverexcitationLimiterUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& OverexcitationLimiterUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& OverexcitationLimiterUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& OverexcitationLimiterUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& OverexcitationLimiterUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined(BaseClass*, BaseClass*);
bool assign_OverexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OverexcitationLimiterUserDefined* element = dynamic_cast<OverexcitationLimiterUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_OverexcitationLimiterUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcitationLimiterUserDefined* element = dynamic_cast<OverexcitationLimiterUserDefined*>(BaseClass_ptr1);
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


bool get_OverexcitationLimiterUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcitationLimiterUserDefined* element = dynamic_cast<const OverexcitationLimiterUserDefined*>(BaseClass_ptr1);
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

const char OverexcitationLimiterUserDefined::debugName[] = "OverexcitationLimiterUserDefined";
const char* OverexcitationLimiterUserDefined::debugString() const
{
	return OverexcitationLimiterUserDefined::debugName;
}

void OverexcitationLimiterUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("OverexcitationLimiterUserDefined", &OverexcitationLimiterUserDefined_factory);
}

void OverexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("OverexcitationLimiterUserDefined.proprietary", &assign_OverexcitationLimiterUserDefined_proprietary);
}

void OverexcitationLimiterUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("OverexcitationLimiterUserDefined.ProprietaryParameterDynamics", &assign_OverexcitationLimiterUserDefined_ProprietaryParameterDynamics);
}

void OverexcitationLimiterUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("OverexcitationLimiterUserDefined.proprietary", &get_OverexcitationLimiterUserDefined_proprietary);
}

void OverexcitationLimiterUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void OverexcitationLimiterUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

bool OverexcitationLimiterUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "OverexcitationLimiterUserDefined" &&
		dynamic_cast<OverexcitationLimiterUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner OverexcitationLimiterUserDefined::declare()
{
	return BaseClassDefiner(OverexcitationLimiterUserDefined::addConstructToMap, OverexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap, OverexcitationLimiterUserDefined::addClassAssignFnsToMap, OverexcitationLimiterUserDefined::debugName);
}

std::map<std::string, AttrDetails> OverexcitationLimiterUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = OverexcitationLimiterDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* OverexcitationLimiterUserDefined_factory()
	{
		return new OverexcitationLimiterUserDefined;
	}
}
