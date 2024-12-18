/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCShunt.hpp"

#include <algorithm>
#include <sstream>

#include "Capacitance.hpp"
#include "Voltage.hpp"
#include "Resistance.hpp"

using namespace CIMPP;

DCShunt::DCShunt() {};
DCShunt::~DCShunt() {};


bool assign_DCShunt_capacitance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DCShunt* element = dynamic_cast<DCShunt*>(BaseClass_ptr1))
	{
		buffer >> element->capacitance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DCShunt_ratedUdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DCShunt* element = dynamic_cast<DCShunt*>(BaseClass_ptr1))
	{
		buffer >> element->ratedUdc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DCShunt_resistance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DCShunt* element = dynamic_cast<DCShunt*>(BaseClass_ptr1))
	{
		buffer >> element->resistance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}





const char DCShunt::debugName[] = "DCShunt";
const char* DCShunt::debugString() const
{
	return DCShunt::debugName;
}

void DCShunt::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCShunt"), &DCShunt_factory));
}

void DCShunt::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DCShunt.capacitance"), &assign_DCShunt_capacitance));
	assign_map.insert(std::make_pair(std::string("cim:DCShunt.ratedUdc"), &assign_DCShunt_ratedUdc));
	assign_map.insert(std::make_pair(std::string("cim:DCShunt.resistance"), &assign_DCShunt_resistance));
}

void DCShunt::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner DCShunt::declare()
{
	return BaseClassDefiner(DCShunt::addConstructToMap, DCShunt::addPrimitiveAssignFnsToMap, DCShunt::addClassAssignFnsToMap, DCShunt::debugName);
}

namespace CIMPP
{
	BaseClass* DCShunt_factory()
	{
		return new DCShunt;
	}
}
