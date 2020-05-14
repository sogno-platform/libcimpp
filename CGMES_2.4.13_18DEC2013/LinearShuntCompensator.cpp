#include <sstream>
#include "ShuntCompensator.hpp"
#include "LinearShuntCompensator.hpp"

#include "Susceptance.hpp"
#include "Susceptance.hpp"
#include "Conductance.hpp"
#include "Conductance.hpp"

using namespace CIMPP;

LinearShuntCompensator::LinearShuntCompensator() {};

LinearShuntCompensator::~LinearShuntCompensator() {};







bool assign_LinearShuntCompensator_b0PerSection(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LinearShuntCompensator* element = dynamic_cast<LinearShuntCompensator*>(BaseClass_ptr1)) {
                buffer >> element->b0PerSection;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LinearShuntCompensator_bPerSection(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LinearShuntCompensator* element = dynamic_cast<LinearShuntCompensator*>(BaseClass_ptr1)) {
                buffer >> element->bPerSection;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LinearShuntCompensator_g0PerSection(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LinearShuntCompensator* element = dynamic_cast<LinearShuntCompensator*>(BaseClass_ptr1)) {
                buffer >> element->g0PerSection;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LinearShuntCompensator_gPerSection(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LinearShuntCompensator* element = dynamic_cast<LinearShuntCompensator*>(BaseClass_ptr1)) {
                buffer >> element->gPerSection;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* LinearShuntCompensator_factory() {
		return new LinearShuntCompensator;
	}
}

void LinearShuntCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:LinearShuntCompensator"), &LinearShuntCompensator_factory));
}

void LinearShuntCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:LinearShuntCompensator.b0PerSection"), &assign_LinearShuntCompensator_b0PerSection));
	assign_map.insert(std::make_pair(std::string("cim:LinearShuntCompensator.bPerSection"), &assign_LinearShuntCompensator_bPerSection));
	assign_map.insert(std::make_pair(std::string("cim:LinearShuntCompensator.g0PerSection"), &assign_LinearShuntCompensator_g0PerSection));
	assign_map.insert(std::make_pair(std::string("cim:LinearShuntCompensator.gPerSection"), &assign_LinearShuntCompensator_gPerSection));
}

void LinearShuntCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
				}

const char LinearShuntCompensator::debugName[] = "LinearShuntCompensator";
const char* LinearShuntCompensator::debugString()
{
	return LinearShuntCompensator::debugName;
}

const BaseClassDefiner LinearShuntCompensator::declare()
{
	return BaseClassDefiner(LinearShuntCompensator::addConstructToMap, LinearShuntCompensator::addPrimitiveAssignFnsToMap, LinearShuntCompensator::addClassAssignFnsToMap, LinearShuntCompensator::debugName);
}


