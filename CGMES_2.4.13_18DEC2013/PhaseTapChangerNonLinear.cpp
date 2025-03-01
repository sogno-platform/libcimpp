/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerNonLinear.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PhaseTapChangerNonLinear::PhaseTapChangerNonLinear() {}
PhaseTapChangerNonLinear::~PhaseTapChangerNonLinear() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PhaseTapChangerNonLinear.voltageStepIncrement", { CGMESProfile::EQ, } },
	{ "cim:PhaseTapChangerNonLinear.xMax", { CGMESProfile::EQ, } },
	{ "cim:PhaseTapChangerNonLinear.xMin", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
PhaseTapChangerNonLinear::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PhaseTapChangerNonLinear::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PhaseTapChanger::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_PhaseTapChangerNonLinear_voltageStepIncrement(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerNonLinear* element = dynamic_cast<PhaseTapChangerNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->voltageStepIncrement;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PhaseTapChangerNonLinear_xMax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerNonLinear* element = dynamic_cast<PhaseTapChangerNonLinear*>(BaseClass_ptr1);
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

bool assign_PhaseTapChangerNonLinear_xMin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerNonLinear* element = dynamic_cast<PhaseTapChangerNonLinear*>(BaseClass_ptr1);
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

bool get_PhaseTapChangerNonLinear_voltageStepIncrement(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerNonLinear* element = dynamic_cast<const PhaseTapChangerNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->voltageStepIncrement;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PhaseTapChangerNonLinear_xMax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerNonLinear* element = dynamic_cast<const PhaseTapChangerNonLinear*>(BaseClass_ptr1);
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

bool get_PhaseTapChangerNonLinear_xMin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerNonLinear* element = dynamic_cast<const PhaseTapChangerNonLinear*>(BaseClass_ptr1);
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

const char PhaseTapChangerNonLinear::debugName[] = "PhaseTapChangerNonLinear";
const char* PhaseTapChangerNonLinear::debugString() const
{
	return PhaseTapChangerNonLinear::debugName;
}

void PhaseTapChangerNonLinear::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PhaseTapChangerNonLinear", &PhaseTapChangerNonLinear_factory);
}

void PhaseTapChangerNonLinear::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PhaseTapChangerNonLinear.voltageStepIncrement", &assign_PhaseTapChangerNonLinear_voltageStepIncrement);
	assign_map.emplace("cim:PhaseTapChangerNonLinear.xMax", &assign_PhaseTapChangerNonLinear_xMax);
	assign_map.emplace("cim:PhaseTapChangerNonLinear.xMin", &assign_PhaseTapChangerNonLinear_xMin);
}

void PhaseTapChangerNonLinear::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PhaseTapChangerNonLinear::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChanger::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PhaseTapChangerNonLinear.voltageStepIncrement", &get_PhaseTapChangerNonLinear_voltageStepIncrement);
	get_map.emplace("cim:PhaseTapChangerNonLinear.xMax", &get_PhaseTapChangerNonLinear_xMax);
	get_map.emplace("cim:PhaseTapChangerNonLinear.xMin", &get_PhaseTapChangerNonLinear_xMin);
}

void PhaseTapChangerNonLinear::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PhaseTapChanger::addClassGetFnsToMap(get_map);
}

void PhaseTapChangerNonLinear::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChanger::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PhaseTapChangerNonLinear::declare()
{
	return BaseClassDefiner(PhaseTapChangerNonLinear::addConstructToMap, PhaseTapChangerNonLinear::addPrimitiveAssignFnsToMap, PhaseTapChangerNonLinear::addClassAssignFnsToMap, PhaseTapChangerNonLinear::debugName);
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerNonLinear_factory()
	{
		return new PhaseTapChangerNonLinear;
	}
}
