/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ConformLoad.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ConformLoadGroup.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ConformLoad(),
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
		{ "ConformLoad.LoadGroup", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ConformLoad::ConformLoad() : LoadGroup(nullptr) {}
ConformLoad::~ConformLoad() {}

const std::list<std::string>& ConformLoad::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ConformLoad::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ConformLoad::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ConformLoad::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ConformLoad::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ConformLoad::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ConformLoad::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ConformLoadGroup_EnergyConsumers(BaseClass*, BaseClass*);
bool assign_ConformLoad_LoadGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConformLoad* element = dynamic_cast<ConformLoad*>(BaseClass_ptr1);
	ConformLoadGroup* element2 = dynamic_cast<ConformLoadGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadGroup != element2)
		{
			element->LoadGroup = element2;
			return assign_ConformLoadGroup_EnergyConsumers(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_ConformLoad_LoadGroup(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ConformLoad* element = dynamic_cast<const ConformLoad*>(BaseClass_ptr1);
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

const char ConformLoad::debugName[] = "ConformLoad";
const char* ConformLoad::debugString() const
{
	return ConformLoad::debugName;
}

void ConformLoad::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ConformLoad", &ConformLoad_factory);
}

void ConformLoad::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ConformLoad::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ConformLoad.LoadGroup", &assign_ConformLoad_LoadGroup);
}

void ConformLoad::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConsumer::addPrimitiveGetFnsToMap(get_map);
}

void ConformLoad::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyConsumer::addClassGetFnsToMap(get_map);
	get_map.emplace("ConformLoad.LoadGroup", &get_ConformLoad_LoadGroup);
}

void ConformLoad::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConsumer::addEnumGetFnsToMap(get_map);
}

bool ConformLoad::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ConformLoad" &&
		dynamic_cast<ConformLoad*>(otherObject) != nullptr;
}

const BaseClassDefiner ConformLoad::declare()
{
	return BaseClassDefiner(ConformLoad::addConstructToMap, ConformLoad::addPrimitiveAssignFnsToMap, ConformLoad::addClassAssignFnsToMap, ConformLoad::debugName);
}

std::map<std::string, AttrDetails> ConformLoad::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EnergyConsumer::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ConformLoad_factory()
	{
		return new ConformLoad;
	}
}
