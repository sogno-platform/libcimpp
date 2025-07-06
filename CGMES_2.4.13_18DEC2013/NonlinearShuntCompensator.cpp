/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "NonlinearShuntCompensator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "NonlinearShuntCompensatorPoint.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		NonlinearShuntCompensator(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "NonlinearShuntCompensator.NonlinearShuntCompensatorPoints", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

NonlinearShuntCompensator::NonlinearShuntCompensator() {}
NonlinearShuntCompensator::~NonlinearShuntCompensator() {}

const std::list<std::string>& NonlinearShuntCompensator::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& NonlinearShuntCompensator::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& NonlinearShuntCompensator::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& NonlinearShuntCompensator::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& NonlinearShuntCompensator::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& NonlinearShuntCompensator::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& NonlinearShuntCompensator::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator(BaseClass*, BaseClass*);
bool assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	NonlinearShuntCompensator* element = dynamic_cast<NonlinearShuntCompensator*>(BaseClass_ptr1);
	NonlinearShuntCompensatorPoint* element2 = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->NonlinearShuntCompensatorPoints.begin(), element->NonlinearShuntCompensatorPoints.end(), element2) == element->NonlinearShuntCompensatorPoints.end())
		{
			element->NonlinearShuntCompensatorPoints.push_back(element2);
			return assign_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char NonlinearShuntCompensator::debugName[] = "NonlinearShuntCompensator";
const char* NonlinearShuntCompensator::debugString() const
{
	return NonlinearShuntCompensator::debugName;
}

void NonlinearShuntCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("NonlinearShuntCompensator", &NonlinearShuntCompensator_factory);
}

void NonlinearShuntCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void NonlinearShuntCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("NonlinearShuntCompensator.NonlinearShuntCompensatorPoints", &assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints);
}

void NonlinearShuntCompensator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ShuntCompensator::addPrimitiveGetFnsToMap(get_map);
}

void NonlinearShuntCompensator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ShuntCompensator::addClassGetFnsToMap(get_map);
}

void NonlinearShuntCompensator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ShuntCompensator::addEnumGetFnsToMap(get_map);
}

bool NonlinearShuntCompensator::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "NonlinearShuntCompensator" &&
		dynamic_cast<NonlinearShuntCompensator*>(otherObject) != nullptr;
}

const BaseClassDefiner NonlinearShuntCompensator::declare()
{
	return BaseClassDefiner(NonlinearShuntCompensator::addConstructToMap, NonlinearShuntCompensator::addPrimitiveAssignFnsToMap, NonlinearShuntCompensator::addClassAssignFnsToMap, NonlinearShuntCompensator::debugName);
}

std::map<std::string, AttrDetails> NonlinearShuntCompensator::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ShuntCompensator::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* NonlinearShuntCompensator_factory()
	{
		return new NonlinearShuntCompensator;
	}
}
