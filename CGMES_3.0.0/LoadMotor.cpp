/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadMotor.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "LoadAggregate.hpp"

using namespace CIMPP;

LoadMotor::LoadMotor() : LoadAggregate(nullptr) {}
LoadMotor::~LoadMotor() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:LoadMotor.LoadAggregate", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.d", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.h", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.lfac", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.lp", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.lpp", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.ls", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.pfrac", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.ra", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.tbkr", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.tpo", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.tppo", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.tv", { CGMESProfile::DY, } },
	{ "cim:LoadMotor.vt", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
LoadMotor::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
LoadMotor::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_LoadAggregate_LoadMotor(BaseClass*, BaseClass*);
bool assign_LoadMotor_LoadAggregate(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	LoadAggregate* element2 = dynamic_cast<LoadAggregate*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadAggregate != element2)
		{
			element->LoadAggregate = element2;
			return assign_LoadAggregate_LoadMotor(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_LoadMotor_d(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->d;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_h(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->h;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_lfac(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lfac;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_lp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_lpp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lpp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_ls(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ls;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_pfrac(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pfrac;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_ra(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ra;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_tbkr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tbkr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_tpo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_tppo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tppo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_tv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_vt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_LoadMotor_LoadAggregate(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->LoadAggregate != 0)
		{
			BaseClass_list.push_back(element->LoadAggregate);
			return true;
		}
	}
	return false;
}

bool get_LoadMotor_d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->d;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_h(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->h;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_lfac(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lfac;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_lp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_lpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_ls(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ls;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_pfrac(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pfrac;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_ra(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ra;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_tbkr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tbkr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_tpo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_tppo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tppo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_tv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_vt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char LoadMotor::debugName[] = "LoadMotor";
const char* LoadMotor::debugString() const
{
	return LoadMotor::debugName;
}

void LoadMotor::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:LoadMotor", &LoadMotor_factory);
}

void LoadMotor::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:LoadMotor.d", &assign_LoadMotor_d);
	assign_map.emplace("cim:LoadMotor.h", &assign_LoadMotor_h);
	assign_map.emplace("cim:LoadMotor.lfac", &assign_LoadMotor_lfac);
	assign_map.emplace("cim:LoadMotor.lp", &assign_LoadMotor_lp);
	assign_map.emplace("cim:LoadMotor.lpp", &assign_LoadMotor_lpp);
	assign_map.emplace("cim:LoadMotor.ls", &assign_LoadMotor_ls);
	assign_map.emplace("cim:LoadMotor.pfrac", &assign_LoadMotor_pfrac);
	assign_map.emplace("cim:LoadMotor.ra", &assign_LoadMotor_ra);
	assign_map.emplace("cim:LoadMotor.tbkr", &assign_LoadMotor_tbkr);
	assign_map.emplace("cim:LoadMotor.tpo", &assign_LoadMotor_tpo);
	assign_map.emplace("cim:LoadMotor.tppo", &assign_LoadMotor_tppo);
	assign_map.emplace("cim:LoadMotor.tv", &assign_LoadMotor_tv);
	assign_map.emplace("cim:LoadMotor.vt", &assign_LoadMotor_vt);
}

void LoadMotor::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:LoadMotor.LoadAggregate", &assign_LoadMotor_LoadAggregate);
}

void LoadMotor::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:LoadMotor.d", &get_LoadMotor_d);
	get_map.emplace("cim:LoadMotor.h", &get_LoadMotor_h);
	get_map.emplace("cim:LoadMotor.lfac", &get_LoadMotor_lfac);
	get_map.emplace("cim:LoadMotor.lp", &get_LoadMotor_lp);
	get_map.emplace("cim:LoadMotor.lpp", &get_LoadMotor_lpp);
	get_map.emplace("cim:LoadMotor.ls", &get_LoadMotor_ls);
	get_map.emplace("cim:LoadMotor.pfrac", &get_LoadMotor_pfrac);
	get_map.emplace("cim:LoadMotor.ra", &get_LoadMotor_ra);
	get_map.emplace("cim:LoadMotor.tbkr", &get_LoadMotor_tbkr);
	get_map.emplace("cim:LoadMotor.tpo", &get_LoadMotor_tpo);
	get_map.emplace("cim:LoadMotor.tppo", &get_LoadMotor_tppo);
	get_map.emplace("cim:LoadMotor.tv", &get_LoadMotor_tv);
	get_map.emplace("cim:LoadMotor.vt", &get_LoadMotor_vt);
}

void LoadMotor::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:LoadMotor.LoadAggregate", &get_LoadMotor_LoadAggregate);
}

void LoadMotor::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner LoadMotor::declare()
{
	return BaseClassDefiner(LoadMotor::addConstructToMap, LoadMotor::addPrimitiveAssignFnsToMap, LoadMotor::addClassAssignFnsToMap, LoadMotor::debugName);
}

namespace CIMPP
{
	BaseClass* LoadMotor_factory()
	{
		return new LoadMotor;
	}
}
