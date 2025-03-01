/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EarthFaultCompensator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

EarthFaultCompensator::EarthFaultCompensator() {}
EarthFaultCompensator::~EarthFaultCompensator() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EarthFaultCompensator.r", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
EarthFaultCompensator::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EarthFaultCompensator::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_EarthFaultCompensator_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EarthFaultCompensator* element = dynamic_cast<EarthFaultCompensator*>(BaseClass_ptr1);
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

bool get_EarthFaultCompensator_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EarthFaultCompensator* element = dynamic_cast<const EarthFaultCompensator*>(BaseClass_ptr1);
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

const char EarthFaultCompensator::debugName[] = "EarthFaultCompensator";
const char* EarthFaultCompensator::debugString() const
{
	return EarthFaultCompensator::debugName;
}

void EarthFaultCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:EarthFaultCompensator", &EarthFaultCompensator_factory);
}

void EarthFaultCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:EarthFaultCompensator.r", &assign_EarthFaultCompensator_r);
}

void EarthFaultCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void EarthFaultCompensator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:EarthFaultCompensator.r", &get_EarthFaultCompensator_r);
}

void EarthFaultCompensator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
}

void EarthFaultCompensator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner EarthFaultCompensator::declare()
{
	return BaseClassDefiner(EarthFaultCompensator::addConstructToMap, EarthFaultCompensator::addPrimitiveAssignFnsToMap, EarthFaultCompensator::addClassAssignFnsToMap, EarthFaultCompensator::debugName);
}

namespace CIMPP
{
	BaseClass* EarthFaultCompensator_factory()
	{
		return new EarthFaultCompensator;
	}
}
