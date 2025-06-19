/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteamSGO.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovSteamSGO::GovSteamSGO() {}
GovSteamSGO::~GovSteamSGO() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovSteamSGO.k1", { CGMESProfile::DY, } },
	{ "cim:GovSteamSGO.k2", { CGMESProfile::DY, } },
	{ "cim:GovSteamSGO.k3", { CGMESProfile::DY, } },
	{ "cim:GovSteamSGO.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovSteamSGO.pmax", { CGMESProfile::DY, } },
	{ "cim:GovSteamSGO.pmin", { CGMESProfile::DY, } },
	{ "cim:GovSteamSGO.t1", { CGMESProfile::DY, } },
	{ "cim:GovSteamSGO.t2", { CGMESProfile::DY, } },
	{ "cim:GovSteamSGO.t3", { CGMESProfile::DY, } },
	{ "cim:GovSteamSGO.t4", { CGMESProfile::DY, } },
	{ "cim:GovSteamSGO.t5", { CGMESProfile::DY, } },
	{ "cim:GovSteamSGO.t6", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovSteamSGO::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovSteamSGO::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovSteamSGO_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamSGO_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamSGO_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamSGO_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovSteamSGO_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamSGO_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamSGO_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamSGO_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovSteamSGO::debugName[] = "GovSteamSGO";
const char* GovSteamSGO::debugString() const
{
	return GovSteamSGO::debugName;
}

void GovSteamSGO::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovSteamSGO", &GovSteamSGO_factory);
}

void GovSteamSGO::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovSteamSGO.k1", &assign_GovSteamSGO_k1);
	assign_map.emplace("cim:GovSteamSGO.k2", &assign_GovSteamSGO_k2);
	assign_map.emplace("cim:GovSteamSGO.k3", &assign_GovSteamSGO_k3);
	assign_map.emplace("cim:GovSteamSGO.mwbase", &assign_GovSteamSGO_mwbase);
	assign_map.emplace("cim:GovSteamSGO.pmax", &assign_GovSteamSGO_pmax);
	assign_map.emplace("cim:GovSteamSGO.pmin", &assign_GovSteamSGO_pmin);
	assign_map.emplace("cim:GovSteamSGO.t1", &assign_GovSteamSGO_t1);
	assign_map.emplace("cim:GovSteamSGO.t2", &assign_GovSteamSGO_t2);
	assign_map.emplace("cim:GovSteamSGO.t3", &assign_GovSteamSGO_t3);
	assign_map.emplace("cim:GovSteamSGO.t4", &assign_GovSteamSGO_t4);
	assign_map.emplace("cim:GovSteamSGO.t5", &assign_GovSteamSGO_t5);
	assign_map.emplace("cim:GovSteamSGO.t6", &assign_GovSteamSGO_t6);
}

void GovSteamSGO::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteamSGO::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovSteamSGO.k1", &get_GovSteamSGO_k1);
	get_map.emplace("cim:GovSteamSGO.k2", &get_GovSteamSGO_k2);
	get_map.emplace("cim:GovSteamSGO.k3", &get_GovSteamSGO_k3);
	get_map.emplace("cim:GovSteamSGO.mwbase", &get_GovSteamSGO_mwbase);
	get_map.emplace("cim:GovSteamSGO.pmax", &get_GovSteamSGO_pmax);
	get_map.emplace("cim:GovSteamSGO.pmin", &get_GovSteamSGO_pmin);
	get_map.emplace("cim:GovSteamSGO.t1", &get_GovSteamSGO_t1);
	get_map.emplace("cim:GovSteamSGO.t2", &get_GovSteamSGO_t2);
	get_map.emplace("cim:GovSteamSGO.t3", &get_GovSteamSGO_t3);
	get_map.emplace("cim:GovSteamSGO.t4", &get_GovSteamSGO_t4);
	get_map.emplace("cim:GovSteamSGO.t5", &get_GovSteamSGO_t5);
	get_map.emplace("cim:GovSteamSGO.t6", &get_GovSteamSGO_t6);
}

void GovSteamSGO::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteamSGO::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovSteamSGO::declare()
{
	return BaseClassDefiner(GovSteamSGO::addConstructToMap, GovSteamSGO::addPrimitiveAssignFnsToMap, GovSteamSGO::addClassAssignFnsToMap, GovSteamSGO::debugName);
}

namespace CIMPP
{
	BaseClass* GovSteamSGO_factory()
	{
		return new GovSteamSGO;
	}
}
