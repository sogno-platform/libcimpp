#include <sstream>
#include "PhaseTapChanger.hpp"
#include "PhaseTapChangerNonLinear.hpp"

#include "PerCent.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

PhaseTapChangerNonLinear::PhaseTapChangerNonLinear() {};

PhaseTapChangerNonLinear::~PhaseTapChangerNonLinear() {};


bool assign_PhaseTapChangerNonLinear_voltageStepIncrement(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PhaseTapChangerNonLinear* element = dynamic_cast<PhaseTapChangerNonLinear*>(BaseClass_ptr1)) {
                buffer >> element->voltageStepIncrement;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PhaseTapChangerNonLinear_xMax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PhaseTapChangerNonLinear* element = dynamic_cast<PhaseTapChangerNonLinear*>(BaseClass_ptr1)) {
                buffer >> element->xMax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PhaseTapChangerNonLinear_xMin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PhaseTapChangerNonLinear* element = dynamic_cast<PhaseTapChangerNonLinear*>(BaseClass_ptr1)) {
                buffer >> element->xMin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}





namespace CIMPP {
	BaseClass* PhaseTapChangerNonLinear_factory() {
		return new PhaseTapChangerNonLinear;
	}
}

void PhaseTapChangerNonLinear::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChangerNonLinear"), &PhaseTapChangerNonLinear_factory));
}

void PhaseTapChangerNonLinear::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerNonLinear.voltageStepIncrement"), &assign_PhaseTapChangerNonLinear_voltageStepIncrement));
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerNonLinear.xMax"), &assign_PhaseTapChangerNonLinear_xMax));
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerNonLinear.xMin"), &assign_PhaseTapChangerNonLinear_xMin));
}

void PhaseTapChangerNonLinear::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			}

const char PhaseTapChangerNonLinear::debugName[] = "PhaseTapChangerNonLinear";
const char* PhaseTapChangerNonLinear::debugString()
{
	return PhaseTapChangerNonLinear::debugName;
}

const BaseClassDefiner PhaseTapChangerNonLinear::declare()
{
	return BaseClassDefiner(PhaseTapChangerNonLinear::addConstructToMap, PhaseTapChangerNonLinear::addPrimitiveAssignFnsToMap, PhaseTapChangerNonLinear::addClassAssignFnsToMap, PhaseTapChangerNonLinear::debugName);
}
