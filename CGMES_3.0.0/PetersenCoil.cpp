/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PetersenCoil.hpp"

#include <algorithm>
#include <sstream>

#include "PetersenCoilModeKind.hpp"
#include "Voltage.hpp"
#include "CurrentFlow.hpp"
#include "CurrentFlow.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

PetersenCoil::PetersenCoil() {};
PetersenCoil::~PetersenCoil() {};


bool assign_PetersenCoil_mode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1))
	{
		buffer >> element->mode;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PetersenCoil_nominalU(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1))
	{
		buffer >> element->nominalU;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PetersenCoil_offsetCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1))
	{
		buffer >> element->offsetCurrent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PetersenCoil_positionCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1))
	{
		buffer >> element->positionCurrent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PetersenCoil_xGroundMax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1))
	{
		buffer >> element->xGroundMax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PetersenCoil_xGroundMin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1))
	{
		buffer >> element->xGroundMin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PetersenCoil_xGroundNominal(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1))
	{
		buffer >> element->xGroundNominal;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}









const char PetersenCoil::debugName[] = "PetersenCoil";
const char* PetersenCoil::debugString() const
{
	return PetersenCoil::debugName;
}

void PetersenCoil::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PetersenCoil"), &PetersenCoil_factory));
}

void PetersenCoil::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PetersenCoil.mode"), &assign_PetersenCoil_mode));
	assign_map.insert(std::make_pair(std::string("cim:PetersenCoil.nominalU"), &assign_PetersenCoil_nominalU));
	assign_map.insert(std::make_pair(std::string("cim:PetersenCoil.offsetCurrent"), &assign_PetersenCoil_offsetCurrent));
	assign_map.insert(std::make_pair(std::string("cim:PetersenCoil.positionCurrent"), &assign_PetersenCoil_positionCurrent));
	assign_map.insert(std::make_pair(std::string("cim:PetersenCoil.xGroundMax"), &assign_PetersenCoil_xGroundMax));
	assign_map.insert(std::make_pair(std::string("cim:PetersenCoil.xGroundMin"), &assign_PetersenCoil_xGroundMin));
	assign_map.insert(std::make_pair(std::string("cim:PetersenCoil.xGroundNominal"), &assign_PetersenCoil_xGroundNominal));
}

void PetersenCoil::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner PetersenCoil::declare()
{
	return BaseClassDefiner(PetersenCoil::addConstructToMap, PetersenCoil::addPrimitiveAssignFnsToMap, PetersenCoil::addClassAssignFnsToMap, PetersenCoil::debugName);
}

namespace CIMPP
{
	BaseClass* PetersenCoil_factory()
	{
		return new PetersenCoil;
	}
}
