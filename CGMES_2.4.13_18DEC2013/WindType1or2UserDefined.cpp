/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindType1or2UserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindType1or2UserDefined(),
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
		{ "WindType1or2UserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindType1or2UserDefined.proprietary", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindType1or2UserDefined::WindType1or2UserDefined() {}
WindType1or2UserDefined::~WindType1or2UserDefined() {}

const std::list<std::string>& WindType1or2UserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindType1or2UserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindType1or2UserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindType1or2UserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindType1or2UserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindType1or2UserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindType1or2UserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_WindType1or2UserDefined(BaseClass*, BaseClass*);
bool assign_WindType1or2UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindType1or2UserDefined* element = dynamic_cast<WindType1or2UserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_WindType1or2UserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindType1or2UserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindType1or2UserDefined* element = dynamic_cast<WindType1or2UserDefined*>(BaseClass_ptr1);
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


bool get_WindType1or2UserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindType1or2UserDefined* element = dynamic_cast<const WindType1or2UserDefined*>(BaseClass_ptr1);
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

const char WindType1or2UserDefined::debugName[] = "WindType1or2UserDefined";
const char* WindType1or2UserDefined::debugString() const
{
	return WindType1or2UserDefined::debugName;
}

void WindType1or2UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindType1or2UserDefined", &WindType1or2UserDefined_factory);
}

void WindType1or2UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindType1or2UserDefined.proprietary", &assign_WindType1or2UserDefined_proprietary);
}

void WindType1or2UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindType1or2UserDefined.ProprietaryParameterDynamics", &assign_WindType1or2UserDefined_ProprietaryParameterDynamics);
}

void WindType1or2UserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindType1or2UserDefined.proprietary", &get_WindType1or2UserDefined_proprietary);
}

void WindType1or2UserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType1or2Dynamics::addClassGetFnsToMap(get_map);
}

void WindType1or2UserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2Dynamics::addEnumGetFnsToMap(get_map);
}

bool WindType1or2UserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindType1or2UserDefined" &&
		dynamic_cast<WindType1or2UserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner WindType1or2UserDefined::declare()
{
	return BaseClassDefiner(WindType1or2UserDefined::addConstructToMap, WindType1or2UserDefined::addPrimitiveAssignFnsToMap, WindType1or2UserDefined::addClassAssignFnsToMap, WindType1or2UserDefined::debugName);
}

std::map<std::string, AttrDetails> WindType1or2UserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindTurbineType1or2Dynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindType1or2UserDefined_factory()
	{
		return new WindType1or2UserDefined;
	}
}
