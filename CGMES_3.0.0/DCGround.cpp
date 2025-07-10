/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCGround.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCGround(),
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
		{ "DCGround.inductance", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "DCGround.r", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

DCGround::DCGround() {}
DCGround::~DCGround() {}

const std::list<std::string>& DCGround::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCGround::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCGround::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCGround::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCGround::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCGround::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCGround::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DCGround_inductance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCGround* element = dynamic_cast<DCGround*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inductance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DCGround_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCGround* element = dynamic_cast<DCGround*>(BaseClass_ptr1);
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

bool get_DCGround_inductance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCGround* element = dynamic_cast<const DCGround*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inductance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DCGround_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCGround* element = dynamic_cast<const DCGround*>(BaseClass_ptr1);
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

const char DCGround::debugName[] = "DCGround";
const char* DCGround::debugString() const
{
	return DCGround::debugName;
}

void DCGround::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DCGround", &DCGround_factory);
}

void DCGround::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("DCGround.inductance", &assign_DCGround_inductance);
	assign_map.emplace("DCGround.r", &assign_DCGround_r);
}

void DCGround::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCGround::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("DCGround.inductance", &get_DCGround_inductance);
	get_map.emplace("DCGround.r", &get_DCGround_r);
}

void DCGround::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCConductingEquipment::addClassGetFnsToMap(get_map);
}

void DCGround::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool DCGround::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCGround" &&
		dynamic_cast<DCGround*>(otherObject) != nullptr;
}

const BaseClassDefiner DCGround::declare()
{
	return BaseClassDefiner(DCGround::addConstructToMap, DCGround::addPrimitiveAssignFnsToMap, DCGround::addClassAssignFnsToMap, DCGround::debugName);
}

std::map<std::string, AttrDetails> DCGround::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DCConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCGround_factory()
	{
		return new DCGround;
	}
}
