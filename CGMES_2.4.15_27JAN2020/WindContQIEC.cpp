#include <sstream>
#include "IdentifiedObject.hpp"
#include "WindContQIEC.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "WindLVRTQcontrolModesKind.hpp"
#include "WindQcontrolModesKind.hpp"
#include "PU.hpp"
#include "WindTurbineType3or4IEC.hpp"

using namespace CIMPP;

WindContQIEC::WindContQIEC(): WindTurbineType3or4IEC(nullptr) {};

WindContQIEC::~WindContQIEC() {};




























bool assign_WindContQIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                element->WindTurbineType3or4IEC = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
                if(element->WindTurbineType3or4IEC != nullptr)
                        return true;
        }
        return false;
}


bool assign_WindContQIEC_iqh1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->iqh1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_iqmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->iqmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_iqmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->iqmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_iqpost(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->iqpost;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_kiq(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->kiq;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_kiu(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->kiu;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_kpq(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->kpq;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_kpu(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->kpu;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_kqv(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->kqv;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_qmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->qmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_qmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->qmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_rdroop(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->rdroop;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_tiq(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->tiq;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_tpfilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->tpfilt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_tpost(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->tpost;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_tqord(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->tqord;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_tufilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->tufilt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_udb1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->udb1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_udb2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->udb2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_umax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->umax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_umin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->umin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_uqdip(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->uqdip;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_uref0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->uref0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_windLVRTQcontrolModesType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->windLVRTQcontrolModesType;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_windQcontrolModesType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->windQcontrolModesType;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContQIEC_xdroop(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1)) {
                buffer >> element->xdroop;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* WindContQIEC_factory() {
		return new WindContQIEC;
	}
}

void WindContQIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindContQIEC"), &WindContQIEC_factory));
}

void WindContQIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.iqh1"), &assign_WindContQIEC_iqh1));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.iqmax"), &assign_WindContQIEC_iqmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.iqmin"), &assign_WindContQIEC_iqmin));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.iqpost"), &assign_WindContQIEC_iqpost));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.kiq"), &assign_WindContQIEC_kiq));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.kiu"), &assign_WindContQIEC_kiu));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.kpq"), &assign_WindContQIEC_kpq));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.kpu"), &assign_WindContQIEC_kpu));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.kqv"), &assign_WindContQIEC_kqv));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.qmax"), &assign_WindContQIEC_qmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.qmin"), &assign_WindContQIEC_qmin));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.rdroop"), &assign_WindContQIEC_rdroop));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.tiq"), &assign_WindContQIEC_tiq));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.tpfilt"), &assign_WindContQIEC_tpfilt));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.tpost"), &assign_WindContQIEC_tpost));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.tqord"), &assign_WindContQIEC_tqord));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.tufilt"), &assign_WindContQIEC_tufilt));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.udb1"), &assign_WindContQIEC_udb1));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.udb2"), &assign_WindContQIEC_udb2));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.umax"), &assign_WindContQIEC_umax));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.umin"), &assign_WindContQIEC_umin));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.uqdip"), &assign_WindContQIEC_uqdip));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.uref0"), &assign_WindContQIEC_uref0));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.windLVRTQcontrolModesType"), &assign_WindContQIEC_windLVRTQcontrolModesType));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.windQcontrolModesType"), &assign_WindContQIEC_windQcontrolModesType));
	assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.xdroop"), &assign_WindContQIEC_xdroop));
	}

void WindContQIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																											assign_map.insert(std::make_pair(std::string("cim:WindContQIEC.WindTurbineType3or4IEC"), &assign_WindContQIEC_WindTurbineType3or4IEC));
}

const char WindContQIEC::debugName[] = "WindContQIEC";
const char* WindContQIEC::debugString()
{
	return WindContQIEC::debugName;
}

const BaseClassDefiner WindContQIEC::declare()
{
	return BaseClassDefiner(WindContQIEC::addConstructToMap, WindContQIEC::addPrimitiveAssignFnsToMap, WindContQIEC::addClassAssignFnsToMap, WindContQIEC::debugName);
}


