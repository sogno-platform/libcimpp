/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquivalentShunt.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EquivalentShunt(),
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
		{ "EquivalentShunt.b", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentShunt.g", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

EquivalentShunt::EquivalentShunt() {}
EquivalentShunt::~EquivalentShunt() {}

const std::list<std::string>& EquivalentShunt::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EquivalentShunt::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EquivalentShunt::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EquivalentShunt::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EquivalentShunt::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EquivalentShunt::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EquivalentShunt::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_EquivalentShunt_b(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentShunt* element = dynamic_cast<EquivalentShunt*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentShunt_g(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentShunt* element = dynamic_cast<EquivalentShunt*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->g;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_EquivalentShunt_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentShunt* element = dynamic_cast<const EquivalentShunt*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentShunt_g(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentShunt* element = dynamic_cast<const EquivalentShunt*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->g;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char EquivalentShunt::debugName[] = "EquivalentShunt";
const char* EquivalentShunt::debugString() const
{
	return EquivalentShunt::debugName;
}

void EquivalentShunt::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("EquivalentShunt", &EquivalentShunt_factory);
}

void EquivalentShunt::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("EquivalentShunt.b", &assign_EquivalentShunt_b);
	assign_map.emplace("EquivalentShunt.g", &assign_EquivalentShunt_g);
}

void EquivalentShunt::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void EquivalentShunt::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquivalentEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("EquivalentShunt.b", &get_EquivalentShunt_b);
	get_map.emplace("EquivalentShunt.g", &get_EquivalentShunt_g);
}

void EquivalentShunt::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquivalentEquipment::addClassGetFnsToMap(get_map);
}

void EquivalentShunt::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquivalentEquipment::addEnumGetFnsToMap(get_map);
}

bool EquivalentShunt::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EquivalentShunt" &&
		dynamic_cast<EquivalentShunt*>(otherObject) != nullptr;
}

const BaseClassDefiner EquivalentShunt::declare()
{
	return BaseClassDefiner(EquivalentShunt::addConstructToMap, EquivalentShunt::addPrimitiveAssignFnsToMap, EquivalentShunt::addClassAssignFnsToMap, EquivalentShunt::debugName);
}

std::map<std::string, AttrDetails> EquivalentShunt::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EquivalentEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EquivalentShunt_factory()
	{
		return new EquivalentShunt;
	}
}
