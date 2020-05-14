#include <sstream>
#include "IdentifiedObject.hpp"
#include "WindPitchContEmulIEC.hpp"

#include "WindGenTurbineType2IEC.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindPitchContEmulIEC::WindPitchContEmulIEC() {};

WindPitchContEmulIEC::~WindPitchContEmulIEC() {};


bool assign_WindPitchContEmulIEC_WindGenTurbineType2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1)) {
                element->WindGenTurbineType2IEC = dynamic_cast<WindGenTurbineType2IEC*>(BaseClass_ptr2);
                if(element->WindGenTurbineType2IEC != nullptr)
                        return true;
        }
        return false;
}













bool assign_WindPitchContEmulIEC_kdroop(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1)) {
                buffer >> element->kdroop;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPitchContEmulIEC_kipce(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1)) {
                buffer >> element->kipce;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPitchContEmulIEC_komegaaero(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1)) {
                buffer >> element->komegaaero;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPitchContEmulIEC_kppce(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1)) {
                buffer >> element->kppce;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPitchContEmulIEC_omegaref(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1)) {
                buffer >> element->omegaref;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPitchContEmulIEC_pimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1)) {
                buffer >> element->pimax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPitchContEmulIEC_pimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1)) {
                buffer >> element->pimin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPitchContEmulIEC_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPitchContEmulIEC_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPitchContEmulIEC_tpe(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1)) {
                buffer >> element->tpe;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* WindPitchContEmulIEC_factory() {
		return new WindPitchContEmulIEC;
	}
}

void WindPitchContEmulIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindPitchContEmulIEC"), &WindPitchContEmulIEC_factory));
}

void WindPitchContEmulIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:WindPitchContEmulIEC.kdroop"), &assign_WindPitchContEmulIEC_kdroop));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContEmulIEC.kipce"), &assign_WindPitchContEmulIEC_kipce));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContEmulIEC.komegaaero"), &assign_WindPitchContEmulIEC_komegaaero));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContEmulIEC.kppce"), &assign_WindPitchContEmulIEC_kppce));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContEmulIEC.omegaref"), &assign_WindPitchContEmulIEC_omegaref));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContEmulIEC.pimax"), &assign_WindPitchContEmulIEC_pimax));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContEmulIEC.pimin"), &assign_WindPitchContEmulIEC_pimin));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContEmulIEC.t1"), &assign_WindPitchContEmulIEC_t1));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContEmulIEC.t2"), &assign_WindPitchContEmulIEC_t2));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContEmulIEC.tpe"), &assign_WindPitchContEmulIEC_tpe));
}

void WindPitchContEmulIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContEmulIEC.WindGenTurbineType2IEC"), &assign_WindPitchContEmulIEC_WindGenTurbineType2IEC));
										}

const char WindPitchContEmulIEC::debugName[] = "WindPitchContEmulIEC";
const char* WindPitchContEmulIEC::debugString()
{
	return WindPitchContEmulIEC::debugName;
}

const BaseClassDefiner WindPitchContEmulIEC::declare()
{
	return BaseClassDefiner(WindPitchContEmulIEC::addConstructToMap, WindPitchContEmulIEC::addPrimitiveAssignFnsToMap, WindPitchContEmulIEC::addClassAssignFnsToMap, WindPitchContEmulIEC::debugName);
}


