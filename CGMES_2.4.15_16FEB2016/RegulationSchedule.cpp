#include <sstream>
#include "SeasonDayTypeSchedule.hpp"
#include "RegulationSchedule.hpp"

#include "RegulatingControl.hpp"

using namespace CIMPP;

RegulationSchedule::RegulationSchedule(): RegulatingControl(nullptr) {};

RegulationSchedule::~RegulationSchedule() {};




bool assign_RegulatingControl_RegulationSchedule(BaseClass*, BaseClass*);
bool assign_RegulationSchedule_RegulatingControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RegulationSchedule* element = dynamic_cast<RegulationSchedule*>(BaseClass_ptr1)) {
                element->RegulatingControl = dynamic_cast<RegulatingControl*>(BaseClass_ptr2);
                if(element->RegulatingControl != nullptr)
                        return assign_RegulatingControl_RegulationSchedule(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* RegulationSchedule_factory() {
		return new RegulationSchedule;
	}
}

void RegulationSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:RegulationSchedule"), &RegulationSchedule_factory));
}

void RegulationSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void RegulationSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:RegulationSchedule.RegulatingControl"), &assign_RegulationSchedule_RegulatingControl));
}

const char RegulationSchedule::debugName[] = "RegulationSchedule";
const char* RegulationSchedule::debugString()
{
	return RegulationSchedule::debugName;
}

const BaseClassDefiner RegulationSchedule::declare()
{
	return BaseClassDefiner(RegulationSchedule::addConstructToMap, RegulationSchedule::addPrimitiveAssignFnsToMap, RegulationSchedule::addClassAssignFnsToMap, RegulationSchedule::debugName);
}
