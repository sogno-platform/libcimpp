/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcST1A::ExcST1A() {}
ExcST1A::~ExcST1A() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcST1A.ilr", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.kc", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.klr", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.tb1", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.tc1", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.tf", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.vamax", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.vamin", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.vimax", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.vimin", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.vrmin", { CGMESProfile::DY, } },
	{ "cim:ExcST1A.xe", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcST1A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcST1A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcST1A_ilr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_klr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_tb1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_tc1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_vimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_vimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
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

bool assign_ExcST1A_xe(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xe;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcST1A_ilr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_klr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_tb1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_tc1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_vimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
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

bool get_ExcST1A_xe(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST1A* element = dynamic_cast<const ExcST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xe;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcST1A::debugName[] = "ExcST1A";
const char* ExcST1A::debugString() const
{
	return ExcST1A::debugName;
}

void ExcST1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcST1A", &ExcST1A_factory);
}

void ExcST1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcST1A.ilr", &assign_ExcST1A_ilr);
	assign_map.emplace("cim:ExcST1A.ka", &assign_ExcST1A_ka);
	assign_map.emplace("cim:ExcST1A.kc", &assign_ExcST1A_kc);
	assign_map.emplace("cim:ExcST1A.kf", &assign_ExcST1A_kf);
	assign_map.emplace("cim:ExcST1A.klr", &assign_ExcST1A_klr);
	assign_map.emplace("cim:ExcST1A.ta", &assign_ExcST1A_ta);
	assign_map.emplace("cim:ExcST1A.tb", &assign_ExcST1A_tb);
	assign_map.emplace("cim:ExcST1A.tb1", &assign_ExcST1A_tb1);
	assign_map.emplace("cim:ExcST1A.tc", &assign_ExcST1A_tc);
	assign_map.emplace("cim:ExcST1A.tc1", &assign_ExcST1A_tc1);
	assign_map.emplace("cim:ExcST1A.tf", &assign_ExcST1A_tf);
	assign_map.emplace("cim:ExcST1A.vamax", &assign_ExcST1A_vamax);
	assign_map.emplace("cim:ExcST1A.vamin", &assign_ExcST1A_vamin);
	assign_map.emplace("cim:ExcST1A.vimax", &assign_ExcST1A_vimax);
	assign_map.emplace("cim:ExcST1A.vimin", &assign_ExcST1A_vimin);
	assign_map.emplace("cim:ExcST1A.vrmax", &assign_ExcST1A_vrmax);
	assign_map.emplace("cim:ExcST1A.vrmin", &assign_ExcST1A_vrmin);
	assign_map.emplace("cim:ExcST1A.xe", &assign_ExcST1A_xe);
}

void ExcST1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcST1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcST1A.ilr", &get_ExcST1A_ilr);
	get_map.emplace("cim:ExcST1A.ka", &get_ExcST1A_ka);
	get_map.emplace("cim:ExcST1A.kc", &get_ExcST1A_kc);
	get_map.emplace("cim:ExcST1A.kf", &get_ExcST1A_kf);
	get_map.emplace("cim:ExcST1A.klr", &get_ExcST1A_klr);
	get_map.emplace("cim:ExcST1A.ta", &get_ExcST1A_ta);
	get_map.emplace("cim:ExcST1A.tb", &get_ExcST1A_tb);
	get_map.emplace("cim:ExcST1A.tb1", &get_ExcST1A_tb1);
	get_map.emplace("cim:ExcST1A.tc", &get_ExcST1A_tc);
	get_map.emplace("cim:ExcST1A.tc1", &get_ExcST1A_tc1);
	get_map.emplace("cim:ExcST1A.tf", &get_ExcST1A_tf);
	get_map.emplace("cim:ExcST1A.vamax", &get_ExcST1A_vamax);
	get_map.emplace("cim:ExcST1A.vamin", &get_ExcST1A_vamin);
	get_map.emplace("cim:ExcST1A.vimax", &get_ExcST1A_vimax);
	get_map.emplace("cim:ExcST1A.vimin", &get_ExcST1A_vimin);
	get_map.emplace("cim:ExcST1A.vrmax", &get_ExcST1A_vrmax);
	get_map.emplace("cim:ExcST1A.vrmin", &get_ExcST1A_vrmin);
	get_map.emplace("cim:ExcST1A.xe", &get_ExcST1A_xe);
}

void ExcST1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcST1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcST1A::declare()
{
	return BaseClassDefiner(ExcST1A::addConstructToMap, ExcST1A::addPrimitiveAssignFnsToMap, ExcST1A::addClassAssignFnsToMap, ExcST1A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcST1A_factory()
	{
		return new ExcST1A;
	}
}
