/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ACDCConverterDCTerminal.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ACDCConverter.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ACDCConverterDCTerminal(),
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
		{ "ACDCConverterDCTerminal.DCConductingEquipment", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACDCConverterDCTerminal.polarity", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ACDCConverterDCTerminal::ACDCConverterDCTerminal() : DCConductingEquipment(nullptr) {}
ACDCConverterDCTerminal::~ACDCConverterDCTerminal() {}

const std::list<std::string>& ACDCConverterDCTerminal::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ACDCConverterDCTerminal::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ACDCConverterDCTerminal::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ACDCConverterDCTerminal::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ACDCConverterDCTerminal::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ACDCConverterDCTerminal::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ACDCConverterDCTerminal::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ACDCConverter_DCTerminals(BaseClass*, BaseClass*);
bool assign_ACDCConverterDCTerminal_DCConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ACDCConverterDCTerminal* element = dynamic_cast<ACDCConverterDCTerminal*>(BaseClass_ptr1);
	ACDCConverter* element2 = dynamic_cast<ACDCConverter*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DCConductingEquipment != element2)
		{
			element->DCConductingEquipment = element2;
			return assign_ACDCConverter_DCTerminals(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ACDCConverterDCTerminal_polarity(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverterDCTerminal* element = dynamic_cast<ACDCConverterDCTerminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->polarity;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ACDCConverterDCTerminal_DCConductingEquipment(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ACDCConverterDCTerminal* element = dynamic_cast<const ACDCConverterDCTerminal*>(BaseClass_ptr1);
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

bool get_ACDCConverterDCTerminal_polarity(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverterDCTerminal* element = dynamic_cast<const ACDCConverterDCTerminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->polarity;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ACDCConverterDCTerminal::debugName[] = "ACDCConverterDCTerminal";
const char* ACDCConverterDCTerminal::debugString() const
{
	return ACDCConverterDCTerminal::debugName;
}

void ACDCConverterDCTerminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ACDCConverterDCTerminal", &ACDCConverterDCTerminal_factory);
}

void ACDCConverterDCTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ACDCConverterDCTerminal.polarity", &assign_ACDCConverterDCTerminal_polarity);
}

void ACDCConverterDCTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ACDCConverterDCTerminal.DCConductingEquipment", &assign_ACDCConverterDCTerminal_DCConductingEquipment);
}

void ACDCConverterDCTerminal::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCBaseTerminal::addPrimitiveGetFnsToMap(get_map);
}

void ACDCConverterDCTerminal::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCBaseTerminal::addClassGetFnsToMap(get_map);
	get_map.emplace("ACDCConverterDCTerminal.DCConductingEquipment", &get_ACDCConverterDCTerminal_DCConductingEquipment);
}

void ACDCConverterDCTerminal::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCBaseTerminal::addEnumGetFnsToMap(get_map);
	get_map.emplace("ACDCConverterDCTerminal.polarity", &get_ACDCConverterDCTerminal_polarity);
}

bool ACDCConverterDCTerminal::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ACDCConverterDCTerminal" &&
		dynamic_cast<ACDCConverterDCTerminal*>(otherObject) != nullptr;
}

const BaseClassDefiner ACDCConverterDCTerminal::declare()
{
	return BaseClassDefiner(ACDCConverterDCTerminal::addConstructToMap, ACDCConverterDCTerminal::addPrimitiveAssignFnsToMap, ACDCConverterDCTerminal::addClassAssignFnsToMap, ACDCConverterDCTerminal::debugName);
}

std::map<std::string, AttrDetails> ACDCConverterDCTerminal::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DCBaseTerminal::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ACDCConverterDCTerminal_factory()
	{
		return new ACDCConverterDCTerminal;
	}
}
