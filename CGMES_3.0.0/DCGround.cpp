/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCGround.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

DCGround::DCGround() {}
DCGround::~DCGround() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DCGround.inductance", { CGMESProfile::EQ, } },
	{ "cim:DCGround.r", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
DCGround::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCGround::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DCConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:DCGround", &DCGround_factory);
}

void DCGround::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:DCGround.inductance", &assign_DCGround_inductance);
	assign_map.emplace("cim:DCGround.r", &assign_DCGround_r);
}

void DCGround::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCGround::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:DCGround.inductance", &get_DCGround_inductance);
	get_map.emplace("cim:DCGround.r", &get_DCGround_r);
}

void DCGround::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCConductingEquipment::addClassGetFnsToMap(get_map);
}

void DCGround::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCGround::declare()
{
	return BaseClassDefiner(DCGround::addConstructToMap, DCGround::addPrimitiveAssignFnsToMap, DCGround::addClassAssignFnsToMap, DCGround::debugName);
}

namespace CIMPP
{
	BaseClass* DCGround_factory()
	{
		return new DCGround;
	}
}
