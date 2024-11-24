/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArType2IEEEPFController.hpp"

#include <algorithm>
#include <sstream>

#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"

using namespace CIMPP;

PFVArType2IEEEPFController::PFVArType2IEEEPFController() {};
PFVArType2IEEEPFController::~PFVArType2IEEEPFController() {};


bool assign_PFVArType2IEEEPFController_exlon(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->exlon;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_pfref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->pfref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_vclmt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vclmt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_vref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_vs(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vs;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}









const char PFVArType2IEEEPFController::debugName[] = "PFVArType2IEEEPFController";
const char* PFVArType2IEEEPFController::debugString() const
{
	return PFVArType2IEEEPFController::debugName;
}

void PFVArType2IEEEPFController::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController"), &PFVArType2IEEEPFController_factory));
}

void PFVArType2IEEEPFController::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.exlon"), &assign_PFVArType2IEEEPFController_exlon));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.ki"), &assign_PFVArType2IEEEPFController_ki));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.kp"), &assign_PFVArType2IEEEPFController_kp));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.pfref"), &assign_PFVArType2IEEEPFController_pfref));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.vclmt"), &assign_PFVArType2IEEEPFController_vclmt));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.vref"), &assign_PFVArType2IEEEPFController_vref));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.vs"), &assign_PFVArType2IEEEPFController_vs));
}

void PFVArType2IEEEPFController::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner PFVArType2IEEEPFController::declare()
{
	return BaseClassDefiner(PFVArType2IEEEPFController::addConstructToMap, PFVArType2IEEEPFController::addPrimitiveAssignFnsToMap, PFVArType2IEEEPFController::addClassAssignFnsToMap, PFVArType2IEEEPFController::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArType2IEEEPFController_factory()
	{
		return new PFVArType2IEEEPFController;
	}
}
