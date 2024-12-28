/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCSeriesDevice.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Inductance.hpp"
#include "Resistance.hpp"

using namespace CIMPP;

DCSeriesDevice::DCSeriesDevice() {};
DCSeriesDevice::~DCSeriesDevice() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DCSeriesDevice.inductance", { CGMESProfile::EQ, } },
	{ "cim:DCSeriesDevice.resistance", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
DCSeriesDevice::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCSeriesDevice::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DCConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_DCSeriesDevice_inductance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DCSeriesDevice* element = dynamic_cast<DCSeriesDevice*>(BaseClass_ptr1))
	{
		buffer >> element->inductance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DCSeriesDevice_resistance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DCSeriesDevice* element = dynamic_cast<DCSeriesDevice*>(BaseClass_ptr1))
	{
		buffer >> element->resistance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_DCSeriesDevice_inductance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DCSeriesDevice* element = dynamic_cast<const DCSeriesDevice*>(BaseClass_ptr1))
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

bool get_DCSeriesDevice_resistance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DCSeriesDevice* element = dynamic_cast<const DCSeriesDevice*>(BaseClass_ptr1))
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



const char DCSeriesDevice::debugName[] = "DCSeriesDevice";
const char* DCSeriesDevice::debugString() const
{
	return DCSeriesDevice::debugName;
}

void DCSeriesDevice::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCSeriesDevice"), &DCSeriesDevice_factory));
}

void DCSeriesDevice::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DCSeriesDevice.inductance"), &assign_DCSeriesDevice_inductance));
	assign_map.insert(std::make_pair(std::string("cim:DCSeriesDevice.resistance"), &assign_DCSeriesDevice_resistance));
}

void DCSeriesDevice::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCSeriesDevice::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:DCSeriesDevice.inductance", &get_DCSeriesDevice_inductance);
	get_map.emplace("cim:DCSeriesDevice.resistance", &get_DCSeriesDevice_resistance);
}

void DCSeriesDevice::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCConductingEquipment::addClassGetFnsToMap(get_map);
}

void DCSeriesDevice::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCSeriesDevice::declare()
{
	return BaseClassDefiner(DCSeriesDevice::addConstructToMap, DCSeriesDevice::addPrimitiveAssignFnsToMap, DCSeriesDevice::addClassAssignFnsToMap, DCSeriesDevice::debugName);
}

namespace CIMPP
{
	BaseClass* DCSeriesDevice_factory()
	{
		return new DCSeriesDevice;
	}
}
