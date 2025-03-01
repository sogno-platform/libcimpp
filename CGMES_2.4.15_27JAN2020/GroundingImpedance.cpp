/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GroundingImpedance.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GroundingImpedance::GroundingImpedance() {}
GroundingImpedance::~GroundingImpedance() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GroundingImpedance.x", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
GroundingImpedance::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GroundingImpedance::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EarthFaultCompensator::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GroundingImpedance_x(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GroundingImpedance* element = dynamic_cast<GroundingImpedance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GroundingImpedance_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GroundingImpedance* element = dynamic_cast<const GroundingImpedance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GroundingImpedance::debugName[] = "GroundingImpedance";
const char* GroundingImpedance::debugString() const
{
	return GroundingImpedance::debugName;
}

void GroundingImpedance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GroundingImpedance", &GroundingImpedance_factory);
}

void GroundingImpedance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GroundingImpedance.x", &assign_GroundingImpedance_x);
}

void GroundingImpedance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GroundingImpedance::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EarthFaultCompensator::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GroundingImpedance.x", &get_GroundingImpedance_x);
}

void GroundingImpedance::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EarthFaultCompensator::addClassGetFnsToMap(get_map);
}

void GroundingImpedance::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EarthFaultCompensator::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GroundingImpedance::declare()
{
	return BaseClassDefiner(GroundingImpedance::addConstructToMap, GroundingImpedance::addPrimitiveAssignFnsToMap, GroundingImpedance::addClassAssignFnsToMap, GroundingImpedance::debugName);
}

namespace CIMPP
{
	BaseClass* GroundingImpedance_factory()
	{
		return new GroundingImpedance;
	}
}
