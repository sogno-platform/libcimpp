/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroIEEE0.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovHydroIEEE0::GovHydroIEEE0() {}
GovHydroIEEE0::~GovHydroIEEE0() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovHydroIEEE0.k", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE0.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE0.pmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE0.pmin", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE0.t1", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE0.t2", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE0.t3", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE0.t4", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovHydroIEEE0::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovHydroIEEE0::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovHydroIEEE0_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroIEEE0_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwbase;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroIEEE0_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroIEEE0_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroIEEE0_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroIEEE0_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroIEEE0_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroIEEE0_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovHydroIEEE0_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE0* element = dynamic_cast<const GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroIEEE0_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE0* element = dynamic_cast<const GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mwbase;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroIEEE0_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE0* element = dynamic_cast<const GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroIEEE0_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE0* element = dynamic_cast<const GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroIEEE0_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE0* element = dynamic_cast<const GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroIEEE0_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE0* element = dynamic_cast<const GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroIEEE0_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE0* element = dynamic_cast<const GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroIEEE0_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE0* element = dynamic_cast<const GovHydroIEEE0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovHydroIEEE0::debugName[] = "GovHydroIEEE0";
const char* GovHydroIEEE0::debugString() const
{
	return GovHydroIEEE0::debugName;
}

void GovHydroIEEE0::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovHydroIEEE0", &GovHydroIEEE0_factory);
}

void GovHydroIEEE0::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovHydroIEEE0.k", &assign_GovHydroIEEE0_k);
	assign_map.emplace("cim:GovHydroIEEE0.mwbase", &assign_GovHydroIEEE0_mwbase);
	assign_map.emplace("cim:GovHydroIEEE0.pmax", &assign_GovHydroIEEE0_pmax);
	assign_map.emplace("cim:GovHydroIEEE0.pmin", &assign_GovHydroIEEE0_pmin);
	assign_map.emplace("cim:GovHydroIEEE0.t1", &assign_GovHydroIEEE0_t1);
	assign_map.emplace("cim:GovHydroIEEE0.t2", &assign_GovHydroIEEE0_t2);
	assign_map.emplace("cim:GovHydroIEEE0.t3", &assign_GovHydroIEEE0_t3);
	assign_map.emplace("cim:GovHydroIEEE0.t4", &assign_GovHydroIEEE0_t4);
}

void GovHydroIEEE0::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroIEEE0::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovHydroIEEE0.k", &get_GovHydroIEEE0_k);
	get_map.emplace("cim:GovHydroIEEE0.mwbase", &get_GovHydroIEEE0_mwbase);
	get_map.emplace("cim:GovHydroIEEE0.pmax", &get_GovHydroIEEE0_pmax);
	get_map.emplace("cim:GovHydroIEEE0.pmin", &get_GovHydroIEEE0_pmin);
	get_map.emplace("cim:GovHydroIEEE0.t1", &get_GovHydroIEEE0_t1);
	get_map.emplace("cim:GovHydroIEEE0.t2", &get_GovHydroIEEE0_t2);
	get_map.emplace("cim:GovHydroIEEE0.t3", &get_GovHydroIEEE0_t3);
	get_map.emplace("cim:GovHydroIEEE0.t4", &get_GovHydroIEEE0_t4);
}

void GovHydroIEEE0::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroIEEE0::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovHydroIEEE0::declare()
{
	return BaseClassDefiner(GovHydroIEEE0::addConstructToMap, GovHydroIEEE0::addPrimitiveAssignFnsToMap, GovHydroIEEE0::addClassAssignFnsToMap, GovHydroIEEE0::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydroIEEE0_factory()
	{
		return new GovHydroIEEE0;
	}
}
