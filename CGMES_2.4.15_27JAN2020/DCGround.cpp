#include <sstream>
#include "DCConductingEquipment.hpp"
#include "DCGround.hpp"

#include "Inductance.hpp"
#include "Resistance.hpp"

using namespace CIMPP;

DCGround::DCGround() {};

DCGround::~DCGround() {};





bool assign_DCGround_inductance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCGround* element = dynamic_cast<DCGround*>(BaseClass_ptr1)) {
                buffer >> element->inductance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DCGround_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCGround* element = dynamic_cast<DCGround*>(BaseClass_ptr1)) {
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
	BaseClass* DCGround_factory() {
		return new DCGround;
	}
}

void DCGround::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCGround"), &DCGround_factory));
}

void DCGround::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCGround.inductance"), &assign_DCGround_inductance));
	assign_map.insert(std::make_pair(std::string("cim:DCGround.r"), &assign_DCGround_r));
}

void DCGround::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		}

const char DCGround::debugName[] = "DCGround";
const char* DCGround::debugString()
{
	return DCGround::debugName;
}

const BaseClassDefiner DCGround::declare()
{
	return BaseClassDefiner(DCGround::addConstructToMap, DCGround::addPrimitiveAssignFnsToMap, DCGround::addClassAssignFnsToMap, DCGround::debugName);
}


