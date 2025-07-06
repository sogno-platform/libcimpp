/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ConformLoadGroup.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ConformLoad.hpp"
#include "ConformLoadSchedule.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ConformLoadGroup(),
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
		{ "ConformLoadGroup.ConformLoadSchedules", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ConformLoadGroup.EnergyConsumers", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ConformLoadGroup::ConformLoadGroup() {}
ConformLoadGroup::~ConformLoadGroup() {}

const std::list<std::string>& ConformLoadGroup::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ConformLoadGroup::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ConformLoadGroup::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ConformLoadGroup::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ConformLoadGroup::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ConformLoadGroup::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ConformLoadGroup::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ConformLoadSchedule_ConformLoadGroup(BaseClass*, BaseClass*);
bool assign_ConformLoadGroup_ConformLoadSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConformLoadGroup* element = dynamic_cast<ConformLoadGroup*>(BaseClass_ptr1);
	ConformLoadSchedule* element2 = dynamic_cast<ConformLoadSchedule*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ConformLoadSchedules.begin(), element->ConformLoadSchedules.end(), element2) == element->ConformLoadSchedules.end())
		{
			element->ConformLoadSchedules.push_back(element2);
			return assign_ConformLoadSchedule_ConformLoadGroup(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ConformLoad_LoadGroup(BaseClass*, BaseClass*);
bool assign_ConformLoadGroup_EnergyConsumers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConformLoadGroup* element = dynamic_cast<ConformLoadGroup*>(BaseClass_ptr1);
	ConformLoad* element2 = dynamic_cast<ConformLoad*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EnergyConsumers.begin(), element->EnergyConsumers.end(), element2) == element->EnergyConsumers.end())
		{
			element->EnergyConsumers.push_back(element2);
			return assign_ConformLoad_LoadGroup(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char ConformLoadGroup::debugName[] = "ConformLoadGroup";
const char* ConformLoadGroup::debugString() const
{
	return ConformLoadGroup::debugName;
}

void ConformLoadGroup::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ConformLoadGroup", &ConformLoadGroup_factory);
}

void ConformLoadGroup::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ConformLoadGroup::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ConformLoadGroup.ConformLoadSchedules", &assign_ConformLoadGroup_ConformLoadSchedules);
	assign_map.emplace("ConformLoadGroup.EnergyConsumers", &assign_ConformLoadGroup_EnergyConsumers);
}

void ConformLoadGroup::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadGroup::addPrimitiveGetFnsToMap(get_map);
}

void ConformLoadGroup::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	LoadGroup::addClassGetFnsToMap(get_map);
}

void ConformLoadGroup::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadGroup::addEnumGetFnsToMap(get_map);
}

bool ConformLoadGroup::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ConformLoadGroup" &&
		dynamic_cast<ConformLoadGroup*>(otherObject) != nullptr;
}

const BaseClassDefiner ConformLoadGroup::declare()
{
	return BaseClassDefiner(ConformLoadGroup::addConstructToMap, ConformLoadGroup::addPrimitiveAssignFnsToMap, ConformLoadGroup::addClassAssignFnsToMap, ConformLoadGroup::debugName);
}

std::map<std::string, AttrDetails> ConformLoadGroup::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = LoadGroup::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ConformLoadGroup_factory()
	{
		return new ConformLoadGroup;
	}
}
