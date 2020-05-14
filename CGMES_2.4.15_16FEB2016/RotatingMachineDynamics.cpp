#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "RotatingMachineDynamics.hpp"

#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

RotatingMachineDynamics::RotatingMachineDynamics() {};

RotatingMachineDynamics::~RotatingMachineDynamics() {};









bool assign_RotatingMachineDynamics_damping(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1)) {
                buffer >> element->damping;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RotatingMachineDynamics_inertia(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1)) {
                buffer >> element->inertia;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RotatingMachineDynamics_saturationFactor(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1)) {
                buffer >> element->saturationFactor;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RotatingMachineDynamics_saturationFactor120(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1)) {
                buffer >> element->saturationFactor120;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RotatingMachineDynamics_statorLeakageReactance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1)) {
                buffer >> element->statorLeakageReactance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RotatingMachineDynamics_statorResistance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1)) {
                buffer >> element->statorResistance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* RotatingMachineDynamics_factory() {
		return new RotatingMachineDynamics;
	}
}

void RotatingMachineDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics"), &RotatingMachineDynamics_factory));
}

void RotatingMachineDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics.damping"), &assign_RotatingMachineDynamics_damping));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics.inertia"), &assign_RotatingMachineDynamics_inertia));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics.saturationFactor"), &assign_RotatingMachineDynamics_saturationFactor));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics.saturationFactor120"), &assign_RotatingMachineDynamics_saturationFactor120));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics.statorLeakageReactance"), &assign_RotatingMachineDynamics_statorLeakageReactance));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics.statorResistance"), &assign_RotatingMachineDynamics_statorResistance));
}

void RotatingMachineDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
						}

const char RotatingMachineDynamics::debugName[] = "RotatingMachineDynamics";
const char* RotatingMachineDynamics::debugString()
{
	return RotatingMachineDynamics::debugName;
}

const BaseClassDefiner RotatingMachineDynamics::declare()
{
	return BaseClassDefiner(RotatingMachineDynamics::addConstructToMap, RotatingMachineDynamics::addPrimitiveAssignFnsToMap, RotatingMachineDynamics::addClassAssignFnsToMap, RotatingMachineDynamics::debugName);
}


