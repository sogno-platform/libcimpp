/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LimitSet.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		LimitSet(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "LimitSet.isPercentageLimits", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

LimitSet::LimitSet() {}
LimitSet::~LimitSet() {}

const std::list<std::string>& LimitSet::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& LimitSet::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& LimitSet::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& LimitSet::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& LimitSet::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& LimitSet::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& LimitSet::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_LimitSet_isPercentageLimits(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LimitSet* element = dynamic_cast<LimitSet*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->isPercentageLimits;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_LimitSet_isPercentageLimits(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LimitSet* element = dynamic_cast<const LimitSet*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->isPercentageLimits;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char LimitSet::debugName[] = "LimitSet";
const char* LimitSet::debugString() const
{
	return LimitSet::debugName;
}

void LimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("LimitSet", &LimitSet_factory);
}

void LimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("LimitSet.isPercentageLimits", &assign_LimitSet_isPercentageLimits);
}

void LimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void LimitSet::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("LimitSet.isPercentageLimits", &get_LimitSet_isPercentageLimits);
}

void LimitSet::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void LimitSet::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool LimitSet::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "LimitSet" &&
		dynamic_cast<LimitSet*>(otherObject) != nullptr;
}

const BaseClassDefiner LimitSet::declare()
{
	return BaseClassDefiner(LimitSet::addConstructToMap, LimitSet::addPrimitiveAssignFnsToMap, LimitSet::addClassAssignFnsToMap, LimitSet::debugName);
}

std::map<std::string, AttrDetails> LimitSet::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* LimitSet_factory()
	{
		return new LimitSet;
	}
}
