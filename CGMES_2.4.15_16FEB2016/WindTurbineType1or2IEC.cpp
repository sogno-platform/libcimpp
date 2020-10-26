#include <sstream>
#include "WindTurbineType1or2Dynamics.hpp"
#include "WindTurbineType1or2IEC.hpp"

#include "WindMechIEC.hpp"
#include "WindProtectionIEC.hpp"

using namespace CIMPP;

WindTurbineType1or2IEC::WindTurbineType1or2IEC(): WindMechIEC(nullptr), WindProtectionIEC(nullptr) {};

WindTurbineType1or2IEC::~WindTurbineType1or2IEC() {};


bool assign_WindMechIEC_WindTurbineType1or2IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType1or2IEC_WindMechIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindTurbineType1or2IEC* element = dynamic_cast<WindTurbineType1or2IEC*>(BaseClass_ptr1)) {
                element->WindMechIEC = dynamic_cast<WindMechIEC*>(BaseClass_ptr2);
                if(element->WindMechIEC != nullptr)
                        return assign_WindMechIEC_WindTurbineType1or2IEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_WindProtectionIEC_WindTurbineType1or2IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType1or2IEC_WindProtectionIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindTurbineType1or2IEC* element = dynamic_cast<WindTurbineType1or2IEC*>(BaseClass_ptr1)) {
                element->WindProtectionIEC = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr2);
                if(element->WindProtectionIEC != nullptr)
                        return assign_WindProtectionIEC_WindTurbineType1or2IEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




namespace CIMPP {
	BaseClass* WindTurbineType1or2IEC_factory() {
		return new WindTurbineType1or2IEC;
	}
}

void WindTurbineType1or2IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindTurbineType1or2IEC"), &WindTurbineType1or2IEC_factory));
}

void WindTurbineType1or2IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void WindTurbineType1or2IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType1or2IEC.WindMechIEC"), &assign_WindTurbineType1or2IEC_WindMechIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType1or2IEC.WindProtectionIEC"), &assign_WindTurbineType1or2IEC_WindProtectionIEC));
}

const char WindTurbineType1or2IEC::debugName[] = "WindTurbineType1or2IEC";
const char* WindTurbineType1or2IEC::debugString()
{
	return WindTurbineType1or2IEC::debugName;
}

const BaseClassDefiner WindTurbineType1or2IEC::declare()
{
	return BaseClassDefiner(WindTurbineType1or2IEC::addConstructToMap, WindTurbineType1or2IEC::addPrimitiveAssignFnsToMap, WindTurbineType1or2IEC::addClassAssignFnsToMap, WindTurbineType1or2IEC::debugName);
}


