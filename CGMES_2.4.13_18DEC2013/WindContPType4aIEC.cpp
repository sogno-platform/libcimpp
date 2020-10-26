#include <sstream>
#include "IdentifiedObject.hpp"
#include "WindContPType4aIEC.hpp"

#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "WindTurbineType4aIEC.hpp"

using namespace CIMPP;

WindContPType4aIEC::WindContPType4aIEC(): WindTurbineType4aIEC(nullptr) {};

WindContPType4aIEC::~WindContPType4aIEC() {};





bool assign_WindContPType4aIEC_WindTurbineType4aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1)) {
                element->WindTurbineType4aIEC = dynamic_cast<WindTurbineType4aIEC*>(BaseClass_ptr2);
                if(element->WindTurbineType4aIEC != nullptr)
                        return true;
        }
        return false;
}


bool assign_WindContPType4aIEC_dpmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1)) {
                buffer >> element->dpmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType4aIEC_tpord(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1)) {
                buffer >> element->tpord;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType4aIEC_tufilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1)) {
                buffer >> element->tufilt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* WindContPType4aIEC_factory() {
		return new WindContPType4aIEC;
	}
}

void WindContPType4aIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC"), &WindContPType4aIEC_factory));
}

void WindContPType4aIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC.dpmax"), &assign_WindContPType4aIEC_dpmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC.tpord"), &assign_WindContPType4aIEC_tpord));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC.tufilt"), &assign_WindContPType4aIEC_tufilt));
	}

void WindContPType4aIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
				assign_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC.WindTurbineType4aIEC"), &assign_WindContPType4aIEC_WindTurbineType4aIEC));
}

const char WindContPType4aIEC::debugName[] = "WindContPType4aIEC";
const char* WindContPType4aIEC::debugString()
{
	return WindContPType4aIEC::debugName;
}

const BaseClassDefiner WindContPType4aIEC::declare()
{
	return BaseClassDefiner(WindContPType4aIEC::addConstructToMap, WindContPType4aIEC::addPrimitiveAssignFnsToMap, WindContPType4aIEC::addClassAssignFnsToMap, WindContPType4aIEC::debugName);
}


