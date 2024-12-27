/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SeriesCompensator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Boolean.hpp"
#include "CurrentFlow.hpp"
#include "Voltage.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

SeriesCompensator::SeriesCompensator() {};
SeriesCompensator::~SeriesCompensator() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SC,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SeriesCompensator.r", { CGMESProfile::EQ, } },
	{ "cim:SeriesCompensator.r0", { CGMESProfile::SC, } },
	{ "cim:SeriesCompensator.varistorPresent", { CGMESProfile::SC, } },
	{ "cim:SeriesCompensator.varistorRatedCurrent", { CGMESProfile::SC, } },
	{ "cim:SeriesCompensator.varistorVoltageThreshold", { CGMESProfile::SC, } },
	{ "cim:SeriesCompensator.x", { CGMESProfile::EQ, } },
	{ "cim:SeriesCompensator.x0", { CGMESProfile::SC, } },
};

std::list<CGMESProfile>
SeriesCompensator::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SeriesCompensator::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_SeriesCompensator_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SeriesCompensator_r0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->r0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SeriesCompensator_varistorPresent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->varistorPresent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SeriesCompensator_varistorRatedCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->varistorRatedCurrent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SeriesCompensator_varistorVoltageThreshold(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->varistorVoltageThreshold;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SeriesCompensator_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->x;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SeriesCompensator_x0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->x0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_SeriesCompensator_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1))
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

bool get_SeriesCompensator_r0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1))
	{
		buffer << element->r0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SeriesCompensator_varistorPresent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1))
	{
		buffer << element->varistorPresent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SeriesCompensator_varistorRatedCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1))
	{
		buffer << element->varistorRatedCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SeriesCompensator_varistorVoltageThreshold(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1))
	{
		buffer << element->varistorVoltageThreshold;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SeriesCompensator_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1))
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

bool get_SeriesCompensator_x0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1))
	{
		buffer << element->x0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char SeriesCompensator::debugName[] = "SeriesCompensator";
const char* SeriesCompensator::debugString() const
{
	return SeriesCompensator::debugName;
}

void SeriesCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SeriesCompensator"), &SeriesCompensator_factory));
}

void SeriesCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.r"), &assign_SeriesCompensator_r));
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.r0"), &assign_SeriesCompensator_r0));
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.varistorPresent"), &assign_SeriesCompensator_varistorPresent));
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.varistorRatedCurrent"), &assign_SeriesCompensator_varistorRatedCurrent));
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.varistorVoltageThreshold"), &assign_SeriesCompensator_varistorVoltageThreshold));
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.x"), &assign_SeriesCompensator_x));
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.x0"), &assign_SeriesCompensator_x0));
}

void SeriesCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SeriesCompensator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SeriesCompensator.r", &get_SeriesCompensator_r);
	get_map.emplace("cim:SeriesCompensator.r0", &get_SeriesCompensator_r0);
	get_map.emplace("cim:SeriesCompensator.varistorPresent", &get_SeriesCompensator_varistorPresent);
	get_map.emplace("cim:SeriesCompensator.varistorRatedCurrent", &get_SeriesCompensator_varistorRatedCurrent);
	get_map.emplace("cim:SeriesCompensator.varistorVoltageThreshold", &get_SeriesCompensator_varistorVoltageThreshold);
	get_map.emplace("cim:SeriesCompensator.x", &get_SeriesCompensator_x);
	get_map.emplace("cim:SeriesCompensator.x0", &get_SeriesCompensator_x0);
}

void SeriesCompensator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
}

void SeriesCompensator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SeriesCompensator::declare()
{
	return BaseClassDefiner(SeriesCompensator::addConstructToMap, SeriesCompensator::addPrimitiveAssignFnsToMap, SeriesCompensator::addClassAssignFnsToMap, SeriesCompensator::debugName);
}

namespace CIMPP
{
	BaseClass* SeriesCompensator_factory()
	{
		return new SeriesCompensator;
	}
}
