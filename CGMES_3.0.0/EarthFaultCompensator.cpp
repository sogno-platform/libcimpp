/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EarthFaultCompensator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EarthFaultCompensator(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SC,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "EarthFaultCompensator.r", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
	};
    return ClassAttrDetailsMap;
}

EarthFaultCompensator::EarthFaultCompensator() {}
EarthFaultCompensator::~EarthFaultCompensator() {}

const std::list<std::string>& EarthFaultCompensator::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EarthFaultCompensator::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EarthFaultCompensator::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EarthFaultCompensator::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EarthFaultCompensator::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EarthFaultCompensator::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EarthFaultCompensator::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_EarthFaultCompensator_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EarthFaultCompensator* element = dynamic_cast<EarthFaultCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_EarthFaultCompensator_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EarthFaultCompensator* element = dynamic_cast<const EarthFaultCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char EarthFaultCompensator::debugName[] = "EarthFaultCompensator";
const char* EarthFaultCompensator::debugString() const
{
	return EarthFaultCompensator::debugName;
}

void EarthFaultCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("EarthFaultCompensator", &EarthFaultCompensator_factory);
}

void EarthFaultCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("EarthFaultCompensator.r", &assign_EarthFaultCompensator_r);
}

void EarthFaultCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void EarthFaultCompensator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("EarthFaultCompensator.r", &get_EarthFaultCompensator_r);
}

void EarthFaultCompensator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
}

void EarthFaultCompensator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool EarthFaultCompensator::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EarthFaultCompensator" &&
		dynamic_cast<EarthFaultCompensator*>(otherObject) != nullptr;
}

const BaseClassDefiner EarthFaultCompensator::declare()
{
	return BaseClassDefiner(EarthFaultCompensator::addConstructToMap, EarthFaultCompensator::addPrimitiveAssignFnsToMap, EarthFaultCompensator::addClassAssignFnsToMap, EarthFaultCompensator::debugName);
}

std::map<std::string, AttrDetails> EarthFaultCompensator::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EarthFaultCompensator_factory()
	{
		return new EarthFaultCompensator;
	}
}
