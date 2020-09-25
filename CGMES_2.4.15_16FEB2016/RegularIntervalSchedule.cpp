#include <sstream>
#include "BasicIntervalSchedule.hpp"
#include "RegularIntervalSchedule.hpp"

#include "Seconds.hpp"
#include "DateTime.hpp"
#include "RegularTimePoint.hpp"

using namespace CIMPP;

RegularIntervalSchedule::RegularIntervalSchedule() {};

RegularIntervalSchedule::~RegularIntervalSchedule() {};



bool assign_RegularIntervalSchedule_endTime(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RegularIntervalSchedule* element = dynamic_cast<RegularIntervalSchedule*>(BaseClass_ptr1)) {
                element->endTime = dynamic_cast<DateTime*>(BaseClass_ptr2);
                if(element->endTime != nullptr)
                        return true;
        }
        return false;
}

bool assign_RegularIntervalSchedule_TimePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RegularIntervalSchedule* element = dynamic_cast<RegularIntervalSchedule*>(BaseClass_ptr1)) {
		if(dynamic_cast<RegularTimePoint*>(BaseClass_ptr2) != nullptr) {
                        element->TimePoints.push_back(dynamic_cast<RegularTimePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_RegularIntervalSchedule_timeStep(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RegularIntervalSchedule* element = dynamic_cast<RegularIntervalSchedule*>(BaseClass_ptr1)) {
                buffer >> element->timeStep;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}



namespace CIMPP {
	BaseClass* RegularIntervalSchedule_factory() {
		return new RegularIntervalSchedule;
	}
}

void RegularIntervalSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:RegularIntervalSchedule"), &RegularIntervalSchedule_factory));
}

void RegularIntervalSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:RegularIntervalSchedule.timeStep"), &assign_RegularIntervalSchedule_timeStep));
		}

void RegularIntervalSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:RegularIntervalSchedule.endTime"), &assign_RegularIntervalSchedule_endTime));
	assign_map.insert(std::make_pair(std::string("cim:RegularIntervalSchedule.TimePoints"), &assign_RegularIntervalSchedule_TimePoints));
}

const char RegularIntervalSchedule::debugName[] = "RegularIntervalSchedule";
const char* RegularIntervalSchedule::debugString()
{
	return RegularIntervalSchedule::debugName;
}

const BaseClassDefiner RegularIntervalSchedule::declare()
{
	return BaseClassDefiner(RegularIntervalSchedule::addConstructToMap, RegularIntervalSchedule::addPrimitiveAssignFnsToMap, RegularIntervalSchedule::addClassAssignFnsToMap, RegularIntervalSchedule::debugName);
}


