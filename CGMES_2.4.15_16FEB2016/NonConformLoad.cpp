#include <sstream>
#include "EnergyConsumer.hpp"
#include "NonConformLoad.hpp"

#include "NonConformLoadGroup.hpp"

using namespace CIMPP;

NonConformLoad::NonConformLoad(): LoadGroup(nullptr) {};

NonConformLoad::~NonConformLoad() {};




bool assign_NonConformLoadGroup_EnergyConsumers(BaseClass*, BaseClass*);
bool assign_NonConformLoad_LoadGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(NonConformLoad* element = dynamic_cast<NonConformLoad*>(BaseClass_ptr1)) {
                element->LoadGroup = dynamic_cast<NonConformLoadGroup*>(BaseClass_ptr2);
                if(element->LoadGroup != nullptr)
                        return assign_NonConformLoadGroup_EnergyConsumers(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* NonConformLoad_factory() {
		return new NonConformLoad;
	}
}

void NonConformLoad::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:NonConformLoad"), &NonConformLoad_factory));
}

void NonConformLoad::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void NonConformLoad::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:NonConformLoad.LoadGroup"), &assign_NonConformLoad_LoadGroup));
}

const char NonConformLoad::debugName[] = "NonConformLoad";
const char* NonConformLoad::debugString()
{
	return NonConformLoad::debugName;
}

const BaseClassDefiner NonConformLoad::declare()
{
	return BaseClassDefiner(NonConformLoad::addConstructToMap, NonConformLoad::addPrimitiveAssignFnsToMap, NonConformLoad::addClassAssignFnsToMap, NonConformLoad::debugName);
}
