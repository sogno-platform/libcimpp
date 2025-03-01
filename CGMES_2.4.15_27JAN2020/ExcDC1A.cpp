/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcDC1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcDC1A::ExcDC1A() {}
ExcDC1A::~ExcDC1A() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcDC1A.edfmax", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.efd1", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.efd2", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.efdmin", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.exclim", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.ke", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.ks", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.seefd1", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.seefd2", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.te", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.tf", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcDC1A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcDC1A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcDC1A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcDC1A_edfmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->edfmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC1A_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_efdmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC1A_exclim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC1A_seefd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_seefd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_edfmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->edfmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC1A_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_efdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC1A_exclim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC1A_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

const char ExcDC1A::debugName[] = "ExcDC1A";
const char* ExcDC1A::debugString() const
{
	return ExcDC1A::debugName;
}

void ExcDC1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcDC1A", &ExcDC1A_factory);
}

void ExcDC1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcDC1A.edfmax", &assign_ExcDC1A_edfmax);
	assign_map.emplace("cim:ExcDC1A.efd1", &assign_ExcDC1A_efd1);
	assign_map.emplace("cim:ExcDC1A.efd2", &assign_ExcDC1A_efd2);
	assign_map.emplace("cim:ExcDC1A.efdmin", &assign_ExcDC1A_efdmin);
	assign_map.emplace("cim:ExcDC1A.exclim", &assign_ExcDC1A_exclim);
	assign_map.emplace("cim:ExcDC1A.ka", &assign_ExcDC1A_ka);
	assign_map.emplace("cim:ExcDC1A.ke", &assign_ExcDC1A_ke);
	assign_map.emplace("cim:ExcDC1A.kf", &assign_ExcDC1A_kf);
	assign_map.emplace("cim:ExcDC1A.ks", &assign_ExcDC1A_ks);
	assign_map.emplace("cim:ExcDC1A.seefd1", &assign_ExcDC1A_seefd1);
	assign_map.emplace("cim:ExcDC1A.seefd2", &assign_ExcDC1A_seefd2);
	assign_map.emplace("cim:ExcDC1A.ta", &assign_ExcDC1A_ta);
	assign_map.emplace("cim:ExcDC1A.tb", &assign_ExcDC1A_tb);
	assign_map.emplace("cim:ExcDC1A.tc", &assign_ExcDC1A_tc);
	assign_map.emplace("cim:ExcDC1A.te", &assign_ExcDC1A_te);
	assign_map.emplace("cim:ExcDC1A.tf", &assign_ExcDC1A_tf);
	assign_map.emplace("cim:ExcDC1A.vrmax", &assign_ExcDC1A_vrmax);
	assign_map.emplace("cim:ExcDC1A.vrmin", &assign_ExcDC1A_vrmin);
}

void ExcDC1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcDC1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcDC1A.edfmax", &get_ExcDC1A_edfmax);
	get_map.emplace("cim:ExcDC1A.efd1", &get_ExcDC1A_efd1);
	get_map.emplace("cim:ExcDC1A.efd2", &get_ExcDC1A_efd2);
	get_map.emplace("cim:ExcDC1A.efdmin", &get_ExcDC1A_efdmin);
	get_map.emplace("cim:ExcDC1A.exclim", &get_ExcDC1A_exclim);
	get_map.emplace("cim:ExcDC1A.ka", &get_ExcDC1A_ka);
	get_map.emplace("cim:ExcDC1A.ke", &get_ExcDC1A_ke);
	get_map.emplace("cim:ExcDC1A.kf", &get_ExcDC1A_kf);
	get_map.emplace("cim:ExcDC1A.ks", &get_ExcDC1A_ks);
	get_map.emplace("cim:ExcDC1A.seefd1", &get_ExcDC1A_seefd1);
	get_map.emplace("cim:ExcDC1A.seefd2", &get_ExcDC1A_seefd2);
	get_map.emplace("cim:ExcDC1A.ta", &get_ExcDC1A_ta);
	get_map.emplace("cim:ExcDC1A.tb", &get_ExcDC1A_tb);
	get_map.emplace("cim:ExcDC1A.tc", &get_ExcDC1A_tc);
	get_map.emplace("cim:ExcDC1A.te", &get_ExcDC1A_te);
	get_map.emplace("cim:ExcDC1A.tf", &get_ExcDC1A_tf);
	get_map.emplace("cim:ExcDC1A.vrmax", &get_ExcDC1A_vrmax);
	get_map.emplace("cim:ExcDC1A.vrmin", &get_ExcDC1A_vrmin);
}

void ExcDC1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcDC1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcDC1A::declare()
{
	return BaseClassDefiner(ExcDC1A::addConstructToMap, ExcDC1A::addPrimitiveAssignFnsToMap, ExcDC1A::addClassAssignFnsToMap, ExcDC1A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcDC1A_factory()
	{
		return new ExcDC1A;
	}
}
