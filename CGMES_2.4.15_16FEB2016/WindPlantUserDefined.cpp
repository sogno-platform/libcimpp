/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindPlantUserDefined(),
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
		{ "WindPlantUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantUserDefined.proprietary", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindPlantUserDefined::WindPlantUserDefined() {}
WindPlantUserDefined::~WindPlantUserDefined() {}

const std::list<std::string>& WindPlantUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindPlantUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindPlantUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindPlantUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindPlantUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindPlantUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindPlantUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_WindPlantUserDefined(BaseClass*, BaseClass*);
bool assign_WindPlantUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantUserDefined* element = dynamic_cast<WindPlantUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_WindPlantUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantUserDefined* element = dynamic_cast<WindPlantUserDefined*>(BaseClass_ptr1);
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


bool get_WindPlantUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantUserDefined* element = dynamic_cast<const WindPlantUserDefined*>(BaseClass_ptr1);
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

const char WindPlantUserDefined::debugName[] = "WindPlantUserDefined";
const char* WindPlantUserDefined::debugString() const
{
	return WindPlantUserDefined::debugName;
}

void WindPlantUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindPlantUserDefined", &WindPlantUserDefined_factory);
}

void WindPlantUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindPlantUserDefined.proprietary", &assign_WindPlantUserDefined_proprietary);
}

void WindPlantUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindPlantUserDefined.ProprietaryParameterDynamics", &assign_WindPlantUserDefined_ProprietaryParameterDynamics);
}

void WindPlantUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindPlantDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindPlantUserDefined.proprietary", &get_WindPlantUserDefined_proprietary);
}

void WindPlantUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindPlantDynamics::addClassGetFnsToMap(get_map);
}

void WindPlantUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindPlantDynamics::addEnumGetFnsToMap(get_map);
}

bool WindPlantUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindPlantUserDefined" &&
		dynamic_cast<WindPlantUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner WindPlantUserDefined::declare()
{
	return BaseClassDefiner(WindPlantUserDefined::addConstructToMap, WindPlantUserDefined::addPrimitiveAssignFnsToMap, WindPlantUserDefined::addClassAssignFnsToMap, WindPlantUserDefined::debugName);
}

std::map<std::string, AttrDetails> WindPlantUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindPlantDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindPlantUserDefined_factory()
	{
		return new WindPlantUserDefined;
	}
}
