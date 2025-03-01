/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEAC4A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcIEEEAC4A::ExcIEEEAC4A() {}
ExcIEEEAC4A::~ExcIEEEAC4A() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEAC4A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC4A.kc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC4A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC4A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC4A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC4A.vimax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC4A.vimin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC4A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC4A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEAC4A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEAC4A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcIEEEAC4A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC4A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC4A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC4A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC4A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC4A_vimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC4A_vimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC4A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC4A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC4A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC4A* element = dynamic_cast<const ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC4A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC4A* element = dynamic_cast<const ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC4A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC4A* element = dynamic_cast<const ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC4A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC4A* element = dynamic_cast<const ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC4A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC4A* element = dynamic_cast<const ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC4A_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC4A* element = dynamic_cast<const ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC4A_vimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC4A* element = dynamic_cast<const ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC4A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC4A* element = dynamic_cast<const ExcIEEEAC4A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC4A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC4A* element = dynamic_cast<const ExcIEEEAC4A*>(BaseClass_ptr1);
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

const char ExcIEEEAC4A::debugName[] = "ExcIEEEAC4A";
const char* ExcIEEEAC4A::debugString() const
{
	return ExcIEEEAC4A::debugName;
}

void ExcIEEEAC4A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcIEEEAC4A", &ExcIEEEAC4A_factory);
}

void ExcIEEEAC4A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcIEEEAC4A.ka", &assign_ExcIEEEAC4A_ka);
	assign_map.emplace("cim:ExcIEEEAC4A.kc", &assign_ExcIEEEAC4A_kc);
	assign_map.emplace("cim:ExcIEEEAC4A.ta", &assign_ExcIEEEAC4A_ta);
	assign_map.emplace("cim:ExcIEEEAC4A.tb", &assign_ExcIEEEAC4A_tb);
	assign_map.emplace("cim:ExcIEEEAC4A.tc", &assign_ExcIEEEAC4A_tc);
	assign_map.emplace("cim:ExcIEEEAC4A.vimax", &assign_ExcIEEEAC4A_vimax);
	assign_map.emplace("cim:ExcIEEEAC4A.vimin", &assign_ExcIEEEAC4A_vimin);
	assign_map.emplace("cim:ExcIEEEAC4A.vrmax", &assign_ExcIEEEAC4A_vrmax);
	assign_map.emplace("cim:ExcIEEEAC4A.vrmin", &assign_ExcIEEEAC4A_vrmin);
}

void ExcIEEEAC4A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEAC4A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEAC4A.ka", &get_ExcIEEEAC4A_ka);
	get_map.emplace("cim:ExcIEEEAC4A.kc", &get_ExcIEEEAC4A_kc);
	get_map.emplace("cim:ExcIEEEAC4A.ta", &get_ExcIEEEAC4A_ta);
	get_map.emplace("cim:ExcIEEEAC4A.tb", &get_ExcIEEEAC4A_tb);
	get_map.emplace("cim:ExcIEEEAC4A.tc", &get_ExcIEEEAC4A_tc);
	get_map.emplace("cim:ExcIEEEAC4A.vimax", &get_ExcIEEEAC4A_vimax);
	get_map.emplace("cim:ExcIEEEAC4A.vimin", &get_ExcIEEEAC4A_vimin);
	get_map.emplace("cim:ExcIEEEAC4A.vrmax", &get_ExcIEEEAC4A_vrmax);
	get_map.emplace("cim:ExcIEEEAC4A.vrmin", &get_ExcIEEEAC4A_vrmin);
}

void ExcIEEEAC4A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEAC4A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcIEEEAC4A::declare()
{
	return BaseClassDefiner(ExcIEEEAC4A::addConstructToMap, ExcIEEEAC4A::addPrimitiveAssignFnsToMap, ExcIEEEAC4A::addClassAssignFnsToMap, ExcIEEEAC4A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEAC4A_factory()
	{
		return new ExcIEEEAC4A;
	}
}
