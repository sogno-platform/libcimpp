#include <sstream>
#include "IdentifiedObject.hpp"
#include "WindPlantFreqPcontrolIEC.hpp"

#include "WindDynamicsLookupTable.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "WindPlantIEC.hpp"

using namespace CIMPP;

WindPlantFreqPcontrolIEC::WindPlantFreqPcontrolIEC() {};

WindPlantFreqPcontrolIEC::~WindPlantFreqPcontrolIEC() {};


bool assign_WindPlantFreqPcontrolIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1)) {
		if(dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2) != nullptr) {
                        element->WindDynamicsLookupTable.push_back(dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}











bool assign_WindPlantFreqPcontrolIEC_WindPlantIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1)) {
                element->WindPlantIEC = dynamic_cast<WindPlantIEC*>(BaseClass_ptr2);
                if(element->WindPlantIEC != nullptr)
                        return true;
        }
        return false;
}



bool assign_WindPlantFreqPcontrolIEC_dprefmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1)) {
                buffer >> element->dprefmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantFreqPcontrolIEC_dprefmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1)) {
                buffer >> element->dprefmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantFreqPcontrolIEC_kiwpp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1)) {
                buffer >> element->kiwpp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantFreqPcontrolIEC_kpwpp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1)) {
                buffer >> element->kpwpp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantFreqPcontrolIEC_prefmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1)) {
                buffer >> element->prefmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantFreqPcontrolIEC_prefmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1)) {
                buffer >> element->prefmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantFreqPcontrolIEC_tpft(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1)) {
                buffer >> element->tpft;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantFreqPcontrolIEC_tpfv(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1)) {
                buffer >> element->tpfv;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantFreqPcontrolIEC_twpffilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1)) {
                buffer >> element->twpffilt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantFreqPcontrolIEC_twppfilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1)) {
                buffer >> element->twppfilt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* WindPlantFreqPcontrolIEC_factory() {
		return new WindPlantFreqPcontrolIEC;
	}
}

void WindPlantFreqPcontrolIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC"), &WindPlantFreqPcontrolIEC_factory));
}

void WindPlantFreqPcontrolIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.dprefmax"), &assign_WindPlantFreqPcontrolIEC_dprefmax));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.dprefmin"), &assign_WindPlantFreqPcontrolIEC_dprefmin));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.kiwpp"), &assign_WindPlantFreqPcontrolIEC_kiwpp));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.kpwpp"), &assign_WindPlantFreqPcontrolIEC_kpwpp));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.prefmax"), &assign_WindPlantFreqPcontrolIEC_prefmax));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.prefmin"), &assign_WindPlantFreqPcontrolIEC_prefmin));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.tpft"), &assign_WindPlantFreqPcontrolIEC_tpft));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.tpfv"), &assign_WindPlantFreqPcontrolIEC_tpfv));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.twpffilt"), &assign_WindPlantFreqPcontrolIEC_twpffilt));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.twppfilt"), &assign_WindPlantFreqPcontrolIEC_twppfilt));
	}

void WindPlantFreqPcontrolIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.WindDynamicsLookupTable"), &assign_WindPlantFreqPcontrolIEC_WindDynamicsLookupTable));
											assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.WindPlantIEC"), &assign_WindPlantFreqPcontrolIEC_WindPlantIEC));
}

const char WindPlantFreqPcontrolIEC::debugName[] = "WindPlantFreqPcontrolIEC";
const char* WindPlantFreqPcontrolIEC::debugString()
{
	return WindPlantFreqPcontrolIEC::debugName;
}

const BaseClassDefiner WindPlantFreqPcontrolIEC::declare()
{
	return BaseClassDefiner(WindPlantFreqPcontrolIEC::addConstructToMap, WindPlantFreqPcontrolIEC::addPrimitiveAssignFnsToMap, WindPlantFreqPcontrolIEC::addClassAssignFnsToMap, WindPlantFreqPcontrolIEC::debugName);
}


