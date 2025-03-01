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

DCTerminal::DCTerminal() : DCConductingEquipment(nullptr) {}
DCTerminal::~DCTerminal() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
	CGMESProfile::TP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DCTerminal.DCConductingEquipment", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
DCTerminal::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCTerminal::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DCBaseTerminal::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:DCTerminal", &DCTerminal_factory);
}

void DCTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:DCTerminal.DCConductingEquipment", &assign_DCTerminal_DCConductingEquipment);
}

void DCTerminal::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCBaseTerminal::addPrimitiveGetFnsToMap(get_map);
}

void DCTerminal::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCBaseTerminal::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:DCTerminal.DCConductingEquipment", &get_DCTerminal_DCConductingEquipment);
}

void DCTerminal::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCBaseTerminal::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCTerminal::declare()
{
	return BaseClassDefiner(DCTerminal::addConstructToMap, DCTerminal::addPrimitiveAssignFnsToMap, DCTerminal::addClassAssignFnsToMap, DCTerminal::debugName);
}

namespace CIMPP
{
	BaseClass* DCTerminal_factory()
	{
		return new DCTerminal;
	}
}
