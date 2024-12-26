#include <sstream>
#include "IdentifiedObject.hpp"
#include "DayType.hpp"

#include "SeasonDayTypeSchedule.hpp"

using namespace CIMPP;

DayType::DayType() {};

DayType::~DayType() {};




bool assign_DayType_SeasonDayTypeSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DayType* element = dynamic_cast<DayType*>(BaseClass_ptr1)) {
		if(dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr2) != nullptr) {
                        element->SeasonDayTypeSchedules.push_back(dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* DayType_factory() {
		return new DayType;
	}
}

void DayType::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DayType"), &DayType_factory));
}

void DayType::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void DayType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DayType.SeasonDayTypeSchedules"), &assign_DayType_SeasonDayTypeSchedules));
}

const char DayType::debugName[] = "DayType";
const char* DayType::debugString()
{
	return DayType::debugName;
}

const BaseClassDefiner DayType::declare()
{
	return BaseClassDefiner(DayType::addConstructToMap, DayType::addPrimitiveAssignFnsToMap, DayType::addClassAssignFnsToMap, DayType::debugName);
}
