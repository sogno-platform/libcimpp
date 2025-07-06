/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "NonConformLoad.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "NonConformLoadGroup.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		NonConformLoad(),
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
		{ "NonConformLoad.LoadGroup", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

NonConformLoad::NonConformLoad() : LoadGroup(nullptr) {}
NonConformLoad::~NonConformLoad() {}

const std::list<std::string>& NonConformLoad::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& NonConformLoad::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& NonConformLoad::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& NonConformLoad::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& NonConformLoad::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& NonConformLoad::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& NonConformLoad::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_NonConformLoadGroup_EnergyConsumers(BaseClass*, BaseClass*);
bool assign_NonConformLoad_LoadGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	NonConformLoad* element = dynamic_cast<NonConformLoad*>(BaseClass_ptr1);
	NonConformLoadGroup* element2 = dynamic_cast<NonConformLoadGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadGroup != element2)
		{
			element->LoadGroup = element2;
			return assign_NonConformLoadGroup_EnergyConsumers(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_NonConformLoad_LoadGroup(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const NonConformLoad* element = dynamic_cast<const NonConformLoad*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->LoadGroup != 0)
		{
			BaseClass_list.push_back(element->LoadGroup);
			return true;
		}
	}
	return false;
}

const char NonConformLoad::debugName[] = "NonConformLoad";
const char* NonConformLoad::debugString() const
{
	return NonConformLoad::debugName;
}

void NonConformLoad::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("NonConformLoad", &NonConformLoad_factory);
}

void NonConformLoad::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void NonConformLoad::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("NonConformLoad.LoadGroup", &assign_NonConformLoad_LoadGroup);
}

void NonConformLoad::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConsumer::addPrimitiveGetFnsToMap(get_map);
}

void NonConformLoad::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyConsumer::addClassGetFnsToMap(get_map);
	get_map.emplace("NonConformLoad.LoadGroup", &get_NonConformLoad_LoadGroup);
}

void NonConformLoad::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConsumer::addEnumGetFnsToMap(get_map);
}

bool NonConformLoad::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "NonConformLoad" &&
		dynamic_cast<NonConformLoad*>(otherObject) != nullptr;
}

const BaseClassDefiner NonConformLoad::declare()
{
	return BaseClassDefiner(NonConformLoad::addConstructToMap, NonConformLoad::addPrimitiveAssignFnsToMap, NonConformLoad::addClassAssignFnsToMap, NonConformLoad::debugName);
}

std::map<std::string, AttrDetails> NonConformLoad::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EnergyConsumer::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* NonConformLoad_factory()
	{
		return new NonConformLoad;
	}
}
