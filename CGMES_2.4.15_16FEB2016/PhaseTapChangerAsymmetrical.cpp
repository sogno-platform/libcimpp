#include <sstream>
#include "PhaseTapChangerNonLinear.hpp"
#include "PhaseTapChangerAsymmetrical.hpp"

#include "AngleDegrees.hpp"

using namespace CIMPP;

PhaseTapChangerAsymmetrical::PhaseTapChangerAsymmetrical() {};

PhaseTapChangerAsymmetrical::~PhaseTapChangerAsymmetrical() {};


bool assign_PhaseTapChangerAsymmetrical_windingConnectionAngle(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PhaseTapChangerAsymmetrical* element = dynamic_cast<PhaseTapChangerAsymmetrical*>(BaseClass_ptr1)) {
                buffer >> element->windingConnectionAngle;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}



namespace CIMPP {
	BaseClass* PhaseTapChangerAsymmetrical_factory() {
		return new PhaseTapChangerAsymmetrical;
	}
}

void PhaseTapChangerAsymmetrical::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChangerAsymmetrical"), &PhaseTapChangerAsymmetrical_factory));
}

void PhaseTapChangerAsymmetrical::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerAsymmetrical.windingConnectionAngle"), &assign_PhaseTapChangerAsymmetrical_windingConnectionAngle));
}

void PhaseTapChangerAsymmetrical::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	}

const char PhaseTapChangerAsymmetrical::debugName[] = "PhaseTapChangerAsymmetrical";
const char* PhaseTapChangerAsymmetrical::debugString()
{
	return PhaseTapChangerAsymmetrical::debugName;
}

const BaseClassDefiner PhaseTapChangerAsymmetrical::declare()
{
	return BaseClassDefiner(PhaseTapChangerAsymmetrical::addConstructToMap, PhaseTapChangerAsymmetrical::addPrimitiveAssignFnsToMap, PhaseTapChangerAsymmetrical::addClassAssignFnsToMap, PhaseTapChangerAsymmetrical::debugName);
}
