/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StaticVarCompensator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "StaticVarCompensatorDynamics.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"
#include "ReactivePower.hpp"
#include "SVCControlMode.hpp"
#include "VoltagePerReactivePower.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

StaticVarCompensator::StaticVarCompensator() : StaticVarCompensatorDynamics(nullptr) {};
StaticVarCompensator::~StaticVarCompensator() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:StaticVarCompensator.StaticVarCompensatorDynamics", { CGMESProfile::DY, } },
	{ "cim:StaticVarCompensator.capacitiveRating", { CGMESProfile::EQ, } },
	{ "cim:StaticVarCompensator.inductiveRating", { CGMESProfile::EQ, } },
	{ "cim:StaticVarCompensator.q", { CGMESProfile::SSH, } },
	{ "cim:StaticVarCompensator.sVCControlMode", { CGMESProfile::EQ, } },
	{ "cim:StaticVarCompensator.slope", { CGMESProfile::EQ, } },
	{ "cim:StaticVarCompensator.voltageSetPoint", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
StaticVarCompensator::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
StaticVarCompensator::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = RegulatingCondEq::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_StaticVarCompensator_capacitiveRating(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->capacitiveRating;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StaticVarCompensator_inductiveRating(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->inductiveRating;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StaticVarCompensator_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StaticVarCompensator_sVCControlMode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->sVCControlMode;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StaticVarCompensator_slope(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->slope;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StaticVarCompensator_voltageSetPoint(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->voltageSetPoint;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_StaticVarCompensatorDynamics_StaticVarCompensator(BaseClass*, BaseClass*);
bool assign_StaticVarCompensator_StaticVarCompensatorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1);
	StaticVarCompensatorDynamics* element2 = dynamic_cast<StaticVarCompensatorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->StaticVarCompensatorDynamics != element2)
		{
			element->StaticVarCompensatorDynamics = element2;
			return assign_StaticVarCompensatorDynamics_StaticVarCompensator(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_StaticVarCompensator_capacitiveRating(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const StaticVarCompensator* element = dynamic_cast<const StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer << element->capacitiveRating;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StaticVarCompensator_inductiveRating(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const StaticVarCompensator* element = dynamic_cast<const StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer << element->inductiveRating;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StaticVarCompensator_q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const StaticVarCompensator* element = dynamic_cast<const StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer << element->q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StaticVarCompensator_slope(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const StaticVarCompensator* element = dynamic_cast<const StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer << element->slope;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StaticVarCompensator_voltageSetPoint(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const StaticVarCompensator* element = dynamic_cast<const StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer << element->voltageSetPoint;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



bool get_StaticVarCompensator_sVCControlMode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const StaticVarCompensator* element = dynamic_cast<const StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer << element->sVCControlMode;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char StaticVarCompensator::debugName[] = "StaticVarCompensator";
const char* StaticVarCompensator::debugString() const
{
	return StaticVarCompensator::debugName;
}

void StaticVarCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:StaticVarCompensator"), &StaticVarCompensator_factory));
}

void StaticVarCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.capacitiveRating"), &assign_StaticVarCompensator_capacitiveRating));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.inductiveRating"), &assign_StaticVarCompensator_inductiveRating));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.q"), &assign_StaticVarCompensator_q));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.sVCControlMode"), &assign_StaticVarCompensator_sVCControlMode));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.slope"), &assign_StaticVarCompensator_slope));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.voltageSetPoint"), &assign_StaticVarCompensator_voltageSetPoint));
}

void StaticVarCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.StaticVarCompensatorDynamics"), &assign_StaticVarCompensator_StaticVarCompensatorDynamics));
}

void StaticVarCompensator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:StaticVarCompensator.capacitiveRating", &get_StaticVarCompensator_capacitiveRating);
	get_map.emplace("cim:StaticVarCompensator.inductiveRating", &get_StaticVarCompensator_inductiveRating);
	get_map.emplace("cim:StaticVarCompensator.q", &get_StaticVarCompensator_q);
	get_map.emplace("cim:StaticVarCompensator.slope", &get_StaticVarCompensator_slope);
	get_map.emplace("cim:StaticVarCompensator.voltageSetPoint", &get_StaticVarCompensator_voltageSetPoint);
}

void StaticVarCompensator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RegulatingCondEq::addClassGetFnsToMap(get_map);
}

void StaticVarCompensator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:StaticVarCompensator.sVCControlMode", &get_StaticVarCompensator_sVCControlMode);
}

const BaseClassDefiner StaticVarCompensator::declare()
{
	return BaseClassDefiner(StaticVarCompensator::addConstructToMap, StaticVarCompensator::addPrimitiveAssignFnsToMap, StaticVarCompensator::addClassAssignFnsToMap, StaticVarCompensator::debugName);
}

namespace CIMPP
{
	BaseClass* StaticVarCompensator_factory()
	{
		return new StaticVarCompensator;
	}
}
