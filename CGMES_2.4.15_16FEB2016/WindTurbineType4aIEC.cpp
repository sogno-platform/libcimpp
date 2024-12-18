#include <sstream>
#include "WindGenType4IEC.hpp"
#include "WindTurbineType4aIEC.hpp"

#include "WindContPType4aIEC.hpp"

using namespace CIMPP;

WindTurbineType4aIEC::WindTurbineType4aIEC(): WindContPType4aIEC(nullptr) {};

WindTurbineType4aIEC::~WindTurbineType4aIEC() {};




bool assign_WindContPType4aIEC_WindTurbineType4aIEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType4aIEC_WindContPType4aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindTurbineType4aIEC* element = dynamic_cast<WindTurbineType4aIEC*>(BaseClass_ptr1)) {
                element->WindContPType4aIEC = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr2);
                if(element->WindContPType4aIEC != nullptr)
                        return assign_WindContPType4aIEC_WindTurbineType4aIEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* WindTurbineType4aIEC_factory() {
		return new WindTurbineType4aIEC;
	}
}

void WindTurbineType4aIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindTurbineType4aIEC"), &WindTurbineType4aIEC_factory));
}

void WindTurbineType4aIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void WindTurbineType4aIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType4aIEC.WindContPType4aIEC"), &assign_WindTurbineType4aIEC_WindContPType4aIEC));
}

const char WindTurbineType4aIEC::debugName[] = "WindTurbineType4aIEC";
const char* WindTurbineType4aIEC::debugString()
{
	return WindTurbineType4aIEC::debugName;
}

const BaseClassDefiner WindTurbineType4aIEC::declare()
{
	return BaseClassDefiner(WindTurbineType4aIEC::addConstructToMap, WindTurbineType4aIEC::addPrimitiveAssignFnsToMap, WindTurbineType4aIEC::addClassAssignFnsToMap, WindTurbineType4aIEC::debugName);
}
