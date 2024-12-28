/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteam0.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

GovSteam0::GovSteam0() {};
GovSteam0::~GovSteam0() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovSteam0.dt", { CGMESProfile::DY, } },
	{ "cim:GovSteam0.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovSteam0.r", { CGMESProfile::DY, } },
	{ "cim:GovSteam0.t1", { CGMESProfile::DY, } },
	{ "cim:GovSteam0.t2", { CGMESProfile::DY, } },
	{ "cim:GovSteam0.t3", { CGMESProfile::DY, } },
	{ "cim:GovSteam0.vmax", { CGMESProfile::DY, } },
	{ "cim:GovSteam0.vmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovSteam0::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovSteam0::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GovSteam0_dt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1))
	{
		buffer >> element->dt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam0_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam0_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam0_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam0_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam0_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam0_vmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1))
	{
		buffer >> element->vmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam0_vmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1))
	{
		buffer >> element->vmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GovSteam0_dt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1))
	{
		buffer << element->dt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam0_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1))
	{
		buffer << element->mwbase;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam0_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1))
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

bool get_GovSteam0_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1))
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam0_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1))
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam0_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1))
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam0_vmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1))
	{
		buffer << element->vmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam0_vmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1))
	{
		buffer << element->vmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char GovSteam0::debugName[] = "GovSteam0";
const char* GovSteam0::debugString() const
{
	return GovSteam0::debugName;
}

void GovSteam0::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovSteam0"), &GovSteam0_factory));
}

void GovSteam0::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.dt"), &assign_GovSteam0_dt));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.mwbase"), &assign_GovSteam0_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.r"), &assign_GovSteam0_r));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.t1"), &assign_GovSteam0_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.t2"), &assign_GovSteam0_t2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.t3"), &assign_GovSteam0_t3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.vmax"), &assign_GovSteam0_vmax));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.vmin"), &assign_GovSteam0_vmin));
}

void GovSteam0::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteam0::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovSteam0.dt", &get_GovSteam0_dt);
	get_map.emplace("cim:GovSteam0.mwbase", &get_GovSteam0_mwbase);
	get_map.emplace("cim:GovSteam0.r", &get_GovSteam0_r);
	get_map.emplace("cim:GovSteam0.t1", &get_GovSteam0_t1);
	get_map.emplace("cim:GovSteam0.t2", &get_GovSteam0_t2);
	get_map.emplace("cim:GovSteam0.t3", &get_GovSteam0_t3);
	get_map.emplace("cim:GovSteam0.vmax", &get_GovSteam0_vmax);
	get_map.emplace("cim:GovSteam0.vmin", &get_GovSteam0_vmin);
}

void GovSteam0::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteam0::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovSteam0::declare()
{
	return BaseClassDefiner(GovSteam0::addConstructToMap, GovSteam0::addPrimitiveAssignFnsToMap, GovSteam0::addClassAssignFnsToMap, GovSteam0::debugName);
}

namespace CIMPP
{
	BaseClass* GovSteam0_factory()
	{
		return new GovSteam0;
	}
}
