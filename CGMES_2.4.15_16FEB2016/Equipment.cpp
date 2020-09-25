#include <sstream>
#include "PowerSystemResource.hpp"
#include "Equipment.hpp"

#include "Boolean.hpp"
#include "EquipmentContainer.hpp"
#include "OperationalLimitSet.hpp"

using namespace CIMPP;

Equipment::Equipment() {};

Equipment::~Equipment() {};



bool assign_EquipmentContainer_Equipments(BaseClass*, BaseClass*);
bool assign_Equipment_EquipmentContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Equipment* element = dynamic_cast<Equipment*>(BaseClass_ptr1)) {
                element->EquipmentContainer = dynamic_cast<EquipmentContainer*>(BaseClass_ptr2);
                if(element->EquipmentContainer != nullptr)
                        return assign_EquipmentContainer_Equipments(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_Equipment_OperationalLimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Equipment* element = dynamic_cast<Equipment*>(BaseClass_ptr1)) {
		if(dynamic_cast<OperationalLimitSet*>(BaseClass_ptr2) != nullptr) {
                        element->OperationalLimitSet.push_back(dynamic_cast<OperationalLimitSet*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_Equipment_aggregate(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Equipment* element = dynamic_cast<Equipment*>(BaseClass_ptr1)) {
                buffer >> element->aggregate;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}



namespace CIMPP {
	BaseClass* Equipment_factory() {
		return new Equipment;
	}
}

void Equipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Equipment"), &Equipment_factory));
}

void Equipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Equipment.aggregate"), &assign_Equipment_aggregate));
		}

void Equipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:Equipment.EquipmentContainer"), &assign_Equipment_EquipmentContainer));
	assign_map.insert(std::make_pair(std::string("cim:Equipment.OperationalLimitSet"), &assign_Equipment_OperationalLimitSet));
}

const char Equipment::debugName[] = "Equipment";
const char* Equipment::debugString()
{
	return Equipment::debugName;
}

const BaseClassDefiner Equipment::declare()
{
	return BaseClassDefiner(Equipment::addConstructToMap, Equipment::addPrimitiveAssignFnsToMap, Equipment::addClassAssignFnsToMap, Equipment::debugName);
}


