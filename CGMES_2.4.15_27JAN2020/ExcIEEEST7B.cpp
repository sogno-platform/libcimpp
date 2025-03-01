/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST7B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcIEEEST7B::ExcIEEEST7B() {}
ExcIEEEST7B::~ExcIEEEST7B() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEST7B.kh", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.kia", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.kl", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.kpa", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.oelin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.tb", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.tc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.tf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.tg", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.tia", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.uelin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.vmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.vmin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST7B.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEST7B::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEST7B::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcIEEEST7B_kh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_kia(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_kl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_kpa(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_oelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_tia(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_uelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_vmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_vmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST7B_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_kh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_kia(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_kl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_kpa(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_oelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_tia(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_vmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_vmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST7B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST7B* element = dynamic_cast<const ExcIEEEST7B*>(BaseClass_ptr1);
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

const char ExcIEEEST7B::debugName[] = "ExcIEEEST7B";
const char* ExcIEEEST7B::debugString() const
{
	return ExcIEEEST7B::debugName;
}

void ExcIEEEST7B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcIEEEST7B", &ExcIEEEST7B_factory);
}

void ExcIEEEST7B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcIEEEST7B.kh", &assign_ExcIEEEST7B_kh);
	assign_map.emplace("cim:ExcIEEEST7B.kia", &assign_ExcIEEEST7B_kia);
	assign_map.emplace("cim:ExcIEEEST7B.kl", &assign_ExcIEEEST7B_kl);
	assign_map.emplace("cim:ExcIEEEST7B.kpa", &assign_ExcIEEEST7B_kpa);
	assign_map.emplace("cim:ExcIEEEST7B.oelin", &assign_ExcIEEEST7B_oelin);
	assign_map.emplace("cim:ExcIEEEST7B.tb", &assign_ExcIEEEST7B_tb);
	assign_map.emplace("cim:ExcIEEEST7B.tc", &assign_ExcIEEEST7B_tc);
	assign_map.emplace("cim:ExcIEEEST7B.tf", &assign_ExcIEEEST7B_tf);
	assign_map.emplace("cim:ExcIEEEST7B.tg", &assign_ExcIEEEST7B_tg);
	assign_map.emplace("cim:ExcIEEEST7B.tia", &assign_ExcIEEEST7B_tia);
	assign_map.emplace("cim:ExcIEEEST7B.uelin", &assign_ExcIEEEST7B_uelin);
	assign_map.emplace("cim:ExcIEEEST7B.vmax", &assign_ExcIEEEST7B_vmax);
	assign_map.emplace("cim:ExcIEEEST7B.vmin", &assign_ExcIEEEST7B_vmin);
	assign_map.emplace("cim:ExcIEEEST7B.vrmax", &assign_ExcIEEEST7B_vrmax);
	assign_map.emplace("cim:ExcIEEEST7B.vrmin", &assign_ExcIEEEST7B_vrmin);
}

void ExcIEEEST7B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEST7B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEST7B.kh", &get_ExcIEEEST7B_kh);
	get_map.emplace("cim:ExcIEEEST7B.kia", &get_ExcIEEEST7B_kia);
	get_map.emplace("cim:ExcIEEEST7B.kl", &get_ExcIEEEST7B_kl);
	get_map.emplace("cim:ExcIEEEST7B.kpa", &get_ExcIEEEST7B_kpa);
	get_map.emplace("cim:ExcIEEEST7B.tb", &get_ExcIEEEST7B_tb);
	get_map.emplace("cim:ExcIEEEST7B.tc", &get_ExcIEEEST7B_tc);
	get_map.emplace("cim:ExcIEEEST7B.tf", &get_ExcIEEEST7B_tf);
	get_map.emplace("cim:ExcIEEEST7B.tg", &get_ExcIEEEST7B_tg);
	get_map.emplace("cim:ExcIEEEST7B.tia", &get_ExcIEEEST7B_tia);
	get_map.emplace("cim:ExcIEEEST7B.vmax", &get_ExcIEEEST7B_vmax);
	get_map.emplace("cim:ExcIEEEST7B.vmin", &get_ExcIEEEST7B_vmin);
	get_map.emplace("cim:ExcIEEEST7B.vrmax", &get_ExcIEEEST7B_vrmax);
	get_map.emplace("cim:ExcIEEEST7B.vrmin", &get_ExcIEEEST7B_vrmin);
}

void ExcIEEEST7B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEST7B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEST7B.oelin", &get_ExcIEEEST7B_oelin);
	get_map.emplace("cim:ExcIEEEST7B.uelin", &get_ExcIEEEST7B_uelin);
}

const BaseClassDefiner ExcIEEEST7B::declare()
{
	return BaseClassDefiner(ExcIEEEST7B::addConstructToMap, ExcIEEEST7B::addPrimitiveAssignFnsToMap, ExcIEEEST7B::addClassAssignFnsToMap, ExcIEEEST7B::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEST7B_factory()
	{
		return new ExcIEEEST7B;
	}
}
