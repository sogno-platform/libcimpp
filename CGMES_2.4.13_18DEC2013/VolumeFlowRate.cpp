#include <sstream>
#include "BaseClass.hpp"
#include "VolumeFlowRate.hpp"

#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"
#include "Float.hpp"

using namespace CIMPP;

VolumeFlowRate::VolumeFlowRate(): value(nullptr) {};

VolumeFlowRate::~VolumeFlowRate() {};






bool assign_VolumeFlowRate_value(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VolumeFlowRate* element = dynamic_cast<VolumeFlowRate*>(BaseClass_ptr1)) {
                element->value = dynamic_cast<Float*>(BaseClass_ptr2);
                if(element->value != nullptr)
                        return true;
        }
        return false;
}


bool assign_VolumeFlowRate_denominatorMultiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VolumeFlowRate* element = dynamic_cast<VolumeFlowRate*>(BaseClass_ptr1)) {
                buffer >> element->denominatorMultiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VolumeFlowRate_denominatorUnit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VolumeFlowRate* element = dynamic_cast<VolumeFlowRate*>(BaseClass_ptr1)) {
                buffer >> element->denominatorUnit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VolumeFlowRate_multiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VolumeFlowRate* element = dynamic_cast<VolumeFlowRate*>(BaseClass_ptr1)) {
                buffer >> element->multiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VolumeFlowRate_unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VolumeFlowRate* element = dynamic_cast<VolumeFlowRate*>(BaseClass_ptr1)) {
                buffer >> element->unit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* VolumeFlowRate_factory() {
		return new VolumeFlowRate;
	}
}

void VolumeFlowRate::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:VolumeFlowRate"), &VolumeFlowRate_factory));
}

void VolumeFlowRate::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:VolumeFlowRate.denominatorMultiplier"), &assign_VolumeFlowRate_denominatorMultiplier));
	assign_map.insert(std::make_pair(std::string("cim:VolumeFlowRate.denominatorUnit"), &assign_VolumeFlowRate_denominatorUnit));
	assign_map.insert(std::make_pair(std::string("cim:VolumeFlowRate.multiplier"), &assign_VolumeFlowRate_multiplier));
	assign_map.insert(std::make_pair(std::string("cim:VolumeFlowRate.unit"), &assign_VolumeFlowRate_unit));
	}

void VolumeFlowRate::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
					assign_map.insert(std::make_pair(std::string("cim:VolumeFlowRate.value"), &assign_VolumeFlowRate_value));
}

const char VolumeFlowRate::debugName[] = "VolumeFlowRate";
const char* VolumeFlowRate::debugString()
{
	return VolumeFlowRate::debugName;
}

const BaseClassDefiner VolumeFlowRate::declare()
{
	return BaseClassDefiner(VolumeFlowRate::addConstructToMap, VolumeFlowRate::addPrimitiveAssignFnsToMap, VolumeFlowRate::addClassAssignFnsToMap, VolumeFlowRate::debugName);
}


