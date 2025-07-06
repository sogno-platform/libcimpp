/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Bay.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "VoltageLevel.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Bay(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::EQBD,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "Bay.VoltageLevel", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
	};
    return ClassAttrDetailsMap;
}

Bay::Bay() : VoltageLevel(nullptr) {}
Bay::~Bay() {}

const std::list<std::string>& Bay::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Bay::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Bay::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Bay::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Bay::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Bay::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Bay::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_VoltageLevel_Bays(BaseClass*, BaseClass*);
bool assign_Bay_VoltageLevel(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Bay* element = dynamic_cast<Bay*>(BaseClass_ptr1);
	VoltageLevel* element2 = dynamic_cast<VoltageLevel*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VoltageLevel != element2)
		{
			element->VoltageLevel = element2;
			return assign_VoltageLevel_Bays(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_Bay_VoltageLevel(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Bay* element = dynamic_cast<const Bay*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->VoltageLevel != 0)
		{
			BaseClass_list.push_back(element->VoltageLevel);
			return true;
		}
	}
	return false;
}

const char Bay::debugName[] = "Bay";
const char* Bay::debugString() const
{
	return Bay::debugName;
}

void Bay::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Bay", &Bay_factory);
}

void Bay::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Bay::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Bay.VoltageLevel", &assign_Bay_VoltageLevel);
}

void Bay::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addPrimitiveGetFnsToMap(get_map);
}

void Bay::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquipmentContainer::addClassGetFnsToMap(get_map);
	get_map.emplace("Bay.VoltageLevel", &get_Bay_VoltageLevel);
}

void Bay::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addEnumGetFnsToMap(get_map);
}

bool Bay::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Bay" &&
		dynamic_cast<Bay*>(otherObject) != nullptr;
}

const BaseClassDefiner Bay::declare()
{
	return BaseClassDefiner(Bay::addConstructToMap, Bay::addPrimitiveAssignFnsToMap, Bay::addClassAssignFnsToMap, Bay::debugName);
}

std::map<std::string, AttrDetails> Bay::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EquipmentContainer::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Bay_factory()
	{
		return new Bay;
	}
}
