/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAC6A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcAC6A::ExcAC6A() {}
ExcAC6A::~ExcAC6A() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcAC6A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.kc", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.kd", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.ke", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.kh", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.ks", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.seve1", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.seve2", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.te", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.th", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.tj", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.tk", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.vamax", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.vamin", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.ve1", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.ve2", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.vfelim", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.vhmax", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcAC6A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcAC6A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcAC6A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcAC6A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ka;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ke;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_kh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kh;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_seve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seve1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_seve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seve2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->te;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_th(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_tj(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tj;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_tk(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tk;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vamax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vamin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_ve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ve1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_ve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ve2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_vfelim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vfelim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_vhmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vhmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcAC6A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_kh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_th(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC6A_tj(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tj;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC6A_tk(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tk;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC6A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_vfelim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vfelim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC6A_vhmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vhmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC6A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcAC6A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char ExcAC6A::debugName[] = "ExcAC6A";
const char* ExcAC6A::debugString() const
{
	return ExcAC6A::debugName;
}

void ExcAC6A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcAC6A", &ExcAC6A_factory);
}

void ExcAC6A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcAC6A.ka", &assign_ExcAC6A_ka);
	assign_map.emplace("cim:ExcAC6A.kc", &assign_ExcAC6A_kc);
	assign_map.emplace("cim:ExcAC6A.kd", &assign_ExcAC6A_kd);
	assign_map.emplace("cim:ExcAC6A.ke", &assign_ExcAC6A_ke);
	assign_map.emplace("cim:ExcAC6A.kh", &assign_ExcAC6A_kh);
	assign_map.emplace("cim:ExcAC6A.ks", &assign_ExcAC6A_ks);
	assign_map.emplace("cim:ExcAC6A.seve1", &assign_ExcAC6A_seve1);
	assign_map.emplace("cim:ExcAC6A.seve2", &assign_ExcAC6A_seve2);
	assign_map.emplace("cim:ExcAC6A.ta", &assign_ExcAC6A_ta);
	assign_map.emplace("cim:ExcAC6A.tb", &assign_ExcAC6A_tb);
	assign_map.emplace("cim:ExcAC6A.tc", &assign_ExcAC6A_tc);
	assign_map.emplace("cim:ExcAC6A.te", &assign_ExcAC6A_te);
	assign_map.emplace("cim:ExcAC6A.th", &assign_ExcAC6A_th);
	assign_map.emplace("cim:ExcAC6A.tj", &assign_ExcAC6A_tj);
	assign_map.emplace("cim:ExcAC6A.tk", &assign_ExcAC6A_tk);
	assign_map.emplace("cim:ExcAC6A.vamax", &assign_ExcAC6A_vamax);
	assign_map.emplace("cim:ExcAC6A.vamin", &assign_ExcAC6A_vamin);
	assign_map.emplace("cim:ExcAC6A.ve1", &assign_ExcAC6A_ve1);
	assign_map.emplace("cim:ExcAC6A.ve2", &assign_ExcAC6A_ve2);
	assign_map.emplace("cim:ExcAC6A.vfelim", &assign_ExcAC6A_vfelim);
	assign_map.emplace("cim:ExcAC6A.vhmax", &assign_ExcAC6A_vhmax);
	assign_map.emplace("cim:ExcAC6A.vrmax", &assign_ExcAC6A_vrmax);
	assign_map.emplace("cim:ExcAC6A.vrmin", &assign_ExcAC6A_vrmin);
}

void ExcAC6A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAC6A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcAC6A.ka", &get_ExcAC6A_ka);
	get_map.emplace("cim:ExcAC6A.kc", &get_ExcAC6A_kc);
	get_map.emplace("cim:ExcAC6A.kd", &get_ExcAC6A_kd);
	get_map.emplace("cim:ExcAC6A.ke", &get_ExcAC6A_ke);
	get_map.emplace("cim:ExcAC6A.kh", &get_ExcAC6A_kh);
	get_map.emplace("cim:ExcAC6A.ks", &get_ExcAC6A_ks);
	get_map.emplace("cim:ExcAC6A.seve1", &get_ExcAC6A_seve1);
	get_map.emplace("cim:ExcAC6A.seve2", &get_ExcAC6A_seve2);
	get_map.emplace("cim:ExcAC6A.ta", &get_ExcAC6A_ta);
	get_map.emplace("cim:ExcAC6A.tb", &get_ExcAC6A_tb);
	get_map.emplace("cim:ExcAC6A.tc", &get_ExcAC6A_tc);
	get_map.emplace("cim:ExcAC6A.te", &get_ExcAC6A_te);
	get_map.emplace("cim:ExcAC6A.th", &get_ExcAC6A_th);
	get_map.emplace("cim:ExcAC6A.tj", &get_ExcAC6A_tj);
	get_map.emplace("cim:ExcAC6A.tk", &get_ExcAC6A_tk);
	get_map.emplace("cim:ExcAC6A.vamax", &get_ExcAC6A_vamax);
	get_map.emplace("cim:ExcAC6A.vamin", &get_ExcAC6A_vamin);
	get_map.emplace("cim:ExcAC6A.ve1", &get_ExcAC6A_ve1);
	get_map.emplace("cim:ExcAC6A.ve2", &get_ExcAC6A_ve2);
	get_map.emplace("cim:ExcAC6A.vfelim", &get_ExcAC6A_vfelim);
	get_map.emplace("cim:ExcAC6A.vhmax", &get_ExcAC6A_vhmax);
	get_map.emplace("cim:ExcAC6A.vrmax", &get_ExcAC6A_vrmax);
	get_map.emplace("cim:ExcAC6A.vrmin", &get_ExcAC6A_vrmin);
}

void ExcAC6A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAC6A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcAC6A::declare()
{
	return BaseClassDefiner(ExcAC6A::addConstructToMap, ExcAC6A::addPrimitiveAssignFnsToMap, ExcAC6A::addClassAssignFnsToMap, ExcAC6A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcAC6A_factory()
	{
		return new ExcAC6A;
	}
}
