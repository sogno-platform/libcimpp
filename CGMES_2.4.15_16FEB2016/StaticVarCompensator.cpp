#include <sstream>
#include "RegulatingCondEq.hpp"
#include "StaticVarCompensator.hpp"

#include "Reactance.hpp"
#include "Reactance.hpp"
#include "VoltagePerReactivePower.hpp"
#include "SVCControlMode.hpp"
#include "Voltage.hpp"
#include "ReactivePower.hpp"

using namespace CIMPP;

StaticVarCompensator::StaticVarCompensator(): slope(nullptr) {};

StaticVarCompensator::~StaticVarCompensator() {};




bool assign_StaticVarCompensator_slope(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1)) {
                element->slope = dynamic_cast<VoltagePerReactivePower*>(BaseClass_ptr2);
                if(element->slope != nullptr)
                        return true;
        }
        return false;
}





bool assign_StaticVarCompensator_capacitiveRating(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1)) {
                buffer >> element->capacitiveRating;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_StaticVarCompensator_inductiveRating(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1)) {
                buffer >> element->inductiveRating;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_StaticVarCompensator_sVCControlMode(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1)) {
                buffer >> element->sVCControlMode;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_StaticVarCompensator_voltageSetPoint(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1)) {
                buffer >> element->voltageSetPoint;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_StaticVarCompensator_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1)) {
                buffer >> element->q;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* StaticVarCompensator_factory() {
		return new StaticVarCompensator;
	}
}

void StaticVarCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:StaticVarCompensator"), &StaticVarCompensator_factory));
}

void StaticVarCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.capacitiveRating"), &assign_StaticVarCompensator_capacitiveRating));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.inductiveRating"), &assign_StaticVarCompensator_inductiveRating));
		assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.sVCControlMode"), &assign_StaticVarCompensator_sVCControlMode));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.voltageSetPoint"), &assign_StaticVarCompensator_voltageSetPoint));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.q"), &assign_StaticVarCompensator_q));
}

void StaticVarCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.slope"), &assign_StaticVarCompensator_slope));
			}

const char StaticVarCompensator::debugName[] = "StaticVarCompensator";
const char* StaticVarCompensator::debugString()
{
	return StaticVarCompensator::debugName;
}

const BaseClassDefiner StaticVarCompensator::declare()
{
	return BaseClassDefiner(StaticVarCompensator::addConstructToMap, StaticVarCompensator::addPrimitiveAssignFnsToMap, StaticVarCompensator::addClassAssignFnsToMap, StaticVarCompensator::debugName);
}


