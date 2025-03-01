/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAC4A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcAC4A::ExcAC4A() {}
ExcAC4A::~ExcAC4A() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcAC4A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcAC4A.kc", { CGMESProfile::DY, } },
	{ "cim:ExcAC4A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcAC4A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcAC4A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcAC4A.vimax", { CGMESProfile::DY, } },
	{ "cim:ExcAC4A.vimin", { CGMESProfile::DY, } },
	{ "cim:ExcAC4A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcAC4A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcAC4A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcAC4A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcAC4A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1);
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

bool assign_ExcAC4A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1);
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

bool assign_ExcAC4A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1);
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

bool assign_ExcAC4A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1);
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

bool assign_ExcAC4A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1);
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

bool assign_ExcAC4A_vimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1);
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

bool assign_ExcAC4A_vimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1);
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

bool assign_ExcAC4A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1);
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

bool assign_ExcAC4A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1);
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

bool get_ExcAC4A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC4A* element = dynamic_cast<const ExcAC4A*>(BaseClass_ptr1);
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

bool get_ExcAC4A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC4A* element = dynamic_cast<const ExcAC4A*>(BaseClass_ptr1);
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

bool get_ExcAC4A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC4A* element = dynamic_cast<const ExcAC4A*>(BaseClass_ptr1);
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

bool get_ExcAC4A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC4A* element = dynamic_cast<const ExcAC4A*>(BaseClass_ptr1);
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

bool get_ExcAC4A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC4A* element = dynamic_cast<const ExcAC4A*>(BaseClass_ptr1);
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

bool get_ExcAC4A_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC4A* element = dynamic_cast<const ExcAC4A*>(BaseClass_ptr1);
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

bool get_ExcAC4A_vimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC4A* element = dynamic_cast<const ExcAC4A*>(BaseClass_ptr1);
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

bool get_ExcAC4A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC4A* element = dynamic_cast<const ExcAC4A*>(BaseClass_ptr1);
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

bool get_ExcAC4A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC4A* element = dynamic_cast<const ExcAC4A*>(BaseClass_ptr1);
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

const char ExcAC4A::debugName[] = "ExcAC4A";
const char* ExcAC4A::debugString() const
{
	return ExcAC4A::debugName;
}

void ExcAC4A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcAC4A", &ExcAC4A_factory);
}

void ExcAC4A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcAC4A.ka", &assign_ExcAC4A_ka);
	assign_map.emplace("cim:ExcAC4A.kc", &assign_ExcAC4A_kc);
	assign_map.emplace("cim:ExcAC4A.ta", &assign_ExcAC4A_ta);
	assign_map.emplace("cim:ExcAC4A.tb", &assign_ExcAC4A_tb);
	assign_map.emplace("cim:ExcAC4A.tc", &assign_ExcAC4A_tc);
	assign_map.emplace("cim:ExcAC4A.vimax", &assign_ExcAC4A_vimax);
	assign_map.emplace("cim:ExcAC4A.vimin", &assign_ExcAC4A_vimin);
	assign_map.emplace("cim:ExcAC4A.vrmax", &assign_ExcAC4A_vrmax);
	assign_map.emplace("cim:ExcAC4A.vrmin", &assign_ExcAC4A_vrmin);
}

void ExcAC4A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAC4A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcAC4A.ka", &get_ExcAC4A_ka);
	get_map.emplace("cim:ExcAC4A.kc", &get_ExcAC4A_kc);
	get_map.emplace("cim:ExcAC4A.ta", &get_ExcAC4A_ta);
	get_map.emplace("cim:ExcAC4A.tb", &get_ExcAC4A_tb);
	get_map.emplace("cim:ExcAC4A.tc", &get_ExcAC4A_tc);
	get_map.emplace("cim:ExcAC4A.vimax", &get_ExcAC4A_vimax);
	get_map.emplace("cim:ExcAC4A.vimin", &get_ExcAC4A_vimin);
	get_map.emplace("cim:ExcAC4A.vrmax", &get_ExcAC4A_vrmax);
	get_map.emplace("cim:ExcAC4A.vrmin", &get_ExcAC4A_vrmin);
}

void ExcAC4A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAC4A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcAC4A::declare()
{
	return BaseClassDefiner(ExcAC4A::addConstructToMap, ExcAC4A::addPrimitiveAssignFnsToMap, ExcAC4A::addClassAssignFnsToMap, ExcAC4A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcAC4A_factory()
	{
		return new ExcAC4A;
	}
}
