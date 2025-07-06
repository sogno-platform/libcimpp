/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadGroup.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SubLoadArea.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		LoadGroup(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "LoadGroup.SubLoadArea", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

LoadGroup::LoadGroup() : SubLoadArea(nullptr) {}
LoadGroup::~LoadGroup() {}

const std::list<std::string>& LoadGroup::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& LoadGroup::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& LoadGroup::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& LoadGroup::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& LoadGroup::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& LoadGroup::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& LoadGroup::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SubLoadArea_LoadGroups(BaseClass*, BaseClass*);
bool assign_LoadGroup_SubLoadArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadGroup* element = dynamic_cast<LoadGroup*>(BaseClass_ptr1);
	SubLoadArea* element2 = dynamic_cast<SubLoadArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SubLoadArea != element2)
		{
			element->SubLoadArea = element2;
			return assign_SubLoadArea_LoadGroups(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_LoadGroup_SubLoadArea(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const LoadGroup* element = dynamic_cast<const LoadGroup*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->SubLoadArea != 0)
		{
			BaseClass_list.push_back(element->SubLoadArea);
			return true;
		}
	}
	return false;
}

const char LoadGroup::debugName[] = "LoadGroup";
const char* LoadGroup::debugString() const
{
	return LoadGroup::debugName;
}

void LoadGroup::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("LoadGroup", &LoadGroup_factory);
}

void LoadGroup::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LoadGroup::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("LoadGroup.SubLoadArea", &assign_LoadGroup_SubLoadArea);
}

void LoadGroup::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void LoadGroup::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("LoadGroup.SubLoadArea", &get_LoadGroup_SubLoadArea);
}

void LoadGroup::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool LoadGroup::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "LoadGroup" &&
		dynamic_cast<LoadGroup*>(otherObject) != nullptr;
}

const BaseClassDefiner LoadGroup::declare()
{
	return BaseClassDefiner(LoadGroup::addConstructToMap, LoadGroup::addPrimitiveAssignFnsToMap, LoadGroup::addClassAssignFnsToMap, LoadGroup::debugName);
}

std::map<std::string, AttrDetails> LoadGroup::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* LoadGroup_factory()
	{
		return new LoadGroup;
	}
}
