#include <sstream>
#include "LoadGroup.hpp"
#include "ConformLoadGroup.hpp"

#include "ConformLoad.hpp"
#include "ConformLoadSchedule.hpp"

using namespace CIMPP;

ConformLoadGroup::ConformLoadGroup() {};

ConformLoadGroup::~ConformLoadGroup() {};


bool assign_ConformLoadGroup_EnergyConsumers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ConformLoadGroup* element = dynamic_cast<ConformLoadGroup*>(BaseClass_ptr1)) {
		if(dynamic_cast<ConformLoad*>(BaseClass_ptr2) != nullptr) {
                        element->EnergyConsumers.push_back(dynamic_cast<ConformLoad*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ConformLoadGroup_ConformLoadSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ConformLoadGroup* element = dynamic_cast<ConformLoadGroup*>(BaseClass_ptr1)) {
		if(dynamic_cast<ConformLoadSchedule*>(BaseClass_ptr2) != nullptr) {
                        element->ConformLoadSchedules.push_back(dynamic_cast<ConformLoadSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}




namespace CIMPP {
	BaseClass* ConformLoadGroup_factory() {
		return new ConformLoadGroup;
	}
}

void ConformLoadGroup::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ConformLoadGroup"), &ConformLoadGroup_factory));
}

void ConformLoadGroup::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void ConformLoadGroup::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ConformLoadGroup.EnergyConsumers"), &assign_ConformLoadGroup_EnergyConsumers));
	assign_map.insert(std::make_pair(std::string("cim:ConformLoadGroup.ConformLoadSchedules"), &assign_ConformLoadGroup_ConformLoadSchedules));
}

const char ConformLoadGroup::debugName[] = "ConformLoadGroup";
const char* ConformLoadGroup::debugString()
{
	return ConformLoadGroup::debugName;
}

const BaseClassDefiner ConformLoadGroup::declare()
{
	return BaseClassDefiner(ConformLoadGroup::addConstructToMap, ConformLoadGroup::addPrimitiveAssignFnsToMap, ConformLoadGroup::addClassAssignFnsToMap, ConformLoadGroup::debugName);
}


