#include <sstream>
#include "RegularIntervalSchedule.hpp"
#include "SeasonDayTypeSchedule.hpp"

#include "DayType.hpp"
#include "Season.hpp"

using namespace CIMPP;

SeasonDayTypeSchedule::SeasonDayTypeSchedule(): DayType(nullptr), Season(nullptr) {};

SeasonDayTypeSchedule::~SeasonDayTypeSchedule() {};


bool assign_DayType_SeasonDayTypeSchedules(BaseClass*, BaseClass*);
bool assign_SeasonDayTypeSchedule_DayType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SeasonDayTypeSchedule* element = dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr1)) {
                element->DayType = dynamic_cast<DayType*>(BaseClass_ptr2);
                if(element->DayType != nullptr)
                        return assign_DayType_SeasonDayTypeSchedules(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_Season_SeasonDayTypeSchedules(BaseClass*, BaseClass*);
bool assign_SeasonDayTypeSchedule_Season(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SeasonDayTypeSchedule* element = dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr1)) {
                element->Season = dynamic_cast<Season*>(BaseClass_ptr2);
                if(element->Season != nullptr)
                        return assign_Season_SeasonDayTypeSchedules(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




namespace CIMPP {
	BaseClass* SeasonDayTypeSchedule_factory() {
		return new SeasonDayTypeSchedule;
	}
}

void SeasonDayTypeSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SeasonDayTypeSchedule"), &SeasonDayTypeSchedule_factory));
}

void SeasonDayTypeSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void SeasonDayTypeSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SeasonDayTypeSchedule.DayType"), &assign_SeasonDayTypeSchedule_DayType));
	assign_map.insert(std::make_pair(std::string("cim:SeasonDayTypeSchedule.Season"), &assign_SeasonDayTypeSchedule_Season));
}

const char SeasonDayTypeSchedule::debugName[] = "SeasonDayTypeSchedule";
const char* SeasonDayTypeSchedule::debugString()
{
	return SeasonDayTypeSchedule::debugName;
}

const BaseClassDefiner SeasonDayTypeSchedule::declare()
{
	return BaseClassDefiner(SeasonDayTypeSchedule::addConstructToMap, SeasonDayTypeSchedule::addPrimitiveAssignFnsToMap, SeasonDayTypeSchedule::addClassAssignFnsToMap, SeasonDayTypeSchedule::debugName);
}


