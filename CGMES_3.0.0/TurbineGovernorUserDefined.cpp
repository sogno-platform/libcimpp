/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TurbineGovernorUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TurbineGovernorUserDefined(),
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
		{ "TurbineGovernorUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "TurbineGovernorUserDefined.proprietary", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

TurbineGovernorUserDefined::TurbineGovernorUserDefined() {}
TurbineGovernorUserDefined::~TurbineGovernorUserDefined() {}

const std::list<std::string>& TurbineGovernorUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TurbineGovernorUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TurbineGovernorUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TurbineGovernorUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TurbineGovernorUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TurbineGovernorUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TurbineGovernorUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_TurbineGovernorUserDefined(BaseClass*, BaseClass*);
bool assign_TurbineGovernorUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineGovernorUserDefined* element = dynamic_cast<TurbineGovernorUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_TurbineGovernorUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TurbineGovernorUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbineGovernorUserDefined* element = dynamic_cast<TurbineGovernorUserDefined*>(BaseClass_ptr1);
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


bool get_TurbineGovernorUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbineGovernorUserDefined* element = dynamic_cast<const TurbineGovernorUserDefined*>(BaseClass_ptr1);
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

const char TurbineGovernorUserDefined::debugName[] = "TurbineGovernorUserDefined";
const char* TurbineGovernorUserDefined::debugString() const
{
	return TurbineGovernorUserDefined::debugName;
}

void TurbineGovernorUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TurbineGovernorUserDefined", &TurbineGovernorUserDefined_factory);
}

void TurbineGovernorUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("TurbineGovernorUserDefined.proprietary", &assign_TurbineGovernorUserDefined_proprietary);
}

void TurbineGovernorUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("TurbineGovernorUserDefined.ProprietaryParameterDynamics", &assign_TurbineGovernorUserDefined_ProprietaryParameterDynamics);
}

void TurbineGovernorUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("TurbineGovernorUserDefined.proprietary", &get_TurbineGovernorUserDefined_proprietary);
}

void TurbineGovernorUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void TurbineGovernorUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool TurbineGovernorUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TurbineGovernorUserDefined" &&
		dynamic_cast<TurbineGovernorUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner TurbineGovernorUserDefined::declare()
{
	return BaseClassDefiner(TurbineGovernorUserDefined::addConstructToMap, TurbineGovernorUserDefined::addPrimitiveAssignFnsToMap, TurbineGovernorUserDefined::addClassAssignFnsToMap, TurbineGovernorUserDefined::debugName);
}

std::map<std::string, AttrDetails> TurbineGovernorUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TurbineGovernorUserDefined_factory()
	{
		return new TurbineGovernorUserDefined;
	}
}
