#include <sstream>
#include "SeasonDayTypeSchedule.hpp"
#include "NonConformLoadSchedule.hpp"

#include "NonConformLoadGroup.hpp"

using namespace CIMPP;

NonConformLoadSchedule::NonConformLoadSchedule(): NonConformLoadGroup(nullptr) {};

NonConformLoadSchedule::~NonConformLoadSchedule() {};


bool assign_NonConformLoadGroup_NonConformLoadSchedules(BaseClass*, BaseClass*);
bool assign_NonConformLoadSchedule_NonConformLoadGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(NonConformLoadSchedule* element = dynamic_cast<NonConformLoadSchedule*>(BaseClass_ptr1)) {
                element->NonConformLoadGroup = dynamic_cast<NonConformLoadGroup*>(BaseClass_ptr2);
                if(element->NonConformLoadGroup != nullptr)
                        return assign_NonConformLoadGroup_NonConformLoadSchedules(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* NonConformLoadSchedule_factory() {
		return new NonConformLoadSchedule;
	}
}

void NonConformLoadSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:NonConformLoadSchedule"), &NonConformLoadSchedule_factory));
}

void NonConformLoadSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void NonConformLoadSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:NonConformLoadSchedule.NonConformLoadGroup"), &assign_NonConformLoadSchedule_NonConformLoadGroup));
}

const char NonConformLoadSchedule::debugName[] = "NonConformLoadSchedule";
const char* NonConformLoadSchedule::debugString()
{
	return NonConformLoadSchedule::debugName;
}

const BaseClassDefiner NonConformLoadSchedule::declare()
{
	return BaseClassDefiner(NonConformLoadSchedule::addConstructToMap, NonConformLoadSchedule::addPrimitiveAssignFnsToMap, NonConformLoadSchedule::addClassAssignFnsToMap, NonConformLoadSchedule::debugName);
}


