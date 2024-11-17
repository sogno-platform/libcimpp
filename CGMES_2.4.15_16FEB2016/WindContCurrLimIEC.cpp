#include <sstream>
#include "IdentifiedObject.hpp"
#include "WindContCurrLimIEC.hpp"

#include "WindDynamicsLookupTable.hpp"
#include "WindTurbineType3or4IEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindContCurrLimIEC::WindContCurrLimIEC(): WindTurbineType3or4IEC(nullptr) {};

WindContCurrLimIEC::~WindContCurrLimIEC() {};




bool assign_WindContCurrLimIEC_imax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1)) {
                buffer >> element->imax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContCurrLimIEC_imaxdip(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1)) {
                buffer >> element->imaxdip;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContCurrLimIEC_mdfslim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1)) {
                buffer >> element->mdfslim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContCurrLimIEC_mqpri(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1)) {
                buffer >> element->mqpri;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContCurrLimIEC_tufilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1)) {
                buffer >> element->tufilt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_WindContCurrLimIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1)) {
		if(dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2) != nullptr) {
                        element->WindDynamicsLookupTable.push_back(dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WindContCurrLimIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1)) {
                element->WindTurbineType3or4IEC = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
                if(element->WindTurbineType3or4IEC != nullptr)
                        return true;
        }
        return false;
}






namespace CIMPP {
	BaseClass* WindContCurrLimIEC_factory() {
		return new WindContCurrLimIEC;
	}
}

void WindContCurrLimIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC"), &WindContCurrLimIEC_factory));
}

void WindContCurrLimIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.imax"), &assign_WindContCurrLimIEC_imax));
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.imaxdip"), &assign_WindContCurrLimIEC_imaxdip));
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.mdfslim"), &assign_WindContCurrLimIEC_mdfslim));
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.mqpri"), &assign_WindContCurrLimIEC_mqpri));
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.tufilt"), &assign_WindContCurrLimIEC_tufilt));
}

void WindContCurrLimIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.WindDynamicsLookupTable"), &assign_WindContCurrLimIEC_WindDynamicsLookupTable));
	assign_map.insert(std::make_pair(std::string("cim:WindContCurrLimIEC.WindTurbineType3or4IEC"), &assign_WindContCurrLimIEC_WindTurbineType3or4IEC));
					}

const char WindContCurrLimIEC::debugName[] = "WindContCurrLimIEC";
const char* WindContCurrLimIEC::debugString()
{
	return WindContCurrLimIEC::debugName;
}

const BaseClassDefiner WindContCurrLimIEC::declare()
{
	return BaseClassDefiner(WindContCurrLimIEC::addConstructToMap, WindContCurrLimIEC::addPrimitiveAssignFnsToMap, WindContCurrLimIEC::addClassAssignFnsToMap, WindContCurrLimIEC::debugName);
}
