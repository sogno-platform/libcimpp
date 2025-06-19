/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEDC1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcIEEEDC1A::ExcIEEEDC1A() {}
ExcIEEEDC1A::~ExcIEEEDC1A() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEDC1A.efd1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.efd2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.exclim", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.ke", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.seefd1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.seefd2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.te", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.tf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.uelin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC1A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEDC1A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEDC1A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcIEEEDC1A_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efd1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efd2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_exclim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->exclim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ke;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_seefd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seefd1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_seefd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seefd2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->te;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_uelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efd2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_exclim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->exclim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seefd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seefd2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->te;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

const char ExcIEEEDC1A::debugName[] = "ExcIEEEDC1A";
const char* ExcIEEEDC1A::debugString() const
{
	return ExcIEEEDC1A::debugName;
}

void ExcIEEEDC1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcIEEEDC1A", &ExcIEEEDC1A_factory);
}

void ExcIEEEDC1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcIEEEDC1A.efd1", &assign_ExcIEEEDC1A_efd1);
	assign_map.emplace("cim:ExcIEEEDC1A.efd2", &assign_ExcIEEEDC1A_efd2);
	assign_map.emplace("cim:ExcIEEEDC1A.exclim", &assign_ExcIEEEDC1A_exclim);
	assign_map.emplace("cim:ExcIEEEDC1A.ka", &assign_ExcIEEEDC1A_ka);
	assign_map.emplace("cim:ExcIEEEDC1A.ke", &assign_ExcIEEEDC1A_ke);
	assign_map.emplace("cim:ExcIEEEDC1A.kf", &assign_ExcIEEEDC1A_kf);
	assign_map.emplace("cim:ExcIEEEDC1A.seefd1", &assign_ExcIEEEDC1A_seefd1);
	assign_map.emplace("cim:ExcIEEEDC1A.seefd2", &assign_ExcIEEEDC1A_seefd2);
	assign_map.emplace("cim:ExcIEEEDC1A.ta", &assign_ExcIEEEDC1A_ta);
	assign_map.emplace("cim:ExcIEEEDC1A.tb", &assign_ExcIEEEDC1A_tb);
	assign_map.emplace("cim:ExcIEEEDC1A.tc", &assign_ExcIEEEDC1A_tc);
	assign_map.emplace("cim:ExcIEEEDC1A.te", &assign_ExcIEEEDC1A_te);
	assign_map.emplace("cim:ExcIEEEDC1A.tf", &assign_ExcIEEEDC1A_tf);
	assign_map.emplace("cim:ExcIEEEDC1A.uelin", &assign_ExcIEEEDC1A_uelin);
	assign_map.emplace("cim:ExcIEEEDC1A.vrmax", &assign_ExcIEEEDC1A_vrmax);
	assign_map.emplace("cim:ExcIEEEDC1A.vrmin", &assign_ExcIEEEDC1A_vrmin);
}

void ExcIEEEDC1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEDC1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEDC1A.efd1", &get_ExcIEEEDC1A_efd1);
	get_map.emplace("cim:ExcIEEEDC1A.efd2", &get_ExcIEEEDC1A_efd2);
	get_map.emplace("cim:ExcIEEEDC1A.exclim", &get_ExcIEEEDC1A_exclim);
	get_map.emplace("cim:ExcIEEEDC1A.ka", &get_ExcIEEEDC1A_ka);
	get_map.emplace("cim:ExcIEEEDC1A.ke", &get_ExcIEEEDC1A_ke);
	get_map.emplace("cim:ExcIEEEDC1A.kf", &get_ExcIEEEDC1A_kf);
	get_map.emplace("cim:ExcIEEEDC1A.seefd1", &get_ExcIEEEDC1A_seefd1);
	get_map.emplace("cim:ExcIEEEDC1A.seefd2", &get_ExcIEEEDC1A_seefd2);
	get_map.emplace("cim:ExcIEEEDC1A.ta", &get_ExcIEEEDC1A_ta);
	get_map.emplace("cim:ExcIEEEDC1A.tb", &get_ExcIEEEDC1A_tb);
	get_map.emplace("cim:ExcIEEEDC1A.tc", &get_ExcIEEEDC1A_tc);
	get_map.emplace("cim:ExcIEEEDC1A.te", &get_ExcIEEEDC1A_te);
	get_map.emplace("cim:ExcIEEEDC1A.tf", &get_ExcIEEEDC1A_tf);
	get_map.emplace("cim:ExcIEEEDC1A.uelin", &get_ExcIEEEDC1A_uelin);
	get_map.emplace("cim:ExcIEEEDC1A.vrmax", &get_ExcIEEEDC1A_vrmax);
	get_map.emplace("cim:ExcIEEEDC1A.vrmin", &get_ExcIEEEDC1A_vrmin);
}

void ExcIEEEDC1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEDC1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcIEEEDC1A::declare()
{
	return BaseClassDefiner(ExcIEEEDC1A::addConstructToMap, ExcIEEEDC1A::addPrimitiveAssignFnsToMap, ExcIEEEDC1A::addClassAssignFnsToMap, ExcIEEEDC1A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEDC1A_factory()
	{
		return new ExcIEEEDC1A;
	}
}
