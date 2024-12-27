/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteamFV3.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

GovSteamFV3::GovSteamFV3() {};
GovSteamFV3::~GovSteamFV3() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovSteamFV3.k", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.k1", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.k2", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.k3", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.pmax", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.pmin", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.prmax", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.t1", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.t2", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.t3", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.t4", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.t5", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.t6", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.ta", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.tb", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.tc", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.uc", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV3.uo", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovSteamFV3::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovSteamFV3::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GovSteamFV3_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->k;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->k1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->k2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->k3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->pmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->pmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_prmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->prmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->t4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->t5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->t6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_uc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->uc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV3_uo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer >> element->uo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GovSteamFV3_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
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

bool get_GovSteamFV3_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer << element->k1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV3_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer << element->k2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV3_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer << element->k3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV3_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
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

bool get_GovSteamFV3_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer << element->pmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV3_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer << element->pmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV3_prmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer << element->prmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV3_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
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

bool get_GovSteamFV3_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
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

bool get_GovSteamFV3_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
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

bool get_GovSteamFV3_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer << element->t4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV3_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer << element->t5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV3_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer << element->t6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV3_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
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

bool get_GovSteamFV3_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
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

bool get_GovSteamFV3_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
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

bool get_GovSteamFV3_uc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer << element->uc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV3_uo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV3* element = dynamic_cast<const GovSteamFV3*>(BaseClass_ptr1))
	{
		buffer << element->uo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char GovSteamFV3::debugName[] = "GovSteamFV3";
const char* GovSteamFV3::debugString() const
{
	return GovSteamFV3::debugName;
}

void GovSteamFV3::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovSteamFV3"), &GovSteamFV3_factory));
}

void GovSteamFV3::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.k"), &assign_GovSteamFV3_k));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.k1"), &assign_GovSteamFV3_k1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.k2"), &assign_GovSteamFV3_k2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.k3"), &assign_GovSteamFV3_k3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.mwbase"), &assign_GovSteamFV3_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.pmax"), &assign_GovSteamFV3_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.pmin"), &assign_GovSteamFV3_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.prmax"), &assign_GovSteamFV3_prmax));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.t1"), &assign_GovSteamFV3_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.t2"), &assign_GovSteamFV3_t2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.t3"), &assign_GovSteamFV3_t3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.t4"), &assign_GovSteamFV3_t4));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.t5"), &assign_GovSteamFV3_t5));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.t6"), &assign_GovSteamFV3_t6));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.ta"), &assign_GovSteamFV3_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.tb"), &assign_GovSteamFV3_tb));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.tc"), &assign_GovSteamFV3_tc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.uc"), &assign_GovSteamFV3_uc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.uo"), &assign_GovSteamFV3_uo));
}

void GovSteamFV3::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteamFV3::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovSteamFV3.k", &get_GovSteamFV3_k);
	get_map.emplace("cim:GovSteamFV3.k1", &get_GovSteamFV3_k1);
	get_map.emplace("cim:GovSteamFV3.k2", &get_GovSteamFV3_k2);
	get_map.emplace("cim:GovSteamFV3.k3", &get_GovSteamFV3_k3);
	get_map.emplace("cim:GovSteamFV3.mwbase", &get_GovSteamFV3_mwbase);
	get_map.emplace("cim:GovSteamFV3.pmax", &get_GovSteamFV3_pmax);
	get_map.emplace("cim:GovSteamFV3.pmin", &get_GovSteamFV3_pmin);
	get_map.emplace("cim:GovSteamFV3.prmax", &get_GovSteamFV3_prmax);
	get_map.emplace("cim:GovSteamFV3.t1", &get_GovSteamFV3_t1);
	get_map.emplace("cim:GovSteamFV3.t2", &get_GovSteamFV3_t2);
	get_map.emplace("cim:GovSteamFV3.t3", &get_GovSteamFV3_t3);
	get_map.emplace("cim:GovSteamFV3.t4", &get_GovSteamFV3_t4);
	get_map.emplace("cim:GovSteamFV3.t5", &get_GovSteamFV3_t5);
	get_map.emplace("cim:GovSteamFV3.t6", &get_GovSteamFV3_t6);
	get_map.emplace("cim:GovSteamFV3.ta", &get_GovSteamFV3_ta);
	get_map.emplace("cim:GovSteamFV3.tb", &get_GovSteamFV3_tb);
	get_map.emplace("cim:GovSteamFV3.tc", &get_GovSteamFV3_tc);
	get_map.emplace("cim:GovSteamFV3.uc", &get_GovSteamFV3_uc);
	get_map.emplace("cim:GovSteamFV3.uo", &get_GovSteamFV3_uo);
}

void GovSteamFV3::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteamFV3::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovSteamFV3::declare()
{
	return BaseClassDefiner(GovSteamFV3::addConstructToMap, GovSteamFV3::addPrimitiveAssignFnsToMap, GovSteamFV3::addClassAssignFnsToMap, GovSteamFV3::debugName);
}

namespace CIMPP
{
	BaseClass* GovSteamFV3_factory()
	{
		return new GovSteamFV3;
	}
}
