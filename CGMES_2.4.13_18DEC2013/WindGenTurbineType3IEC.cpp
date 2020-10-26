#include <sstream>
#include "WindTurbineType3or4IEC.hpp"
#include "WindGenTurbineType3IEC.hpp"

#include "WindAeroLinearIEC.hpp"
#include "WindContPitchAngleIEC.hpp"
#include "WindContPType3IEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "WindMechIEC.hpp"

using namespace CIMPP;

WindGenTurbineType3IEC::WindGenTurbineType3IEC(): WindAeroLinearIEC(nullptr), WindContPitchAngleIEC(nullptr), WindContPType3IEC(nullptr), WindMechIEC(nullptr) {};

WindGenTurbineType3IEC::~WindGenTurbineType3IEC() {};


bool assign_WindAeroLinearIEC_WindGenTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType3IEC_WindAeroLinearIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1)) {
                element->WindAeroLinearIEC = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr2);
                if(element->WindAeroLinearIEC != nullptr)
                        return assign_WindAeroLinearIEC_WindGenTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_WindContPitchAngleIEC_WindGenTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType3IEC_WindContPitchAngleIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1)) {
                element->WindContPitchAngleIEC = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr2);
                if(element->WindContPitchAngleIEC != nullptr)
                        return assign_WindContPitchAngleIEC_WindGenTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_WindContPType3IEC_WindGenTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType3IEC_WindContPType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1)) {
                element->WindContPType3IEC = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr2);
                if(element->WindContPType3IEC != nullptr)
                        return assign_WindContPType3IEC_WindGenTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



bool assign_WindMechIEC_WindGenTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType3IEC_WindMechIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1)) {
                element->WindMechIEC = dynamic_cast<WindMechIEC*>(BaseClass_ptr2);
                if(element->WindMechIEC != nullptr)
                        return assign_WindMechIEC_WindGenTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}





bool assign_WindGenTurbineType3IEC_dipmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->dipmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindGenTurbineType3IEC_diqmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->diqmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* WindGenTurbineType3IEC_factory() {
		return new WindGenTurbineType3IEC;
	}
}

void WindGenTurbineType3IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC"), &WindGenTurbineType3IEC_factory));
}

void WindGenTurbineType3IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
				assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC.dipmax"), &assign_WindGenTurbineType3IEC_dipmax));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC.diqmax"), &assign_WindGenTurbineType3IEC_diqmax));
	}

void WindGenTurbineType3IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC.WindAeroLinearIEC"), &assign_WindGenTurbineType3IEC_WindAeroLinearIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC.WindContPitchAngleIEC"), &assign_WindGenTurbineType3IEC_WindContPitchAngleIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC.WindContPType3IEC"), &assign_WindGenTurbineType3IEC_WindContPType3IEC));
			assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC.WindMechIEC"), &assign_WindGenTurbineType3IEC_WindMechIEC));
}

const char WindGenTurbineType3IEC::debugName[] = "WindGenTurbineType3IEC";
const char* WindGenTurbineType3IEC::debugString()
{
	return WindGenTurbineType3IEC::debugName;
}

const BaseClassDefiner WindGenTurbineType3IEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType3IEC::addConstructToMap, WindGenTurbineType3IEC::addPrimitiveAssignFnsToMap, WindGenTurbineType3IEC::addClassAssignFnsToMap, WindGenTurbineType3IEC::debugName);
}


