#include <sstream>
#include "IdentifiedObject.hpp"
#include "Season.hpp"

#include "MonthDay.hpp"
#include "MonthDay.hpp"
#include "SeasonDayTypeSchedule.hpp"

using namespace CIMPP;

Season::Season() {};

Season::~Season() {};


bool assign_Season_endDate(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Season* element = dynamic_cast<Season*>(BaseClass_ptr1)) {
                element->endDate = dynamic_cast<MonthDay*>(BaseClass_ptr2);
                if(element->endDate != nullptr)
                        return true;
        }
        return false;
}

bool assign_Season_startDate(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Season* element = dynamic_cast<Season*>(BaseClass_ptr1)) {
                element->startDate = dynamic_cast<MonthDay*>(BaseClass_ptr2);
                if(element->startDate != nullptr)
                        return true;
        }
        return false;
}

bool assign_Season_SeasonDayTypeSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Season* element = dynamic_cast<Season*>(BaseClass_ptr1)) {
		if(dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr2) != nullptr) {
                        element->SeasonDayTypeSchedules.push_back(dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}





namespace CIMPP {
	BaseClass* Season_factory() {
		return new Season;
	}
}

void Season::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Season"), &Season_factory));
}

void Season::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			}

void Season::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Season.endDate"), &assign_Season_endDate));
	assign_map.insert(std::make_pair(std::string("cim:Season.startDate"), &assign_Season_startDate));
	assign_map.insert(std::make_pair(std::string("cim:Season.SeasonDayTypeSchedules"), &assign_Season_SeasonDayTypeSchedules));
}

const char Season::debugName[] = "Season";
const char* Season::debugString()
{
	return Season::debugName;
}

const BaseClassDefiner Season::declare()
{
	return BaseClassDefiner(Season::addConstructToMap, Season::addPrimitiveAssignFnsToMap, Season::addClassAssignFnsToMap, Season::debugName);
}


