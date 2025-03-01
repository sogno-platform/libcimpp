/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Conductor.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

Conductor::Conductor() {}
Conductor::~Conductor() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SC,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Conductor.length", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
Conductor::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Conductor::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:Conductor", &Conductor_factory);
}

void Conductor::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:Conductor.length", &assign_Conductor_length);
}

void Conductor::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Conductor::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Conductor.length", &get_Conductor_length);
}

void Conductor::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
}

void Conductor::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Conductor::declare()
{
	return BaseClassDefiner(Conductor::addConstructToMap, Conductor::addPrimitiveAssignFnsToMap, Conductor::addClassAssignFnsToMap, Conductor::debugName);
}

namespace CIMPP
{
	BaseClass* Conductor_factory()
	{
		return new Conductor;
	}
}
