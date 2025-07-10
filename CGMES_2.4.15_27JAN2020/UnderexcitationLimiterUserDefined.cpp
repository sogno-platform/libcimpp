/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcitationLimiterUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		UnderexcitationLimiterUserDefined(),
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
		{ "UnderexcitationLimiterUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "UnderexcitationLimiterUserDefined.proprietary", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

UnderexcitationLimiterUserDefined::UnderexcitationLimiterUserDefined() {}
UnderexcitationLimiterUserDefined::~UnderexcitationLimiterUserDefined() {}

const std::list<std::string>& UnderexcitationLimiterUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& UnderexcitationLimiterUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& UnderexcitationLimiterUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& UnderexcitationLimiterUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& UnderexcitationLimiterUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& UnderexcitationLimiterUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& UnderexcitationLimiterUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined(BaseClass*, BaseClass*);
bool assign_UnderexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	UnderexcitationLimiterUserDefined* element = dynamic_cast<UnderexcitationLimiterUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_UnderexcitationLimiterUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcitationLimiterUserDefined* element = dynamic_cast<UnderexcitationLimiterUserDefined*>(BaseClass_ptr1);
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


bool get_UnderexcitationLimiterUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcitationLimiterUserDefined* element = dynamic_cast<const UnderexcitationLimiterUserDefined*>(BaseClass_ptr1);
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

const char UnderexcitationLimiterUserDefined::debugName[] = "UnderexcitationLimiterUserDefined";
const char* UnderexcitationLimiterUserDefined::debugString() const
{
	return UnderexcitationLimiterUserDefined::debugName;
}

void UnderexcitationLimiterUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("UnderexcitationLimiterUserDefined", &UnderexcitationLimiterUserDefined_factory);
}

void UnderexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("UnderexcitationLimiterUserDefined.proprietary", &assign_UnderexcitationLimiterUserDefined_proprietary);
}

void UnderexcitationLimiterUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("UnderexcitationLimiterUserDefined.ProprietaryParameterDynamics", &assign_UnderexcitationLimiterUserDefined_ProprietaryParameterDynamics);
}

void UnderexcitationLimiterUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("UnderexcitationLimiterUserDefined.proprietary", &get_UnderexcitationLimiterUserDefined_proprietary);
}

void UnderexcitationLimiterUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void UnderexcitationLimiterUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

bool UnderexcitationLimiterUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "UnderexcitationLimiterUserDefined" &&
		dynamic_cast<UnderexcitationLimiterUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner UnderexcitationLimiterUserDefined::declare()
{
	return BaseClassDefiner(UnderexcitationLimiterUserDefined::addConstructToMap, UnderexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap, UnderexcitationLimiterUserDefined::addClassAssignFnsToMap, UnderexcitationLimiterUserDefined::debugName);
}

std::map<std::string, AttrDetails> UnderexcitationLimiterUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = UnderexcitationLimiterDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* UnderexcitationLimiterUserDefined_factory()
	{
		return new UnderexcitationLimiterUserDefined;
	}
}
