/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAC1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcAC1A::ExcAC1A() {};
ExcAC1A::~ExcAC1A() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcAC1A.hvlvgates", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.kc", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.kd", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.ke", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.kf1", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.kf2", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.ks", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.seve1", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.seve2", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.te", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.tf", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.vamax", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.vamin", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.ve1", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.ve2", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcAC1A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcAC1A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcAC1A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcAC1A_hvlvgates(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->hvlvgates;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_kf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->kf1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_kf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->kf2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->ks;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_seve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->seve1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_seve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->seve2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_vamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vamax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_vamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vamin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_ve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->ve1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_ve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->ve2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAC1A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcAC1A_hvlvgates(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->hvlvgates;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->ka;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->kc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
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

bool get_ExcAC1A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->kf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_kf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->kf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_kf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->kf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
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

bool get_ExcAC1A_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->seve1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->seve2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
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

bool get_ExcAC1A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
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

bool get_ExcAC1A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
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

bool get_ExcAC1A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->te;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->tf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->vamax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->vamin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->ve1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->ve2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->vrmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1))
	{
		buffer << element->vrmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char ExcAC1A::debugName[] = "ExcAC1A";
const char* ExcAC1A::debugString() const
{
	return ExcAC1A::debugName;
}

void ExcAC1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcAC1A"), &ExcAC1A_factory));
}

void ExcAC1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.hvlvgates"), &assign_ExcAC1A_hvlvgates));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.ka"), &assign_ExcAC1A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.kc"), &assign_ExcAC1A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.kd"), &assign_ExcAC1A_kd));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.ke"), &assign_ExcAC1A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.kf"), &assign_ExcAC1A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.kf1"), &assign_ExcAC1A_kf1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.kf2"), &assign_ExcAC1A_kf2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.ks"), &assign_ExcAC1A_ks));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.seve1"), &assign_ExcAC1A_seve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.seve2"), &assign_ExcAC1A_seve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.ta"), &assign_ExcAC1A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.tb"), &assign_ExcAC1A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.tc"), &assign_ExcAC1A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.te"), &assign_ExcAC1A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.tf"), &assign_ExcAC1A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.vamax"), &assign_ExcAC1A_vamax));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.vamin"), &assign_ExcAC1A_vamin));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.ve1"), &assign_ExcAC1A_ve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.ve2"), &assign_ExcAC1A_ve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.vrmax"), &assign_ExcAC1A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC1A.vrmin"), &assign_ExcAC1A_vrmin));
}

void ExcAC1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAC1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcAC1A.hvlvgates", &get_ExcAC1A_hvlvgates);
	get_map.emplace("cim:ExcAC1A.ka", &get_ExcAC1A_ka);
	get_map.emplace("cim:ExcAC1A.kc", &get_ExcAC1A_kc);
	get_map.emplace("cim:ExcAC1A.kd", &get_ExcAC1A_kd);
	get_map.emplace("cim:ExcAC1A.ke", &get_ExcAC1A_ke);
	get_map.emplace("cim:ExcAC1A.kf", &get_ExcAC1A_kf);
	get_map.emplace("cim:ExcAC1A.kf1", &get_ExcAC1A_kf1);
	get_map.emplace("cim:ExcAC1A.kf2", &get_ExcAC1A_kf2);
	get_map.emplace("cim:ExcAC1A.ks", &get_ExcAC1A_ks);
	get_map.emplace("cim:ExcAC1A.seve1", &get_ExcAC1A_seve1);
	get_map.emplace("cim:ExcAC1A.seve2", &get_ExcAC1A_seve2);
	get_map.emplace("cim:ExcAC1A.ta", &get_ExcAC1A_ta);
	get_map.emplace("cim:ExcAC1A.tb", &get_ExcAC1A_tb);
	get_map.emplace("cim:ExcAC1A.tc", &get_ExcAC1A_tc);
	get_map.emplace("cim:ExcAC1A.te", &get_ExcAC1A_te);
	get_map.emplace("cim:ExcAC1A.tf", &get_ExcAC1A_tf);
	get_map.emplace("cim:ExcAC1A.vamax", &get_ExcAC1A_vamax);
	get_map.emplace("cim:ExcAC1A.vamin", &get_ExcAC1A_vamin);
	get_map.emplace("cim:ExcAC1A.ve1", &get_ExcAC1A_ve1);
	get_map.emplace("cim:ExcAC1A.ve2", &get_ExcAC1A_ve2);
	get_map.emplace("cim:ExcAC1A.vrmax", &get_ExcAC1A_vrmax);
	get_map.emplace("cim:ExcAC1A.vrmin", &get_ExcAC1A_vrmin);
}

void ExcAC1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAC1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcAC1A::declare()
{
	return BaseClassDefiner(ExcAC1A::addConstructToMap, ExcAC1A::addPrimitiveAssignFnsToMap, ExcAC1A::addClassAssignFnsToMap, ExcAC1A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcAC1A_factory()
	{
		return new ExcAC1A;
	}
}
