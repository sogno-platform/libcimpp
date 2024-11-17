#include <sstream>
#include "IdentifiedObject.hpp"
#include "WindMechIEC.hpp"

#include "WindGenTurbineType3IEC.hpp"
#include "WindTurbineType1or2IEC.hpp"
#include "WindTurbineType4bIEC.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindMechIEC::WindMechIEC(): WindGenTurbineType3IEC(nullptr), WindTurbineType1or2IEC(nullptr), WindTurbineType4bIEC(nullptr) {};

WindMechIEC::~WindMechIEC() {};





bool assign_WindMechIEC_cdrt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1)) {
                buffer >> element->cdrt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindMechIEC_hgen(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1)) {
                buffer >> element->hgen;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindMechIEC_hwtr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1)) {
                buffer >> element->hwtr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindMechIEC_kdrt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1)) {
                buffer >> element->kdrt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_WindMechIEC_WindGenTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1)) {
                element->WindGenTurbineType3IEC = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr2);
                if(element->WindGenTurbineType3IEC != nullptr)
                        return true;
        }
        return false;
}

bool assign_WindMechIEC_WindTurbineType1or2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1)) {
                element->WindTurbineType1or2IEC = dynamic_cast<WindTurbineType1or2IEC*>(BaseClass_ptr2);
                if(element->WindTurbineType1or2IEC != nullptr)
                        return true;
        }
        return false;
}

bool assign_WindMechIEC_WindTurbineType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1)) {
                element->WindTurbineType4bIEC = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr2);
                if(element->WindTurbineType4bIEC != nullptr)
                        return true;
        }
        return false;
}





namespace CIMPP {
	BaseClass* WindMechIEC_factory() {
		return new WindMechIEC;
	}
}

void WindMechIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindMechIEC"), &WindMechIEC_factory));
}

void WindMechIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
				assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.cdrt"), &assign_WindMechIEC_cdrt));
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.hgen"), &assign_WindMechIEC_hgen));
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.hwtr"), &assign_WindMechIEC_hwtr));
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.kdrt"), &assign_WindMechIEC_kdrt));
}

void WindMechIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.WindGenTurbineType3IEC"), &assign_WindMechIEC_WindGenTurbineType3IEC));
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.WindTurbineType1or2IEC"), &assign_WindMechIEC_WindTurbineType1or2IEC));
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.WindTurbineType4bIEC"), &assign_WindMechIEC_WindTurbineType4bIEC));
				}

const char WindMechIEC::debugName[] = "WindMechIEC";
const char* WindMechIEC::debugString()
{
	return WindMechIEC::debugName;
}

const BaseClassDefiner WindMechIEC::declare()
{
	return BaseClassDefiner(WindMechIEC::addConstructToMap, WindMechIEC::addPrimitiveAssignFnsToMap, WindMechIEC::addClassAssignFnsToMap, WindMechIEC::debugName);
}
