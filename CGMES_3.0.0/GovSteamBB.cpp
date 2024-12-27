/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteamBB.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

GovSteamBB::GovSteamBB() {};
GovSteamBB::~GovSteamBB() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovSteamBB.fcut", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.k2", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.k3", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.kd", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.kg", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.kls", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.kp", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.ks", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.peflag", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.pmax", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.pmin", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.t1", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.t4", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.t5", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.t6", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.td", { CGMESProfile::DY, } },
	{ "cim:GovSteamBB.tn", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovSteamBB::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovSteamBB::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GovSteamBB_fcut(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->fcut;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->k2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->k3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->kg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_kls(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->kls;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->ks;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_peflag(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->peflag;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->pmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->pmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->t4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->t5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->t6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->td;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamBB_tn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1))
	{
		buffer >> element->tn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GovSteamBB_fcut(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
	{
		buffer << element->fcut;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
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

bool get_GovSteamBB_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
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

bool get_GovSteamBB_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
	{
		buffer << element->kd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
	{
		buffer << element->kg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_kls(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
	{
		buffer << element->kls;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
	{
		buffer << element->kp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
	{
		buffer << element->ks;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_peflag(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
	{
		buffer << element->peflag;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
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

bool get_GovSteamBB_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
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

bool get_GovSteamBB_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
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

bool get_GovSteamBB_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
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

bool get_GovSteamBB_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
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

bool get_GovSteamBB_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
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

bool get_GovSteamBB_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
	{
		buffer << element->td;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_tn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1))
	{
		buffer << element->tn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char GovSteamBB::debugName[] = "GovSteamBB";
const char* GovSteamBB::debugString() const
{
	return GovSteamBB::debugName;
}

void GovSteamBB::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovSteamBB"), &GovSteamBB_factory));
}

void GovSteamBB::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.fcut"), &assign_GovSteamBB_fcut));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.k2"), &assign_GovSteamBB_k2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.k3"), &assign_GovSteamBB_k3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.kd"), &assign_GovSteamBB_kd));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.kg"), &assign_GovSteamBB_kg));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.kls"), &assign_GovSteamBB_kls));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.kp"), &assign_GovSteamBB_kp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.ks"), &assign_GovSteamBB_ks));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.peflag"), &assign_GovSteamBB_peflag));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.pmax"), &assign_GovSteamBB_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.pmin"), &assign_GovSteamBB_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.t1"), &assign_GovSteamBB_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.t4"), &assign_GovSteamBB_t4));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.t5"), &assign_GovSteamBB_t5));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.t6"), &assign_GovSteamBB_t6));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.td"), &assign_GovSteamBB_td));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamBB.tn"), &assign_GovSteamBB_tn));
}

void GovSteamBB::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteamBB::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovSteamBB.fcut", &get_GovSteamBB_fcut);
	get_map.emplace("cim:GovSteamBB.k2", &get_GovSteamBB_k2);
	get_map.emplace("cim:GovSteamBB.k3", &get_GovSteamBB_k3);
	get_map.emplace("cim:GovSteamBB.kd", &get_GovSteamBB_kd);
	get_map.emplace("cim:GovSteamBB.kg", &get_GovSteamBB_kg);
	get_map.emplace("cim:GovSteamBB.kls", &get_GovSteamBB_kls);
	get_map.emplace("cim:GovSteamBB.kp", &get_GovSteamBB_kp);
	get_map.emplace("cim:GovSteamBB.ks", &get_GovSteamBB_ks);
	get_map.emplace("cim:GovSteamBB.peflag", &get_GovSteamBB_peflag);
	get_map.emplace("cim:GovSteamBB.pmax", &get_GovSteamBB_pmax);
	get_map.emplace("cim:GovSteamBB.pmin", &get_GovSteamBB_pmin);
	get_map.emplace("cim:GovSteamBB.t1", &get_GovSteamBB_t1);
	get_map.emplace("cim:GovSteamBB.t4", &get_GovSteamBB_t4);
	get_map.emplace("cim:GovSteamBB.t5", &get_GovSteamBB_t5);
	get_map.emplace("cim:GovSteamBB.t6", &get_GovSteamBB_t6);
	get_map.emplace("cim:GovSteamBB.td", &get_GovSteamBB_td);
	get_map.emplace("cim:GovSteamBB.tn", &get_GovSteamBB_tn);
}

void GovSteamBB::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteamBB::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovSteamBB::declare()
{
	return BaseClassDefiner(GovSteamBB::addConstructToMap, GovSteamBB::addPrimitiveAssignFnsToMap, GovSteamBB::addClassAssignFnsToMap, GovSteamBB::debugName);
}

namespace CIMPP
{
	BaseClass* GovSteamBB_factory()
	{
		return new GovSteamBB;
	}
}
