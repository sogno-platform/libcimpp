/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArType2Common1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PFVArType2Common1::PFVArType2Common1() {}
PFVArType2Common1::~PFVArType2Common1() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PFVArType2Common1.j", { CGMESProfile::DY, } },
	{ "cim:PFVArType2Common1.ki", { CGMESProfile::DY, } },
	{ "cim:PFVArType2Common1.kp", { CGMESProfile::DY, } },
	{ "cim:PFVArType2Common1.max", { CGMESProfile::DY, } },
	{ "cim:PFVArType2Common1.ref", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PFVArType2Common1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PFVArType2Common1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PFVArControllerType2Dynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_PFVArType2Common1_j(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->j;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType2Common1_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1);
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

bool assign_PFVArType2Common1_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1);
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

bool assign_PFVArType2Common1_max(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->max;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType2Common1_ref(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ref;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PFVArType2Common1_j(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2Common1* element = dynamic_cast<const PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->j;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2Common1_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2Common1* element = dynamic_cast<const PFVArType2Common1*>(BaseClass_ptr1);
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

bool get_PFVArType2Common1_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2Common1* element = dynamic_cast<const PFVArType2Common1*>(BaseClass_ptr1);
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

bool get_PFVArType2Common1_max(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2Common1* element = dynamic_cast<const PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->max;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2Common1_ref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2Common1* element = dynamic_cast<const PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PFVArType2Common1::debugName[] = "PFVArType2Common1";
const char* PFVArType2Common1::debugString() const
{
	return PFVArType2Common1::debugName;
}

void PFVArType2Common1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PFVArType2Common1", &PFVArType2Common1_factory);
}

void PFVArType2Common1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PFVArType2Common1.j", &assign_PFVArType2Common1_j);
	assign_map.emplace("cim:PFVArType2Common1.ki", &assign_PFVArType2Common1_ki);
	assign_map.emplace("cim:PFVArType2Common1.kp", &assign_PFVArType2Common1_kp);
	assign_map.emplace("cim:PFVArType2Common1.max", &assign_PFVArType2Common1_max);
	assign_map.emplace("cim:PFVArType2Common1.ref", &assign_PFVArType2Common1_ref);
}

void PFVArType2Common1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PFVArType2Common1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PFVArType2Common1.j", &get_PFVArType2Common1_j);
	get_map.emplace("cim:PFVArType2Common1.ki", &get_PFVArType2Common1_ki);
	get_map.emplace("cim:PFVArType2Common1.kp", &get_PFVArType2Common1_kp);
	get_map.emplace("cim:PFVArType2Common1.max", &get_PFVArType2Common1_max);
	get_map.emplace("cim:PFVArType2Common1.ref", &get_PFVArType2Common1_ref);
}

void PFVArType2Common1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addClassGetFnsToMap(get_map);
}

void PFVArType2Common1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PFVArType2Common1::declare()
{
	return BaseClassDefiner(PFVArType2Common1::addConstructToMap, PFVArType2Common1::addPrimitiveAssignFnsToMap, PFVArType2Common1::addClassAssignFnsToMap, PFVArType2Common1::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArType2Common1_factory()
	{
		return new PFVArType2Common1;
	}
}
