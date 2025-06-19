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

DCConductingEquipment::DCConductingEquipment() {}
DCConductingEquipment::~DCConductingEquipment() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DCConductingEquipment.DCTerminals", { CGMESProfile::EQ, } },
	{ "cim:DCConductingEquipment.ratedUdc", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
DCConductingEquipment::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCConductingEquipment::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Equipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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

bool assign_DCConductingEquipment_ratedUdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCConductingEquipment* element = dynamic_cast<DCConductingEquipment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedUdc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_DCConductingEquipment_ratedUdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCConductingEquipment* element = dynamic_cast<const DCConductingEquipment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedUdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char DCConductingEquipment::debugName[] = "DCConductingEquipment";
const char* DCConductingEquipment::debugString() const
{
	return DCConductingEquipment::debugName;
}

void DCConductingEquipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DCConductingEquipment", &DCConductingEquipment_factory);
}

void DCConductingEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:DCConductingEquipment.ratedUdc", &assign_DCConductingEquipment_ratedUdc);
}

void DCConductingEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:DCConductingEquipment.DCTerminals", &assign_DCConductingEquipment_DCTerminals);
}

void DCConductingEquipment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:DCConductingEquipment.ratedUdc", &get_DCConductingEquipment_ratedUdc);
}

void DCConductingEquipment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Equipment::addClassGetFnsToMap(get_map);
}

void DCConductingEquipment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCConductingEquipment::declare()
{
	return BaseClassDefiner(DCConductingEquipment::addConstructToMap, DCConductingEquipment::addPrimitiveAssignFnsToMap, DCConductingEquipment::addClassAssignFnsToMap, DCConductingEquipment::debugName);
}

namespace CIMPP
{
	BaseClass* DCConductingEquipment_factory()
	{
		return new DCConductingEquipment;
	}
}
