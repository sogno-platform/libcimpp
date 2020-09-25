#include <sstream>
#include "WindGenTurbineType3IEC.hpp"
#include "WindGenTurbineType3bIEC.hpp"

#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Boolean.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindGenTurbineType3bIEC::WindGenTurbineType3bIEC() {};

WindGenTurbineType3bIEC::~WindGenTurbineType3bIEC() {};








bool assign_WindGenTurbineType3bIEC_fducw(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1)) {
                buffer >> element->fducw;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindGenTurbineType3bIEC_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1)) {
                buffer >> element->tg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindGenTurbineType3bIEC_two(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1)) {
                buffer >> element->two;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindGenTurbineType3bIEC_mwtcwp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1)) {
                buffer >> element->mwtcwp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindGenTurbineType3bIEC_xs(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1)) {
                buffer >> element->xs;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* WindGenTurbineType3bIEC_factory() {
		return new WindGenTurbineType3bIEC;
	}
}

void WindGenTurbineType3bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3bIEC"), &WindGenTurbineType3bIEC_factory));
}

void WindGenTurbineType3bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3bIEC.fducw"), &assign_WindGenTurbineType3bIEC_fducw));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3bIEC.tg"), &assign_WindGenTurbineType3bIEC_tg));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3bIEC.two"), &assign_WindGenTurbineType3bIEC_two));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3bIEC.mwtcwp"), &assign_WindGenTurbineType3bIEC_mwtcwp));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3bIEC.xs"), &assign_WindGenTurbineType3bIEC_xs));
}

void WindGenTurbineType3bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
					}

const char WindGenTurbineType3bIEC::debugName[] = "WindGenTurbineType3bIEC";
const char* WindGenTurbineType3bIEC::debugString()
{
	return WindGenTurbineType3bIEC::debugName;
}

const BaseClassDefiner WindGenTurbineType3bIEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType3bIEC::addConstructToMap, WindGenTurbineType3bIEC::addPrimitiveAssignFnsToMap, WindGenTurbineType3bIEC::addClassAssignFnsToMap, WindGenTurbineType3bIEC::debugName);
}


