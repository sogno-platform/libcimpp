#include <sstream>
#include "IdentifiedObject.hpp"
#include "WindContPType3IEC.hpp"

#include "WindDynamicsLookupTable.hpp"
#include "WindGenTurbineType3IEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

WindContPType3IEC::WindContPType3IEC(): WindGenTurbineType3IEC(nullptr) {};

WindContPType3IEC::~WindContPType3IEC() {};




bool assign_WindContPType3IEC_dpmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->dpmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_dtrisemaxlvrt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->dtrisemaxlvrt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_kdtd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->kdtd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_kip(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->kip;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_kpp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->kpp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_mplvrt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->mplvrt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_omegaoffset(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->omegaoffset;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_pdtdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->pdtdmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_rramp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->rramp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_tdvs(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->tdvs;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_temin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->temin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_tomegafilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->tomegafilt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_tpfilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->tpfilt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_tpord(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->tpord;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_tufilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->tufilt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_tuscale(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->tuscale;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_twref(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->twref;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_udvs(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->udvs;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_updip(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->updip;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_wdtd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->wdtd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPType3IEC_zeta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                buffer >> element->zeta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_WindContPType3IEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
		if(dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2) != nullptr) {
                        element->WindDynamicsLookupTable.push_back(dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_WindGenTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1)) {
                element->WindGenTurbineType3IEC = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr2);
                if(element->WindGenTurbineType3IEC != nullptr)
                        return true;
        }
        return false;
}






















namespace CIMPP {
	BaseClass* WindContPType3IEC_factory() {
		return new WindContPType3IEC;
	}
}

void WindContPType3IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindContPType3IEC"), &WindContPType3IEC_factory));
}

void WindContPType3IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.dpmax"), &assign_WindContPType3IEC_dpmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.dtrisemaxlvrt"), &assign_WindContPType3IEC_dtrisemaxlvrt));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.kdtd"), &assign_WindContPType3IEC_kdtd));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.kip"), &assign_WindContPType3IEC_kip));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.kpp"), &assign_WindContPType3IEC_kpp));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.mplvrt"), &assign_WindContPType3IEC_mplvrt));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.omegaoffset"), &assign_WindContPType3IEC_omegaoffset));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.pdtdmax"), &assign_WindContPType3IEC_pdtdmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.rramp"), &assign_WindContPType3IEC_rramp));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tdvs"), &assign_WindContPType3IEC_tdvs));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.temin"), &assign_WindContPType3IEC_temin));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tomegafilt"), &assign_WindContPType3IEC_tomegafilt));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tpfilt"), &assign_WindContPType3IEC_tpfilt));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tpord"), &assign_WindContPType3IEC_tpord));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tufilt"), &assign_WindContPType3IEC_tufilt));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tuscale"), &assign_WindContPType3IEC_tuscale));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.twref"), &assign_WindContPType3IEC_twref));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.udvs"), &assign_WindContPType3IEC_udvs));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.updip"), &assign_WindContPType3IEC_updip));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.wdtd"), &assign_WindContPType3IEC_wdtd));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.zeta"), &assign_WindContPType3IEC_zeta));
}

void WindContPType3IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.WindDynamicsLookupTable"), &assign_WindContPType3IEC_WindDynamicsLookupTable));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.WindGenTurbineType3IEC"), &assign_WindContPType3IEC_WindGenTurbineType3IEC));
																					}

const char WindContPType3IEC::debugName[] = "WindContPType3IEC";
const char* WindContPType3IEC::debugString()
{
	return WindContPType3IEC::debugName;
}

const BaseClassDefiner WindContPType3IEC::declare()
{
	return BaseClassDefiner(WindContPType3IEC::addConstructToMap, WindContPType3IEC::addPrimitiveAssignFnsToMap, WindContPType3IEC::addClassAssignFnsToMap, WindContPType3IEC::debugName);
}
