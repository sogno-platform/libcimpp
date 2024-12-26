#include <sstream>
#include "LoadGroup.hpp"
#include "NonConformLoadGroup.hpp"

#include "NonConformLoad.hpp"
#include "NonConformLoadSchedule.hpp"

using namespace CIMPP;

NonConformLoadGroup::NonConformLoadGroup() {};

NonConformLoadGroup::~NonConformLoadGroup() {};





bool assign_NonConformLoadGroup_EnergyConsumers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(NonConformLoadGroup* element = dynamic_cast<NonConformLoadGroup*>(BaseClass_ptr1)) {
		if(dynamic_cast<NonConformLoad*>(BaseClass_ptr2) != nullptr) {
                        element->EnergyConsumers.push_back(dynamic_cast<NonConformLoad*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_NonConformLoadGroup_NonConformLoadSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(NonConformLoadGroup* element = dynamic_cast<NonConformLoadGroup*>(BaseClass_ptr1)) {
		if(dynamic_cast<NonConformLoadSchedule*>(BaseClass_ptr2) != nullptr) {
                        element->NonConformLoadSchedules.push_back(dynamic_cast<NonConformLoadSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* NonConformLoadGroup_factory() {
		return new NonConformLoadGroup;
	}
}

void NonConformLoadGroup::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:NonConformLoadGroup"), &NonConformLoadGroup_factory));
}

void NonConformLoadGroup::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void NonConformLoadGroup::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:NonConformLoadGroup.EnergyConsumers"), &assign_NonConformLoadGroup_EnergyConsumers));
	assign_map.insert(std::make_pair(std::string("cim:NonConformLoadGroup.NonConformLoadSchedules"), &assign_NonConformLoadGroup_NonConformLoadSchedules));
}

const char NonConformLoadGroup::debugName[] = "NonConformLoadGroup";
const char* NonConformLoadGroup::debugString()
{
	return NonConformLoadGroup::debugName;
}

const BaseClassDefiner NonConformLoadGroup::declare()
{
	return BaseClassDefiner(NonConformLoadGroup::addConstructToMap, NonConformLoadGroup::addPrimitiveAssignFnsToMap, NonConformLoadGroup::addClassAssignFnsToMap, NonConformLoadGroup::debugName);
}
