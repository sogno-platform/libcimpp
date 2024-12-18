#include <sstream>
#include "ConductingEquipment.hpp"
#include "EarthFaultCompensator.hpp"

#include "Resistance.hpp"

using namespace CIMPP;

EarthFaultCompensator::EarthFaultCompensator() {};

EarthFaultCompensator::~EarthFaultCompensator() {};


bool assign_EarthFaultCompensator_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EarthFaultCompensator* element = dynamic_cast<EarthFaultCompensator*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}



namespace CIMPP {
	BaseClass* EarthFaultCompensator_factory() {
		return new EarthFaultCompensator;
	}
}

void EarthFaultCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:EarthFaultCompensator"), &EarthFaultCompensator_factory));
}

void EarthFaultCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:EarthFaultCompensator.r"), &assign_EarthFaultCompensator_r));
}

void EarthFaultCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	}

const char EarthFaultCompensator::debugName[] = "EarthFaultCompensator";
const char* EarthFaultCompensator::debugString()
{
	return EarthFaultCompensator::debugName;
}

const BaseClassDefiner EarthFaultCompensator::declare()
{
	return BaseClassDefiner(EarthFaultCompensator::addConstructToMap, EarthFaultCompensator::addPrimitiveAssignFnsToMap, EarthFaultCompensator::addClassAssignFnsToMap, EarthFaultCompensator::debugName);
}
