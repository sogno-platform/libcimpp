/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GroundingImpedance.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GroundingImpedance(),
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
		{ "GroundingImpedance.x", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
	};
    return ClassAttrDetailsMap;
}

GroundingImpedance::GroundingImpedance() {}
GroundingImpedance::~GroundingImpedance() {}

const std::list<std::string>& GroundingImpedance::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GroundingImpedance::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GroundingImpedance::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GroundingImpedance::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GroundingImpedance::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GroundingImpedance::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GroundingImpedance::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GroundingImpedance_x(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GroundingImpedance* element = dynamic_cast<GroundingImpedance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GroundingImpedance_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GroundingImpedance* element = dynamic_cast<const GroundingImpedance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GroundingImpedance::debugName[] = "GroundingImpedance";
const char* GroundingImpedance::debugString() const
{
	return GroundingImpedance::debugName;
}

void GroundingImpedance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GroundingImpedance", &GroundingImpedance_factory);
}

void GroundingImpedance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GroundingImpedance.x", &assign_GroundingImpedance_x);
}

void GroundingImpedance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GroundingImpedance::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EarthFaultCompensator::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GroundingImpedance.x", &get_GroundingImpedance_x);
}

void GroundingImpedance::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EarthFaultCompensator::addClassGetFnsToMap(get_map);
}

void GroundingImpedance::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EarthFaultCompensator::addEnumGetFnsToMap(get_map);
}

bool GroundingImpedance::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GroundingImpedance" &&
		dynamic_cast<GroundingImpedance*>(otherObject) != nullptr;
}

const BaseClassDefiner GroundingImpedance::declare()
{
	return BaseClassDefiner(GroundingImpedance::addConstructToMap, GroundingImpedance::addPrimitiveAssignFnsToMap, GroundingImpedance::addClassAssignFnsToMap, GroundingImpedance::debugName);
}

std::map<std::string, AttrDetails> GroundingImpedance::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EarthFaultCompensator::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GroundingImpedance_factory()
	{
		return new GroundingImpedance;
	}
}
