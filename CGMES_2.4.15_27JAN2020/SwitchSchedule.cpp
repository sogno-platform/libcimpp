#include <sstream>
#include "SeasonDayTypeSchedule.hpp"
#include "SwitchSchedule.hpp"

#include "Switch.hpp"

using namespace CIMPP;

SwitchSchedule::SwitchSchedule(): Switch(nullptr) {};

SwitchSchedule::~SwitchSchedule() {};




bool assign_Switch_SwitchSchedules(BaseClass*, BaseClass*);
bool assign_SwitchSchedule_Switch(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SwitchSchedule* element = dynamic_cast<SwitchSchedule*>(BaseClass_ptr1)) {
                element->Switch = dynamic_cast<Switch*>(BaseClass_ptr2);
                if(element->Switch != nullptr)
                        return assign_Switch_SwitchSchedules(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* SwitchSchedule_factory() {
		return new SwitchSchedule;
	}
}

void SwitchSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SwitchSchedule"), &SwitchSchedule_factory));
}

void SwitchSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void SwitchSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SwitchSchedule.Switch"), &assign_SwitchSchedule_Switch));
}

const char SwitchSchedule::debugName[] = "SwitchSchedule";
const char* SwitchSchedule::debugString()
{
	return SwitchSchedule::debugName;
}

const BaseClassDefiner SwitchSchedule::declare()
{
	return BaseClassDefiner(SwitchSchedule::addConstructToMap, SwitchSchedule::addPrimitiveAssignFnsToMap, SwitchSchedule::addClassAssignFnsToMap, SwitchSchedule::debugName);
}
