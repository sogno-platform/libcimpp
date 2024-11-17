#include <sstream>
#include "ConductingEquipment.hpp"
#include "PowerTransformer.hpp"

#include "PowerTransformerEnd.hpp"
#include "CurrentFlow.hpp"
#include "Voltage.hpp"
#include "AngleDegrees.hpp"
#include "Voltage.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

PowerTransformer::PowerTransformer() {};

PowerTransformer::~PowerTransformer() {};



bool assign_PowerTransformer_beforeShCircuitHighestOperatingCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1)) {
                buffer >> element->beforeShCircuitHighestOperatingCurrent;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformer_beforeShCircuitHighestOperatingVoltage(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1)) {
                buffer >> element->beforeShCircuitHighestOperatingVoltage;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformer_beforeShortCircuitAnglePf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1)) {
                buffer >> element->beforeShortCircuitAnglePf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformer_highSideMinOperatingU(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1)) {
                buffer >> element->highSideMinOperatingU;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformer_isPartOfGeneratorUnit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1)) {
                buffer >> element->isPartOfGeneratorUnit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformer_operationalValuesConsidered(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1)) {
                buffer >> element->operationalValuesConsidered;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_PowerTransformer_PowerTransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1)) {
		if(dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr2) != nullptr) {
                        element->PowerTransformerEnd.push_back(dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}







namespace CIMPP {
	BaseClass* PowerTransformer_factory() {
		return new PowerTransformer;
	}
}

void PowerTransformer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PowerTransformer"), &PowerTransformer_factory));
}

void PowerTransformer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.beforeShCircuitHighestOperatingCurrent"), &assign_PowerTransformer_beforeShCircuitHighestOperatingCurrent));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.beforeShCircuitHighestOperatingVoltage"), &assign_PowerTransformer_beforeShCircuitHighestOperatingVoltage));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.beforeShortCircuitAnglePf"), &assign_PowerTransformer_beforeShortCircuitAnglePf));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.highSideMinOperatingU"), &assign_PowerTransformer_highSideMinOperatingU));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.isPartOfGeneratorUnit"), &assign_PowerTransformer_isPartOfGeneratorUnit));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.operationalValuesConsidered"), &assign_PowerTransformer_operationalValuesConsidered));
}

void PowerTransformer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.PowerTransformerEnd"), &assign_PowerTransformer_PowerTransformerEnd));
						}

const char PowerTransformer::debugName[] = "PowerTransformer";
const char* PowerTransformer::debugString()
{
	return PowerTransformer::debugName;
}

const BaseClassDefiner PowerTransformer::declare()
{
	return BaseClassDefiner(PowerTransformer::addConstructToMap, PowerTransformer::addPrimitiveAssignFnsToMap, PowerTransformer::addClassAssignFnsToMap, PowerTransformer::debugName);
}
