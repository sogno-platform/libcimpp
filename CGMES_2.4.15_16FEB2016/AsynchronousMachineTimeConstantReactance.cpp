/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachineTimeConstantReactance.hpp"

#include <algorithm>
#include <sstream>

#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

AsynchronousMachineTimeConstantReactance::AsynchronousMachineTimeConstantReactance() {};
AsynchronousMachineTimeConstantReactance::~AsynchronousMachineTimeConstantReactance() {};


bool assign_AsynchronousMachineTimeConstantReactance_tpo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachineTimeConstantReactance* element = dynamic_cast<AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->tpo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachineTimeConstantReactance_tppo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachineTimeConstantReactance* element = dynamic_cast<AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->tppo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachineTimeConstantReactance_xp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachineTimeConstantReactance* element = dynamic_cast<AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachineTimeConstantReactance_xpp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachineTimeConstantReactance* element = dynamic_cast<AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xpp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachineTimeConstantReactance_xs(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachineTimeConstantReactance* element = dynamic_cast<AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xs;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}







const char AsynchronousMachineTimeConstantReactance::debugName[] = "AsynchronousMachineTimeConstantReactance";
const char* AsynchronousMachineTimeConstantReactance::debugString() const
{
	return AsynchronousMachineTimeConstantReactance::debugName;
}

void AsynchronousMachineTimeConstantReactance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AsynchronousMachineTimeConstantReactance"), &AsynchronousMachineTimeConstantReactance_factory));
}

void AsynchronousMachineTimeConstantReactance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineTimeConstantReactance.tpo"), &assign_AsynchronousMachineTimeConstantReactance_tpo));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineTimeConstantReactance.tppo"), &assign_AsynchronousMachineTimeConstantReactance_tppo));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineTimeConstantReactance.xp"), &assign_AsynchronousMachineTimeConstantReactance_xp));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineTimeConstantReactance.xpp"), &assign_AsynchronousMachineTimeConstantReactance_xpp));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineTimeConstantReactance.xs"), &assign_AsynchronousMachineTimeConstantReactance_xs));
}

void AsynchronousMachineTimeConstantReactance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner AsynchronousMachineTimeConstantReactance::declare()
{
	return BaseClassDefiner(AsynchronousMachineTimeConstantReactance::addConstructToMap, AsynchronousMachineTimeConstantReactance::addPrimitiveAssignFnsToMap, AsynchronousMachineTimeConstantReactance::addClassAssignFnsToMap, AsynchronousMachineTimeConstantReactance::debugName);
}

namespace CIMPP
{
	BaseClass* AsynchronousMachineTimeConstantReactance_factory()
	{
		return new AsynchronousMachineTimeConstantReactance;
	}
}
