/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArControllerType2UserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PFVArControllerType2UserDefined(),
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
		{ "PFVArControllerType2UserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PFVArControllerType2UserDefined.proprietary", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PFVArControllerType2UserDefined::PFVArControllerType2UserDefined() {}
PFVArControllerType2UserDefined::~PFVArControllerType2UserDefined() {}

const std::list<std::string>& PFVArControllerType2UserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PFVArControllerType2UserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PFVArControllerType2UserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PFVArControllerType2UserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PFVArControllerType2UserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PFVArControllerType2UserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PFVArControllerType2UserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined(BaseClass*, BaseClass*);
bool assign_PFVArControllerType2UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType2UserDefined* element = dynamic_cast<PFVArControllerType2UserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PFVArControllerType2UserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArControllerType2UserDefined* element = dynamic_cast<PFVArControllerType2UserDefined*>(BaseClass_ptr1);
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


bool get_PFVArControllerType2UserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArControllerType2UserDefined* element = dynamic_cast<const PFVArControllerType2UserDefined*>(BaseClass_ptr1);
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

const char PFVArControllerType2UserDefined::debugName[] = "PFVArControllerType2UserDefined";
const char* PFVArControllerType2UserDefined::debugString() const
{
	return PFVArControllerType2UserDefined::debugName;
}

void PFVArControllerType2UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PFVArControllerType2UserDefined", &PFVArControllerType2UserDefined_factory);
}

void PFVArControllerType2UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PFVArControllerType2UserDefined.proprietary", &assign_PFVArControllerType2UserDefined_proprietary);
}

void PFVArControllerType2UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PFVArControllerType2UserDefined.ProprietaryParameterDynamics", &assign_PFVArControllerType2UserDefined_ProprietaryParameterDynamics);
}

void PFVArControllerType2UserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PFVArControllerType2UserDefined.proprietary", &get_PFVArControllerType2UserDefined_proprietary);
}

void PFVArControllerType2UserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addClassGetFnsToMap(get_map);
}

void PFVArControllerType2UserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addEnumGetFnsToMap(get_map);
}

bool PFVArControllerType2UserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PFVArControllerType2UserDefined" &&
		dynamic_cast<PFVArControllerType2UserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner PFVArControllerType2UserDefined::declare()
{
	return BaseClassDefiner(PFVArControllerType2UserDefined::addConstructToMap, PFVArControllerType2UserDefined::addPrimitiveAssignFnsToMap, PFVArControllerType2UserDefined::addClassAssignFnsToMap, PFVArControllerType2UserDefined::debugName);
}

std::map<std::string, AttrDetails> PFVArControllerType2UserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PFVArControllerType2Dynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PFVArControllerType2UserDefined_factory()
	{
		return new PFVArControllerType2UserDefined;
	}
}
