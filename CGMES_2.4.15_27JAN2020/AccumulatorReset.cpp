/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AccumulatorReset.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AccumulatorValue.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AccumulatorReset(),
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
		{ "AccumulatorReset.AccumulatorValue", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

AccumulatorReset::AccumulatorReset() : AccumulatorValue(nullptr) {}
AccumulatorReset::~AccumulatorReset() {}

const std::list<std::string>& AccumulatorReset::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AccumulatorReset::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AccumulatorReset::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AccumulatorReset::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AccumulatorReset::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AccumulatorReset::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AccumulatorReset::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_AccumulatorValue_AccumulatorReset(BaseClass*, BaseClass*);
bool assign_AccumulatorReset_AccumulatorValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AccumulatorReset* element = dynamic_cast<AccumulatorReset*>(BaseClass_ptr1);
	AccumulatorValue* element2 = dynamic_cast<AccumulatorValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AccumulatorValue != element2)
		{
			element->AccumulatorValue = element2;
			return assign_AccumulatorValue_AccumulatorReset(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_AccumulatorReset_AccumulatorValue(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AccumulatorReset* element = dynamic_cast<const AccumulatorReset*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->AccumulatorValue != 0)
		{
			BaseClass_list.push_back(element->AccumulatorValue);
			return true;
		}
	}
	return false;
}

const char AccumulatorReset::debugName[] = "AccumulatorReset";
const char* AccumulatorReset::debugString() const
{
	return AccumulatorReset::debugName;
}

void AccumulatorReset::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("AccumulatorReset", &AccumulatorReset_factory);
}

void AccumulatorReset::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void AccumulatorReset::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("AccumulatorReset.AccumulatorValue", &assign_AccumulatorReset_AccumulatorValue);
}

void AccumulatorReset::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Control::addPrimitiveGetFnsToMap(get_map);
}

void AccumulatorReset::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Control::addClassGetFnsToMap(get_map);
	get_map.emplace("AccumulatorReset.AccumulatorValue", &get_AccumulatorReset_AccumulatorValue);
}

void AccumulatorReset::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Control::addEnumGetFnsToMap(get_map);
}

bool AccumulatorReset::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AccumulatorReset" &&
		dynamic_cast<AccumulatorReset*>(otherObject) != nullptr;
}

const BaseClassDefiner AccumulatorReset::declare()
{
	return BaseClassDefiner(AccumulatorReset::addConstructToMap, AccumulatorReset::addPrimitiveAssignFnsToMap, AccumulatorReset::addClassAssignFnsToMap, AccumulatorReset::debugName);
}

std::map<std::string, AttrDetails> AccumulatorReset::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Control::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AccumulatorReset_factory()
	{
		return new AccumulatorReset;
	}
}
