/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcIEEEST1A::ExcIEEEST1A() {}
ExcIEEEST1A::~ExcIEEEST1A() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEST1A.ilr", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.kc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.klr", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.pssin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.tb1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.tc1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.tf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.uelin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.vamax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.vamin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.vimax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.vimin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST1A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEST1A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEST1A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcIEEEST1A_ilr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ilr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_klr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->klr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_pssin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pssin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_tb1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_tc1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_uelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uelin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_vimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vimax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_vimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vimin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_ilr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ilr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcIEEEST1A_klr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->klr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_pssin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pssin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_tb1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_tc1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcIEEEST1A_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uelin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_vimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

const char ExcIEEEST1A::debugName[] = "ExcIEEEST1A";
const char* ExcIEEEST1A::debugString() const
{
	return ExcIEEEST1A::debugName;
}

void ExcIEEEST1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcIEEEST1A", &ExcIEEEST1A_factory);
}

void ExcIEEEST1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcIEEEST1A.ilr", &assign_ExcIEEEST1A_ilr);
	assign_map.emplace("cim:ExcIEEEST1A.ka", &assign_ExcIEEEST1A_ka);
	assign_map.emplace("cim:ExcIEEEST1A.kc", &assign_ExcIEEEST1A_kc);
	assign_map.emplace("cim:ExcIEEEST1A.kf", &assign_ExcIEEEST1A_kf);
	assign_map.emplace("cim:ExcIEEEST1A.klr", &assign_ExcIEEEST1A_klr);
	assign_map.emplace("cim:ExcIEEEST1A.pssin", &assign_ExcIEEEST1A_pssin);
	assign_map.emplace("cim:ExcIEEEST1A.ta", &assign_ExcIEEEST1A_ta);
	assign_map.emplace("cim:ExcIEEEST1A.tb", &assign_ExcIEEEST1A_tb);
	assign_map.emplace("cim:ExcIEEEST1A.tb1", &assign_ExcIEEEST1A_tb1);
	assign_map.emplace("cim:ExcIEEEST1A.tc", &assign_ExcIEEEST1A_tc);
	assign_map.emplace("cim:ExcIEEEST1A.tc1", &assign_ExcIEEEST1A_tc1);
	assign_map.emplace("cim:ExcIEEEST1A.tf", &assign_ExcIEEEST1A_tf);
	assign_map.emplace("cim:ExcIEEEST1A.uelin", &assign_ExcIEEEST1A_uelin);
	assign_map.emplace("cim:ExcIEEEST1A.vamax", &assign_ExcIEEEST1A_vamax);
	assign_map.emplace("cim:ExcIEEEST1A.vamin", &assign_ExcIEEEST1A_vamin);
	assign_map.emplace("cim:ExcIEEEST1A.vimax", &assign_ExcIEEEST1A_vimax);
	assign_map.emplace("cim:ExcIEEEST1A.vimin", &assign_ExcIEEEST1A_vimin);
	assign_map.emplace("cim:ExcIEEEST1A.vrmax", &assign_ExcIEEEST1A_vrmax);
	assign_map.emplace("cim:ExcIEEEST1A.vrmin", &assign_ExcIEEEST1A_vrmin);
}

void ExcIEEEST1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEST1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEST1A.ilr", &get_ExcIEEEST1A_ilr);
	get_map.emplace("cim:ExcIEEEST1A.ka", &get_ExcIEEEST1A_ka);
	get_map.emplace("cim:ExcIEEEST1A.kc", &get_ExcIEEEST1A_kc);
	get_map.emplace("cim:ExcIEEEST1A.kf", &get_ExcIEEEST1A_kf);
	get_map.emplace("cim:ExcIEEEST1A.klr", &get_ExcIEEEST1A_klr);
	get_map.emplace("cim:ExcIEEEST1A.pssin", &get_ExcIEEEST1A_pssin);
	get_map.emplace("cim:ExcIEEEST1A.ta", &get_ExcIEEEST1A_ta);
	get_map.emplace("cim:ExcIEEEST1A.tb", &get_ExcIEEEST1A_tb);
	get_map.emplace("cim:ExcIEEEST1A.tb1", &get_ExcIEEEST1A_tb1);
	get_map.emplace("cim:ExcIEEEST1A.tc", &get_ExcIEEEST1A_tc);
	get_map.emplace("cim:ExcIEEEST1A.tc1", &get_ExcIEEEST1A_tc1);
	get_map.emplace("cim:ExcIEEEST1A.tf", &get_ExcIEEEST1A_tf);
	get_map.emplace("cim:ExcIEEEST1A.vamax", &get_ExcIEEEST1A_vamax);
	get_map.emplace("cim:ExcIEEEST1A.vamin", &get_ExcIEEEST1A_vamin);
	get_map.emplace("cim:ExcIEEEST1A.vimax", &get_ExcIEEEST1A_vimax);
	get_map.emplace("cim:ExcIEEEST1A.vimin", &get_ExcIEEEST1A_vimin);
	get_map.emplace("cim:ExcIEEEST1A.vrmax", &get_ExcIEEEST1A_vrmax);
	get_map.emplace("cim:ExcIEEEST1A.vrmin", &get_ExcIEEEST1A_vrmin);
}

void ExcIEEEST1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEST1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEST1A.uelin", &get_ExcIEEEST1A_uelin);
}

const BaseClassDefiner ExcIEEEST1A::declare()
{
	return BaseClassDefiner(ExcIEEEST1A::addConstructToMap, ExcIEEEST1A::addPrimitiveAssignFnsToMap, ExcIEEEST1A::addClassAssignFnsToMap, ExcIEEEST1A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEST1A_factory()
	{
		return new ExcIEEEST1A;
	}
}
