/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerLinear.hpp"

#include <algorithm>
#include <sstream>

#include "AngleDegrees.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

PhaseTapChangerLinear::PhaseTapChangerLinear() {};
PhaseTapChangerLinear::~PhaseTapChangerLinear() {};


bool assign_PhaseTapChangerLinear_stepPhaseShiftIncrement(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PhaseTapChangerLinear* element = dynamic_cast<PhaseTapChangerLinear*>(BaseClass_ptr1))
	{
		buffer >> element->stepPhaseShiftIncrement;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PhaseTapChangerLinear_xMax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PhaseTapChangerLinear* element = dynamic_cast<PhaseTapChangerLinear*>(BaseClass_ptr1))
	{
		buffer >> element->xMax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PhaseTapChangerLinear_xMin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PhaseTapChangerLinear* element = dynamic_cast<PhaseTapChangerLinear*>(BaseClass_ptr1))
	{
		buffer >> element->xMin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}





const char PhaseTapChangerLinear::debugName[] = "PhaseTapChangerLinear";
const char* PhaseTapChangerLinear::debugString() const
{
	return PhaseTapChangerLinear::debugName;
}

void PhaseTapChangerLinear::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChangerLinear"), &PhaseTapChangerLinear_factory));
}

void PhaseTapChangerLinear::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerLinear.stepPhaseShiftIncrement"), &assign_PhaseTapChangerLinear_stepPhaseShiftIncrement));
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerLinear.xMax"), &assign_PhaseTapChangerLinear_xMax));
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerLinear.xMin"), &assign_PhaseTapChangerLinear_xMin));
}

void PhaseTapChangerLinear::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner PhaseTapChangerLinear::declare()
{
	return BaseClassDefiner(PhaseTapChangerLinear::addConstructToMap, PhaseTapChangerLinear::addPrimitiveAssignFnsToMap, PhaseTapChangerLinear::addClassAssignFnsToMap, PhaseTapChangerLinear::debugName);
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerLinear_factory()
	{
		return new PhaseTapChangerLinear;
	}
}
