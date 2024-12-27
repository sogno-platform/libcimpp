/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenType3aIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType4IEC.hpp"
#include "Float.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindGenType3aIEC::WindGenType3aIEC() : WindTurbineType4IEC(nullptr) {};
WindGenType3aIEC::~WindGenType3aIEC() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindGenType3aIEC.WindTurbineType4IEC", { CGMESProfile::DY, } },
	{ "cim:WindGenType3aIEC.kpc", { CGMESProfile::DY, } },
	{ "cim:WindGenType3aIEC.tic", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindGenType3aIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindGenType3aIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindGenType3IEC::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_WindGenType3aIEC_kpc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType3aIEC* element = dynamic_cast<WindGenType3aIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kpc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType3aIEC_tic(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType3aIEC* element = dynamic_cast<WindGenType3aIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tic;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindTurbineType4IEC_WindGenType3aIEC(BaseClass*, BaseClass*);
bool assign_WindGenType3aIEC_WindTurbineType4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenType3aIEC* element = dynamic_cast<WindGenType3aIEC*>(BaseClass_ptr1);
	WindTurbineType4IEC* element2 = dynamic_cast<WindTurbineType4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType4IEC != element2)
		{
			element->WindTurbineType4IEC = element2;
			return assign_WindTurbineType4IEC_WindGenType3aIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindGenType3aIEC_kpc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindGenType3aIEC* element = dynamic_cast<const WindGenType3aIEC*>(BaseClass_ptr1))
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

bool get_WindGenType3aIEC_tic(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindGenType3aIEC* element = dynamic_cast<const WindGenType3aIEC*>(BaseClass_ptr1))
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



const char WindGenType3aIEC::debugName[] = "WindGenType3aIEC";
const char* WindGenType3aIEC::debugString() const
{
	return WindGenType3aIEC::debugName;
}

void WindGenType3aIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindGenType3aIEC"), &WindGenType3aIEC_factory));
}

void WindGenType3aIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3aIEC.kpc"), &assign_WindGenType3aIEC_kpc));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3aIEC.tic"), &assign_WindGenType3aIEC_tic));
}

void WindGenType3aIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3aIEC.WindTurbineType4IEC"), &assign_WindGenType3aIEC_WindTurbineType4IEC));
}

void WindGenType3aIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenType3IEC::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindGenType3aIEC.kpc", &get_WindGenType3aIEC_kpc);
	get_map.emplace("cim:WindGenType3aIEC.tic", &get_WindGenType3aIEC_tic);
}

void WindGenType3aIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindGenType3IEC::addClassGetFnsToMap(get_map);
}

void WindGenType3aIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenType3IEC::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindGenType3aIEC::declare()
{
	return BaseClassDefiner(WindGenType3aIEC::addConstructToMap, WindGenType3aIEC::addPrimitiveAssignFnsToMap, WindGenType3aIEC::addClassAssignFnsToMap, WindGenType3aIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenType3aIEC_factory()
	{
		return new WindGenType3aIEC;
	}
}
