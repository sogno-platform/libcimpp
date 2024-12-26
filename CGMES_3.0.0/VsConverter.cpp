/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VsConverter.hpp"

#include <algorithm>
#include <sstream>

#include "VsCapabilityCurve.hpp"
#include "VSCDynamics.hpp"
#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "Resistance.hpp"
#include "Float.hpp"
#include "VsPpccControlKind.hpp"
#include "VsQpccControlKind.hpp"
#include "PerCent.hpp"
#include "Float.hpp"
#include "AngleDegrees.hpp"
#include "Float.hpp"
#include "ReactivePower.hpp"
#include "Voltage.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

VsConverter::VsConverter() : CapabilityCurve(nullptr), VSCDynamics(nullptr) {};
VsConverter::~VsConverter() {};




bool assign_VsConverter_delta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->delta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_droop(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->droop;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_droopCompensation(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->droopCompensation;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_maxModulationIndex(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->maxModulationIndex;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_pPccControl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->pPccControl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_qPccControl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->qPccControl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_qShare(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->qShare;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_targetPWMfactor(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->targetPWMfactor;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_targetPhasePcc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->targetPhasePcc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_targetPowerFactorPcc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->targetPowerFactorPcc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_targetQpcc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->targetQpcc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_targetUpcc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->targetUpcc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_uv(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->uv;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_VsCapabilityCurve_VsConverterDCSides(BaseClass*, BaseClass*);
bool assign_VsConverter_CapabilityCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	VsCapabilityCurve* element2 = dynamic_cast<VsCapabilityCurve*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CapabilityCurve != element2)
		{
			element->CapabilityCurve = element2;
			return assign_VsCapabilityCurve_VsConverterDCSides(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VSCDynamics_VsConverter(BaseClass*, BaseClass*);
bool assign_VsConverter_VSCDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	VSCDynamics* element2 = dynamic_cast<VSCDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VSCDynamics != element2)
		{
			element->VSCDynamics = element2;
			return assign_VSCDynamics_VsConverter(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}














const char VsConverter::debugName[] = "VsConverter";
const char* VsConverter::debugString() const
{
	return VsConverter::debugName;
}

void VsConverter::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VsConverter"), &VsConverter_factory));
}

void VsConverter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.delta"), &assign_VsConverter_delta));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.droop"), &assign_VsConverter_droop));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.droopCompensation"), &assign_VsConverter_droopCompensation));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.maxModulationIndex"), &assign_VsConverter_maxModulationIndex));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.pPccControl"), &assign_VsConverter_pPccControl));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.qPccControl"), &assign_VsConverter_qPccControl));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.qShare"), &assign_VsConverter_qShare));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.targetPWMfactor"), &assign_VsConverter_targetPWMfactor));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.targetPhasePcc"), &assign_VsConverter_targetPhasePcc));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.targetPowerFactorPcc"), &assign_VsConverter_targetPowerFactorPcc));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.targetQpcc"), &assign_VsConverter_targetQpcc));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.targetUpcc"), &assign_VsConverter_targetUpcc));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.uv"), &assign_VsConverter_uv));
}

void VsConverter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.CapabilityCurve"), &assign_VsConverter_CapabilityCurve));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.VSCDynamics"), &assign_VsConverter_VSCDynamics));
}

const BaseClassDefiner VsConverter::declare()
{
	return BaseClassDefiner(VsConverter::addConstructToMap, VsConverter::addPrimitiveAssignFnsToMap, VsConverter::addClassAssignFnsToMap, VsConverter::debugName);
}

namespace CIMPP
{
	BaseClass* VsConverter_factory()
	{
		return new VsConverter;
	}
}
