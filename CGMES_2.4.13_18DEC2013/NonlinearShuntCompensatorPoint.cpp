#include <sstream>
#include "BaseClass.hpp"
#include "NonlinearShuntCompensatorPoint.hpp"

#include "NonlinearShuntCompensator.hpp"
#include "Susceptance.hpp"
#include "Susceptance.hpp"
#include "Conductance.hpp"
#include "Conductance.hpp"
#include "Integer.hpp"

using namespace CIMPP;

NonlinearShuntCompensatorPoint::NonlinearShuntCompensatorPoint() {};

NonlinearShuntCompensatorPoint::~NonlinearShuntCompensatorPoint() {};


bool assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints(BaseClass*, BaseClass*);
bool assign_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1)) {
                element->NonlinearShuntCompensator = dynamic_cast<NonlinearShuntCompensator*>(BaseClass_ptr2);
                if(element->NonlinearShuntCompensator != nullptr)
                        return assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}








bool assign_NonlinearShuntCompensatorPoint_b(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1)) {
                buffer >> element->b;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_NonlinearShuntCompensatorPoint_b0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1)) {
                buffer >> element->b0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_NonlinearShuntCompensatorPoint_g(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1)) {
                buffer >> element->g;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_NonlinearShuntCompensatorPoint_g0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1)) {
                buffer >> element->g0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_NonlinearShuntCompensatorPoint_sectionNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1)) {
                buffer >> element->sectionNumber;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* NonlinearShuntCompensatorPoint_factory() {
		return new NonlinearShuntCompensatorPoint;
	}
}

void NonlinearShuntCompensatorPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint"), &NonlinearShuntCompensatorPoint_factory));
}

void NonlinearShuntCompensatorPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint.b"), &assign_NonlinearShuntCompensatorPoint_b));
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint.b0"), &assign_NonlinearShuntCompensatorPoint_b0));
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint.g"), &assign_NonlinearShuntCompensatorPoint_g));
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint.g0"), &assign_NonlinearShuntCompensatorPoint_g0));
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint.sectionNumber"), &assign_NonlinearShuntCompensatorPoint_sectionNumber));
}

void NonlinearShuntCompensatorPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensatorPoint.NonlinearShuntCompensator"), &assign_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator));
					}

const char NonlinearShuntCompensatorPoint::debugName[] = "NonlinearShuntCompensatorPoint";
const char* NonlinearShuntCompensatorPoint::debugString()
{
	return NonlinearShuntCompensatorPoint::debugName;
}

const BaseClassDefiner NonlinearShuntCompensatorPoint::declare()
{
	return BaseClassDefiner(NonlinearShuntCompensatorPoint::addConstructToMap, NonlinearShuntCompensatorPoint::addPrimitiveAssignFnsToMap, NonlinearShuntCompensatorPoint::addClassAssignFnsToMap, NonlinearShuntCompensatorPoint::debugName);
}


