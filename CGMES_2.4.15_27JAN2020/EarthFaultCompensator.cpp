/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EarthFaultCompensator.hpp"

#include <algorithm>
#include <sstream>

#include "Resistance.hpp"

using namespace CIMPP;

EarthFaultCompensator::EarthFaultCompensator() {};
EarthFaultCompensator::~EarthFaultCompensator() {};


bool assign_EarthFaultCompensator_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EarthFaultCompensator* element = dynamic_cast<EarthFaultCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



const char EarthFaultCompensator::debugName[] = "EarthFaultCompensator";
const char* EarthFaultCompensator::debugString() const
{
	return EarthFaultCompensator::debugName;
}

void EarthFaultCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EarthFaultCompensator"), &EarthFaultCompensator_factory));
}

void EarthFaultCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EarthFaultCompensator.r"), &assign_EarthFaultCompensator_r));
}

void EarthFaultCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner EarthFaultCompensator::declare()
{
	return BaseClassDefiner(EarthFaultCompensator::addConstructToMap, EarthFaultCompensator::addPrimitiveAssignFnsToMap, EarthFaultCompensator::addClassAssignFnsToMap, EarthFaultCompensator::debugName);
}

namespace CIMPP
{
	BaseClass* EarthFaultCompensator_factory()
	{
		return new EarthFaultCompensator;
	}
}
