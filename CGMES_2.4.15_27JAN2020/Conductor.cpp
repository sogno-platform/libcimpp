/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Conductor.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Conductor(),
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
		{ "Conductor.length", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

Conductor::Conductor() {}
Conductor::~Conductor() {}

const std::list<std::string>& Conductor::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Conductor::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Conductor::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Conductor::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Conductor::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Conductor::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Conductor::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Conductor_length(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Conductor* element = dynamic_cast<Conductor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->length;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Conductor_length(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Conductor* element = dynamic_cast<const Conductor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->length;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Conductor::debugName[] = "Conductor";
const char* Conductor::debugString() const
{
	return Conductor::debugName;
}

void Conductor::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Conductor", &Conductor_factory);
}

void Conductor::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("Conductor.length", &assign_Conductor_length);
}

void Conductor::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Conductor::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("Conductor.length", &get_Conductor_length);
}

void Conductor::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
}

void Conductor::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool Conductor::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Conductor" &&
		dynamic_cast<Conductor*>(otherObject) != nullptr;
}

const BaseClassDefiner Conductor::declare()
{
	return BaseClassDefiner(Conductor::addConstructToMap, Conductor::addPrimitiveAssignFnsToMap, Conductor::addClassAssignFnsToMap, Conductor::debugName);
}

std::map<std::string, AttrDetails> Conductor::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Conductor_factory()
	{
		return new Conductor;
	}
}
