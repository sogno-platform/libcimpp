/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEAC1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "Float.hpp"
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

ExcIEEEAC1A::ExcIEEEAC1A() {};
ExcIEEEAC1A::~ExcIEEEAC1A() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEAC1A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.kc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.kd", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.ke", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.seve1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.seve2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.te", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.tf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.vamax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.vamin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.ve1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.ve2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC1A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEAC1A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEAC1A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcIEEEAC1A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_seve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->seve1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_seve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->seve2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_vamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vamax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_vamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vamin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_ve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->ve1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_ve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->ve2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC1A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcIEEEAC1A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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

bool get_ExcIEEEAC1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1))
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



const char ExcIEEEAC1A::debugName[] = "ExcIEEEAC1A";
const char* ExcIEEEAC1A::debugString() const
{
	return ExcIEEEAC1A::debugName;
}

void ExcIEEEAC1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A"), &ExcIEEEAC1A_factory));
}

void ExcIEEEAC1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.ka"), &assign_ExcIEEEAC1A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.kc"), &assign_ExcIEEEAC1A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.kd"), &assign_ExcIEEEAC1A_kd));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.ke"), &assign_ExcIEEEAC1A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.kf"), &assign_ExcIEEEAC1A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.seve1"), &assign_ExcIEEEAC1A_seve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.seve2"), &assign_ExcIEEEAC1A_seve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.ta"), &assign_ExcIEEEAC1A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.tb"), &assign_ExcIEEEAC1A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.tc"), &assign_ExcIEEEAC1A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.te"), &assign_ExcIEEEAC1A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.tf"), &assign_ExcIEEEAC1A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.vamax"), &assign_ExcIEEEAC1A_vamax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.vamin"), &assign_ExcIEEEAC1A_vamin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.ve1"), &assign_ExcIEEEAC1A_ve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.ve2"), &assign_ExcIEEEAC1A_ve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.vrmax"), &assign_ExcIEEEAC1A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.vrmin"), &assign_ExcIEEEAC1A_vrmin));
}

void ExcIEEEAC1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEAC1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEAC1A.ka", &get_ExcIEEEAC1A_ka);
	get_map.emplace("cim:ExcIEEEAC1A.kc", &get_ExcIEEEAC1A_kc);
	get_map.emplace("cim:ExcIEEEAC1A.kd", &get_ExcIEEEAC1A_kd);
	get_map.emplace("cim:ExcIEEEAC1A.ke", &get_ExcIEEEAC1A_ke);
	get_map.emplace("cim:ExcIEEEAC1A.kf", &get_ExcIEEEAC1A_kf);
	get_map.emplace("cim:ExcIEEEAC1A.seve1", &get_ExcIEEEAC1A_seve1);
	get_map.emplace("cim:ExcIEEEAC1A.seve2", &get_ExcIEEEAC1A_seve2);
	get_map.emplace("cim:ExcIEEEAC1A.ta", &get_ExcIEEEAC1A_ta);
	get_map.emplace("cim:ExcIEEEAC1A.tb", &get_ExcIEEEAC1A_tb);
	get_map.emplace("cim:ExcIEEEAC1A.tc", &get_ExcIEEEAC1A_tc);
	get_map.emplace("cim:ExcIEEEAC1A.te", &get_ExcIEEEAC1A_te);
	get_map.emplace("cim:ExcIEEEAC1A.tf", &get_ExcIEEEAC1A_tf);
	get_map.emplace("cim:ExcIEEEAC1A.vamax", &get_ExcIEEEAC1A_vamax);
	get_map.emplace("cim:ExcIEEEAC1A.vamin", &get_ExcIEEEAC1A_vamin);
	get_map.emplace("cim:ExcIEEEAC1A.ve1", &get_ExcIEEEAC1A_ve1);
	get_map.emplace("cim:ExcIEEEAC1A.ve2", &get_ExcIEEEAC1A_ve2);
	get_map.emplace("cim:ExcIEEEAC1A.vrmax", &get_ExcIEEEAC1A_vrmax);
	get_map.emplace("cim:ExcIEEEAC1A.vrmin", &get_ExcIEEEAC1A_vrmin);
}

void ExcIEEEAC1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEAC1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcIEEEAC1A::declare()
{
	return BaseClassDefiner(ExcIEEEAC1A::addConstructToMap, ExcIEEEAC1A::addPrimitiveAssignFnsToMap, ExcIEEEAC1A::addClassAssignFnsToMap, ExcIEEEAC1A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEAC1A_factory()
	{
		return new ExcIEEEAC1A;
	}
}
