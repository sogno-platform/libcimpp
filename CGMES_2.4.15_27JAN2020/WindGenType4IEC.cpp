/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenType4IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindGenType4IEC::WindGenType4IEC() {};
WindGenType4IEC::~WindGenType4IEC() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindGenType4IEC.dipmax", { CGMESProfile::DY, } },
	{ "cim:WindGenType4IEC.diqmax", { CGMESProfile::DY, } },
	{ "cim:WindGenType4IEC.diqmin", { CGMESProfile::DY, } },
	{ "cim:WindGenType4IEC.tg", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindGenType4IEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindGenType4IEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindTurbineType3or4IEC::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_WindGenType4IEC_dipmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1))
	{
		buffer >> element->dipmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType4IEC_diqmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1))
	{
		buffer >> element->diqmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType4IEC_diqmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1))
	{
		buffer >> element->diqmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType4IEC_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1))
	{
		buffer >> element->tg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_WindGenType4IEC_dipmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindGenType4IEC* element = dynamic_cast<const WindGenType4IEC*>(BaseClass_ptr1))
	{
		buffer << element->dipmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenType4IEC_diqmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindGenType4IEC* element = dynamic_cast<const WindGenType4IEC*>(BaseClass_ptr1))
	{
		buffer << element->diqmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenType4IEC_diqmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindGenType4IEC* element = dynamic_cast<const WindGenType4IEC*>(BaseClass_ptr1))
	{
		buffer << element->diqmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenType4IEC_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindGenType4IEC* element = dynamic_cast<const WindGenType4IEC*>(BaseClass_ptr1))
	{
		buffer << element->tg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char WindGenType4IEC::debugName[] = "WindGenType4IEC";
const char* WindGenType4IEC::debugString() const
{
	return WindGenType4IEC::debugName;
}

void WindGenType4IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindGenType4IEC"), &WindGenType4IEC_factory));
}

void WindGenType4IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.dipmax"), &assign_WindGenType4IEC_dipmax));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.diqmax"), &assign_WindGenType4IEC_diqmax));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.diqmin"), &assign_WindGenType4IEC_diqmin));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.tg"), &assign_WindGenType4IEC_tg));
}

void WindGenType4IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void WindGenType4IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4IEC::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindGenType4IEC.dipmax", &get_WindGenType4IEC_dipmax);
	get_map.emplace("cim:WindGenType4IEC.diqmax", &get_WindGenType4IEC_diqmax);
	get_map.emplace("cim:WindGenType4IEC.diqmin", &get_WindGenType4IEC_diqmin);
	get_map.emplace("cim:WindGenType4IEC.tg", &get_WindGenType4IEC_tg);
}

void WindGenType4IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType3or4IEC::addClassGetFnsToMap(get_map);
}

void WindGenType4IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4IEC::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindGenType4IEC::declare()
{
	return BaseClassDefiner(WindGenType4IEC::addConstructToMap, WindGenType4IEC::addPrimitiveAssignFnsToMap, WindGenType4IEC::addClassAssignFnsToMap, WindGenType4IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenType4IEC_factory()
	{
		return new WindGenType4IEC;
	}
}
