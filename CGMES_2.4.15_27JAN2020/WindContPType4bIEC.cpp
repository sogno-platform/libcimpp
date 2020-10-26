#include <sstream>
#include "IdentifiedObject.hpp"
#include "WindContPType4bIEC.hpp"

#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "WindTurbineType4bIEC.hpp"

using namespace CIMPP;

WindContPType4bIEC::WindContPType4bIEC(): WindTurbineType4bIEC(nullptr) {};

WindContPType4bIEC::~WindContPType4bIEC() {};






bool assign_WindContPType4bIEC_WindTurbineType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1)) {
                element->WindTurbineType4bIEC = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr2);
                if(element->WindTurbineType4bIEC != nullptr)
                        return true;
        }
        return false;
}


bool assign_WindContPType4bIEC_dpmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1)) {
                buffer >> element->dpmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType4bIEC_tpaero(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1)) {
                buffer >> element->tpaero;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType4bIEC_tpord(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1)) {
                buffer >> element->tpord;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType4bIEC_tufilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1)) {
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
	BaseClass* WindContPType4bIEC_factory() {
		return new WindContPType4bIEC;
	}
}

void WindContPType4bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindContPType4bIEC"), &WindContPType4bIEC_factory));
}

void WindContPType4bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4bIEC.dpmax"), &assign_WindContPType4bIEC_dpmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4bIEC.tpaero"), &assign_WindContPType4bIEC_tpaero));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4bIEC.tpord"), &assign_WindContPType4bIEC_tpord));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4bIEC.tufilt"), &assign_WindContPType4bIEC_tufilt));
	}

void WindContPType4bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
					assign_map.insert(std::make_pair(std::string("cim:WindContPType4bIEC.WindTurbineType4bIEC"), &assign_WindContPType4bIEC_WindTurbineType4bIEC));
}

const char WindContPType4bIEC::debugName[] = "WindContPType4bIEC";
const char* WindContPType4bIEC::debugString()
{
	return WindContPType4bIEC::debugName;
}

const BaseClassDefiner WindContPType4bIEC::declare()
{
	return BaseClassDefiner(WindContPType4bIEC::addConstructToMap, WindContPType4bIEC::addPrimitiveAssignFnsToMap, WindContPType4bIEC::addClassAssignFnsToMap, WindContPType4bIEC::debugName);
}


