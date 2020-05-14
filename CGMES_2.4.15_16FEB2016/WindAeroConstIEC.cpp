#include <sstream>
#include "IdentifiedObject.hpp"
#include "WindAeroConstIEC.hpp"

#include "WindGenTurbineType1IEC.hpp"

using namespace CIMPP;

WindAeroConstIEC::WindAeroConstIEC() {};

WindAeroConstIEC::~WindAeroConstIEC() {};


bool assign_WindAeroConstIEC_WindGenTurbineType1IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindAeroConstIEC* element = dynamic_cast<WindAeroConstIEC*>(BaseClass_ptr1)) {
                element->WindGenTurbineType1IEC = dynamic_cast<WindGenTurbineType1IEC*>(BaseClass_ptr2);
                if(element->WindGenTurbineType1IEC != nullptr)
                        return true;
        }
        return false;
}



namespace CIMPP {
	BaseClass* WindAeroConstIEC_factory() {
		return new WindAeroConstIEC;
	}
}

void WindAeroConstIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindAeroConstIEC"), &WindAeroConstIEC_factory));
}

void WindAeroConstIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void WindAeroConstIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindAeroConstIEC.WindGenTurbineType1IEC"), &assign_WindAeroConstIEC_WindGenTurbineType1IEC));
}

const char WindAeroConstIEC::debugName[] = "WindAeroConstIEC";
const char* WindAeroConstIEC::debugString()
{
	return WindAeroConstIEC::debugName;
}

const BaseClassDefiner WindAeroConstIEC::declare()
{
	return BaseClassDefiner(WindAeroConstIEC::addConstructToMap, WindAeroConstIEC::addPrimitiveAssignFnsToMap, WindAeroConstIEC::addClassAssignFnsToMap, WindAeroConstIEC::debugName);
}


