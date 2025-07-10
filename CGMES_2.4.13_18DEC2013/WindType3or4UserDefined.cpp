/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindType3or4UserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindType3or4UserDefined(),
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
		{ "WindType3or4UserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindType3or4UserDefined.proprietary", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindType3or4UserDefined::WindType3or4UserDefined() {}
WindType3or4UserDefined::~WindType3or4UserDefined() {}

const std::list<std::string>& WindType3or4UserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindType3or4UserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindType3or4UserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindType3or4UserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindType3or4UserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindType3or4UserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindType3or4UserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_WindType3or4UserDefined(BaseClass*, BaseClass*);
bool assign_WindType3or4UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindType3or4UserDefined* element = dynamic_cast<WindType3or4UserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_WindType3or4UserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindType3or4UserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindType3or4UserDefined* element = dynamic_cast<WindType3or4UserDefined*>(BaseClass_ptr1);
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


bool get_WindType3or4UserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindType3or4UserDefined* element = dynamic_cast<const WindType3or4UserDefined*>(BaseClass_ptr1);
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

const char WindType3or4UserDefined::debugName[] = "WindType3or4UserDefined";
const char* WindType3or4UserDefined::debugString() const
{
	return WindType3or4UserDefined::debugName;
}

void WindType3or4UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindType3or4UserDefined", &WindType3or4UserDefined_factory);
}

void WindType3or4UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindType3or4UserDefined.proprietary", &assign_WindType3or4UserDefined_proprietary);
}

void WindType3or4UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindType3or4UserDefined.ProprietaryParameterDynamics", &assign_WindType3or4UserDefined_ProprietaryParameterDynamics);
}

void WindType3or4UserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindType3or4UserDefined.proprietary", &get_WindType3or4UserDefined_proprietary);
}

void WindType3or4UserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType3or4Dynamics::addClassGetFnsToMap(get_map);
}

void WindType3or4UserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4Dynamics::addEnumGetFnsToMap(get_map);
}

bool WindType3or4UserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindType3or4UserDefined" &&
		dynamic_cast<WindType3or4UserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner WindType3or4UserDefined::declare()
{
	return BaseClassDefiner(WindType3or4UserDefined::addConstructToMap, WindType3or4UserDefined::addPrimitiveAssignFnsToMap, WindType3or4UserDefined::addClassAssignFnsToMap, WindType3or4UserDefined::debugName);
}

std::map<std::string, AttrDetails> WindType3or4UserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindTurbineType3or4Dynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindType3or4UserDefined_factory()
	{
		return new WindType3or4UserDefined;
	}
}
