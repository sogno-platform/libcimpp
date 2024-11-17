#include <sstream>
#include "PowerSystemResource.hpp"
#include "HydroPowerPlant.hpp"

#include "HydroGeneratingUnit.hpp"
#include "HydroPump.hpp"
#include "HydroPlantStorageKind.hpp"

using namespace CIMPP;

HydroPowerPlant::HydroPowerPlant() {};

HydroPowerPlant::~HydroPowerPlant() {};




bool assign_HydroPowerPlant_hydroPlantStorageType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(HydroPowerPlant* element = dynamic_cast<HydroPowerPlant*>(BaseClass_ptr1)) {
                buffer >> element->hydroPlantStorageType;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_HydroPowerPlant_HydroGeneratingUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(HydroPowerPlant* element = dynamic_cast<HydroPowerPlant*>(BaseClass_ptr1)) {
		if(dynamic_cast<HydroGeneratingUnit*>(BaseClass_ptr2) != nullptr) {
                        element->HydroGeneratingUnits.push_back(dynamic_cast<HydroGeneratingUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_HydroPowerPlant_HydroPumps(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(HydroPowerPlant* element = dynamic_cast<HydroPowerPlant*>(BaseClass_ptr1)) {
		if(dynamic_cast<HydroPump*>(BaseClass_ptr2) != nullptr) {
                        element->HydroPumps.push_back(dynamic_cast<HydroPump*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* HydroPowerPlant_factory() {
		return new HydroPowerPlant;
	}
}

void HydroPowerPlant::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:HydroPowerPlant"), &HydroPowerPlant_factory));
}

void HydroPowerPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:HydroPowerPlant.hydroPlantStorageType"), &assign_HydroPowerPlant_hydroPlantStorageType));
}

void HydroPowerPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:HydroPowerPlant.HydroGeneratingUnits"), &assign_HydroPowerPlant_HydroGeneratingUnits));
	assign_map.insert(std::make_pair(std::string("cim:HydroPowerPlant.HydroPumps"), &assign_HydroPowerPlant_HydroPumps));
	}

const char HydroPowerPlant::debugName[] = "HydroPowerPlant";
const char* HydroPowerPlant::debugString()
{
	return HydroPowerPlant::debugName;
}

const BaseClassDefiner HydroPowerPlant::declare()
{
	return BaseClassDefiner(HydroPowerPlant::addConstructToMap, HydroPowerPlant::addPrimitiveAssignFnsToMap, HydroPowerPlant::addClassAssignFnsToMap, HydroPowerPlant::debugName);
}
