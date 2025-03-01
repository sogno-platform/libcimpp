/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcDC3A1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcDC3A1::ExcDC3A1() {}
ExcDC3A1::~ExcDC3A1() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcDC3A1.exclim", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.ka", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.ke", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.kf", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.ki", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.kp", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.ta", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.te", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.tf", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.vb1max", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.vblim", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.vbmax", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcDC3A1.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcDC3A1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcDC3A1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcDC3A1_exclim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
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

bool assign_ExcDC3A1_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
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

bool assign_ExcDC3A1_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
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

bool assign_ExcDC3A1_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
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

bool assign_ExcDC3A1_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC3A1_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC3A1_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
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

bool assign_ExcDC3A1_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
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

bool assign_ExcDC3A1_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
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

bool assign_ExcDC3A1_vb1max(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vb1max;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC3A1_vblim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vblim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC3A1_vbmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vbmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC3A1_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
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

bool assign_ExcDC3A1_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1);
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

bool get_ExcDC3A1_exclim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
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

bool get_ExcDC3A1_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
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

bool get_ExcDC3A1_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
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

bool get_ExcDC3A1_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
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

bool get_ExcDC3A1_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC3A1_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC3A1_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
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

bool get_ExcDC3A1_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
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

bool get_ExcDC3A1_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
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

bool get_ExcDC3A1_vb1max(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vb1max;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC3A1_vblim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vblim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC3A1_vbmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vbmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC3A1_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
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

bool get_ExcDC3A1_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A1* element = dynamic_cast<const ExcDC3A1*>(BaseClass_ptr1);
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

const char ExcDC3A1::debugName[] = "ExcDC3A1";
const char* ExcDC3A1::debugString() const
{
	return ExcDC3A1::debugName;
}

void ExcDC3A1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcDC3A1", &ExcDC3A1_factory);
}

void ExcDC3A1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcDC3A1.exclim", &assign_ExcDC3A1_exclim);
	assign_map.emplace("cim:ExcDC3A1.ka", &assign_ExcDC3A1_ka);
	assign_map.emplace("cim:ExcDC3A1.ke", &assign_ExcDC3A1_ke);
	assign_map.emplace("cim:ExcDC3A1.kf", &assign_ExcDC3A1_kf);
	assign_map.emplace("cim:ExcDC3A1.ki", &assign_ExcDC3A1_ki);
	assign_map.emplace("cim:ExcDC3A1.kp", &assign_ExcDC3A1_kp);
	assign_map.emplace("cim:ExcDC3A1.ta", &assign_ExcDC3A1_ta);
	assign_map.emplace("cim:ExcDC3A1.te", &assign_ExcDC3A1_te);
	assign_map.emplace("cim:ExcDC3A1.tf", &assign_ExcDC3A1_tf);
	assign_map.emplace("cim:ExcDC3A1.vb1max", &assign_ExcDC3A1_vb1max);
	assign_map.emplace("cim:ExcDC3A1.vblim", &assign_ExcDC3A1_vblim);
	assign_map.emplace("cim:ExcDC3A1.vbmax", &assign_ExcDC3A1_vbmax);
	assign_map.emplace("cim:ExcDC3A1.vrmax", &assign_ExcDC3A1_vrmax);
	assign_map.emplace("cim:ExcDC3A1.vrmin", &assign_ExcDC3A1_vrmin);
}

void ExcDC3A1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcDC3A1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcDC3A1.exclim", &get_ExcDC3A1_exclim);
	get_map.emplace("cim:ExcDC3A1.ka", &get_ExcDC3A1_ka);
	get_map.emplace("cim:ExcDC3A1.ke", &get_ExcDC3A1_ke);
	get_map.emplace("cim:ExcDC3A1.kf", &get_ExcDC3A1_kf);
	get_map.emplace("cim:ExcDC3A1.ki", &get_ExcDC3A1_ki);
	get_map.emplace("cim:ExcDC3A1.kp", &get_ExcDC3A1_kp);
	get_map.emplace("cim:ExcDC3A1.ta", &get_ExcDC3A1_ta);
	get_map.emplace("cim:ExcDC3A1.te", &get_ExcDC3A1_te);
	get_map.emplace("cim:ExcDC3A1.tf", &get_ExcDC3A1_tf);
	get_map.emplace("cim:ExcDC3A1.vb1max", &get_ExcDC3A1_vb1max);
	get_map.emplace("cim:ExcDC3A1.vblim", &get_ExcDC3A1_vblim);
	get_map.emplace("cim:ExcDC3A1.vbmax", &get_ExcDC3A1_vbmax);
	get_map.emplace("cim:ExcDC3A1.vrmax", &get_ExcDC3A1_vrmax);
	get_map.emplace("cim:ExcDC3A1.vrmin", &get_ExcDC3A1_vrmin);
}

void ExcDC3A1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcDC3A1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcDC3A1::declare()
{
	return BaseClassDefiner(ExcDC3A1::addConstructToMap, ExcDC3A1::addPrimitiveAssignFnsToMap, ExcDC3A1::addClassAssignFnsToMap, ExcDC3A1::debugName);
}

namespace CIMPP
{
	BaseClass* ExcDC3A1_factory()
	{
		return new ExcDC3A1;
	}
}
