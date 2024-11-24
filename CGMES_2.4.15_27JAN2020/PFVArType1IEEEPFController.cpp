/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArType1IEEEPFController.hpp"

#include <algorithm>
#include <sstream>

#include "Boolean.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PFVArType1IEEEPFController::PFVArType1IEEEPFController() {};
PFVArType1IEEEPFController::~PFVArType1IEEEPFController() {};


bool assign_PFVArType1IEEEPFController_ovex(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->ovex;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_tpfc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->tpfc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_vitmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vitmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_vpf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vpf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_vpfcbw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vpfcbw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_vpfref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vpfref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_vvtmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vvtmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_vvtmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vvtmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}










const char PFVArType1IEEEPFController::debugName[] = "PFVArType1IEEEPFController";
const char* PFVArType1IEEEPFController::debugString() const
{
	return PFVArType1IEEEPFController::debugName;
}

void PFVArType1IEEEPFController::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController"), &PFVArType1IEEEPFController_factory));
}

void PFVArType1IEEEPFController::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.ovex"), &assign_PFVArType1IEEEPFController_ovex));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.tpfc"), &assign_PFVArType1IEEEPFController_tpfc));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.vitmin"), &assign_PFVArType1IEEEPFController_vitmin));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.vpf"), &assign_PFVArType1IEEEPFController_vpf));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.vpfcbw"), &assign_PFVArType1IEEEPFController_vpfcbw));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.vpfref"), &assign_PFVArType1IEEEPFController_vpfref));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.vvtmax"), &assign_PFVArType1IEEEPFController_vvtmax));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.vvtmin"), &assign_PFVArType1IEEEPFController_vvtmin));
}

void PFVArType1IEEEPFController::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner PFVArType1IEEEPFController::declare()
{
	return BaseClassDefiner(PFVArType1IEEEPFController::addConstructToMap, PFVArType1IEEEPFController::addPrimitiveAssignFnsToMap, PFVArType1IEEEPFController::addClassAssignFnsToMap, PFVArType1IEEEPFController::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArType1IEEEPFController_factory()
	{
		return new PFVArType1IEEEPFController;
	}
}
