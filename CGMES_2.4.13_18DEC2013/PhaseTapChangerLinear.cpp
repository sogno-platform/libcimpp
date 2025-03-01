/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerLinear.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PhaseTapChangerLinear::PhaseTapChangerLinear() {}
PhaseTapChangerLinear::~PhaseTapChangerLinear() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PhaseTapChangerLinear.stepPhaseShiftIncrement", { CGMESProfile::EQ, } },
	{ "cim:PhaseTapChangerLinear.xMax", { CGMESProfile::EQ, } },
	{ "cim:PhaseTapChangerLinear.xMin", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
PhaseTapChangerLinear::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PhaseTapChangerLinear::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PhaseTapChanger::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_PhaseTapChangerLinear_stepPhaseShiftIncrement(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerLinear* element = dynamic_cast<PhaseTapChangerLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->stepPhaseShiftIncrement;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PhaseTapChangerLinear_xMax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerLinear* element = dynamic_cast<PhaseTapChangerLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xMax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PhaseTapChangerLinear_xMin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerLinear* element = dynamic_cast<PhaseTapChangerLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xMin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PhaseTapChangerLinear_stepPhaseShiftIncrement(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerLinear* element = dynamic_cast<const PhaseTapChangerLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->stepPhaseShiftIncrement;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PhaseTapChangerLinear_xMax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerLinear* element = dynamic_cast<const PhaseTapChangerLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xMax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PhaseTapChangerLinear_xMin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerLinear* element = dynamic_cast<const PhaseTapChangerLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xMin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PhaseTapChangerLinear::debugName[] = "PhaseTapChangerLinear";
const char* PhaseTapChangerLinear::debugString() const
{
	return PhaseTapChangerLinear::debugName;
}

void PhaseTapChangerLinear::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PhaseTapChangerLinear", &PhaseTapChangerLinear_factory);
}

void PhaseTapChangerLinear::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PhaseTapChangerLinear.stepPhaseShiftIncrement", &assign_PhaseTapChangerLinear_stepPhaseShiftIncrement);
	assign_map.emplace("cim:PhaseTapChangerLinear.xMax", &assign_PhaseTapChangerLinear_xMax);
	assign_map.emplace("cim:PhaseTapChangerLinear.xMin", &assign_PhaseTapChangerLinear_xMin);
}

void PhaseTapChangerLinear::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PhaseTapChangerLinear::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChanger::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PhaseTapChangerLinear.stepPhaseShiftIncrement", &get_PhaseTapChangerLinear_stepPhaseShiftIncrement);
	get_map.emplace("cim:PhaseTapChangerLinear.xMax", &get_PhaseTapChangerLinear_xMax);
	get_map.emplace("cim:PhaseTapChangerLinear.xMin", &get_PhaseTapChangerLinear_xMin);
}

void PhaseTapChangerLinear::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PhaseTapChanger::addClassGetFnsToMap(get_map);
}

void PhaseTapChangerLinear::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChanger::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PhaseTapChangerLinear::declare()
{
	return BaseClassDefiner(PhaseTapChangerLinear::addConstructToMap, PhaseTapChangerLinear::addPrimitiveAssignFnsToMap, PhaseTapChangerLinear::addClassAssignFnsToMap, PhaseTapChangerLinear::debugName);
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerLinear_factory()
	{
		return new PhaseTapChangerLinear;
	}
}
