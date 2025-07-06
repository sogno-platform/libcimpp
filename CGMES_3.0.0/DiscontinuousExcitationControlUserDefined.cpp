/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscontinuousExcitationControlUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DiscontinuousExcitationControlUserDefined(),
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
		{ "DiscontinuousExcitationControlUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "DiscontinuousExcitationControlUserDefined.proprietary", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

DiscontinuousExcitationControlUserDefined::DiscontinuousExcitationControlUserDefined() {}
DiscontinuousExcitationControlUserDefined::~DiscontinuousExcitationControlUserDefined() {}

const std::list<std::string>& DiscontinuousExcitationControlUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DiscontinuousExcitationControlUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DiscontinuousExcitationControlUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DiscontinuousExcitationControlUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DiscontinuousExcitationControlUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DiscontinuousExcitationControlUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DiscontinuousExcitationControlUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined(BaseClass*, BaseClass*);
bool assign_DiscontinuousExcitationControlUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiscontinuousExcitationControlUserDefined* element = dynamic_cast<DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DiscontinuousExcitationControlUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscontinuousExcitationControlUserDefined* element = dynamic_cast<DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr1);
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


bool get_DiscontinuousExcitationControlUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscontinuousExcitationControlUserDefined* element = dynamic_cast<const DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr1);
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

const char DiscontinuousExcitationControlUserDefined::debugName[] = "DiscontinuousExcitationControlUserDefined";
const char* DiscontinuousExcitationControlUserDefined::debugString() const
{
	return DiscontinuousExcitationControlUserDefined::debugName;
}

void DiscontinuousExcitationControlUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DiscontinuousExcitationControlUserDefined", &DiscontinuousExcitationControlUserDefined_factory);
}

void DiscontinuousExcitationControlUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("DiscontinuousExcitationControlUserDefined.proprietary", &assign_DiscontinuousExcitationControlUserDefined_proprietary);
}

void DiscontinuousExcitationControlUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DiscontinuousExcitationControlUserDefined.ProprietaryParameterDynamics", &assign_DiscontinuousExcitationControlUserDefined_ProprietaryParameterDynamics);
}

void DiscontinuousExcitationControlUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("DiscontinuousExcitationControlUserDefined.proprietary", &get_DiscontinuousExcitationControlUserDefined_proprietary);
}

void DiscontinuousExcitationControlUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addClassGetFnsToMap(get_map);
}

void DiscontinuousExcitationControlUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addEnumGetFnsToMap(get_map);
}

bool DiscontinuousExcitationControlUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DiscontinuousExcitationControlUserDefined" &&
		dynamic_cast<DiscontinuousExcitationControlUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner DiscontinuousExcitationControlUserDefined::declare()
{
	return BaseClassDefiner(DiscontinuousExcitationControlUserDefined::addConstructToMap, DiscontinuousExcitationControlUserDefined::addPrimitiveAssignFnsToMap, DiscontinuousExcitationControlUserDefined::addClassAssignFnsToMap, DiscontinuousExcitationControlUserDefined::debugName);
}

std::map<std::string, AttrDetails> DiscontinuousExcitationControlUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DiscontinuousExcitationControlDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DiscontinuousExcitationControlUserDefined_factory()
	{
		return new DiscontinuousExcitationControlUserDefined;
	}
}
