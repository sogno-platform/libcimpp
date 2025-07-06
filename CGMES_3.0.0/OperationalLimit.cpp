/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OperationalLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "OperationalLimitSet.hpp"
#include "OperationalLimitType.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		OperationalLimit(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SSH,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "OperationalLimit.OperationalLimitSet", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "OperationalLimit.OperationalLimitType", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

OperationalLimit::OperationalLimit() : OperationalLimitSet(nullptr), OperationalLimitType(nullptr) {}
OperationalLimit::~OperationalLimit() {}

const std::list<std::string>& OperationalLimit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& OperationalLimit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& OperationalLimit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& OperationalLimit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& OperationalLimit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& OperationalLimit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& OperationalLimit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_OperationalLimitSet_OperationalLimitValue(BaseClass*, BaseClass*);
bool assign_OperationalLimit_OperationalLimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OperationalLimit* element = dynamic_cast<OperationalLimit*>(BaseClass_ptr1);
	OperationalLimitSet* element2 = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->OperationalLimitSet != element2)
		{
			element->OperationalLimitSet = element2;
			return assign_OperationalLimitSet_OperationalLimitValue(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_OperationalLimitType_OperationalLimit(BaseClass*, BaseClass*);
bool assign_OperationalLimit_OperationalLimitType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OperationalLimit* element = dynamic_cast<OperationalLimit*>(BaseClass_ptr1);
	OperationalLimitType* element2 = dynamic_cast<OperationalLimitType*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->OperationalLimitType != element2)
		{
			element->OperationalLimitType = element2;
			return assign_OperationalLimitType_OperationalLimit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_OperationalLimit_OperationalLimitSet(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const OperationalLimit* element = dynamic_cast<const OperationalLimit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->OperationalLimitSet != 0)
		{
			BaseClass_list.push_back(element->OperationalLimitSet);
			return true;
		}
	}
	return false;
}

bool get_OperationalLimit_OperationalLimitType(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const OperationalLimit* element = dynamic_cast<const OperationalLimit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->OperationalLimitType != 0)
		{
			BaseClass_list.push_back(element->OperationalLimitType);
			return true;
		}
	}
	return false;
}

const char OperationalLimit::debugName[] = "OperationalLimit";
const char* OperationalLimit::debugString() const
{
	return OperationalLimit::debugName;
}

void OperationalLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("OperationalLimit", &OperationalLimit_factory);
}

void OperationalLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void OperationalLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("OperationalLimit.OperationalLimitSet", &assign_OperationalLimit_OperationalLimitSet);
	assign_map.emplace("OperationalLimit.OperationalLimitType", &assign_OperationalLimit_OperationalLimitType);
}

void OperationalLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void OperationalLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("OperationalLimit.OperationalLimitSet", &get_OperationalLimit_OperationalLimitSet);
	get_map.emplace("OperationalLimit.OperationalLimitType", &get_OperationalLimit_OperationalLimitType);
}

void OperationalLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool OperationalLimit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "OperationalLimit" &&
		dynamic_cast<OperationalLimit*>(otherObject) != nullptr;
}

const BaseClassDefiner OperationalLimit::declare()
{
	return BaseClassDefiner(OperationalLimit::addConstructToMap, OperationalLimit::addPrimitiveAssignFnsToMap, OperationalLimit::addClassAssignFnsToMap, OperationalLimit::debugName);
}

std::map<std::string, AttrDetails> OperationalLimit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* OperationalLimit_factory()
	{
		return new OperationalLimit;
	}
}
