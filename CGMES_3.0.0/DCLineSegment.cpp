/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCLineSegment.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

DCLineSegment::DCLineSegment() {}
DCLineSegment::~DCLineSegment() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DCLineSegment.capacitance", { CGMESProfile::EQ, } },
	{ "cim:DCLineSegment.inductance", { CGMESProfile::EQ, } },
	{ "cim:DCLineSegment.length", { CGMESProfile::EQ, } },
	{ "cim:DCLineSegment.resistance", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
DCLineSegment::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCLineSegment::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DCConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_DCLineSegment_capacitance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1);
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

bool assign_DCLineSegment_inductance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1);
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

bool assign_DCLineSegment_length(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1);
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

bool assign_DCLineSegment_resistance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1);
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

bool get_DCLineSegment_capacitance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCLineSegment* element = dynamic_cast<const DCLineSegment*>(BaseClass_ptr1);
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

bool get_DCLineSegment_inductance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCLineSegment* element = dynamic_cast<const DCLineSegment*>(BaseClass_ptr1);
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

bool get_DCLineSegment_length(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCLineSegment* element = dynamic_cast<const DCLineSegment*>(BaseClass_ptr1);
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

bool get_DCLineSegment_resistance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCLineSegment* element = dynamic_cast<const DCLineSegment*>(BaseClass_ptr1);
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

const char DCLineSegment::debugName[] = "DCLineSegment";
const char* DCLineSegment::debugString() const
{
	return DCLineSegment::debugName;
}

void DCLineSegment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DCLineSegment", &DCLineSegment_factory);
}

void DCLineSegment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:DCLineSegment.capacitance", &assign_DCLineSegment_capacitance);
	assign_map.emplace("cim:DCLineSegment.inductance", &assign_DCLineSegment_inductance);
	assign_map.emplace("cim:DCLineSegment.length", &assign_DCLineSegment_length);
	assign_map.emplace("cim:DCLineSegment.resistance", &assign_DCLineSegment_resistance);
}

void DCLineSegment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCLineSegment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:DCLineSegment.capacitance", &get_DCLineSegment_capacitance);
	get_map.emplace("cim:DCLineSegment.inductance", &get_DCLineSegment_inductance);
	get_map.emplace("cim:DCLineSegment.length", &get_DCLineSegment_length);
	get_map.emplace("cim:DCLineSegment.resistance", &get_DCLineSegment_resistance);
}

void DCLineSegment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCConductingEquipment::addClassGetFnsToMap(get_map);
}

void DCLineSegment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCLineSegment::declare()
{
	return BaseClassDefiner(DCLineSegment::addConstructToMap, DCLineSegment::addPrimitiveAssignFnsToMap, DCLineSegment::addClassAssignFnsToMap, DCLineSegment::debugName);
}

namespace CIMPP
{
	BaseClass* DCLineSegment_factory()
	{
		return new DCLineSegment;
	}
}
