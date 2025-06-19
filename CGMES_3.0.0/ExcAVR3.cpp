/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR3.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcAVR3::ExcAVR3() {}
ExcAVR3::~ExcAVR3() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcAVR3.e1", { CGMESProfile::DY, } },
	{ "cim:ExcAVR3.e2", { CGMESProfile::DY, } },
	{ "cim:ExcAVR3.ka", { CGMESProfile::DY, } },
	{ "cim:ExcAVR3.se1", { CGMESProfile::DY, } },
	{ "cim:ExcAVR3.se2", { CGMESProfile::DY, } },
	{ "cim:ExcAVR3.t1", { CGMESProfile::DY, } },
	{ "cim:ExcAVR3.t2", { CGMESProfile::DY, } },
	{ "cim:ExcAVR3.t3", { CGMESProfile::DY, } },
	{ "cim:ExcAVR3.t4", { CGMESProfile::DY, } },
	{ "cim:ExcAVR3.te", { CGMESProfile::DY, } },
	{ "cim:ExcAVR3.vrmn", { CGMESProfile::DY, } },
	{ "cim:ExcAVR3.vrmx", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcAVR3::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcAVR3::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcAVR3_e1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_e2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_se1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_se2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_vrmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_vrmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_e1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_e2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_se1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_se2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_vrmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_vrmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

const char ExcAVR3::debugName[] = "ExcAVR3";
const char* ExcAVR3::debugString() const
{
	return ExcAVR3::debugName;
}

void ExcAVR3::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcAVR3", &ExcAVR3_factory);
}

void ExcAVR3::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcAVR3.e1", &assign_ExcAVR3_e1);
	assign_map.emplace("cim:ExcAVR3.e2", &assign_ExcAVR3_e2);
	assign_map.emplace("cim:ExcAVR3.ka", &assign_ExcAVR3_ka);
	assign_map.emplace("cim:ExcAVR3.se1", &assign_ExcAVR3_se1);
	assign_map.emplace("cim:ExcAVR3.se2", &assign_ExcAVR3_se2);
	assign_map.emplace("cim:ExcAVR3.t1", &assign_ExcAVR3_t1);
	assign_map.emplace("cim:ExcAVR3.t2", &assign_ExcAVR3_t2);
	assign_map.emplace("cim:ExcAVR3.t3", &assign_ExcAVR3_t3);
	assign_map.emplace("cim:ExcAVR3.t4", &assign_ExcAVR3_t4);
	assign_map.emplace("cim:ExcAVR3.te", &assign_ExcAVR3_te);
	assign_map.emplace("cim:ExcAVR3.vrmn", &assign_ExcAVR3_vrmn);
	assign_map.emplace("cim:ExcAVR3.vrmx", &assign_ExcAVR3_vrmx);
}

void ExcAVR3::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAVR3::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcAVR3.e1", &get_ExcAVR3_e1);
	get_map.emplace("cim:ExcAVR3.e2", &get_ExcAVR3_e2);
	get_map.emplace("cim:ExcAVR3.ka", &get_ExcAVR3_ka);
	get_map.emplace("cim:ExcAVR3.se1", &get_ExcAVR3_se1);
	get_map.emplace("cim:ExcAVR3.se2", &get_ExcAVR3_se2);
	get_map.emplace("cim:ExcAVR3.t1", &get_ExcAVR3_t1);
	get_map.emplace("cim:ExcAVR3.t2", &get_ExcAVR3_t2);
	get_map.emplace("cim:ExcAVR3.t3", &get_ExcAVR3_t3);
	get_map.emplace("cim:ExcAVR3.t4", &get_ExcAVR3_t4);
	get_map.emplace("cim:ExcAVR3.te", &get_ExcAVR3_te);
	get_map.emplace("cim:ExcAVR3.vrmn", &get_ExcAVR3_vrmn);
	get_map.emplace("cim:ExcAVR3.vrmx", &get_ExcAVR3_vrmx);
}

void ExcAVR3::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAVR3::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcAVR3::declare()
{
	return BaseClassDefiner(ExcAVR3::addConstructToMap, ExcAVR3::addPrimitiveAssignFnsToMap, ExcAVR3::addClassAssignFnsToMap, ExcAVR3::debugName);
}

namespace CIMPP
{
	BaseClass* ExcAVR3_factory()
	{
		return new ExcAVR3;
	}
}
