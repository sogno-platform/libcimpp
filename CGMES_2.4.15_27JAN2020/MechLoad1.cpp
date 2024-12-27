/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MechLoad1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

MechLoad1::MechLoad1() {};
MechLoad1::~MechLoad1() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:MechLoad1.a", { CGMESProfile::DY, } },
	{ "cim:MechLoad1.b", { CGMESProfile::DY, } },
	{ "cim:MechLoad1.d", { CGMESProfile::DY, } },
	{ "cim:MechLoad1.e", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
MechLoad1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
MechLoad1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = MechanicalLoadDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_MechLoad1_a(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (MechLoad1* element = dynamic_cast<MechLoad1*>(BaseClass_ptr1))
	{
		buffer >> element->a;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_MechLoad1_b(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (MechLoad1* element = dynamic_cast<MechLoad1*>(BaseClass_ptr1))
	{
		buffer >> element->b;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_MechLoad1_d(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (MechLoad1* element = dynamic_cast<MechLoad1*>(BaseClass_ptr1))
	{
		buffer >> element->d;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_MechLoad1_e(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (MechLoad1* element = dynamic_cast<MechLoad1*>(BaseClass_ptr1))
	{
		buffer >> element->e;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_MechLoad1_a(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const MechLoad1* element = dynamic_cast<const MechLoad1*>(BaseClass_ptr1))
	{
		buffer << element->a;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MechLoad1_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const MechLoad1* element = dynamic_cast<const MechLoad1*>(BaseClass_ptr1))
	{
		buffer << element->b;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MechLoad1_d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const MechLoad1* element = dynamic_cast<const MechLoad1*>(BaseClass_ptr1))
	{
		buffer << element->d;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MechLoad1_e(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const MechLoad1* element = dynamic_cast<const MechLoad1*>(BaseClass_ptr1))
	{
		buffer << element->e;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char MechLoad1::debugName[] = "MechLoad1";
const char* MechLoad1::debugString() const
{
	return MechLoad1::debugName;
}

void MechLoad1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:MechLoad1"), &MechLoad1_factory));
}

void MechLoad1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:MechLoad1.a"), &assign_MechLoad1_a));
	assign_map.insert(std::make_pair(std::string("cim:MechLoad1.b"), &assign_MechLoad1_b));
	assign_map.insert(std::make_pair(std::string("cim:MechLoad1.d"), &assign_MechLoad1_d));
	assign_map.insert(std::make_pair(std::string("cim:MechLoad1.e"), &assign_MechLoad1_e));
}

void MechLoad1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void MechLoad1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MechanicalLoadDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:MechLoad1.a", &get_MechLoad1_a);
	get_map.emplace("cim:MechLoad1.b", &get_MechLoad1_b);
	get_map.emplace("cim:MechLoad1.d", &get_MechLoad1_d);
	get_map.emplace("cim:MechLoad1.e", &get_MechLoad1_e);
}

void MechLoad1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	MechanicalLoadDynamics::addClassGetFnsToMap(get_map);
}

void MechLoad1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MechanicalLoadDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner MechLoad1::declare()
{
	return BaseClassDefiner(MechLoad1::addConstructToMap, MechLoad1::addPrimitiveAssignFnsToMap, MechLoad1::addClassAssignFnsToMap, MechLoad1::debugName);
}

namespace CIMPP
{
	BaseClass* MechLoad1_factory()
	{
		return new MechLoad1;
	}
}
