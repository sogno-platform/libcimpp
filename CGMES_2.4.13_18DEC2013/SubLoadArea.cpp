/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SubLoadArea.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "LoadArea.hpp"
#include "LoadGroup.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SubLoadArea(),
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
		{ "SubLoadArea.LoadArea", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "SubLoadArea.LoadGroups", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

SubLoadArea::SubLoadArea() : LoadArea(nullptr) {}
SubLoadArea::~SubLoadArea() {}

const std::list<std::string>& SubLoadArea::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SubLoadArea::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SubLoadArea::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SubLoadArea::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SubLoadArea::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SubLoadArea::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SubLoadArea::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_LoadArea_SubLoadAreas(BaseClass*, BaseClass*);
bool assign_SubLoadArea_LoadArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SubLoadArea* element = dynamic_cast<SubLoadArea*>(BaseClass_ptr1);
	LoadArea* element2 = dynamic_cast<LoadArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadArea != element2)
		{
			element->LoadArea = element2;
			return assign_LoadArea_SubLoadAreas(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_LoadGroup_SubLoadArea(BaseClass*, BaseClass*);
bool assign_SubLoadArea_LoadGroups(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SubLoadArea* element = dynamic_cast<SubLoadArea*>(BaseClass_ptr1);
	LoadGroup* element2 = dynamic_cast<LoadGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->LoadGroups.begin(), element->LoadGroups.end(), element2) == element->LoadGroups.end())
		{
			element->LoadGroups.push_back(element2);
			return assign_LoadGroup_SubLoadArea(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_SubLoadArea_LoadArea(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SubLoadArea* element = dynamic_cast<const SubLoadArea*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->LoadArea != 0)
		{
			BaseClass_list.push_back(element->LoadArea);
			return true;
		}
	}
	return false;
}


const char SubLoadArea::debugName[] = "SubLoadArea";
const char* SubLoadArea::debugString() const
{
	return SubLoadArea::debugName;
}

void SubLoadArea::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SubLoadArea", &SubLoadArea_factory);
}

void SubLoadArea::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SubLoadArea::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("SubLoadArea.LoadArea", &assign_SubLoadArea_LoadArea);
	assign_map.emplace("SubLoadArea.LoadGroups", &assign_SubLoadArea_LoadGroups);
}

void SubLoadArea::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyArea::addPrimitiveGetFnsToMap(get_map);
}

void SubLoadArea::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyArea::addClassGetFnsToMap(get_map);
	get_map.emplace("SubLoadArea.LoadArea", &get_SubLoadArea_LoadArea);
}

void SubLoadArea::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyArea::addEnumGetFnsToMap(get_map);
}

bool SubLoadArea::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SubLoadArea" &&
		dynamic_cast<SubLoadArea*>(otherObject) != nullptr;
}

const BaseClassDefiner SubLoadArea::declare()
{
	return BaseClassDefiner(SubLoadArea::addConstructToMap, SubLoadArea::addPrimitiveAssignFnsToMap, SubLoadArea::addClassAssignFnsToMap, SubLoadArea::debugName);
}

std::map<std::string, AttrDetails> SubLoadArea::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EnergyArea::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SubLoadArea_factory()
	{
		return new SubLoadArea;
	}
}
