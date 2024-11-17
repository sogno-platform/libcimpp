#include <sstream>
#include "ShuntCompensator.hpp"
#include "NonlinearShuntCompensator.hpp"

#include "NonlinearShuntCompensatorPoint.hpp"

using namespace CIMPP;

NonlinearShuntCompensator::NonlinearShuntCompensator() {};

NonlinearShuntCompensator::~NonlinearShuntCompensator() {};




bool assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(NonlinearShuntCompensator* element = dynamic_cast<NonlinearShuntCompensator*>(BaseClass_ptr1)) {
		if(dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr2) != nullptr) {
                        element->NonlinearShuntCompensatorPoints.push_back(dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* NonlinearShuntCompensator_factory() {
		return new NonlinearShuntCompensator;
	}
}

void NonlinearShuntCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensator"), &NonlinearShuntCompensator_factory));
}

void NonlinearShuntCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void NonlinearShuntCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensator.NonlinearShuntCompensatorPoints"), &assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints));
}

const char NonlinearShuntCompensator::debugName[] = "NonlinearShuntCompensator";
const char* NonlinearShuntCompensator::debugString()
{
	return NonlinearShuntCompensator::debugName;
}

const BaseClassDefiner NonlinearShuntCompensator::declare()
{
	return BaseClassDefiner(NonlinearShuntCompensator::addConstructToMap, NonlinearShuntCompensator::addPrimitiveAssignFnsToMap, NonlinearShuntCompensator::addClassAssignFnsToMap, NonlinearShuntCompensator::debugName);
}
