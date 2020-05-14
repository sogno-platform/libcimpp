#include <sstream>
#include "WindTurbineType3or4IEC.hpp"
#include "WindGenType4IEC.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindGenType4IEC::WindGenType4IEC() {};

WindGenType4IEC::~WindGenType4IEC() {};







bool assign_WindGenType4IEC_dipmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1)) {
                buffer >> element->dipmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindGenType4IEC_diqmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1)) {
                buffer >> element->diqmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindGenType4IEC_diqmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1)) {
                buffer >> element->diqmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindGenType4IEC_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1)) {
                buffer >> element->tg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* WindGenType4IEC_factory() {
		return new WindGenType4IEC;
	}
}

void WindGenType4IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindGenType4IEC"), &WindGenType4IEC_factory));
}

void WindGenType4IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.dipmax"), &assign_WindGenType4IEC_dipmax));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.diqmin"), &assign_WindGenType4IEC_diqmin));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.diqmax"), &assign_WindGenType4IEC_diqmax));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.tg"), &assign_WindGenType4IEC_tg));
}

void WindGenType4IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
				}

const char WindGenType4IEC::debugName[] = "WindGenType4IEC";
const char* WindGenType4IEC::debugString()
{
	return WindGenType4IEC::debugName;
}

const BaseClassDefiner WindGenType4IEC::declare()
{
	return BaseClassDefiner(WindGenType4IEC::addConstructToMap, WindGenType4IEC::addPrimitiveAssignFnsToMap, WindGenType4IEC::addClassAssignFnsToMap, WindGenType4IEC::debugName);
}


