/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType3aIEC.hpp"

#include <algorithm>
#include <sstream>

#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindGenTurbineType3aIEC::WindGenTurbineType3aIEC() {};
WindGenTurbineType3aIEC::~WindGenTurbineType3aIEC() {};


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
