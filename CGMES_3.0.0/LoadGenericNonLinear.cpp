/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadGenericNonLinear.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

LoadGenericNonLinear::LoadGenericNonLinear() {}
LoadGenericNonLinear::~LoadGenericNonLinear() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:LoadGenericNonLinear.bs", { CGMESProfile::DY, } },
	{ "cim:LoadGenericNonLinear.bt", { CGMESProfile::DY, } },
	{ "cim:LoadGenericNonLinear.genericNonLinearLoadModelType", { CGMESProfile::DY, } },
	{ "cim:LoadGenericNonLinear.ls", { CGMESProfile::DY, } },
	{ "cim:LoadGenericNonLinear.lt", { CGMESProfile::DY, } },
	{ "cim:LoadGenericNonLinear.tp", { CGMESProfile::DY, } },
	{ "cim:LoadGenericNonLinear.tq", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
LoadGenericNonLinear::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
LoadGenericNonLinear::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = LoadDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_LoadGenericNonLinear_bs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bs;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadGenericNonLinear_bt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadGenericNonLinear_genericNonLinearLoadModelType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->genericNonLinearLoadModelType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadGenericNonLinear_ls(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1);
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

bool assign_LoadGenericNonLinear_lt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadGenericNonLinear_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadGenericNonLinear_tq(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tq;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_LoadGenericNonLinear_bs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadGenericNonLinear* element = dynamic_cast<const LoadGenericNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->bs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadGenericNonLinear_bt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadGenericNonLinear* element = dynamic_cast<const LoadGenericNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->bt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadGenericNonLinear_genericNonLinearLoadModelType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadGenericNonLinear* element = dynamic_cast<const LoadGenericNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->genericNonLinearLoadModelType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadGenericNonLinear_ls(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadGenericNonLinear* element = dynamic_cast<const LoadGenericNonLinear*>(BaseClass_ptr1);
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

bool get_LoadGenericNonLinear_lt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadGenericNonLinear* element = dynamic_cast<const LoadGenericNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadGenericNonLinear_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadGenericNonLinear* element = dynamic_cast<const LoadGenericNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadGenericNonLinear_tq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadGenericNonLinear* element = dynamic_cast<const LoadGenericNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char LoadGenericNonLinear::debugName[] = "LoadGenericNonLinear";
const char* LoadGenericNonLinear::debugString() const
{
	return LoadGenericNonLinear::debugName;
}

void LoadGenericNonLinear::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:LoadGenericNonLinear", &LoadGenericNonLinear_factory);
}

void LoadGenericNonLinear::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:LoadGenericNonLinear.bs", &assign_LoadGenericNonLinear_bs);
	assign_map.emplace("cim:LoadGenericNonLinear.bt", &assign_LoadGenericNonLinear_bt);
	assign_map.emplace("cim:LoadGenericNonLinear.genericNonLinearLoadModelType", &assign_LoadGenericNonLinear_genericNonLinearLoadModelType);
	assign_map.emplace("cim:LoadGenericNonLinear.ls", &assign_LoadGenericNonLinear_ls);
	assign_map.emplace("cim:LoadGenericNonLinear.lt", &assign_LoadGenericNonLinear_lt);
	assign_map.emplace("cim:LoadGenericNonLinear.tp", &assign_LoadGenericNonLinear_tp);
	assign_map.emplace("cim:LoadGenericNonLinear.tq", &assign_LoadGenericNonLinear_tq);
}

void LoadGenericNonLinear::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void LoadGenericNonLinear::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:LoadGenericNonLinear.bs", &get_LoadGenericNonLinear_bs);
	get_map.emplace("cim:LoadGenericNonLinear.bt", &get_LoadGenericNonLinear_bt);
	get_map.emplace("cim:LoadGenericNonLinear.ls", &get_LoadGenericNonLinear_ls);
	get_map.emplace("cim:LoadGenericNonLinear.lt", &get_LoadGenericNonLinear_lt);
	get_map.emplace("cim:LoadGenericNonLinear.tp", &get_LoadGenericNonLinear_tp);
	get_map.emplace("cim:LoadGenericNonLinear.tq", &get_LoadGenericNonLinear_tq);
}

void LoadGenericNonLinear::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	LoadDynamics::addClassGetFnsToMap(get_map);
}

void LoadGenericNonLinear::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:LoadGenericNonLinear.genericNonLinearLoadModelType", &get_LoadGenericNonLinear_genericNonLinearLoadModelType);
}

const BaseClassDefiner LoadGenericNonLinear::declare()
{
	return BaseClassDefiner(LoadGenericNonLinear::addConstructToMap, LoadGenericNonLinear::addPrimitiveAssignFnsToMap, LoadGenericNonLinear::addClassAssignFnsToMap, LoadGenericNonLinear::debugName);
}

namespace CIMPP
{
	BaseClass* LoadGenericNonLinear_factory()
	{
		return new LoadGenericNonLinear;
	}
}
