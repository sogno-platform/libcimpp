/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEAC5A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcIEEEAC5A::ExcIEEEAC5A() {}
ExcIEEEAC5A::~ExcIEEEAC5A() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEAC5A.efd1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.efd2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.ke", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.seefd1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.seefd2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.te", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.tf1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.tf2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.tf3", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEAC5A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEAC5A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEAC5A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcIEEEAC5A_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC5A_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC5A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC5A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC5A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC5A_seefd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC5A_seefd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC5A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC5A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC5A_tf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC5A_tf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC5A_tf3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC5A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC5A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC5A_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC5A_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC5A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC5A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC5A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC5A_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC5A_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC5A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC5A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC5A_tf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC5A_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC5A_tf3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC5A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC5A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC5A* element = dynamic_cast<const ExcIEEEAC5A*>(BaseClass_ptr1);
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

const char ExcIEEEAC5A::debugName[] = "ExcIEEEAC5A";
const char* ExcIEEEAC5A::debugString() const
{
	return ExcIEEEAC5A::debugName;
}

void ExcIEEEAC5A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcIEEEAC5A", &ExcIEEEAC5A_factory);
}

void ExcIEEEAC5A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcIEEEAC5A.efd1", &assign_ExcIEEEAC5A_efd1);
	assign_map.emplace("cim:ExcIEEEAC5A.efd2", &assign_ExcIEEEAC5A_efd2);
	assign_map.emplace("cim:ExcIEEEAC5A.ka", &assign_ExcIEEEAC5A_ka);
	assign_map.emplace("cim:ExcIEEEAC5A.ke", &assign_ExcIEEEAC5A_ke);
	assign_map.emplace("cim:ExcIEEEAC5A.kf", &assign_ExcIEEEAC5A_kf);
	assign_map.emplace("cim:ExcIEEEAC5A.seefd1", &assign_ExcIEEEAC5A_seefd1);
	assign_map.emplace("cim:ExcIEEEAC5A.seefd2", &assign_ExcIEEEAC5A_seefd2);
	assign_map.emplace("cim:ExcIEEEAC5A.ta", &assign_ExcIEEEAC5A_ta);
	assign_map.emplace("cim:ExcIEEEAC5A.te", &assign_ExcIEEEAC5A_te);
	assign_map.emplace("cim:ExcIEEEAC5A.tf1", &assign_ExcIEEEAC5A_tf1);
	assign_map.emplace("cim:ExcIEEEAC5A.tf2", &assign_ExcIEEEAC5A_tf2);
	assign_map.emplace("cim:ExcIEEEAC5A.tf3", &assign_ExcIEEEAC5A_tf3);
	assign_map.emplace("cim:ExcIEEEAC5A.vrmax", &assign_ExcIEEEAC5A_vrmax);
	assign_map.emplace("cim:ExcIEEEAC5A.vrmin", &assign_ExcIEEEAC5A_vrmin);
}

void ExcIEEEAC5A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEAC5A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEAC5A.efd1", &get_ExcIEEEAC5A_efd1);
	get_map.emplace("cim:ExcIEEEAC5A.efd2", &get_ExcIEEEAC5A_efd2);
	get_map.emplace("cim:ExcIEEEAC5A.ka", &get_ExcIEEEAC5A_ka);
	get_map.emplace("cim:ExcIEEEAC5A.ke", &get_ExcIEEEAC5A_ke);
	get_map.emplace("cim:ExcIEEEAC5A.kf", &get_ExcIEEEAC5A_kf);
	get_map.emplace("cim:ExcIEEEAC5A.seefd1", &get_ExcIEEEAC5A_seefd1);
	get_map.emplace("cim:ExcIEEEAC5A.seefd2", &get_ExcIEEEAC5A_seefd2);
	get_map.emplace("cim:ExcIEEEAC5A.ta", &get_ExcIEEEAC5A_ta);
	get_map.emplace("cim:ExcIEEEAC5A.te", &get_ExcIEEEAC5A_te);
	get_map.emplace("cim:ExcIEEEAC5A.tf1", &get_ExcIEEEAC5A_tf1);
	get_map.emplace("cim:ExcIEEEAC5A.tf2", &get_ExcIEEEAC5A_tf2);
	get_map.emplace("cim:ExcIEEEAC5A.tf3", &get_ExcIEEEAC5A_tf3);
	get_map.emplace("cim:ExcIEEEAC5A.vrmax", &get_ExcIEEEAC5A_vrmax);
	get_map.emplace("cim:ExcIEEEAC5A.vrmin", &get_ExcIEEEAC5A_vrmin);
}

void ExcIEEEAC5A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEAC5A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcIEEEAC5A::declare()
{
	return BaseClassDefiner(ExcIEEEAC5A::addConstructToMap, ExcIEEEAC5A::addPrimitiveAssignFnsToMap, ExcIEEEAC5A::addClassAssignFnsToMap, ExcIEEEAC5A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEAC5A_factory()
	{
		return new ExcIEEEAC5A;
	}
}
