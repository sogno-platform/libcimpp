/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcAVR1::ExcAVR1() {}
ExcAVR1::~ExcAVR1() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcAVR1.e1", { CGMESProfile::DY, } },
	{ "cim:ExcAVR1.e2", { CGMESProfile::DY, } },
	{ "cim:ExcAVR1.ka", { CGMESProfile::DY, } },
	{ "cim:ExcAVR1.kf", { CGMESProfile::DY, } },
	{ "cim:ExcAVR1.se1", { CGMESProfile::DY, } },
	{ "cim:ExcAVR1.se2", { CGMESProfile::DY, } },
	{ "cim:ExcAVR1.ta", { CGMESProfile::DY, } },
	{ "cim:ExcAVR1.tb", { CGMESProfile::DY, } },
	{ "cim:ExcAVR1.te", { CGMESProfile::DY, } },
	{ "cim:ExcAVR1.tf", { CGMESProfile::DY, } },
	{ "cim:ExcAVR1.vrmn", { CGMESProfile::DY, } },
	{ "cim:ExcAVR1.vrmx", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcAVR1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcAVR1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcAVR1_e1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_e2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_se1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->se1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR1_se2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->se2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR1_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_vrmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR1_vrmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcAVR1_e1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_e2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_se1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->se1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR1_se2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->se2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR1_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_vrmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR1_vrmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcAVR1::debugName[] = "ExcAVR1";
const char* ExcAVR1::debugString() const
{
	return ExcAVR1::debugName;
}

void ExcAVR1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcAVR1", &ExcAVR1_factory);
}

void ExcAVR1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcAVR1.e1", &assign_ExcAVR1_e1);
	assign_map.emplace("cim:ExcAVR1.e2", &assign_ExcAVR1_e2);
	assign_map.emplace("cim:ExcAVR1.ka", &assign_ExcAVR1_ka);
	assign_map.emplace("cim:ExcAVR1.kf", &assign_ExcAVR1_kf);
	assign_map.emplace("cim:ExcAVR1.se1", &assign_ExcAVR1_se1);
	assign_map.emplace("cim:ExcAVR1.se2", &assign_ExcAVR1_se2);
	assign_map.emplace("cim:ExcAVR1.ta", &assign_ExcAVR1_ta);
	assign_map.emplace("cim:ExcAVR1.tb", &assign_ExcAVR1_tb);
	assign_map.emplace("cim:ExcAVR1.te", &assign_ExcAVR1_te);
	assign_map.emplace("cim:ExcAVR1.tf", &assign_ExcAVR1_tf);
	assign_map.emplace("cim:ExcAVR1.vrmn", &assign_ExcAVR1_vrmn);
	assign_map.emplace("cim:ExcAVR1.vrmx", &assign_ExcAVR1_vrmx);
}

void ExcAVR1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAVR1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcAVR1.e1", &get_ExcAVR1_e1);
	get_map.emplace("cim:ExcAVR1.e2", &get_ExcAVR1_e2);
	get_map.emplace("cim:ExcAVR1.ka", &get_ExcAVR1_ka);
	get_map.emplace("cim:ExcAVR1.kf", &get_ExcAVR1_kf);
	get_map.emplace("cim:ExcAVR1.se1", &get_ExcAVR1_se1);
	get_map.emplace("cim:ExcAVR1.se2", &get_ExcAVR1_se2);
	get_map.emplace("cim:ExcAVR1.ta", &get_ExcAVR1_ta);
	get_map.emplace("cim:ExcAVR1.tb", &get_ExcAVR1_tb);
	get_map.emplace("cim:ExcAVR1.te", &get_ExcAVR1_te);
	get_map.emplace("cim:ExcAVR1.tf", &get_ExcAVR1_tf);
	get_map.emplace("cim:ExcAVR1.vrmn", &get_ExcAVR1_vrmn);
	get_map.emplace("cim:ExcAVR1.vrmx", &get_ExcAVR1_vrmx);
}

void ExcAVR1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAVR1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcAVR1::declare()
{
	return BaseClassDefiner(ExcAVR1::addConstructToMap, ExcAVR1::addPrimitiveAssignFnsToMap, ExcAVR1::addClassAssignFnsToMap, ExcAVR1::debugName);
}

namespace CIMPP
{
	BaseClass* ExcAVR1_factory()
	{
		return new ExcAVR1;
	}
}
