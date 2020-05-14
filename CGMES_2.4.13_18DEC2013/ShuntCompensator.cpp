#include <sstream>
#include "RegulatingCondEq.hpp"
#include "ShuntCompensator.hpp"

#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Boolean.hpp"
#include "Integer.hpp"
#include "Voltage.hpp"
#include "Integer.hpp"
#include "Integer.hpp"
#include "DateTime.hpp"
#include "VoltagePerReactivePower.hpp"
#include "SvShuntCompensatorSections.hpp"

using namespace CIMPP;

ShuntCompensator::ShuntCompensator() {};

ShuntCompensator::~ShuntCompensator() {};









bool assign_ShuntCompensator_switchOnDate(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1)) {
                element->switchOnDate = dynamic_cast<DateTime*>(BaseClass_ptr2);
                if(element->switchOnDate != nullptr)
                        return true;
        }
        return false;
}

bool assign_ShuntCompensator_voltageSensitivity(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1)) {
                element->voltageSensitivity = dynamic_cast<VoltagePerReactivePower*>(BaseClass_ptr2);
                if(element->voltageSensitivity != nullptr)
                        return true;
        }
        return false;
}

bool assign_ShuntCompensator_SvShuntCompensatorSections(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1)) {
                element->SvShuntCompensatorSections = dynamic_cast<SvShuntCompensatorSections*>(BaseClass_ptr2);
                if(element->SvShuntCompensatorSections != nullptr)
                        return true;
        }
        return false;
}


bool assign_ShuntCompensator_sections(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1)) {
                buffer >> element->sections;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ShuntCompensator_aVRDelay(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1)) {
                buffer >> element->aVRDelay;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ShuntCompensator_grounded(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1)) {
                buffer >> element->grounded;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ShuntCompensator_maximumSections(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1)) {
                buffer >> element->maximumSections;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ShuntCompensator_nomU(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1)) {
                buffer >> element->nomU;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ShuntCompensator_normalSections(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1)) {
                buffer >> element->normalSections;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ShuntCompensator_switchOnCount(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1)) {
                buffer >> element->switchOnCount;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}




namespace CIMPP {
	BaseClass* ShuntCompensator_factory() {
		return new ShuntCompensator;
	}
}

void ShuntCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ShuntCompensator"), &ShuntCompensator_factory));
}

void ShuntCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.sections"), &assign_ShuntCompensator_sections));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.aVRDelay"), &assign_ShuntCompensator_aVRDelay));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.grounded"), &assign_ShuntCompensator_grounded));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.maximumSections"), &assign_ShuntCompensator_maximumSections));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.nomU"), &assign_ShuntCompensator_nomU));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.normalSections"), &assign_ShuntCompensator_normalSections));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.switchOnCount"), &assign_ShuntCompensator_switchOnCount));
			}

void ShuntCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
								assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.switchOnDate"), &assign_ShuntCompensator_switchOnDate));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.voltageSensitivity"), &assign_ShuntCompensator_voltageSensitivity));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.SvShuntCompensatorSections"), &assign_ShuntCompensator_SvShuntCompensatorSections));
}

const char ShuntCompensator::debugName[] = "ShuntCompensator";
const char* ShuntCompensator::debugString()
{
	return ShuntCompensator::debugName;
}

const BaseClassDefiner ShuntCompensator::declare()
{
	return BaseClassDefiner(ShuntCompensator::addConstructToMap, ShuntCompensator::addPrimitiveAssignFnsToMap, ShuntCompensator::addClassAssignFnsToMap, ShuntCompensator::debugName);
}


