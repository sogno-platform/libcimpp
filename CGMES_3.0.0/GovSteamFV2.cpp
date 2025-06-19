/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteamFV2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovSteamFV2::GovSteamFV2() {}
GovSteamFV2::~GovSteamFV2() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovSteamFV2.dt", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV2.k", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV2.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV2.r", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV2.t1", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV2.t3", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV2.ta", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV2.tb", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV2.tc", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV2.tt", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV2.vmax", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV2.vmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovSteamFV2::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovSteamFV2::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovSteamFV2_dt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwbase;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ta;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_tt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_vmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_vmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovSteamFV2_dt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamFV2_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV2_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamFV2_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamFV2_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamFV2_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamFV2_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV2_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV2_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV2_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV2_vmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamFV2_vmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char GovSteamFV2::debugName[] = "GovSteamFV2";
const char* GovSteamFV2::debugString() const
{
	return GovSteamFV2::debugName;
}

void GovSteamFV2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovSteamFV2", &GovSteamFV2_factory);
}

void GovSteamFV2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovSteamFV2.dt", &assign_GovSteamFV2_dt);
	assign_map.emplace("cim:GovSteamFV2.k", &assign_GovSteamFV2_k);
	assign_map.emplace("cim:GovSteamFV2.mwbase", &assign_GovSteamFV2_mwbase);
	assign_map.emplace("cim:GovSteamFV2.r", &assign_GovSteamFV2_r);
	assign_map.emplace("cim:GovSteamFV2.t1", &assign_GovSteamFV2_t1);
	assign_map.emplace("cim:GovSteamFV2.t3", &assign_GovSteamFV2_t3);
	assign_map.emplace("cim:GovSteamFV2.ta", &assign_GovSteamFV2_ta);
	assign_map.emplace("cim:GovSteamFV2.tb", &assign_GovSteamFV2_tb);
	assign_map.emplace("cim:GovSteamFV2.tc", &assign_GovSteamFV2_tc);
	assign_map.emplace("cim:GovSteamFV2.tt", &assign_GovSteamFV2_tt);
	assign_map.emplace("cim:GovSteamFV2.vmax", &assign_GovSteamFV2_vmax);
	assign_map.emplace("cim:GovSteamFV2.vmin", &assign_GovSteamFV2_vmin);
}

void GovSteamFV2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteamFV2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovSteamFV2.dt", &get_GovSteamFV2_dt);
	get_map.emplace("cim:GovSteamFV2.k", &get_GovSteamFV2_k);
	get_map.emplace("cim:GovSteamFV2.mwbase", &get_GovSteamFV2_mwbase);
	get_map.emplace("cim:GovSteamFV2.r", &get_GovSteamFV2_r);
	get_map.emplace("cim:GovSteamFV2.t1", &get_GovSteamFV2_t1);
	get_map.emplace("cim:GovSteamFV2.t3", &get_GovSteamFV2_t3);
	get_map.emplace("cim:GovSteamFV2.ta", &get_GovSteamFV2_ta);
	get_map.emplace("cim:GovSteamFV2.tb", &get_GovSteamFV2_tb);
	get_map.emplace("cim:GovSteamFV2.tc", &get_GovSteamFV2_tc);
	get_map.emplace("cim:GovSteamFV2.tt", &get_GovSteamFV2_tt);
	get_map.emplace("cim:GovSteamFV2.vmax", &get_GovSteamFV2_vmax);
	get_map.emplace("cim:GovSteamFV2.vmin", &get_GovSteamFV2_vmin);
}

void GovSteamFV2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteamFV2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovSteamFV2::declare()
{
	return BaseClassDefiner(GovSteamFV2::addConstructToMap, GovSteamFV2::addPrimitiveAssignFnsToMap, GovSteamFV2::addClassAssignFnsToMap, GovSteamFV2::debugName);
}

namespace CIMPP
{
	BaseClass* GovSteamFV2_factory()
	{
		return new GovSteamFV2;
	}
}
