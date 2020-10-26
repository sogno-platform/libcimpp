#include <sstream>
#include "ACDCConverter.hpp"
#include "VsConverter.hpp"

#include "Simple_Float.hpp"
#include "CurrentFlow.hpp"
#include "VsCapabilityCurve.hpp"
#include "AngleDegrees.hpp"
#include "Voltage.hpp"
#include "PU.hpp"
#include "Resistance.hpp"
#include "VsPpccControlKind.hpp"
#include "VsQpccControlKind.hpp"
#include "PerCent.hpp"
#include "ReactivePower.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

VsConverter::VsConverter(): CapabilityCurve(nullptr) {};

VsConverter::~VsConverter() {};




bool assign_VsCapabilityCurve_VsConverterDCSides(BaseClass*, BaseClass*);
bool assign_VsConverter_CapabilityCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1)) {
                element->CapabilityCurve = dynamic_cast<VsCapabilityCurve*>(BaseClass_ptr2);
                if(element->CapabilityCurve != nullptr)
                        return assign_VsCapabilityCurve_VsConverterDCSides(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}











bool assign_VsConverter_maxModulationIndex(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1)) {
                buffer >> element->maxModulationIndex;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VsConverter_maxValveCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1)) {
                buffer >> element->maxValveCurrent;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_VsConverter_delta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1)) {
                buffer >> element->delta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VsConverter_uf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1)) {
                buffer >> element->uf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VsConverter_droop(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1)) {
                buffer >> element->droop;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VsConverter_droopCompensation(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1)) {
                buffer >> element->droopCompensation;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VsConverter_pPccControl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1)) {
                buffer >> element->pPccControl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VsConverter_qPccControl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1)) {
                buffer >> element->qPccControl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VsConverter_qShare(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1)) {
                buffer >> element->qShare;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VsConverter_targetQpcc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1)) {
                buffer >> element->targetQpcc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VsConverter_targetUpcc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1)) {
                buffer >> element->targetUpcc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* VsConverter_factory() {
		return new VsConverter;
	}
}

void VsConverter::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:VsConverter"), &VsConverter_factory));
}

void VsConverter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.maxModulationIndex"), &assign_VsConverter_maxModulationIndex));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.maxValveCurrent"), &assign_VsConverter_maxValveCurrent));
		assign_map.insert(std::make_pair(std::string("cim:VsConverter.delta"), &assign_VsConverter_delta));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.uf"), &assign_VsConverter_uf));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.droop"), &assign_VsConverter_droop));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.droopCompensation"), &assign_VsConverter_droopCompensation));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.pPccControl"), &assign_VsConverter_pPccControl));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.qPccControl"), &assign_VsConverter_qPccControl));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.qShare"), &assign_VsConverter_qShare));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.targetQpcc"), &assign_VsConverter_targetQpcc));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.targetUpcc"), &assign_VsConverter_targetUpcc));
}

void VsConverter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:VsConverter.CapabilityCurve"), &assign_VsConverter_CapabilityCurve));
									}

const char VsConverter::debugName[] = "VsConverter";
const char* VsConverter::debugString()
{
	return VsConverter::debugName;
}

const BaseClassDefiner VsConverter::declare()
{
	return BaseClassDefiner(VsConverter::addConstructToMap, VsConverter::addPrimitiveAssignFnsToMap, VsConverter::addClassAssignFnsToMap, VsConverter::debugName);
}


