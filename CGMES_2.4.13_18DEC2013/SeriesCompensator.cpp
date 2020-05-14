#include <sstream>
#include "ConductingEquipment.hpp"
#include "SeriesCompensator.hpp"

#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"
#include "Boolean.hpp"
#include "CurrentFlow.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

SeriesCompensator::SeriesCompensator() {};

SeriesCompensator::~SeriesCompensator() {};










bool assign_SeriesCompensator_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_SeriesCompensator_r0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1)) {
                buffer >> element->r0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_SeriesCompensator_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1)) {
                buffer >> element->x;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_SeriesCompensator_x0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1)) {
                buffer >> element->x0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_SeriesCompensator_varistorPresent(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1)) {
                buffer >> element->varistorPresent;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_SeriesCompensator_varistorRatedCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1)) {
                buffer >> element->varistorRatedCurrent;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_SeriesCompensator_varistorVoltageThreshold(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1)) {
                buffer >> element->varistorVoltageThreshold;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* SeriesCompensator_factory() {
		return new SeriesCompensator;
	}
}

void SeriesCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SeriesCompensator"), &SeriesCompensator_factory));
}

void SeriesCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.r"), &assign_SeriesCompensator_r));
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.r0"), &assign_SeriesCompensator_r0));
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.x"), &assign_SeriesCompensator_x));
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.x0"), &assign_SeriesCompensator_x0));
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.varistorPresent"), &assign_SeriesCompensator_varistorPresent));
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.varistorRatedCurrent"), &assign_SeriesCompensator_varistorRatedCurrent));
	assign_map.insert(std::make_pair(std::string("cim:SeriesCompensator.varistorVoltageThreshold"), &assign_SeriesCompensator_varistorVoltageThreshold));
}

void SeriesCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
							}

const char SeriesCompensator::debugName[] = "SeriesCompensator";
const char* SeriesCompensator::debugString()
{
	return SeriesCompensator::debugName;
}

const BaseClassDefiner SeriesCompensator::declare()
{
	return BaseClassDefiner(SeriesCompensator::addConstructToMap, SeriesCompensator::addPrimitiveAssignFnsToMap, SeriesCompensator::addClassAssignFnsToMap, SeriesCompensator::debugName);
}


