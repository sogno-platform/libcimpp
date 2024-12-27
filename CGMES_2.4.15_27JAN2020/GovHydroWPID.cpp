/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroWPID.hpp"

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
#include "PU.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

GovHydroWPID::GovHydroWPID() {};
GovHydroWPID::~GovHydroWPID() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovHydroWPID.d", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.gatmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.gatmin", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.gv1", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.gv2", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.gv3", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.kd", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.ki", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.kp", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.pgv1", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.pgv2", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.pgv3", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.pmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.pmin", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.reg", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.ta", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.tb", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.treg", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.tw", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.velmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroWPID.velmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovHydroWPID::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovHydroWPID::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GovHydroWPID_d(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->d;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_gatmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->gatmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_gatmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->gatmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_gv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->gv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_gv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->gv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_gv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->gv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_pgv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->pgv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_pgv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->pgv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_pgv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->pgv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->pmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->pmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_reg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->reg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_treg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->treg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_tw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->tw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_velmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->velmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWPID_velmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer >> element->velmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GovHydroWPID_d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->d;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_gatmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->gatmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_gatmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->gatmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->gv1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->gv2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->gv3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
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

bool get_GovHydroWPID_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
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

bool get_GovHydroWPID_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
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

bool get_GovHydroWPID_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->pgv1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->pgv2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->pgv3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
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

bool get_GovHydroWPID_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
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

bool get_GovHydroWPID_reg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->reg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
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

bool get_GovHydroWPID_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
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

bool get_GovHydroWPID_treg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->treg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->tw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_velmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->velmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_velmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1))
	{
		buffer << element->velmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char GovHydroWPID::debugName[] = "GovHydroWPID";
const char* GovHydroWPID::debugString() const
{
	return GovHydroWPID::debugName;
}

void GovHydroWPID::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovHydroWPID"), &GovHydroWPID_factory));
}

void GovHydroWPID::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.d"), &assign_GovHydroWPID_d));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.gatmax"), &assign_GovHydroWPID_gatmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.gatmin"), &assign_GovHydroWPID_gatmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.gv1"), &assign_GovHydroWPID_gv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.gv2"), &assign_GovHydroWPID_gv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.gv3"), &assign_GovHydroWPID_gv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.kd"), &assign_GovHydroWPID_kd));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.ki"), &assign_GovHydroWPID_ki));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.kp"), &assign_GovHydroWPID_kp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.mwbase"), &assign_GovHydroWPID_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.pgv1"), &assign_GovHydroWPID_pgv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.pgv2"), &assign_GovHydroWPID_pgv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.pgv3"), &assign_GovHydroWPID_pgv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.pmax"), &assign_GovHydroWPID_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.pmin"), &assign_GovHydroWPID_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.reg"), &assign_GovHydroWPID_reg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.ta"), &assign_GovHydroWPID_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.tb"), &assign_GovHydroWPID_tb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.treg"), &assign_GovHydroWPID_treg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.tw"), &assign_GovHydroWPID_tw));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.velmax"), &assign_GovHydroWPID_velmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.velmin"), &assign_GovHydroWPID_velmin));
}

void GovHydroWPID::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroWPID::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovHydroWPID.d", &get_GovHydroWPID_d);
	get_map.emplace("cim:GovHydroWPID.gatmax", &get_GovHydroWPID_gatmax);
	get_map.emplace("cim:GovHydroWPID.gatmin", &get_GovHydroWPID_gatmin);
	get_map.emplace("cim:GovHydroWPID.gv1", &get_GovHydroWPID_gv1);
	get_map.emplace("cim:GovHydroWPID.gv2", &get_GovHydroWPID_gv2);
	get_map.emplace("cim:GovHydroWPID.gv3", &get_GovHydroWPID_gv3);
	get_map.emplace("cim:GovHydroWPID.kd", &get_GovHydroWPID_kd);
	get_map.emplace("cim:GovHydroWPID.ki", &get_GovHydroWPID_ki);
	get_map.emplace("cim:GovHydroWPID.kp", &get_GovHydroWPID_kp);
	get_map.emplace("cim:GovHydroWPID.mwbase", &get_GovHydroWPID_mwbase);
	get_map.emplace("cim:GovHydroWPID.pgv1", &get_GovHydroWPID_pgv1);
	get_map.emplace("cim:GovHydroWPID.pgv2", &get_GovHydroWPID_pgv2);
	get_map.emplace("cim:GovHydroWPID.pgv3", &get_GovHydroWPID_pgv3);
	get_map.emplace("cim:GovHydroWPID.pmax", &get_GovHydroWPID_pmax);
	get_map.emplace("cim:GovHydroWPID.pmin", &get_GovHydroWPID_pmin);
	get_map.emplace("cim:GovHydroWPID.reg", &get_GovHydroWPID_reg);
	get_map.emplace("cim:GovHydroWPID.ta", &get_GovHydroWPID_ta);
	get_map.emplace("cim:GovHydroWPID.tb", &get_GovHydroWPID_tb);
	get_map.emplace("cim:GovHydroWPID.treg", &get_GovHydroWPID_treg);
	get_map.emplace("cim:GovHydroWPID.tw", &get_GovHydroWPID_tw);
	get_map.emplace("cim:GovHydroWPID.velmax", &get_GovHydroWPID_velmax);
	get_map.emplace("cim:GovHydroWPID.velmin", &get_GovHydroWPID_velmin);
}

void GovHydroWPID::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroWPID::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovHydroWPID::declare()
{
	return BaseClassDefiner(GovHydroWPID::addConstructToMap, GovHydroWPID::addPrimitiveAssignFnsToMap, GovHydroWPID::addClassAssignFnsToMap, GovHydroWPID::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydroWPID_factory()
	{
		return new GovHydroWPID;
	}
}
