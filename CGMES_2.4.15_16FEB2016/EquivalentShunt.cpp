/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquivalentShunt.hpp"

#include <algorithm>
#include <sstream>

#include "Susceptance.hpp"
#include "Conductance.hpp"

using namespace CIMPP;

EquivalentShunt::EquivalentShunt() {};
EquivalentShunt::~EquivalentShunt() {};


bool assign_EquivalentShunt_b(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentShunt* element = dynamic_cast<EquivalentShunt*>(BaseClass_ptr1))
	{
		buffer >> element->b;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentShunt_g(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentShunt* element = dynamic_cast<EquivalentShunt*>(BaseClass_ptr1))
	{
		buffer >> element->g;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}




const char EquivalentShunt::debugName[] = "EquivalentShunt";
const char* EquivalentShunt::debugString() const
{
	return EquivalentShunt::debugName;
}

void EquivalentShunt::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EquivalentShunt"), &EquivalentShunt_factory));
}

void EquivalentShunt::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EquivalentShunt.b"), &assign_EquivalentShunt_b));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentShunt.g"), &assign_EquivalentShunt_g));
}

void EquivalentShunt::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner EquivalentShunt::declare()
{
	return BaseClassDefiner(EquivalentShunt::addConstructToMap, EquivalentShunt::addPrimitiveAssignFnsToMap, EquivalentShunt::addClassAssignFnsToMap, EquivalentShunt::debugName);
}

namespace CIMPP
{
	BaseClass* EquivalentShunt_factory()
	{
		return new EquivalentShunt;
	}
}
