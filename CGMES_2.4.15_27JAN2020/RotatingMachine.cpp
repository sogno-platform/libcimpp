/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RotatingMachine.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "GeneratingUnit.hpp"
#include "HydroPump.hpp"

using namespace CIMPP;

RotatingMachine::RotatingMachine() : GeneratingUnit(nullptr), HydroPump(nullptr) {}
RotatingMachine::~RotatingMachine() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:RotatingMachine.GeneratingUnit", { CGMESProfile::EQ, } },
	{ "cim:RotatingMachine.HydroPump", { CGMESProfile::EQ, } },
	{ "cim:RotatingMachine.p", { CGMESProfile::SSH, } },
	{ "cim:RotatingMachine.q", { CGMESProfile::SSH, } },
	{ "cim:RotatingMachine.ratedPowerFactor", { CGMESProfile::EQ, } },
	{ "cim:RotatingMachine.ratedS", { CGMESProfile::EQ, } },
	{ "cim:RotatingMachine.ratedU", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
RotatingMachine::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
RotatingMachine::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = RegulatingCondEq::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GeneratingUnit_RotatingMachine(BaseClass*, BaseClass*);
bool assign_RotatingMachine_GeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1);
	GeneratingUnit* element2 = dynamic_cast<GeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->GeneratingUnit != element2)
		{
			element->GeneratingUnit = element2;
			return assign_GeneratingUnit_RotatingMachine(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_HydroPump_RotatingMachine(BaseClass*, BaseClass*);
bool assign_RotatingMachine_HydroPump(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1);
	HydroPump* element2 = dynamic_cast<HydroPump*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->HydroPump != element2)
		{
			element->HydroPump = element2;
			return assign_HydroPump_RotatingMachine(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RotatingMachine_p(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RotatingMachine_q(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RotatingMachine_ratedPowerFactor(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedPowerFactor;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RotatingMachine_ratedS(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedS;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RotatingMachine_ratedU(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedU;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_RotatingMachine_GeneratingUnit(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RotatingMachine* element = dynamic_cast<const RotatingMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->GeneratingUnit != 0)
		{
			BaseClass_list.push_back(element->GeneratingUnit);
			return true;
		}
	}
	return false;
}


bool get_RotatingMachine_p(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RotatingMachine* element = dynamic_cast<const RotatingMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachine_q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RotatingMachine* element = dynamic_cast<const RotatingMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachine_ratedPowerFactor(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RotatingMachine* element = dynamic_cast<const RotatingMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedPowerFactor;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachine_ratedS(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RotatingMachine* element = dynamic_cast<const RotatingMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedS;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachine_ratedU(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RotatingMachine* element = dynamic_cast<const RotatingMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedU;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char RotatingMachine::debugName[] = "RotatingMachine";
const char* RotatingMachine::debugString() const
{
	return RotatingMachine::debugName;
}

void RotatingMachine::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:RotatingMachine", &RotatingMachine_factory);
}

void RotatingMachine::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:RotatingMachine.p", &assign_RotatingMachine_p);
	assign_map.emplace("cim:RotatingMachine.q", &assign_RotatingMachine_q);
	assign_map.emplace("cim:RotatingMachine.ratedPowerFactor", &assign_RotatingMachine_ratedPowerFactor);
	assign_map.emplace("cim:RotatingMachine.ratedS", &assign_RotatingMachine_ratedS);
	assign_map.emplace("cim:RotatingMachine.ratedU", &assign_RotatingMachine_ratedU);
}

void RotatingMachine::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:RotatingMachine.GeneratingUnit", &assign_RotatingMachine_GeneratingUnit);
	assign_map.emplace("cim:RotatingMachine.HydroPump", &assign_RotatingMachine_HydroPump);
}

void RotatingMachine::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:RotatingMachine.p", &get_RotatingMachine_p);
	get_map.emplace("cim:RotatingMachine.q", &get_RotatingMachine_q);
	get_map.emplace("cim:RotatingMachine.ratedPowerFactor", &get_RotatingMachine_ratedPowerFactor);
	get_map.emplace("cim:RotatingMachine.ratedS", &get_RotatingMachine_ratedS);
	get_map.emplace("cim:RotatingMachine.ratedU", &get_RotatingMachine_ratedU);
}

void RotatingMachine::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RegulatingCondEq::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:RotatingMachine.GeneratingUnit", &get_RotatingMachine_GeneratingUnit);
}

void RotatingMachine::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner RotatingMachine::declare()
{
	return BaseClassDefiner(RotatingMachine::addConstructToMap, RotatingMachine::addPrimitiveAssignFnsToMap, RotatingMachine::addClassAssignFnsToMap, RotatingMachine::debugName);
}

namespace CIMPP
{
	BaseClass* RotatingMachine_factory()
	{
		return new RotatingMachine;
	}
}
