#include <sstream>
#include "WindPlantDynamics.hpp"
#include "WindPlantIEC.hpp"

#include "WindPlantFreqPcontrolIEC.hpp"
#include "WindPlantReactiveControlIEC.hpp"

using namespace CIMPP;

WindPlantIEC::WindPlantIEC(): WindPlantFreqPcontrolIEC(nullptr), WindPlantReactiveControlIEC(nullptr) {};

WindPlantIEC::~WindPlantIEC() {};





bool assign_WindPlantFreqPcontrolIEC_WindPlantIEC(BaseClass*, BaseClass*);
bool assign_WindPlantIEC_WindPlantFreqPcontrolIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindPlantIEC* element = dynamic_cast<WindPlantIEC*>(BaseClass_ptr1)) {
                element->WindPlantFreqPcontrolIEC = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr2);
                if(element->WindPlantFreqPcontrolIEC != nullptr)
                        return assign_WindPlantFreqPcontrolIEC_WindPlantIEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_WindPlantReactiveControlIEC_WindPlantIEC(BaseClass*, BaseClass*);
bool assign_WindPlantIEC_WindPlantReactiveControlIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindPlantIEC* element = dynamic_cast<WindPlantIEC*>(BaseClass_ptr1)) {
                element->WindPlantReactiveControlIEC = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr2);
                if(element->WindPlantReactiveControlIEC != nullptr)
                        return assign_WindPlantReactiveControlIEC_WindPlantIEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* WindPlantIEC_factory() {
		return new WindPlantIEC;
	}
}

void WindPlantIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindPlantIEC"), &WindPlantIEC_factory));
}

void WindPlantIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void WindPlantIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindPlantIEC.WindPlantFreqPcontrolIEC"), &assign_WindPlantIEC_WindPlantFreqPcontrolIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantIEC.WindPlantReactiveControlIEC"), &assign_WindPlantIEC_WindPlantReactiveControlIEC));
}

const char WindPlantIEC::debugName[] = "WindPlantIEC";
const char* WindPlantIEC::debugString()
{
	return WindPlantIEC::debugName;
}

const BaseClassDefiner WindPlantIEC::declare()
{
	return BaseClassDefiner(WindPlantIEC::addConstructToMap, WindPlantIEC::addPrimitiveAssignFnsToMap, WindPlantIEC::addClassAssignFnsToMap, WindPlantIEC::debugName);
}
