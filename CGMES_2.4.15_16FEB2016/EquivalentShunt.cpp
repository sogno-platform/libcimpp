/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquivalentShunt.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

EquivalentShunt::EquivalentShunt() {}
EquivalentShunt::~EquivalentShunt() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EquivalentShunt.b", { CGMESProfile::EQ, } },
	{ "cim:EquivalentShunt.g", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
EquivalentShunt::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EquivalentShunt::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EquivalentEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_EquivalentShunt_b(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentShunt* element = dynamic_cast<EquivalentShunt*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentShunt_g(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentShunt* element = dynamic_cast<EquivalentShunt*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->g;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_EquivalentShunt_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentShunt* element = dynamic_cast<const EquivalentShunt*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentShunt_g(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentShunt* element = dynamic_cast<const EquivalentShunt*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->g;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char EquivalentShunt::debugName[] = "EquivalentShunt";
const char* EquivalentShunt::debugString() const
{
	return EquivalentShunt::debugName;
}

void EquivalentShunt::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:EquivalentShunt", &EquivalentShunt_factory);
}

void EquivalentShunt::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:EquivalentShunt.b", &assign_EquivalentShunt_b);
	assign_map.emplace("cim:EquivalentShunt.g", &assign_EquivalentShunt_g);
}

void EquivalentShunt::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void EquivalentShunt::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquivalentEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:EquivalentShunt.b", &get_EquivalentShunt_b);
	get_map.emplace("cim:EquivalentShunt.g", &get_EquivalentShunt_g);
}

void EquivalentShunt::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquivalentEquipment::addClassGetFnsToMap(get_map);
}

void EquivalentShunt::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquivalentEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner EquivalentShunt::declare()
{
	return BaseClassDefiner(EquivalentShunt::addConstructToMap, EquivalentShunt::addPrimitiveAssignFnsToMap, EquivalentShunt::addClassAssignFnsToMap, EquivalentShunt::debugName);
}

namespace CIMPP
{
	BaseClass* EquivalentShunt_factory()
	{
		return new EquivalentShunt;
	}
}
