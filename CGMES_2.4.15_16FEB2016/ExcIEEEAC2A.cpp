/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEAC2A.hpp"

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
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEAC2A::ExcIEEEAC2A() {};
ExcIEEEAC2A::~ExcIEEEAC2A() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEAC2A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.kb", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.kc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.kd", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.ke", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.kh", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.seve1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.seve2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.te", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.tf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.vamax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.vamin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.ve1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.ve2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.vfemax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC2A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEAC2A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEAC2A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcIEEEAC2A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_kb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->kb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_kh(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->kh;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_seve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->seve1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_seve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->seve2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_vamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->vamax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_vamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->vamin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_ve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->ve1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_ve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->ve2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_vfemax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->vfemax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC2A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcIEEEAC2A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_kb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer << element->kb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC2A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_kh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer << element->kh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC2A_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_vfemax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
	{
		buffer << element->vfemax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC2A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC2A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1))
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



const char ExcIEEEAC2A::debugName[] = "ExcIEEEAC2A";
const char* ExcIEEEAC2A::debugString() const
{
	return ExcIEEEAC2A::debugName;
}

void ExcIEEEAC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A"), &ExcIEEEAC2A_factory));
}

void ExcIEEEAC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.ka"), &assign_ExcIEEEAC2A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.kb"), &assign_ExcIEEEAC2A_kb));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.kc"), &assign_ExcIEEEAC2A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.kd"), &assign_ExcIEEEAC2A_kd));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.ke"), &assign_ExcIEEEAC2A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.kf"), &assign_ExcIEEEAC2A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.kh"), &assign_ExcIEEEAC2A_kh));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.seve1"), &assign_ExcIEEEAC2A_seve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.seve2"), &assign_ExcIEEEAC2A_seve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.ta"), &assign_ExcIEEEAC2A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.tb"), &assign_ExcIEEEAC2A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.tc"), &assign_ExcIEEEAC2A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.te"), &assign_ExcIEEEAC2A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.tf"), &assign_ExcIEEEAC2A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.vamax"), &assign_ExcIEEEAC2A_vamax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.vamin"), &assign_ExcIEEEAC2A_vamin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.ve1"), &assign_ExcIEEEAC2A_ve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.ve2"), &assign_ExcIEEEAC2A_ve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.vfemax"), &assign_ExcIEEEAC2A_vfemax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.vrmax"), &assign_ExcIEEEAC2A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.vrmin"), &assign_ExcIEEEAC2A_vrmin));
}

void ExcIEEEAC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEAC2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEAC2A.ka", &get_ExcIEEEAC2A_ka);
	get_map.emplace("cim:ExcIEEEAC2A.kb", &get_ExcIEEEAC2A_kb);
	get_map.emplace("cim:ExcIEEEAC2A.kc", &get_ExcIEEEAC2A_kc);
	get_map.emplace("cim:ExcIEEEAC2A.kd", &get_ExcIEEEAC2A_kd);
	get_map.emplace("cim:ExcIEEEAC2A.ke", &get_ExcIEEEAC2A_ke);
	get_map.emplace("cim:ExcIEEEAC2A.kf", &get_ExcIEEEAC2A_kf);
	get_map.emplace("cim:ExcIEEEAC2A.kh", &get_ExcIEEEAC2A_kh);
	get_map.emplace("cim:ExcIEEEAC2A.seve1", &get_ExcIEEEAC2A_seve1);
	get_map.emplace("cim:ExcIEEEAC2A.seve2", &get_ExcIEEEAC2A_seve2);
	get_map.emplace("cim:ExcIEEEAC2A.ta", &get_ExcIEEEAC2A_ta);
	get_map.emplace("cim:ExcIEEEAC2A.tb", &get_ExcIEEEAC2A_tb);
	get_map.emplace("cim:ExcIEEEAC2A.tc", &get_ExcIEEEAC2A_tc);
	get_map.emplace("cim:ExcIEEEAC2A.te", &get_ExcIEEEAC2A_te);
	get_map.emplace("cim:ExcIEEEAC2A.tf", &get_ExcIEEEAC2A_tf);
	get_map.emplace("cim:ExcIEEEAC2A.vamax", &get_ExcIEEEAC2A_vamax);
	get_map.emplace("cim:ExcIEEEAC2A.vamin", &get_ExcIEEEAC2A_vamin);
	get_map.emplace("cim:ExcIEEEAC2A.ve1", &get_ExcIEEEAC2A_ve1);
	get_map.emplace("cim:ExcIEEEAC2A.ve2", &get_ExcIEEEAC2A_ve2);
	get_map.emplace("cim:ExcIEEEAC2A.vfemax", &get_ExcIEEEAC2A_vfemax);
	get_map.emplace("cim:ExcIEEEAC2A.vrmax", &get_ExcIEEEAC2A_vrmax);
	get_map.emplace("cim:ExcIEEEAC2A.vrmin", &get_ExcIEEEAC2A_vrmin);
}

void ExcIEEEAC2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEAC2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcIEEEAC2A::declare()
{
	return BaseClassDefiner(ExcIEEEAC2A::addConstructToMap, ExcIEEEAC2A::addPrimitiveAssignFnsToMap, ExcIEEEAC2A::addClassAssignFnsToMap, ExcIEEEAC2A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEAC2A_factory()
	{
		return new ExcIEEEAC2A;
	}
}
