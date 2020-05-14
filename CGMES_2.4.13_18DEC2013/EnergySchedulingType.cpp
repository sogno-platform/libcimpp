#include <sstream>
#include "IdentifiedObject.hpp"
#include "EnergySchedulingType.hpp"

#include "EnergySource.hpp"

using namespace CIMPP;

EnergySchedulingType::EnergySchedulingType() {};

EnergySchedulingType::~EnergySchedulingType() {};


bool assign_EnergySchedulingType_EnergySource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(EnergySchedulingType* element = dynamic_cast<EnergySchedulingType*>(BaseClass_ptr1)) {
		if(dynamic_cast<EnergySource*>(BaseClass_ptr2) != nullptr) {
                        element->EnergySource.push_back(dynamic_cast<EnergySource*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}



namespace CIMPP {
	BaseClass* EnergySchedulingType_factory() {
		return new EnergySchedulingType;
	}
}

void EnergySchedulingType::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:EnergySchedulingType"), &EnergySchedulingType_factory));
}

void EnergySchedulingType::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void EnergySchedulingType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:EnergySchedulingType.EnergySource"), &assign_EnergySchedulingType_EnergySource));
}

const char EnergySchedulingType::debugName[] = "EnergySchedulingType";
const char* EnergySchedulingType::debugString()
{
	return EnergySchedulingType::debugName;
}

const BaseClassDefiner EnergySchedulingType::declare()
{
	return BaseClassDefiner(EnergySchedulingType::addConstructToMap, EnergySchedulingType::addPrimitiveAssignFnsToMap, EnergySchedulingType::addClassAssignFnsToMap, EnergySchedulingType::debugName);
}


