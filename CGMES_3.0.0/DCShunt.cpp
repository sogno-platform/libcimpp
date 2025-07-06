/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCShunt.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCShunt(),
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
		{ "DCShunt.capacitance", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "DCShunt.resistance", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

DCShunt::DCShunt() {}
DCShunt::~DCShunt() {}

const std::list<std::string>& DCShunt::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCShunt::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCShunt::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCShunt::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCShunt::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCShunt::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCShunt::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DCShunt_capacitance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCShunt* element = dynamic_cast<DCShunt*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->capacitance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DCShunt_resistance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCShunt* element = dynamic_cast<DCShunt*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->resistance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_DCShunt_capacitance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCShunt* element = dynamic_cast<const DCShunt*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->capacitance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DCShunt_resistance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCShunt* element = dynamic_cast<const DCShunt*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->resistance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char DCShunt::debugName[] = "DCShunt";
const char* DCShunt::debugString() const
{
	return DCShunt::debugName;
}

void DCShunt::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DCShunt", &DCShunt_factory);
}

void DCShunt::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("DCShunt.capacitance", &assign_DCShunt_capacitance);
	assign_map.emplace("DCShunt.resistance", &assign_DCShunt_resistance);
}

void DCShunt::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCShunt::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("DCShunt.capacitance", &get_DCShunt_capacitance);
	get_map.emplace("DCShunt.resistance", &get_DCShunt_resistance);
}

void DCShunt::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCConductingEquipment::addClassGetFnsToMap(get_map);
}

void DCShunt::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool DCShunt::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCShunt" &&
		dynamic_cast<DCShunt*>(otherObject) != nullptr;
}

const BaseClassDefiner DCShunt::declare()
{
	return BaseClassDefiner(DCShunt::addConstructToMap, DCShunt::addPrimitiveAssignFnsToMap, DCShunt::addClassAssignFnsToMap, DCShunt::debugName);
}

std::map<std::string, AttrDetails> DCShunt::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DCConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCShunt_factory()
	{
		return new DCShunt;
	}
}
