/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadArea.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SubLoadArea.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		LoadArea(),
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
		{ "LoadArea.SubLoadAreas", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

LoadArea::LoadArea() {}
LoadArea::~LoadArea() {}

const std::list<std::string>& LoadArea::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& LoadArea::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& LoadArea::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& LoadArea::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& LoadArea::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& LoadArea::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& LoadArea::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SubLoadArea_LoadArea(BaseClass*, BaseClass*);
bool assign_LoadArea_SubLoadAreas(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadArea* element = dynamic_cast<LoadArea*>(BaseClass_ptr1);
	SubLoadArea* element2 = dynamic_cast<SubLoadArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->SubLoadAreas.begin(), element->SubLoadAreas.end(), element2) == element->SubLoadAreas.end())
		{
			element->SubLoadAreas.push_back(element2);
			return assign_SubLoadArea_LoadArea(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char LoadArea::debugName[] = "LoadArea";
const char* LoadArea::debugString() const
{
	return LoadArea::debugName;
}

void LoadArea::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("LoadArea", &LoadArea_factory);
}

void LoadArea::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LoadArea::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("LoadArea.SubLoadAreas", &assign_LoadArea_SubLoadAreas);
}

void LoadArea::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyArea::addPrimitiveGetFnsToMap(get_map);
}

void LoadArea::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyArea::addClassGetFnsToMap(get_map);
}

void LoadArea::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyArea::addEnumGetFnsToMap(get_map);
}

bool LoadArea::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "LoadArea" &&
		dynamic_cast<LoadArea*>(otherObject) != nullptr;
}

const BaseClassDefiner LoadArea::declare()
{
	return BaseClassDefiner(LoadArea::addConstructToMap, LoadArea::addPrimitiveAssignFnsToMap, LoadArea::addClassAssignFnsToMap, LoadArea::debugName);
}

std::map<std::string, AttrDetails> LoadArea::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EnergyArea::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* LoadArea_factory()
	{
		return new LoadArea;
	}
}
