#include <sstream>
#include "ConductingEquipment.hpp"
#include "RegulatingCondEq.hpp"

#include "Boolean.hpp"
#include "RegulatingControl.hpp"

using namespace CIMPP;

RegulatingCondEq::RegulatingCondEq() {};

RegulatingCondEq::~RegulatingCondEq() {};



bool assign_RegulatingControl_RegulatingCondEq(BaseClass*, BaseClass*);
bool assign_RegulatingCondEq_RegulatingControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RegulatingCondEq* element = dynamic_cast<RegulatingCondEq*>(BaseClass_ptr1)) {
                element->RegulatingControl = dynamic_cast<RegulatingControl*>(BaseClass_ptr2);
                if(element->RegulatingControl != nullptr)
                        return assign_RegulatingControl_RegulatingCondEq(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}


bool assign_RegulatingCondEq_controlEnabled(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RegulatingCondEq* element = dynamic_cast<RegulatingCondEq*>(BaseClass_ptr1)) {
                buffer >> element->controlEnabled;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* RegulatingCondEq_factory() {
		return new RegulatingCondEq;
	}
}

void RegulatingCondEq::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:RegulatingCondEq"), &RegulatingCondEq_factory));
}

void RegulatingCondEq::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:RegulatingCondEq.controlEnabled"), &assign_RegulatingCondEq_controlEnabled));
	}

void RegulatingCondEq::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:RegulatingCondEq.RegulatingControl"), &assign_RegulatingCondEq_RegulatingControl));
}

const char RegulatingCondEq::debugName[] = "RegulatingCondEq";
const char* RegulatingCondEq::debugString()
{
	return RegulatingCondEq::debugName;
}

const BaseClassDefiner RegulatingCondEq::declare()
{
	return BaseClassDefiner(RegulatingCondEq::addConstructToMap, RegulatingCondEq::addPrimitiveAssignFnsToMap, RegulatingCondEq::addClassAssignFnsToMap, RegulatingCondEq::debugName);
}


