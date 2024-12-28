/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType3aIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindGenTurbineType3aIEC::WindGenTurbineType3aIEC() {};
WindGenTurbineType3aIEC::~WindGenTurbineType3aIEC() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindGenTurbineType3aIEC.kpc", { CGMESProfile::DY, } },
	{ "cim:WindGenTurbineType3aIEC.tic", { CGMESProfile::DY, } },
	{ "cim:WindGenTurbineType3aIEC.xs", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindGenTurbineType3aIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindGenTurbineType3aIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindGenTurbineType3IEC::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_WindGenTurbineType3aIEC_kpc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenTurbineType3aIEC* element = dynamic_cast<WindGenTurbineType3aIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kpc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenTurbineType3aIEC_tic(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenTurbineType3aIEC* element = dynamic_cast<WindGenTurbineType3aIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tic;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenTurbineType3aIEC_xs(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenTurbineType3aIEC* element = dynamic_cast<WindGenTurbineType3aIEC*>(BaseClass_ptr1))
	{
		buffer >> element->xs;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_WindGenTurbineType3aIEC_kpc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindGenTurbineType3aIEC* element = dynamic_cast<const WindGenTurbineType3aIEC*>(BaseClass_ptr1))
	{
		buffer << element->kpc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenTurbineType3aIEC_tic(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindGenTurbineType3aIEC* element = dynamic_cast<const WindGenTurbineType3aIEC*>(BaseClass_ptr1))
	{
		buffer << element->tic;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenTurbineType3aIEC_xs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindGenTurbineType3aIEC* element = dynamic_cast<const WindGenTurbineType3aIEC*>(BaseClass_ptr1))
	{
		buffer << element->xs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char WindGenTurbineType3aIEC::debugName[] = "WindGenTurbineType3aIEC";
const char* WindGenTurbineType3aIEC::debugString() const
{
	return WindGenTurbineType3aIEC::debugName;
}

void WindGenTurbineType3aIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3aIEC"), &WindGenTurbineType3aIEC_factory));
}

void WindGenTurbineType3aIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3aIEC.kpc"), &assign_WindGenTurbineType3aIEC_kpc));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3aIEC.tic"), &assign_WindGenTurbineType3aIEC_tic));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3aIEC.xs"), &assign_WindGenTurbineType3aIEC_xs));
}

void WindGenTurbineType3aIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void WindGenTurbineType3aIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenTurbineType3IEC::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindGenTurbineType3aIEC.kpc", &get_WindGenTurbineType3aIEC_kpc);
	get_map.emplace("cim:WindGenTurbineType3aIEC.tic", &get_WindGenTurbineType3aIEC_tic);
	get_map.emplace("cim:WindGenTurbineType3aIEC.xs", &get_WindGenTurbineType3aIEC_xs);
}

void WindGenTurbineType3aIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindGenTurbineType3IEC::addClassGetFnsToMap(get_map);
}

void WindGenTurbineType3aIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenTurbineType3IEC::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindGenTurbineType3aIEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType3aIEC::addConstructToMap, WindGenTurbineType3aIEC::addPrimitiveAssignFnsToMap, WindGenTurbineType3aIEC::addClassAssignFnsToMap, WindGenTurbineType3aIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType3aIEC_factory()
	{
		return new WindGenTurbineType3aIEC;
	}
}
