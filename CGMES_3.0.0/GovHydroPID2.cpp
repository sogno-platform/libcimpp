/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroPID2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Float.hpp"
#include "Float.hpp"

using namespace CIMPP;

GovHydroPID2::GovHydroPID2() {};
GovHydroPID2::~GovHydroPID2() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovHydroPID2.atw", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.d", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.feedbackSignal", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.g0", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.g1", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.g2", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.gmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.gmin", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.kd", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.ki", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.kp", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.p1", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.p2", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.p3", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.rperm", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.ta", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.tb", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.treg", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.tw", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.velmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroPID2.velmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovHydroPID2::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovHydroPID2::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GovHydroPID2_atw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->atw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_d(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->d;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_feedbackSignal(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->feedbackSignal;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_g0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->g0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_g1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->g1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_g2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->g2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_gmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->gmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_gmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->gmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_p1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->p1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_p2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->p2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_p3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->p3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_rperm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->rperm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_treg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->treg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_tw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->tw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_velmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->velmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID2_velmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer >> element->velmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GovHydroPID2_atw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer << element->atw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
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

bool get_GovHydroPID2_feedbackSignal(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer << element->feedbackSignal;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_g0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer << element->g0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_g1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer << element->g1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_g2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer << element->g2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_gmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer << element->gmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_gmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer << element->gmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
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

bool get_GovHydroPID2_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
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

bool get_GovHydroPID2_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
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

bool get_GovHydroPID2_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
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

bool get_GovHydroPID2_p1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer << element->p1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_p2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer << element->p2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_p3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer << element->p3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_rperm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
	{
		buffer << element->rperm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
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

bool get_GovHydroPID2_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
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

bool get_GovHydroPID2_treg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
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

bool get_GovHydroPID2_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
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

bool get_GovHydroPID2_velmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
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

bool get_GovHydroPID2_velmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1))
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



const char GovHydroPID2::debugName[] = "GovHydroPID2";
const char* GovHydroPID2::debugString() const
{
	return GovHydroPID2::debugName;
}

void GovHydroPID2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovHydroPID2"), &GovHydroPID2_factory));
}

void GovHydroPID2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.atw"), &assign_GovHydroPID2_atw));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.d"), &assign_GovHydroPID2_d));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.feedbackSignal"), &assign_GovHydroPID2_feedbackSignal));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.g0"), &assign_GovHydroPID2_g0));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.g1"), &assign_GovHydroPID2_g1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.g2"), &assign_GovHydroPID2_g2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.gmax"), &assign_GovHydroPID2_gmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.gmin"), &assign_GovHydroPID2_gmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.kd"), &assign_GovHydroPID2_kd));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.ki"), &assign_GovHydroPID2_ki));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.kp"), &assign_GovHydroPID2_kp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.mwbase"), &assign_GovHydroPID2_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.p1"), &assign_GovHydroPID2_p1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.p2"), &assign_GovHydroPID2_p2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.p3"), &assign_GovHydroPID2_p3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.rperm"), &assign_GovHydroPID2_rperm));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.ta"), &assign_GovHydroPID2_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.tb"), &assign_GovHydroPID2_tb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.treg"), &assign_GovHydroPID2_treg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.tw"), &assign_GovHydroPID2_tw));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.velmax"), &assign_GovHydroPID2_velmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.velmin"), &assign_GovHydroPID2_velmin));
}

void GovHydroPID2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroPID2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovHydroPID2.atw", &get_GovHydroPID2_atw);
	get_map.emplace("cim:GovHydroPID2.d", &get_GovHydroPID2_d);
	get_map.emplace("cim:GovHydroPID2.feedbackSignal", &get_GovHydroPID2_feedbackSignal);
	get_map.emplace("cim:GovHydroPID2.g0", &get_GovHydroPID2_g0);
	get_map.emplace("cim:GovHydroPID2.g1", &get_GovHydroPID2_g1);
	get_map.emplace("cim:GovHydroPID2.g2", &get_GovHydroPID2_g2);
	get_map.emplace("cim:GovHydroPID2.gmax", &get_GovHydroPID2_gmax);
	get_map.emplace("cim:GovHydroPID2.gmin", &get_GovHydroPID2_gmin);
	get_map.emplace("cim:GovHydroPID2.kd", &get_GovHydroPID2_kd);
	get_map.emplace("cim:GovHydroPID2.ki", &get_GovHydroPID2_ki);
	get_map.emplace("cim:GovHydroPID2.kp", &get_GovHydroPID2_kp);
	get_map.emplace("cim:GovHydroPID2.mwbase", &get_GovHydroPID2_mwbase);
	get_map.emplace("cim:GovHydroPID2.p1", &get_GovHydroPID2_p1);
	get_map.emplace("cim:GovHydroPID2.p2", &get_GovHydroPID2_p2);
	get_map.emplace("cim:GovHydroPID2.p3", &get_GovHydroPID2_p3);
	get_map.emplace("cim:GovHydroPID2.rperm", &get_GovHydroPID2_rperm);
	get_map.emplace("cim:GovHydroPID2.ta", &get_GovHydroPID2_ta);
	get_map.emplace("cim:GovHydroPID2.tb", &get_GovHydroPID2_tb);
	get_map.emplace("cim:GovHydroPID2.treg", &get_GovHydroPID2_treg);
	get_map.emplace("cim:GovHydroPID2.tw", &get_GovHydroPID2_tw);
	get_map.emplace("cim:GovHydroPID2.velmax", &get_GovHydroPID2_velmax);
	get_map.emplace("cim:GovHydroPID2.velmin", &get_GovHydroPID2_velmin);
}

void GovHydroPID2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroPID2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovHydroPID2::declare()
{
	return BaseClassDefiner(GovHydroPID2::addConstructToMap, GovHydroPID2::addPrimitiveAssignFnsToMap, GovHydroPID2::addClassAssignFnsToMap, GovHydroPID2::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydroPID2_factory()
	{
		return new GovHydroPID2;
	}
}
