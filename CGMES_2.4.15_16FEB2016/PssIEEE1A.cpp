/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssIEEE1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PssIEEE1A::PssIEEE1A() {};
PssIEEE1A::~PssIEEE1A() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PssIEEE1A.a1", { CGMESProfile::DY, } },
	{ "cim:PssIEEE1A.a2", { CGMESProfile::DY, } },
	{ "cim:PssIEEE1A.inputSignalType", { CGMESProfile::DY, } },
	{ "cim:PssIEEE1A.ks", { CGMESProfile::DY, } },
	{ "cim:PssIEEE1A.t1", { CGMESProfile::DY, } },
	{ "cim:PssIEEE1A.t2", { CGMESProfile::DY, } },
	{ "cim:PssIEEE1A.t3", { CGMESProfile::DY, } },
	{ "cim:PssIEEE1A.t4", { CGMESProfile::DY, } },
	{ "cim:PssIEEE1A.t5", { CGMESProfile::DY, } },
	{ "cim:PssIEEE1A.t6", { CGMESProfile::DY, } },
	{ "cim:PssIEEE1A.vrmax", { CGMESProfile::DY, } },
	{ "cim:PssIEEE1A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PssIEEE1A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PssIEEE1A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PssIEEE1A_a1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->a1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_a2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->a2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_inputSignalType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->inputSignalType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->ks;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->t4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->t5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->t6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_PssIEEE1A_a1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer << element->a1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE1A_a2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer << element->a2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE1A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1))
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

bool get_PssIEEE1A_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1))
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

bool get_PssIEEE1A_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1))
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

bool get_PssIEEE1A_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1))
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

bool get_PssIEEE1A_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1))
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

bool get_PssIEEE1A_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1))
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

bool get_PssIEEE1A_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1))
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

bool get_PssIEEE1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1))
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

bool get_PssIEEE1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1))
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



bool get_PssIEEE1A_inputSignalType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer << element->inputSignalType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PssIEEE1A::debugName[] = "PssIEEE1A";
const char* PssIEEE1A::debugString() const
{
	return PssIEEE1A::debugName;
}

void PssIEEE1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PssIEEE1A"), &PssIEEE1A_factory));
}

void PssIEEE1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.a1"), &assign_PssIEEE1A_a1));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.a2"), &assign_PssIEEE1A_a2));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.inputSignalType"), &assign_PssIEEE1A_inputSignalType));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.ks"), &assign_PssIEEE1A_ks));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.t1"), &assign_PssIEEE1A_t1));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.t2"), &assign_PssIEEE1A_t2));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.t3"), &assign_PssIEEE1A_t3));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.t4"), &assign_PssIEEE1A_t4));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.t5"), &assign_PssIEEE1A_t5));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.t6"), &assign_PssIEEE1A_t6));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.vrmax"), &assign_PssIEEE1A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.vrmin"), &assign_PssIEEE1A_vrmin));
}

void PssIEEE1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssIEEE1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PssIEEE1A.a1", &get_PssIEEE1A_a1);
	get_map.emplace("cim:PssIEEE1A.a2", &get_PssIEEE1A_a2);
	get_map.emplace("cim:PssIEEE1A.ks", &get_PssIEEE1A_ks);
	get_map.emplace("cim:PssIEEE1A.t1", &get_PssIEEE1A_t1);
	get_map.emplace("cim:PssIEEE1A.t2", &get_PssIEEE1A_t2);
	get_map.emplace("cim:PssIEEE1A.t3", &get_PssIEEE1A_t3);
	get_map.emplace("cim:PssIEEE1A.t4", &get_PssIEEE1A_t4);
	get_map.emplace("cim:PssIEEE1A.t5", &get_PssIEEE1A_t5);
	get_map.emplace("cim:PssIEEE1A.t6", &get_PssIEEE1A_t6);
	get_map.emplace("cim:PssIEEE1A.vrmax", &get_PssIEEE1A_vrmax);
	get_map.emplace("cim:PssIEEE1A.vrmin", &get_PssIEEE1A_vrmin);
}

void PssIEEE1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssIEEE1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:PssIEEE1A.inputSignalType", &get_PssIEEE1A_inputSignalType);
}

const BaseClassDefiner PssIEEE1A::declare()
{
	return BaseClassDefiner(PssIEEE1A::addConstructToMap, PssIEEE1A::addPrimitiveAssignFnsToMap, PssIEEE1A::addClassAssignFnsToMap, PssIEEE1A::debugName);
}

namespace CIMPP
{
	BaseClass* PssIEEE1A_factory()
	{
		return new PssIEEE1A;
	}
}
