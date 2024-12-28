/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "NonlinearShuntCompensatorPoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "NonlinearShuntCompensator.hpp"
#include "Susceptance.hpp"
#include "Susceptance.hpp"
#include "Conductance.hpp"
#include "Conductance.hpp"
#include "Integer.hpp"

using namespace CIMPP;

NonlinearShuntCompensatorPoint::NonlinearShuntCompensatorPoint() : NonlinearShuntCompensator(nullptr) {};
NonlinearShuntCompensatorPoint::~NonlinearShuntCompensatorPoint() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SC,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:NonlinearShuntCompensatorPoint.NonlinearShuntCompensator", { CGMESProfile::EQ, } },
	{ "cim:NonlinearShuntCompensatorPoint.b", { CGMESProfile::EQ, } },
	{ "cim:NonlinearShuntCompensatorPoint.b0", { CGMESProfile::SC, } },
	{ "cim:NonlinearShuntCompensatorPoint.g", { CGMESProfile::EQ, } },
	{ "cim:NonlinearShuntCompensatorPoint.g0", { CGMESProfile::SC, } },
	{ "cim:NonlinearShuntCompensatorPoint.sectionNumber", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
NonlinearShuntCompensatorPoint::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
NonlinearShuntCompensatorPoint::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_NonlinearShuntCompensatorPoint_b(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1))
	{
		buffer >> element->b;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_NonlinearShuntCompensatorPoint_b0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1))
	{
		buffer >> element->b0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_NonlinearShuntCompensatorPoint_g(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1))
	{
		buffer >> element->g;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_NonlinearShuntCompensatorPoint_g0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1))
	{
		buffer >> element->g0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_NonlinearShuntCompensatorPoint_sectionNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1))
	{
		buffer >> element->sectionNumber;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints(BaseClass*, BaseClass*);
bool assign_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	NonlinearShuntCompensator* element2 = dynamic_cast<NonlinearShuntCompensator*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->NonlinearShuntCompensator != element2)
		{
			element->NonlinearShuntCompensator = element2;
			return assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_NonlinearShuntCompensatorPoint_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const NonlinearShuntCompensatorPoint* element = dynamic_cast<const NonlinearShuntCompensatorPoint*>(BaseClass_ptr1))
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

bool get_NonlinearShuntCompensatorPoint_b0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const NonlinearShuntCompensatorPoint* element = dynamic_cast<const NonlinearShuntCompensatorPoint*>(BaseClass_ptr1))
	{
		buffer << element->b0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_NonlinearShuntCompensatorPoint_g(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const NonlinearShuntCompensatorPoint* element = dynamic_cast<const NonlinearShuntCompensatorPoint*>(BaseClass_ptr1))
	{
		buffer << element->g;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_NonlinearShuntCompensatorPoint_g0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const NonlinearShuntCompensatorPoint* element = dynamic_cast<const NonlinearShuntCompensatorPoint*>(BaseClass_ptr1))
	{
		buffer << element->g0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_NonlinearShuntCompensatorPoint_sectionNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const NonlinearShuntCompensatorPoint* element = dynamic_cast<const NonlinearShuntCompensatorPoint*>(BaseClass_ptr1))
	{
		buffer << element->sectionNumber;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const NonlinearShuntCompensatorPoint* element = dynamic_cast<const NonlinearShuntCompensatorPoint*>(BaseClass_ptr1))
	{
		if (element->NonlinearShuntCompensator != 0)
		{
			BaseClass_list.push_back(element->NonlinearShuntCompensator);
			return true;
		}
	}
	return false;
}


const char NonlinearShuntCompensatorPoint::debugName[] = "NonlinearShuntCompensatorPoint";
const char* NonlinearShuntCompensatorPoint::debugString() const
{
	return NonlinearShuntCompensatorPoint::debugName;
}

void NonlinearShuntCompensatorPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint"), &NonlinearShuntCompensatorPoint_factory));
}

void NonlinearShuntCompensatorPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint.b"), &assign_NonlinearShuntCompensatorPoint_b));
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint.b0"), &assign_NonlinearShuntCompensatorPoint_b0));
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint.g"), &assign_NonlinearShuntCompensatorPoint_g));
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint.g0"), &assign_NonlinearShuntCompensatorPoint_g0));
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint.sectionNumber"), &assign_NonlinearShuntCompensatorPoint_sectionNumber));
}

void NonlinearShuntCompensatorPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint.NonlinearShuntCompensator"), &assign_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator));
}

void NonlinearShuntCompensatorPoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:NonlinearShuntCompensatorPoint.b", &get_NonlinearShuntCompensatorPoint_b);
	get_map.emplace("cim:NonlinearShuntCompensatorPoint.b0", &get_NonlinearShuntCompensatorPoint_b0);
	get_map.emplace("cim:NonlinearShuntCompensatorPoint.g", &get_NonlinearShuntCompensatorPoint_g);
	get_map.emplace("cim:NonlinearShuntCompensatorPoint.g0", &get_NonlinearShuntCompensatorPoint_g0);
	get_map.emplace("cim:NonlinearShuntCompensatorPoint.sectionNumber", &get_NonlinearShuntCompensatorPoint_sectionNumber);
}

void NonlinearShuntCompensatorPoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:NonlinearShuntCompensatorPoint.NonlinearShuntCompensator", &get_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator);
}

void NonlinearShuntCompensatorPoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner NonlinearShuntCompensatorPoint::declare()
{
	return BaseClassDefiner(NonlinearShuntCompensatorPoint::addConstructToMap, NonlinearShuntCompensatorPoint::addPrimitiveAssignFnsToMap, NonlinearShuntCompensatorPoint::addClassAssignFnsToMap, NonlinearShuntCompensatorPoint::debugName);
}

namespace CIMPP
{
	BaseClass* NonlinearShuntCompensatorPoint_factory()
	{
		return new NonlinearShuntCompensatorPoint;
	}
}
