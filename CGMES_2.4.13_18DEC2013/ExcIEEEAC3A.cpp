/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEAC3A.hpp"

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

ExcIEEEAC3A::ExcIEEEAC3A() {};
ExcIEEEAC3A::~ExcIEEEAC3A() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEAC3A.efdn", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.kc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.kd", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.ke", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.klv", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.kn", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.kr", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.seve1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.seve2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.te", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.tf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.vamax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.vamin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.ve1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.ve2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.vemin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.vfemax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC3A.vlv", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEAC3A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEAC3A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcIEEEAC3A_efdn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->efdn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_klv(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->klv;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_kn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->kn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_kr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->kr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_seve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->seve1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_seve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->seve2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_vamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->vamax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_vamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->vamin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_ve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->ve1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_ve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->ve2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_vemin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->vemin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_vfemax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->vfemax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC3A_vlv(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer >> element->vlv;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcIEEEAC3A_efdn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer << element->efdn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC3A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_klv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer << element->klv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC3A_kn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer << element->kn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC3A_kr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer << element->kr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC3A_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_vemin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer << element->vemin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC3A_vfemax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC3A_vlv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1))
	{
		buffer << element->vlv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char ExcIEEEAC3A::debugName[] = "ExcIEEEAC3A";
const char* ExcIEEEAC3A::debugString() const
{
	return ExcIEEEAC3A::debugName;
}

void ExcIEEEAC3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A"), &ExcIEEEAC3A_factory));
}

void ExcIEEEAC3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.efdn"), &assign_ExcIEEEAC3A_efdn));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.ka"), &assign_ExcIEEEAC3A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.kc"), &assign_ExcIEEEAC3A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.kd"), &assign_ExcIEEEAC3A_kd));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.ke"), &assign_ExcIEEEAC3A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.kf"), &assign_ExcIEEEAC3A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.klv"), &assign_ExcIEEEAC3A_klv));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.kn"), &assign_ExcIEEEAC3A_kn));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.kr"), &assign_ExcIEEEAC3A_kr));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.seve1"), &assign_ExcIEEEAC3A_seve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.seve2"), &assign_ExcIEEEAC3A_seve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.ta"), &assign_ExcIEEEAC3A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.tb"), &assign_ExcIEEEAC3A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.tc"), &assign_ExcIEEEAC3A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.te"), &assign_ExcIEEEAC3A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.tf"), &assign_ExcIEEEAC3A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.vamax"), &assign_ExcIEEEAC3A_vamax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.vamin"), &assign_ExcIEEEAC3A_vamin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.ve1"), &assign_ExcIEEEAC3A_ve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.ve2"), &assign_ExcIEEEAC3A_ve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.vemin"), &assign_ExcIEEEAC3A_vemin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.vfemax"), &assign_ExcIEEEAC3A_vfemax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC3A.vlv"), &assign_ExcIEEEAC3A_vlv));
}

void ExcIEEEAC3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEAC3A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEAC3A.efdn", &get_ExcIEEEAC3A_efdn);
	get_map.emplace("cim:ExcIEEEAC3A.ka", &get_ExcIEEEAC3A_ka);
	get_map.emplace("cim:ExcIEEEAC3A.kc", &get_ExcIEEEAC3A_kc);
	get_map.emplace("cim:ExcIEEEAC3A.kd", &get_ExcIEEEAC3A_kd);
	get_map.emplace("cim:ExcIEEEAC3A.ke", &get_ExcIEEEAC3A_ke);
	get_map.emplace("cim:ExcIEEEAC3A.kf", &get_ExcIEEEAC3A_kf);
	get_map.emplace("cim:ExcIEEEAC3A.klv", &get_ExcIEEEAC3A_klv);
	get_map.emplace("cim:ExcIEEEAC3A.kn", &get_ExcIEEEAC3A_kn);
	get_map.emplace("cim:ExcIEEEAC3A.kr", &get_ExcIEEEAC3A_kr);
	get_map.emplace("cim:ExcIEEEAC3A.seve1", &get_ExcIEEEAC3A_seve1);
	get_map.emplace("cim:ExcIEEEAC3A.seve2", &get_ExcIEEEAC3A_seve2);
	get_map.emplace("cim:ExcIEEEAC3A.ta", &get_ExcIEEEAC3A_ta);
	get_map.emplace("cim:ExcIEEEAC3A.tb", &get_ExcIEEEAC3A_tb);
	get_map.emplace("cim:ExcIEEEAC3A.tc", &get_ExcIEEEAC3A_tc);
	get_map.emplace("cim:ExcIEEEAC3A.te", &get_ExcIEEEAC3A_te);
	get_map.emplace("cim:ExcIEEEAC3A.tf", &get_ExcIEEEAC3A_tf);
	get_map.emplace("cim:ExcIEEEAC3A.vamax", &get_ExcIEEEAC3A_vamax);
	get_map.emplace("cim:ExcIEEEAC3A.vamin", &get_ExcIEEEAC3A_vamin);
	get_map.emplace("cim:ExcIEEEAC3A.ve1", &get_ExcIEEEAC3A_ve1);
	get_map.emplace("cim:ExcIEEEAC3A.ve2", &get_ExcIEEEAC3A_ve2);
	get_map.emplace("cim:ExcIEEEAC3A.vemin", &get_ExcIEEEAC3A_vemin);
	get_map.emplace("cim:ExcIEEEAC3A.vfemax", &get_ExcIEEEAC3A_vfemax);
	get_map.emplace("cim:ExcIEEEAC3A.vlv", &get_ExcIEEEAC3A_vlv);
}

void ExcIEEEAC3A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEAC3A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcIEEEAC3A::declare()
{
	return BaseClassDefiner(ExcIEEEAC3A::addConstructToMap, ExcIEEEAC3A::addPrimitiveAssignFnsToMap, ExcIEEEAC3A::addClassAssignFnsToMap, ExcIEEEAC3A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEAC3A_factory()
	{
		return new ExcIEEEAC3A;
	}
}
