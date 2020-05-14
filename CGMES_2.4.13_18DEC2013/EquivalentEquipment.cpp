#include <sstream>
#include "ConductingEquipment.hpp"
#include "EquivalentEquipment.hpp"

#include "EquivalentNetwork.hpp"

using namespace CIMPP;

EquivalentEquipment::EquivalentEquipment() {};

EquivalentEquipment::~EquivalentEquipment() {};


bool assign_EquivalentNetwork_EquivalentEquipments(BaseClass*, BaseClass*);
bool assign_EquivalentEquipment_EquivalentNetwork(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(EquivalentEquipment* element = dynamic_cast<EquivalentEquipment*>(BaseClass_ptr1)) {
                element->EquivalentNetwork = dynamic_cast<EquivalentNetwork*>(BaseClass_ptr2);
                if(element->EquivalentNetwork != nullptr)
                        return assign_EquivalentNetwork_EquivalentEquipments(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* EquivalentEquipment_factory() {
		return new EquivalentEquipment;
	}
}

void EquivalentEquipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:EquivalentEquipment"), &EquivalentEquipment_factory));
}

void EquivalentEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void EquivalentEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:EquivalentEquipment.EquivalentNetwork"), &assign_EquivalentEquipment_EquivalentNetwork));
}

const char EquivalentEquipment::debugName[] = "EquivalentEquipment";
const char* EquivalentEquipment::debugString()
{
	return EquivalentEquipment::debugName;
}

const BaseClassDefiner EquivalentEquipment::declare()
{
	return BaseClassDefiner(EquivalentEquipment::addConstructToMap, EquivalentEquipment::addPrimitiveAssignFnsToMap, EquivalentEquipment::addClassAssignFnsToMap, EquivalentEquipment::debugName);
}


