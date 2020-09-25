#include <sstream>
#include "DCEquipmentContainer.hpp"
#include "DCConverterUnit.hpp"

#include "DCConverterOperatingModeKind.hpp"
#include "Substation.hpp"

using namespace CIMPP;

DCConverterUnit::DCConverterUnit() {};

DCConverterUnit::~DCConverterUnit() {};



bool assign_Substation_DCConverterUnit(BaseClass*, BaseClass*);
bool assign_DCConverterUnit_Substation(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCConverterUnit* element = dynamic_cast<DCConverterUnit*>(BaseClass_ptr1)) {
                element->Substation = dynamic_cast<Substation*>(BaseClass_ptr2);
                if(element->Substation != nullptr)
                        return assign_Substation_DCConverterUnit(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}


bool assign_DCConverterUnit_operationMode(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCConverterUnit* element = dynamic_cast<DCConverterUnit*>(BaseClass_ptr1)) {
                buffer >> element->operationMode;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* DCConverterUnit_factory() {
		return new DCConverterUnit;
	}
}

void DCConverterUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCConverterUnit"), &DCConverterUnit_factory));
}

void DCConverterUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCConverterUnit.operationMode"), &assign_DCConverterUnit_operationMode));
	}

void DCConverterUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:DCConverterUnit.Substation"), &assign_DCConverterUnit_Substation));
}

const char DCConverterUnit::debugName[] = "DCConverterUnit";
const char* DCConverterUnit::debugString()
{
	return DCConverterUnit::debugName;
}

const BaseClassDefiner DCConverterUnit::declare()
{
	return BaseClassDefiner(DCConverterUnit::addConstructToMap, DCConverterUnit::addPrimitiveAssignFnsToMap, DCConverterUnit::addClassAssignFnsToMap, DCConverterUnit::debugName);
}


