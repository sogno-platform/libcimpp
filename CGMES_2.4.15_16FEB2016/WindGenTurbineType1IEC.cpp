#include <sstream>
#include "WindTurbineType1or2IEC.hpp"
#include "WindGenTurbineType1IEC.hpp"

#include "WindAeroConstIEC.hpp"

using namespace CIMPP;

WindGenTurbineType1IEC::WindGenTurbineType1IEC(): WindAeroConstIEC(nullptr) {};

WindGenTurbineType1IEC::~WindGenTurbineType1IEC() {};




bool assign_WindAeroConstIEC_WindGenTurbineType1IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType1IEC_WindAeroConstIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindGenTurbineType1IEC* element = dynamic_cast<WindGenTurbineType1IEC*>(BaseClass_ptr1)) {
                element->WindAeroConstIEC = dynamic_cast<WindAeroConstIEC*>(BaseClass_ptr2);
                if(element->WindAeroConstIEC != nullptr)
                        return assign_WindAeroConstIEC_WindGenTurbineType1IEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* WindGenTurbineType1IEC_factory() {
		return new WindGenTurbineType1IEC;
	}
}

void WindGenTurbineType1IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindGenTurbineType1IEC"), &WindGenTurbineType1IEC_factory));
}

void WindGenTurbineType1IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void WindGenTurbineType1IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType1IEC.WindAeroConstIEC"), &assign_WindGenTurbineType1IEC_WindAeroConstIEC));
}

const char WindGenTurbineType1IEC::debugName[] = "WindGenTurbineType1IEC";
const char* WindGenTurbineType1IEC::debugString()
{
	return WindGenTurbineType1IEC::debugName;
}

const BaseClassDefiner WindGenTurbineType1IEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType1IEC::addConstructToMap, WindGenTurbineType1IEC::addPrimitiveAssignFnsToMap, WindGenTurbineType1IEC::addClassAssignFnsToMap, WindGenTurbineType1IEC::debugName);
}
