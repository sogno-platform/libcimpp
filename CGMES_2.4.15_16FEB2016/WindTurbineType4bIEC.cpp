#include <sstream>
#include "WindGenType4IEC.hpp"
#include "WindTurbineType4bIEC.hpp"

#include "WindContPType4bIEC.hpp"
#include "WindMechIEC.hpp"

using namespace CIMPP;

WindTurbineType4bIEC::WindTurbineType4bIEC() {};

WindTurbineType4bIEC::~WindTurbineType4bIEC() {};


bool assign_WindContPType4bIEC_WindTurbineType4bIEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType4bIEC_WindContPType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindTurbineType4bIEC* element = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr1)) {
                element->WindContPType4bIEC = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr2);
                if(element->WindContPType4bIEC != nullptr)
                        return assign_WindContPType4bIEC_WindTurbineType4bIEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_WindMechIEC_WindTurbineType4bIEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType4bIEC_WindMechIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindTurbineType4bIEC* element = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr1)) {
                element->WindMechIEC = dynamic_cast<WindMechIEC*>(BaseClass_ptr2);
                if(element->WindMechIEC != nullptr)
                        return assign_WindMechIEC_WindTurbineType4bIEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




namespace CIMPP {
	BaseClass* WindTurbineType4bIEC_factory() {
		return new WindTurbineType4bIEC;
	}
}

void WindTurbineType4bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindTurbineType4bIEC"), &WindTurbineType4bIEC_factory));
}

void WindTurbineType4bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void WindTurbineType4bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType4bIEC.WindContPType4bIEC"), &assign_WindTurbineType4bIEC_WindContPType4bIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType4bIEC.WindMechIEC"), &assign_WindTurbineType4bIEC_WindMechIEC));
}

const char WindTurbineType4bIEC::debugName[] = "WindTurbineType4bIEC";
const char* WindTurbineType4bIEC::debugString()
{
	return WindTurbineType4bIEC::debugName;
}

const BaseClassDefiner WindTurbineType4bIEC::declare()
{
	return BaseClassDefiner(WindTurbineType4bIEC::addConstructToMap, WindTurbineType4bIEC::addPrimitiveAssignFnsToMap, WindTurbineType4bIEC::addClassAssignFnsToMap, WindTurbineType4bIEC::debugName);
}


