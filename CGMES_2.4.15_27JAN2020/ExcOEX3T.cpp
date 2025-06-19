/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcOEX3T.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcOEX3T::ExcOEX3T() {}
ExcOEX3T::~ExcOEX3T() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcOEX3T.e1", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.e2", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.ka", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.kc", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.kd", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.ke", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.kf", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.see1", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.see2", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.t1", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.t2", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.t3", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.t4", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.t5", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.t6", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.te", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.tf", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcOEX3T.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcOEX3T::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcOEX3T::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcOEX3T_e1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->e1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcOEX3T_e2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->e2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcOEX3T_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcOEX3T_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_see1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->see1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcOEX3T_see2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->see2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcOEX3T_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool assign_ExcOEX3T_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcOEX3T* element = dynamic_cast<ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_e1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->e1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcOEX3T_e2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->e2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcOEX3T_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcOEX3T_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_see1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->see1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcOEX3T_see2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->see2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcOEX3T_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

bool get_ExcOEX3T_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcOEX3T* element = dynamic_cast<const ExcOEX3T*>(BaseClass_ptr1);
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

const char ExcOEX3T::debugName[] = "ExcOEX3T";
const char* ExcOEX3T::debugString() const
{
	return ExcOEX3T::debugName;
}

void ExcOEX3T::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcOEX3T", &ExcOEX3T_factory);
}

void ExcOEX3T::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcOEX3T.e1", &assign_ExcOEX3T_e1);
	assign_map.emplace("cim:ExcOEX3T.e2", &assign_ExcOEX3T_e2);
	assign_map.emplace("cim:ExcOEX3T.ka", &assign_ExcOEX3T_ka);
	assign_map.emplace("cim:ExcOEX3T.kc", &assign_ExcOEX3T_kc);
	assign_map.emplace("cim:ExcOEX3T.kd", &assign_ExcOEX3T_kd);
	assign_map.emplace("cim:ExcOEX3T.ke", &assign_ExcOEX3T_ke);
	assign_map.emplace("cim:ExcOEX3T.kf", &assign_ExcOEX3T_kf);
	assign_map.emplace("cim:ExcOEX3T.see1", &assign_ExcOEX3T_see1);
	assign_map.emplace("cim:ExcOEX3T.see2", &assign_ExcOEX3T_see2);
	assign_map.emplace("cim:ExcOEX3T.t1", &assign_ExcOEX3T_t1);
	assign_map.emplace("cim:ExcOEX3T.t2", &assign_ExcOEX3T_t2);
	assign_map.emplace("cim:ExcOEX3T.t3", &assign_ExcOEX3T_t3);
	assign_map.emplace("cim:ExcOEX3T.t4", &assign_ExcOEX3T_t4);
	assign_map.emplace("cim:ExcOEX3T.t5", &assign_ExcOEX3T_t5);
	assign_map.emplace("cim:ExcOEX3T.t6", &assign_ExcOEX3T_t6);
	assign_map.emplace("cim:ExcOEX3T.te", &assign_ExcOEX3T_te);
	assign_map.emplace("cim:ExcOEX3T.tf", &assign_ExcOEX3T_tf);
	assign_map.emplace("cim:ExcOEX3T.vrmax", &assign_ExcOEX3T_vrmax);
	assign_map.emplace("cim:ExcOEX3T.vrmin", &assign_ExcOEX3T_vrmin);
}

void ExcOEX3T::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcOEX3T::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcOEX3T.e1", &get_ExcOEX3T_e1);
	get_map.emplace("cim:ExcOEX3T.e2", &get_ExcOEX3T_e2);
	get_map.emplace("cim:ExcOEX3T.ka", &get_ExcOEX3T_ka);
	get_map.emplace("cim:ExcOEX3T.kc", &get_ExcOEX3T_kc);
	get_map.emplace("cim:ExcOEX3T.kd", &get_ExcOEX3T_kd);
	get_map.emplace("cim:ExcOEX3T.ke", &get_ExcOEX3T_ke);
	get_map.emplace("cim:ExcOEX3T.kf", &get_ExcOEX3T_kf);
	get_map.emplace("cim:ExcOEX3T.see1", &get_ExcOEX3T_see1);
	get_map.emplace("cim:ExcOEX3T.see2", &get_ExcOEX3T_see2);
	get_map.emplace("cim:ExcOEX3T.t1", &get_ExcOEX3T_t1);
	get_map.emplace("cim:ExcOEX3T.t2", &get_ExcOEX3T_t2);
	get_map.emplace("cim:ExcOEX3T.t3", &get_ExcOEX3T_t3);
	get_map.emplace("cim:ExcOEX3T.t4", &get_ExcOEX3T_t4);
	get_map.emplace("cim:ExcOEX3T.t5", &get_ExcOEX3T_t5);
	get_map.emplace("cim:ExcOEX3T.t6", &get_ExcOEX3T_t6);
	get_map.emplace("cim:ExcOEX3T.te", &get_ExcOEX3T_te);
	get_map.emplace("cim:ExcOEX3T.tf", &get_ExcOEX3T_tf);
	get_map.emplace("cim:ExcOEX3T.vrmax", &get_ExcOEX3T_vrmax);
	get_map.emplace("cim:ExcOEX3T.vrmin", &get_ExcOEX3T_vrmin);
}

void ExcOEX3T::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcOEX3T::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcOEX3T::declare()
{
	return BaseClassDefiner(ExcOEX3T::addConstructToMap, ExcOEX3T::addPrimitiveAssignFnsToMap, ExcOEX3T::addClassAssignFnsToMap, ExcOEX3T::debugName);
}

namespace CIMPP
{
	BaseClass* ExcOEX3T_factory()
	{
		return new ExcOEX3T;
	}
}
