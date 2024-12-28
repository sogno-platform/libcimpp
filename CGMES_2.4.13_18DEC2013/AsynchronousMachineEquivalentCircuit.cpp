/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachineEquivalentCircuit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

AsynchronousMachineEquivalentCircuit::AsynchronousMachineEquivalentCircuit() {};
AsynchronousMachineEquivalentCircuit::~AsynchronousMachineEquivalentCircuit() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:AsynchronousMachineEquivalentCircuit.rr1", { CGMESProfile::DY, } },
	{ "cim:AsynchronousMachineEquivalentCircuit.rr2", { CGMESProfile::DY, } },
	{ "cim:AsynchronousMachineEquivalentCircuit.xlr1", { CGMESProfile::DY, } },
	{ "cim:AsynchronousMachineEquivalentCircuit.xlr2", { CGMESProfile::DY, } },
	{ "cim:AsynchronousMachineEquivalentCircuit.xm", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
AsynchronousMachineEquivalentCircuit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
AsynchronousMachineEquivalentCircuit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = AsynchronousMachineDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_AsynchronousMachineEquivalentCircuit_rr1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->rr1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachineEquivalentCircuit_rr2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->rr2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachineEquivalentCircuit_xlr1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->xlr1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachineEquivalentCircuit_xlr2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->xlr2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachineEquivalentCircuit_xm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->xm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_AsynchronousMachineEquivalentCircuit_rr1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AsynchronousMachineEquivalentCircuit* element = dynamic_cast<const AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->rr1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineEquivalentCircuit_rr2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AsynchronousMachineEquivalentCircuit* element = dynamic_cast<const AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->rr2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineEquivalentCircuit_xlr1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AsynchronousMachineEquivalentCircuit* element = dynamic_cast<const AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->xlr1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineEquivalentCircuit_xlr2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AsynchronousMachineEquivalentCircuit* element = dynamic_cast<const AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->xlr2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineEquivalentCircuit_xm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AsynchronousMachineEquivalentCircuit* element = dynamic_cast<const AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->xm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char AsynchronousMachineEquivalentCircuit::debugName[] = "AsynchronousMachineEquivalentCircuit";
const char* AsynchronousMachineEquivalentCircuit::debugString() const
{
	return AsynchronousMachineEquivalentCircuit::debugName;
}

void AsynchronousMachineEquivalentCircuit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AsynchronousMachineEquivalentCircuit"), &AsynchronousMachineEquivalentCircuit_factory));
}

void AsynchronousMachineEquivalentCircuit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineEquivalentCircuit.rr1"), &assign_AsynchronousMachineEquivalentCircuit_rr1));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineEquivalentCircuit.rr2"), &assign_AsynchronousMachineEquivalentCircuit_rr2));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineEquivalentCircuit.xlr1"), &assign_AsynchronousMachineEquivalentCircuit_xlr1));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineEquivalentCircuit.xlr2"), &assign_AsynchronousMachineEquivalentCircuit_xlr2));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineEquivalentCircuit.xm"), &assign_AsynchronousMachineEquivalentCircuit_xm));
}

void AsynchronousMachineEquivalentCircuit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void AsynchronousMachineEquivalentCircuit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AsynchronousMachineDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:AsynchronousMachineEquivalentCircuit.rr1", &get_AsynchronousMachineEquivalentCircuit_rr1);
	get_map.emplace("cim:AsynchronousMachineEquivalentCircuit.rr2", &get_AsynchronousMachineEquivalentCircuit_rr2);
	get_map.emplace("cim:AsynchronousMachineEquivalentCircuit.xlr1", &get_AsynchronousMachineEquivalentCircuit_xlr1);
	get_map.emplace("cim:AsynchronousMachineEquivalentCircuit.xlr2", &get_AsynchronousMachineEquivalentCircuit_xlr2);
	get_map.emplace("cim:AsynchronousMachineEquivalentCircuit.xm", &get_AsynchronousMachineEquivalentCircuit_xm);
}

void AsynchronousMachineEquivalentCircuit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AsynchronousMachineDynamics::addClassGetFnsToMap(get_map);
}

void AsynchronousMachineEquivalentCircuit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AsynchronousMachineDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner AsynchronousMachineEquivalentCircuit::declare()
{
	return BaseClassDefiner(AsynchronousMachineEquivalentCircuit::addConstructToMap, AsynchronousMachineEquivalentCircuit::addPrimitiveAssignFnsToMap, AsynchronousMachineEquivalentCircuit::addClassAssignFnsToMap, AsynchronousMachineEquivalentCircuit::debugName);
}

namespace CIMPP
{
	BaseClass* AsynchronousMachineEquivalentCircuit_factory()
	{
		return new AsynchronousMachineEquivalentCircuit;
	}
}
