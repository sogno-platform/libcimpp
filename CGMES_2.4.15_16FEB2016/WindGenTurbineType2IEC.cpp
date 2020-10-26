#include <sstream>
#include "WindTurbineType1or2IEC.hpp"
#include "WindGenTurbineType2IEC.hpp"

#include "WindContRotorRIEC.hpp"
#include "WindPitchContEmulIEC.hpp"

using namespace CIMPP;

WindGenTurbineType2IEC::WindGenTurbineType2IEC(): WindContRotorRIEC(nullptr), WindPitchContEmulIEC(nullptr) {};

WindGenTurbineType2IEC::~WindGenTurbineType2IEC() {};


bool assign_WindContRotorRIEC_WindGenTurbineType2IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType2IEC_WindContRotorRIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindGenTurbineType2IEC* element = dynamic_cast<WindGenTurbineType2IEC*>(BaseClass_ptr1)) {
                element->WindContRotorRIEC = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr2);
                if(element->WindContRotorRIEC != nullptr)
                        return assign_WindContRotorRIEC_WindGenTurbineType2IEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_WindPitchContEmulIEC_WindGenTurbineType2IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType2IEC_WindPitchContEmulIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindGenTurbineType2IEC* element = dynamic_cast<WindGenTurbineType2IEC*>(BaseClass_ptr1)) {
                element->WindPitchContEmulIEC = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr2);
                if(element->WindPitchContEmulIEC != nullptr)
                        return assign_WindPitchContEmulIEC_WindGenTurbineType2IEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




namespace CIMPP {
	BaseClass* WindGenTurbineType2IEC_factory() {
		return new WindGenTurbineType2IEC;
	}
}

void WindGenTurbineType2IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindGenTurbineType2IEC"), &WindGenTurbineType2IEC_factory));
}

void WindGenTurbineType2IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void WindGenTurbineType2IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType2IEC.WindContRotorRIEC"), &assign_WindGenTurbineType2IEC_WindContRotorRIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType2IEC.WindPitchContEmulIEC"), &assign_WindGenTurbineType2IEC_WindPitchContEmulIEC));
}

const char WindGenTurbineType2IEC::debugName[] = "WindGenTurbineType2IEC";
const char* WindGenTurbineType2IEC::debugString()
{
	return WindGenTurbineType2IEC::debugName;
}

const BaseClassDefiner WindGenTurbineType2IEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType2IEC::addConstructToMap, WindGenTurbineType2IEC::addPrimitiveAssignFnsToMap, WindGenTurbineType2IEC::addClassAssignFnsToMap, WindGenTurbineType2IEC::debugName);
}


