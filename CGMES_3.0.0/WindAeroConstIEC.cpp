/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindAeroConstIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindGenTurbineType1aIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindAeroConstIEC(),
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
		{ "WindAeroConstIEC.WindGenTurbineType1aIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindAeroConstIEC::WindAeroConstIEC() : WindGenTurbineType1aIEC(nullptr) {}
WindAeroConstIEC::~WindAeroConstIEC() {}

const std::list<std::string>& WindAeroConstIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindAeroConstIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindAeroConstIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindAeroConstIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindAeroConstIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindAeroConstIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindAeroConstIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindGenTurbineType1aIEC_WindAeroConstIEC(BaseClass*, BaseClass*);
bool assign_WindAeroConstIEC_WindGenTurbineType1aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindAeroConstIEC* element = dynamic_cast<WindAeroConstIEC*>(BaseClass_ptr1);
	WindGenTurbineType1aIEC* element2 = dynamic_cast<WindGenTurbineType1aIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType1aIEC != element2)
		{
			element->WindGenTurbineType1aIEC = element2;
			return assign_WindGenTurbineType1aIEC_WindAeroConstIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char WindAeroConstIEC::debugName[] = "WindAeroConstIEC";
const char* WindAeroConstIEC::debugString() const
{
	return WindAeroConstIEC::debugName;
}

void WindAeroConstIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindAeroConstIEC", &WindAeroConstIEC_factory);
}

void WindAeroConstIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindAeroConstIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindAeroConstIEC.WindGenTurbineType1aIEC", &assign_WindAeroConstIEC_WindGenTurbineType1aIEC);
}

void WindAeroConstIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void WindAeroConstIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindAeroConstIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindAeroConstIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindAeroConstIEC" &&
		dynamic_cast<WindAeroConstIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindAeroConstIEC::declare()
{
	return BaseClassDefiner(WindAeroConstIEC::addConstructToMap, WindAeroConstIEC::addPrimitiveAssignFnsToMap, WindAeroConstIEC::addClassAssignFnsToMap, WindAeroConstIEC::debugName);
}

std::map<std::string, AttrDetails> WindAeroConstIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindAeroConstIEC_factory()
	{
		return new WindAeroConstIEC;
	}
}
