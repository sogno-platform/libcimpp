#include <sstream>
#include "IdentifiedObject.hpp"
#include "BasicIntervalSchedule.hpp"

#include "DateTime.hpp"
#include "UnitSymbol.hpp"
#include "UnitSymbol.hpp"

using namespace CIMPP;

BasicIntervalSchedule::BasicIntervalSchedule(): startTime(nullptr) {};

BasicIntervalSchedule::~BasicIntervalSchedule() {};


bool assign_BasicIntervalSchedule_startTime(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(BasicIntervalSchedule* element = dynamic_cast<BasicIntervalSchedule*>(BaseClass_ptr1)) {
                element->startTime = dynamic_cast<DateTime*>(BaseClass_ptr2);
                if(element->startTime != nullptr)
                        return true;
        }
        return false;
}





bool assign_BasicIntervalSchedule_value1Unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(BasicIntervalSchedule* element = dynamic_cast<BasicIntervalSchedule*>(BaseClass_ptr1)) {
                buffer >> element->value1Unit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_BasicIntervalSchedule_value2Unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(BasicIntervalSchedule* element = dynamic_cast<BasicIntervalSchedule*>(BaseClass_ptr1)) {
                buffer >> element->value2Unit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* BasicIntervalSchedule_factory() {
		return new BasicIntervalSchedule;
	}
}

void BasicIntervalSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:BasicIntervalSchedule"), &BasicIntervalSchedule_factory));
}

void BasicIntervalSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:BasicIntervalSchedule.value1Unit"), &assign_BasicIntervalSchedule_value1Unit));
	assign_map.insert(std::make_pair(std::string("cim:BasicIntervalSchedule.value2Unit"), &assign_BasicIntervalSchedule_value2Unit));
}

void BasicIntervalSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:BasicIntervalSchedule.startTime"), &assign_BasicIntervalSchedule_startTime));
		}

const char BasicIntervalSchedule::debugName[] = "BasicIntervalSchedule";
const char* BasicIntervalSchedule::debugString()
{
	return BasicIntervalSchedule::debugName;
}

const BaseClassDefiner BasicIntervalSchedule::declare()
{
	return BaseClassDefiner(BasicIntervalSchedule::addConstructToMap, BasicIntervalSchedule::addPrimitiveAssignFnsToMap, BasicIntervalSchedule::addClassAssignFnsToMap, BasicIntervalSchedule::debugName);
}


