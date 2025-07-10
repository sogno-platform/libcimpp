/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArControllerType1UserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PFVArControllerType1UserDefined(),
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
		{ "PFVArControllerType1UserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArControllerType1UserDefined.proprietary", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PFVArControllerType1UserDefined::PFVArControllerType1UserDefined() {}
PFVArControllerType1UserDefined::~PFVArControllerType1UserDefined() {}

const std::list<std::string>& PFVArControllerType1UserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PFVArControllerType1UserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PFVArControllerType1UserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PFVArControllerType1UserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PFVArControllerType1UserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PFVArControllerType1UserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PFVArControllerType1UserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined(BaseClass*, BaseClass*);
bool assign_PFVArControllerType1UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType1UserDefined* element = dynamic_cast<PFVArControllerType1UserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PFVArControllerType1UserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArControllerType1UserDefined* element = dynamic_cast<PFVArControllerType1UserDefined*>(BaseClass_ptr1);
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


bool get_PFVArControllerType1UserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArControllerType1UserDefined* element = dynamic_cast<const PFVArControllerType1UserDefined*>(BaseClass_ptr1);
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

const char PFVArControllerType1UserDefined::debugName[] = "PFVArControllerType1UserDefined";
const char* PFVArControllerType1UserDefined::debugString() const
{
	return PFVArControllerType1UserDefined::debugName;
}

void PFVArControllerType1UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PFVArControllerType1UserDefined", &PFVArControllerType1UserDefined_factory);
}

void PFVArControllerType1UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PFVArControllerType1UserDefined.proprietary", &assign_PFVArControllerType1UserDefined_proprietary);
}

void PFVArControllerType1UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PFVArControllerType1UserDefined.ProprietaryParameterDynamics", &assign_PFVArControllerType1UserDefined_ProprietaryParameterDynamics);
}

void PFVArControllerType1UserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PFVArControllerType1UserDefined.proprietary", &get_PFVArControllerType1UserDefined_proprietary);
}

void PFVArControllerType1UserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addClassGetFnsToMap(get_map);
}

void PFVArControllerType1UserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addEnumGetFnsToMap(get_map);
}

bool PFVArControllerType1UserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PFVArControllerType1UserDefined" &&
		dynamic_cast<PFVArControllerType1UserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner PFVArControllerType1UserDefined::declare()
{
	return BaseClassDefiner(PFVArControllerType1UserDefined::addConstructToMap, PFVArControllerType1UserDefined::addPrimitiveAssignFnsToMap, PFVArControllerType1UserDefined::addClassAssignFnsToMap, PFVArControllerType1UserDefined::debugName);
}

std::map<std::string, AttrDetails> PFVArControllerType1UserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PFVArControllerType1Dynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PFVArControllerType1UserDefined_factory()
	{
		return new PFVArControllerType1UserDefined;
	}
}
