/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCShunt.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Capacitance.hpp"
#include "Voltage.hpp"
#include "Resistance.hpp"

using namespace CIMPP;

DCShunt::DCShunt() {};
DCShunt::~DCShunt() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DCShunt.capacitance", { CGMESProfile::EQ, } },
	{ "cim:DCShunt.ratedUdc", { CGMESProfile::EQ, } },
	{ "cim:DCShunt.resistance", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
DCShunt::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCShunt::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DCConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_DCShunt_capacitance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DCShunt* element = dynamic_cast<DCShunt*>(BaseClass_ptr1))
	{
		buffer >> element->capacitance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DCShunt_ratedUdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DCShunt* element = dynamic_cast<DCShunt*>(BaseClass_ptr1))
	{
		buffer >> element->ratedUdc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DCShunt_resistance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DCShunt* element = dynamic_cast<DCShunt*>(BaseClass_ptr1))
	{
		buffer >> element->resistance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_DCShunt_capacitance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DCShunt* element = dynamic_cast<const DCShunt*>(BaseClass_ptr1))
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

bool get_DCShunt_ratedUdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DCShunt* element = dynamic_cast<const DCShunt*>(BaseClass_ptr1))
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

bool get_DCShunt_resistance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DCShunt* element = dynamic_cast<const DCShunt*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:DCShunt"), &DCShunt_factory));
}

void DCShunt::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DCShunt.capacitance"), &assign_DCShunt_capacitance));
	assign_map.insert(std::make_pair(std::string("cim:DCShunt.ratedUdc"), &assign_DCShunt_ratedUdc));
	assign_map.insert(std::make_pair(std::string("cim:DCShunt.resistance"), &assign_DCShunt_resistance));
}

void DCShunt::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCShunt::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:DCShunt.capacitance", &get_DCShunt_capacitance);
	get_map.emplace("cim:DCShunt.ratedUdc", &get_DCShunt_ratedUdc);
	get_map.emplace("cim:DCShunt.resistance", &get_DCShunt_resistance);
}

void DCShunt::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCConductingEquipment::addClassGetFnsToMap(get_map);
}

void DCShunt::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCShunt::declare()
{
	return BaseClassDefiner(DCShunt::addConstructToMap, DCShunt::addPrimitiveAssignFnsToMap, DCShunt::addClassAssignFnsToMap, DCShunt::debugName);
}

namespace CIMPP
{
	BaseClass* DCShunt_factory()
	{
		return new DCShunt;
	}
}
