/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachineTimeConstantReactance.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

AsynchronousMachineTimeConstantReactance::AsynchronousMachineTimeConstantReactance() {};
AsynchronousMachineTimeConstantReactance::~AsynchronousMachineTimeConstantReactance() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:AsynchronousMachineTimeConstantReactance.tpo", { CGMESProfile::DY, } },
	{ "cim:AsynchronousMachineTimeConstantReactance.tppo", { CGMESProfile::DY, } },
	{ "cim:AsynchronousMachineTimeConstantReactance.xp", { CGMESProfile::DY, } },
	{ "cim:AsynchronousMachineTimeConstantReactance.xpp", { CGMESProfile::DY, } },
	{ "cim:AsynchronousMachineTimeConstantReactance.xs", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
AsynchronousMachineTimeConstantReactance::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
AsynchronousMachineTimeConstantReactance::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = AsynchronousMachineDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


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



bool get_AsynchronousMachineTimeConstantReactance_tpo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AsynchronousMachineTimeConstantReactance* element = dynamic_cast<const AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->tpo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineTimeConstantReactance_tppo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AsynchronousMachineTimeConstantReactance* element = dynamic_cast<const AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->tppo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineTimeConstantReactance_xp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AsynchronousMachineTimeConstantReactance* element = dynamic_cast<const AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->xp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineTimeConstantReactance_xpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AsynchronousMachineTimeConstantReactance* element = dynamic_cast<const AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->xpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineTimeConstantReactance_xs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AsynchronousMachineTimeConstantReactance* element = dynamic_cast<const AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
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

void AsynchronousMachineTimeConstantReactance::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AsynchronousMachineDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:AsynchronousMachineTimeConstantReactance.tpo", &get_AsynchronousMachineTimeConstantReactance_tpo);
	get_map.emplace("cim:AsynchronousMachineTimeConstantReactance.tppo", &get_AsynchronousMachineTimeConstantReactance_tppo);
	get_map.emplace("cim:AsynchronousMachineTimeConstantReactance.xp", &get_AsynchronousMachineTimeConstantReactance_xp);
	get_map.emplace("cim:AsynchronousMachineTimeConstantReactance.xpp", &get_AsynchronousMachineTimeConstantReactance_xpp);
	get_map.emplace("cim:AsynchronousMachineTimeConstantReactance.xs", &get_AsynchronousMachineTimeConstantReactance_xs);
}

void AsynchronousMachineTimeConstantReactance::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AsynchronousMachineDynamics::addClassGetFnsToMap(get_map);
}

void AsynchronousMachineTimeConstantReactance::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AsynchronousMachineDynamics::addEnumGetFnsToMap(get_map);
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
