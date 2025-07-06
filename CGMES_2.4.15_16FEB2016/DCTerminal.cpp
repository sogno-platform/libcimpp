/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCTerminal.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCConductingEquipment.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCTerminal(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SSH,
			CGMESProfile::TP,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "DCTerminal.DCConductingEquipment", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

DCTerminal::DCTerminal() : DCConductingEquipment(nullptr) {}
DCTerminal::~DCTerminal() {}

const std::list<std::string>& DCTerminal::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCTerminal::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCTerminal::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCTerminal::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCTerminal::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCTerminal::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCTerminal::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DCConductingEquipment_DCTerminals(BaseClass*, BaseClass*);
bool assign_DCTerminal_DCConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCTerminal* element = dynamic_cast<DCTerminal*>(BaseClass_ptr1);
	DCConductingEquipment* element2 = dynamic_cast<DCConductingEquipment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DCConductingEquipment != element2)
		{
			element->DCConductingEquipment = element2;
			return assign_DCConductingEquipment_DCTerminals(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_DCTerminal_DCConductingEquipment(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DCTerminal* element = dynamic_cast<const DCTerminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->DCConductingEquipment != 0)
		{
			BaseClass_list.push_back(element->DCConductingEquipment);
			return true;
		}
	}
	return false;
}

const char DCTerminal::debugName[] = "DCTerminal";
const char* DCTerminal::debugString() const
{
	return DCTerminal::debugName;
}

void DCTerminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DCTerminal", &DCTerminal_factory);
}

void DCTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DCTerminal.DCConductingEquipment", &assign_DCTerminal_DCConductingEquipment);
}

void DCTerminal::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCBaseTerminal::addPrimitiveGetFnsToMap(get_map);
}

void DCTerminal::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCBaseTerminal::addClassGetFnsToMap(get_map);
	get_map.emplace("DCTerminal.DCConductingEquipment", &get_DCTerminal_DCConductingEquipment);
}

void DCTerminal::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCBaseTerminal::addEnumGetFnsToMap(get_map);
}

bool DCTerminal::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCTerminal" &&
		dynamic_cast<DCTerminal*>(otherObject) != nullptr;
}

const BaseClassDefiner DCTerminal::declare()
{
	return BaseClassDefiner(DCTerminal::addConstructToMap, DCTerminal::addPrimitiveAssignFnsToMap, DCTerminal::addClassAssignFnsToMap, DCTerminal::debugName);
}

std::map<std::string, AttrDetails> DCTerminal::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DCBaseTerminal::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCTerminal_factory()
	{
		return new DCTerminal;
	}
}
