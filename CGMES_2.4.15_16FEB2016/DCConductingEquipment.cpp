/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCConductingEquipment.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCTerminal.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCConductingEquipment(),
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
		{ "DCConductingEquipment.DCTerminals", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

DCConductingEquipment::DCConductingEquipment() {}
DCConductingEquipment::~DCConductingEquipment() {}

const std::list<std::string>& DCConductingEquipment::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCConductingEquipment::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCConductingEquipment::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCConductingEquipment::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCConductingEquipment::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCConductingEquipment::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCConductingEquipment::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DCTerminal_DCConductingEquipment(BaseClass*, BaseClass*);
bool assign_DCConductingEquipment_DCTerminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCConductingEquipment* element = dynamic_cast<DCConductingEquipment*>(BaseClass_ptr1);
	DCTerminal* element2 = dynamic_cast<DCTerminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCTerminals.begin(), element->DCTerminals.end(), element2) == element->DCTerminals.end())
		{
			element->DCTerminals.push_back(element2);
			return assign_DCTerminal_DCConductingEquipment(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char DCConductingEquipment::debugName[] = "DCConductingEquipment";
const char* DCConductingEquipment::debugString() const
{
	return DCConductingEquipment::debugName;
}

void DCConductingEquipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DCConductingEquipment", &DCConductingEquipment_factory);
}

void DCConductingEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCConductingEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DCConductingEquipment.DCTerminals", &assign_DCConductingEquipment_DCTerminals);
}

void DCConductingEquipment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addPrimitiveGetFnsToMap(get_map);
}

void DCConductingEquipment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Equipment::addClassGetFnsToMap(get_map);
}

void DCConductingEquipment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addEnumGetFnsToMap(get_map);
}

bool DCConductingEquipment::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCConductingEquipment" &&
		dynamic_cast<DCConductingEquipment*>(otherObject) != nullptr;
}

const BaseClassDefiner DCConductingEquipment::declare()
{
	return BaseClassDefiner(DCConductingEquipment::addConstructToMap, DCConductingEquipment::addPrimitiveAssignFnsToMap, DCConductingEquipment::addClassAssignFnsToMap, DCConductingEquipment::debugName);
}

std::map<std::string, AttrDetails> DCConductingEquipment::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Equipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCConductingEquipment_factory()
	{
		return new DCConductingEquipment;
	}
}
