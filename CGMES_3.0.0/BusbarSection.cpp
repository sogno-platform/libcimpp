/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BusbarSection.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		BusbarSection(),
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
		{ "BusbarSection.ipMax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
	};
    return ClassAttrDetailsMap;
}

BusbarSection::BusbarSection() {}
BusbarSection::~BusbarSection() {}

const std::list<std::string>& BusbarSection::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& BusbarSection::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& BusbarSection::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& BusbarSection::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& BusbarSection::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& BusbarSection::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& BusbarSection::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_BusbarSection_ipMax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BusbarSection* element = dynamic_cast<BusbarSection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ipMax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_BusbarSection_ipMax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BusbarSection* element = dynamic_cast<const BusbarSection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ipMax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char BusbarSection::debugName[] = "BusbarSection";
const char* BusbarSection::debugString() const
{
	return BusbarSection::debugName;
}

void BusbarSection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("BusbarSection", &BusbarSection_factory);
}

void BusbarSection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("BusbarSection.ipMax", &assign_BusbarSection_ipMax);
}

void BusbarSection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void BusbarSection::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Connector::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("BusbarSection.ipMax", &get_BusbarSection_ipMax);
}

void BusbarSection::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Connector::addClassGetFnsToMap(get_map);
}

void BusbarSection::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Connector::addEnumGetFnsToMap(get_map);
}

bool BusbarSection::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "BusbarSection" &&
		dynamic_cast<BusbarSection*>(otherObject) != nullptr;
}

const BaseClassDefiner BusbarSection::declare()
{
	return BaseClassDefiner(BusbarSection::addConstructToMap, BusbarSection::addPrimitiveAssignFnsToMap, BusbarSection::addClassAssignFnsToMap, BusbarSection::debugName);
}

std::map<std::string, AttrDetails> BusbarSection::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Connector::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* BusbarSection_factory()
	{
		return new BusbarSection;
	}
}
