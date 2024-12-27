/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST6B.hpp"

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
#include "ExcST6BOELselectorKind.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEST6B::ExcIEEEST6B() {};
ExcIEEEST6B::~ExcIEEEST6B() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEST6B.ilr", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.kci", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.kff", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.kg", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.kia", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.klr", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.km", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.kpa", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.oelin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.tg", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.vamax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.vamin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST6B.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEST6B::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEST6B::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcIEEEST6B_ilr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->ilr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_kci(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->kci;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_kff(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->kff;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->kg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_kia(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->kia;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_klr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->klr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_km(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->km;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_kpa(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->kpa;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_oelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->oelin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->tg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_vamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->vamax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_vamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->vamin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST6B_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcIEEEST6B_ilr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST6B_kci(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
	{
		buffer << element->kci;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST6B_kff(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST6B_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST6B_kia(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST6B_klr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST6B_km(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST6B_kpa(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST6B_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST6B_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST6B_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST6B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST6B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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



bool get_ExcIEEEST6B_oelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1))
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

const char ExcIEEEST6B::debugName[] = "ExcIEEEST6B";
const char* ExcIEEEST6B::debugString() const
{
	return ExcIEEEST6B::debugName;
}

void ExcIEEEST6B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B"), &ExcIEEEST6B_factory));
}

void ExcIEEEST6B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.ilr"), &assign_ExcIEEEST6B_ilr));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.kci"), &assign_ExcIEEEST6B_kci));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.kff"), &assign_ExcIEEEST6B_kff));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.kg"), &assign_ExcIEEEST6B_kg));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.kia"), &assign_ExcIEEEST6B_kia));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.klr"), &assign_ExcIEEEST6B_klr));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.km"), &assign_ExcIEEEST6B_km));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.kpa"), &assign_ExcIEEEST6B_kpa));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.oelin"), &assign_ExcIEEEST6B_oelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.tg"), &assign_ExcIEEEST6B_tg));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.vamax"), &assign_ExcIEEEST6B_vamax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.vamin"), &assign_ExcIEEEST6B_vamin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.vrmax"), &assign_ExcIEEEST6B_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.vrmin"), &assign_ExcIEEEST6B_vrmin));
}

void ExcIEEEST6B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEST6B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEST6B.ilr", &get_ExcIEEEST6B_ilr);
	get_map.emplace("cim:ExcIEEEST6B.kci", &get_ExcIEEEST6B_kci);
	get_map.emplace("cim:ExcIEEEST6B.kff", &get_ExcIEEEST6B_kff);
	get_map.emplace("cim:ExcIEEEST6B.kg", &get_ExcIEEEST6B_kg);
	get_map.emplace("cim:ExcIEEEST6B.kia", &get_ExcIEEEST6B_kia);
	get_map.emplace("cim:ExcIEEEST6B.klr", &get_ExcIEEEST6B_klr);
	get_map.emplace("cim:ExcIEEEST6B.km", &get_ExcIEEEST6B_km);
	get_map.emplace("cim:ExcIEEEST6B.kpa", &get_ExcIEEEST6B_kpa);
	get_map.emplace("cim:ExcIEEEST6B.tg", &get_ExcIEEEST6B_tg);
	get_map.emplace("cim:ExcIEEEST6B.vamax", &get_ExcIEEEST6B_vamax);
	get_map.emplace("cim:ExcIEEEST6B.vamin", &get_ExcIEEEST6B_vamin);
	get_map.emplace("cim:ExcIEEEST6B.vrmax", &get_ExcIEEEST6B_vrmax);
	get_map.emplace("cim:ExcIEEEST6B.vrmin", &get_ExcIEEEST6B_vrmin);
}

void ExcIEEEST6B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEST6B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEST6B.oelin", &get_ExcIEEEST6B_oelin);
}

const BaseClassDefiner ExcIEEEST6B::declare()
{
	return BaseClassDefiner(ExcIEEEST6B::addConstructToMap, ExcIEEEST6B::addPrimitiveAssignFnsToMap, ExcIEEEST6B::addClassAssignFnsToMap, ExcIEEEST6B::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEST6B_factory()
	{
		return new ExcIEEEST6B;
	}
}
