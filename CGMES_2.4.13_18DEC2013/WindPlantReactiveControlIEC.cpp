#include <sstream>
#include "IdentifiedObject.hpp"
#include "WindPlantReactiveControlIEC.hpp"

#include "WindPlantIEC.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindPlantReactiveControlIEC::WindPlantReactiveControlIEC(): WindPlantIEC(nullptr) {};

WindPlantReactiveControlIEC::~WindPlantReactiveControlIEC() {};


bool assign_WindPlantReactiveControlIEC_WindPlantIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                element->WindPlantIEC = dynamic_cast<WindPlantIEC*>(BaseClass_ptr2);
                if(element->WindPlantIEC != nullptr)
                        return true;
        }
        return false;
}
















bool assign_WindPlantReactiveControlIEC_kiwpx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->kiwpx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantReactiveControlIEC_kpwpx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->kpwpx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantReactiveControlIEC_kwpqu(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->kwpqu;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantReactiveControlIEC_mwppf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->mwppf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantReactiveControlIEC_mwpu(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->mwpu;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantReactiveControlIEC_twppfilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->twppfilt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantReactiveControlIEC_twpqfilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->twpqfilt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantReactiveControlIEC_twpufilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->twpufilt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantReactiveControlIEC_txft(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->txft;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantReactiveControlIEC_txfv(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->txfv;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantReactiveControlIEC_uwpqdip(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->uwpqdip;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantReactiveControlIEC_xrefmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->xrefmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindPlantReactiveControlIEC_xrefmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1)) {
                buffer >> element->xrefmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* WindPlantReactiveControlIEC_factory() {
		return new WindPlantReactiveControlIEC;
	}
}

void WindPlantReactiveControlIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC"), &WindPlantReactiveControlIEC_factory));
}

void WindPlantReactiveControlIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.kiwpx"), &assign_WindPlantReactiveControlIEC_kiwpx));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.kpwpx"), &assign_WindPlantReactiveControlIEC_kpwpx));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.kwpqu"), &assign_WindPlantReactiveControlIEC_kwpqu));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.mwppf"), &assign_WindPlantReactiveControlIEC_mwppf));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.mwpu"), &assign_WindPlantReactiveControlIEC_mwpu));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.twppfilt"), &assign_WindPlantReactiveControlIEC_twppfilt));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.twpqfilt"), &assign_WindPlantReactiveControlIEC_twpqfilt));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.twpufilt"), &assign_WindPlantReactiveControlIEC_twpufilt));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.txft"), &assign_WindPlantReactiveControlIEC_txft));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.txfv"), &assign_WindPlantReactiveControlIEC_txfv));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.uwpqdip"), &assign_WindPlantReactiveControlIEC_uwpqdip));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.xrefmax"), &assign_WindPlantReactiveControlIEC_xrefmax));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.xrefmin"), &assign_WindPlantReactiveControlIEC_xrefmin));
}

void WindPlantReactiveControlIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.WindPlantIEC"), &assign_WindPlantReactiveControlIEC_WindPlantIEC));
													}

const char WindPlantReactiveControlIEC::debugName[] = "WindPlantReactiveControlIEC";
const char* WindPlantReactiveControlIEC::debugString()
{
	return WindPlantReactiveControlIEC::debugName;
}

const BaseClassDefiner WindPlantReactiveControlIEC::declare()
{
	return BaseClassDefiner(WindPlantReactiveControlIEC::addConstructToMap, WindPlantReactiveControlIEC::addPrimitiveAssignFnsToMap, WindPlantReactiveControlIEC::addClassAssignFnsToMap, WindPlantReactiveControlIEC::debugName);
}


