/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST7B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcST7B::ExcST7B() {}
ExcST7B::~ExcST7B() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcST7B.kh", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.kia", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.kl", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.kpa", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.oelin", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.tb", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.tc", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.tf", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.tg", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.tia", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.ts", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.uelin", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.vmax", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.vmin", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcST7B.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcST7B::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcST7B::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcST7B_kh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
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

bool assign_ExcST7B_kia(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kia;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_kl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_kpa(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpa;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_oelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->oelin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
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

bool assign_ExcST7B_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
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

bool assign_ExcST7B_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
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

bool assign_ExcST7B_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_tia(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tia;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_ts(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ts;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_uelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
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

bool assign_ExcST7B_vmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_vmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
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

bool assign_ExcST7B_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
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

bool get_ExcST7B_kh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
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

bool get_ExcST7B_kia(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kia;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_kl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_kpa(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpa;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_oelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->oelin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
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

bool get_ExcST7B_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
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

bool get_ExcST7B_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
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

bool get_ExcST7B_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_tia(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tia;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_ts(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ts;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
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

bool get_ExcST7B_vmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_vmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
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

bool get_ExcST7B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
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

const char ExcST7B::debugName[] = "ExcST7B";
const char* ExcST7B::debugString() const
{
	return ExcST7B::debugName;
}

void ExcST7B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcST7B", &ExcST7B_factory);
}

void ExcST7B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcST7B.kh", &assign_ExcST7B_kh);
	assign_map.emplace("cim:ExcST7B.kia", &assign_ExcST7B_kia);
	assign_map.emplace("cim:ExcST7B.kl", &assign_ExcST7B_kl);
	assign_map.emplace("cim:ExcST7B.kpa", &assign_ExcST7B_kpa);
	assign_map.emplace("cim:ExcST7B.oelin", &assign_ExcST7B_oelin);
	assign_map.emplace("cim:ExcST7B.tb", &assign_ExcST7B_tb);
	assign_map.emplace("cim:ExcST7B.tc", &assign_ExcST7B_tc);
	assign_map.emplace("cim:ExcST7B.tf", &assign_ExcST7B_tf);
	assign_map.emplace("cim:ExcST7B.tg", &assign_ExcST7B_tg);
	assign_map.emplace("cim:ExcST7B.tia", &assign_ExcST7B_tia);
	assign_map.emplace("cim:ExcST7B.ts", &assign_ExcST7B_ts);
	assign_map.emplace("cim:ExcST7B.uelin", &assign_ExcST7B_uelin);
	assign_map.emplace("cim:ExcST7B.vmax", &assign_ExcST7B_vmax);
	assign_map.emplace("cim:ExcST7B.vmin", &assign_ExcST7B_vmin);
	assign_map.emplace("cim:ExcST7B.vrmax", &assign_ExcST7B_vrmax);
	assign_map.emplace("cim:ExcST7B.vrmin", &assign_ExcST7B_vrmin);
}

void ExcST7B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcST7B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcST7B.kh", &get_ExcST7B_kh);
	get_map.emplace("cim:ExcST7B.kia", &get_ExcST7B_kia);
	get_map.emplace("cim:ExcST7B.kl", &get_ExcST7B_kl);
	get_map.emplace("cim:ExcST7B.kpa", &get_ExcST7B_kpa);
	get_map.emplace("cim:ExcST7B.tb", &get_ExcST7B_tb);
	get_map.emplace("cim:ExcST7B.tc", &get_ExcST7B_tc);
	get_map.emplace("cim:ExcST7B.tf", &get_ExcST7B_tf);
	get_map.emplace("cim:ExcST7B.tg", &get_ExcST7B_tg);
	get_map.emplace("cim:ExcST7B.tia", &get_ExcST7B_tia);
	get_map.emplace("cim:ExcST7B.ts", &get_ExcST7B_ts);
	get_map.emplace("cim:ExcST7B.vmax", &get_ExcST7B_vmax);
	get_map.emplace("cim:ExcST7B.vmin", &get_ExcST7B_vmin);
	get_map.emplace("cim:ExcST7B.vrmax", &get_ExcST7B_vrmax);
	get_map.emplace("cim:ExcST7B.vrmin", &get_ExcST7B_vrmin);
}

void ExcST7B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcST7B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:ExcST7B.oelin", &get_ExcST7B_oelin);
	get_map.emplace("cim:ExcST7B.uelin", &get_ExcST7B_uelin);
}

const BaseClassDefiner ExcST7B::declare()
{
	return BaseClassDefiner(ExcST7B::addConstructToMap, ExcST7B::addPrimitiveAssignFnsToMap, ExcST7B::addClassAssignFnsToMap, ExcST7B::debugName);
}

namespace CIMPP
{
	BaseClass* ExcST7B_factory()
	{
		return new ExcST7B;
	}
}
