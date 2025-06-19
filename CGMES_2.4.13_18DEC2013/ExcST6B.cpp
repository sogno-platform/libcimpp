/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST6B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcST6B::ExcST6B() {}
ExcST6B::~ExcST6B() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcST6B.ilr", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.k1", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.kcl", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.kff", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.kg", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.kia", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.klr", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.km", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.kpa", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.kvd", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.oelin", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.tg", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.ts", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.tvd", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.vamax", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.vamin", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.vilim", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.vimax", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.vimin", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.vmult", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.vrmin", { CGMESProfile::DY, } },
	{ "cim:ExcST6B.xc", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcST6B::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcST6B::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcST6B_ilr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST6B_kcl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kcl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST6B_kff(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kff;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST6B_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST6B_kia(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_klr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_km(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->km;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST6B_kpa(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_kvd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kvd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST6B_oelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_ts(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_tvd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tvd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST6B_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_vilim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vilim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST6B_vimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_vimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_vmult(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmult;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST6B_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
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

bool assign_ExcST6B_xc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcST6B_ilr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST6B_kcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kcl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST6B_kff(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kff;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST6B_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST6B_kia(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_klr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_km(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->km;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST6B_kpa(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_kvd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kvd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST6B_oelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_ts(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_tvd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tvd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST6B_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_vilim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vilim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST6B_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_vimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_vmult(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmult;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST6B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
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

bool get_ExcST6B_xc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST6B* element = dynamic_cast<const ExcST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcST6B::debugName[] = "ExcST6B";
const char* ExcST6B::debugString() const
{
	return ExcST6B::debugName;
}

void ExcST6B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcST6B", &ExcST6B_factory);
}

void ExcST6B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcST6B.ilr", &assign_ExcST6B_ilr);
	assign_map.emplace("cim:ExcST6B.k1", &assign_ExcST6B_k1);
	assign_map.emplace("cim:ExcST6B.kcl", &assign_ExcST6B_kcl);
	assign_map.emplace("cim:ExcST6B.kff", &assign_ExcST6B_kff);
	assign_map.emplace("cim:ExcST6B.kg", &assign_ExcST6B_kg);
	assign_map.emplace("cim:ExcST6B.kia", &assign_ExcST6B_kia);
	assign_map.emplace("cim:ExcST6B.klr", &assign_ExcST6B_klr);
	assign_map.emplace("cim:ExcST6B.km", &assign_ExcST6B_km);
	assign_map.emplace("cim:ExcST6B.kpa", &assign_ExcST6B_kpa);
	assign_map.emplace("cim:ExcST6B.kvd", &assign_ExcST6B_kvd);
	assign_map.emplace("cim:ExcST6B.oelin", &assign_ExcST6B_oelin);
	assign_map.emplace("cim:ExcST6B.tg", &assign_ExcST6B_tg);
	assign_map.emplace("cim:ExcST6B.ts", &assign_ExcST6B_ts);
	assign_map.emplace("cim:ExcST6B.tvd", &assign_ExcST6B_tvd);
	assign_map.emplace("cim:ExcST6B.vamax", &assign_ExcST6B_vamax);
	assign_map.emplace("cim:ExcST6B.vamin", &assign_ExcST6B_vamin);
	assign_map.emplace("cim:ExcST6B.vilim", &assign_ExcST6B_vilim);
	assign_map.emplace("cim:ExcST6B.vimax", &assign_ExcST6B_vimax);
	assign_map.emplace("cim:ExcST6B.vimin", &assign_ExcST6B_vimin);
	assign_map.emplace("cim:ExcST6B.vmult", &assign_ExcST6B_vmult);
	assign_map.emplace("cim:ExcST6B.vrmax", &assign_ExcST6B_vrmax);
	assign_map.emplace("cim:ExcST6B.vrmin", &assign_ExcST6B_vrmin);
	assign_map.emplace("cim:ExcST6B.xc", &assign_ExcST6B_xc);
}

void ExcST6B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcST6B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcST6B.ilr", &get_ExcST6B_ilr);
	get_map.emplace("cim:ExcST6B.k1", &get_ExcST6B_k1);
	get_map.emplace("cim:ExcST6B.kcl", &get_ExcST6B_kcl);
	get_map.emplace("cim:ExcST6B.kff", &get_ExcST6B_kff);
	get_map.emplace("cim:ExcST6B.kg", &get_ExcST6B_kg);
	get_map.emplace("cim:ExcST6B.kia", &get_ExcST6B_kia);
	get_map.emplace("cim:ExcST6B.klr", &get_ExcST6B_klr);
	get_map.emplace("cim:ExcST6B.km", &get_ExcST6B_km);
	get_map.emplace("cim:ExcST6B.kpa", &get_ExcST6B_kpa);
	get_map.emplace("cim:ExcST6B.kvd", &get_ExcST6B_kvd);
	get_map.emplace("cim:ExcST6B.tg", &get_ExcST6B_tg);
	get_map.emplace("cim:ExcST6B.ts", &get_ExcST6B_ts);
	get_map.emplace("cim:ExcST6B.tvd", &get_ExcST6B_tvd);
	get_map.emplace("cim:ExcST6B.vamax", &get_ExcST6B_vamax);
	get_map.emplace("cim:ExcST6B.vamin", &get_ExcST6B_vamin);
	get_map.emplace("cim:ExcST6B.vilim", &get_ExcST6B_vilim);
	get_map.emplace("cim:ExcST6B.vimax", &get_ExcST6B_vimax);
	get_map.emplace("cim:ExcST6B.vimin", &get_ExcST6B_vimin);
	get_map.emplace("cim:ExcST6B.vmult", &get_ExcST6B_vmult);
	get_map.emplace("cim:ExcST6B.vrmax", &get_ExcST6B_vrmax);
	get_map.emplace("cim:ExcST6B.vrmin", &get_ExcST6B_vrmin);
	get_map.emplace("cim:ExcST6B.xc", &get_ExcST6B_xc);
}

void ExcST6B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcST6B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:ExcST6B.oelin", &get_ExcST6B_oelin);
}

const BaseClassDefiner ExcST6B::declare()
{
	return BaseClassDefiner(ExcST6B::addConstructToMap, ExcST6B::addPrimitiveAssignFnsToMap, ExcST6B::addClassAssignFnsToMap, ExcST6B::debugName);
}

namespace CIMPP
{
	BaseClass* ExcST6B_factory()
	{
		return new ExcST6B;
	}
}
