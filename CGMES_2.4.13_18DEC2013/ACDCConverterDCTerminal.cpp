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

ACDCConverterDCTerminal::ACDCConverterDCTerminal() : DCConductingEquipment(nullptr) {}
ACDCConverterDCTerminal::~ACDCConverterDCTerminal() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ACDCConverterDCTerminal.DCConductingEquipment", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverterDCTerminal.polarity", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
ACDCConverterDCTerminal::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ACDCConverterDCTerminal::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DCBaseTerminal::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:ACDCConverterDCTerminal", &ACDCConverterDCTerminal_factory);
}

void ACDCConverterDCTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ACDCConverterDCTerminal.polarity", &assign_ACDCConverterDCTerminal_polarity);
}

void ACDCConverterDCTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:ACDCConverterDCTerminal.DCConductingEquipment", &assign_ACDCConverterDCTerminal_DCConductingEquipment);
}

void ACDCConverterDCTerminal::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCBaseTerminal::addPrimitiveGetFnsToMap(get_map);
}

void ACDCConverterDCTerminal::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCBaseTerminal::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:ACDCConverterDCTerminal.DCConductingEquipment", &get_ACDCConverterDCTerminal_DCConductingEquipment);
}

void ACDCConverterDCTerminal::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCBaseTerminal::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:ACDCConverterDCTerminal.polarity", &get_ACDCConverterDCTerminal_polarity);
}

const BaseClassDefiner ACDCConverterDCTerminal::declare()
{
	return BaseClassDefiner(ACDCConverterDCTerminal::addConstructToMap, ACDCConverterDCTerminal::addPrimitiveAssignFnsToMap, ACDCConverterDCTerminal::addClassAssignFnsToMap, ACDCConverterDCTerminal::debugName);
}

namespace CIMPP
{
	BaseClass* ACDCConverterDCTerminal_factory()
	{
		return new ACDCConverterDCTerminal;
	}
}
