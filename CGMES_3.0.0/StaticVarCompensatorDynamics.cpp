/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StaticVarCompensatorDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "StaticVarCompensator.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		StaticVarCompensatorDynamics(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "StaticVarCompensatorDynamics.StaticVarCompensator", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

StaticVarCompensatorDynamics::StaticVarCompensatorDynamics() : StaticVarCompensator(nullptr) {}
StaticVarCompensatorDynamics::~StaticVarCompensatorDynamics() {}

const std::list<std::string>& StaticVarCompensatorDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& StaticVarCompensatorDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& StaticVarCompensatorDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& StaticVarCompensatorDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& StaticVarCompensatorDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& StaticVarCompensatorDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& StaticVarCompensatorDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_StaticVarCompensator_StaticVarCompensatorDynamics(BaseClass*, BaseClass*);
bool assign_StaticVarCompensatorDynamics_StaticVarCompensator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	StaticVarCompensatorDynamics* element = dynamic_cast<StaticVarCompensatorDynamics*>(BaseClass_ptr1);
	StaticVarCompensator* element2 = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->StaticVarCompensator != element2)
		{
			element->StaticVarCompensator = element2;
			return assign_StaticVarCompensator_StaticVarCompensatorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_StaticVarCompensatorDynamics_StaticVarCompensator(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const StaticVarCompensatorDynamics* element = dynamic_cast<const StaticVarCompensatorDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->StaticVarCompensator != 0)
		{
			BaseClass_list.push_back(element->StaticVarCompensator);
			return true;
		}
	}
	return false;
}

const char StaticVarCompensatorDynamics::debugName[] = "StaticVarCompensatorDynamics";
const char* StaticVarCompensatorDynamics::debugString() const
{
	return StaticVarCompensatorDynamics::debugName;
}

void StaticVarCompensatorDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("StaticVarCompensatorDynamics", &StaticVarCompensatorDynamics_factory);
}

void StaticVarCompensatorDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void StaticVarCompensatorDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("StaticVarCompensatorDynamics.StaticVarCompensator", &assign_StaticVarCompensatorDynamics_StaticVarCompensator);
}

void StaticVarCompensatorDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void StaticVarCompensatorDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("StaticVarCompensatorDynamics.StaticVarCompensator", &get_StaticVarCompensatorDynamics_StaticVarCompensator);
}

void StaticVarCompensatorDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool StaticVarCompensatorDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "StaticVarCompensatorDynamics" &&
		dynamic_cast<StaticVarCompensatorDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner StaticVarCompensatorDynamics::declare()
{
	return BaseClassDefiner(StaticVarCompensatorDynamics::addConstructToMap, StaticVarCompensatorDynamics::addPrimitiveAssignFnsToMap, StaticVarCompensatorDynamics::addClassAssignFnsToMap, StaticVarCompensatorDynamics::debugName);
}

std::map<std::string, AttrDetails> StaticVarCompensatorDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* StaticVarCompensatorDynamics_factory()
	{
		return new StaticVarCompensatorDynamics;
	}
}
