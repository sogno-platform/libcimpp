#include <sstream>
#include "SeasonDayTypeSchedule.hpp"
#include "ConformLoadSchedule.hpp"

#include "ConformLoadGroup.hpp"

using namespace CIMPP;

ConformLoadSchedule::ConformLoadSchedule(): ConformLoadGroup(nullptr) {};

ConformLoadSchedule::~ConformLoadSchedule() {};




bool assign_ConformLoadGroup_ConformLoadSchedules(BaseClass*, BaseClass*);
bool assign_ConformLoadSchedule_ConformLoadGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ConformLoadSchedule* element = dynamic_cast<ConformLoadSchedule*>(BaseClass_ptr1)) {
                element->ConformLoadGroup = dynamic_cast<ConformLoadGroup*>(BaseClass_ptr2);
                if(element->ConformLoadGroup != nullptr)
                        return assign_ConformLoadGroup_ConformLoadSchedules(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* ConformLoadSchedule_factory() {
		return new ConformLoadSchedule;
	}
}

void ConformLoadSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ConformLoadSchedule"), &ConformLoadSchedule_factory));
}

void ConformLoadSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void ConformLoadSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ConformLoadSchedule.ConformLoadGroup"), &assign_ConformLoadSchedule_ConformLoadGroup));
}

const char ConformLoadSchedule::debugName[] = "ConformLoadSchedule";
const char* ConformLoadSchedule::debugString()
{
	return ConformLoadSchedule::debugName;
}

const BaseClassDefiner ConformLoadSchedule::declare()
{
	return BaseClassDefiner(ConformLoadSchedule::addConstructToMap, ConformLoadSchedule::addPrimitiveAssignFnsToMap, ConformLoadSchedule::addClassAssignFnsToMap, ConformLoadSchedule::debugName);
}
