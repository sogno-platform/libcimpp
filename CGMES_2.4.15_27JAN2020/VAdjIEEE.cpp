#include <sstream>
#include "VoltageAdjusterDynamics.hpp"
#include "VAdjIEEE.hpp"

#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

VAdjIEEE::VAdjIEEE() {};

VAdjIEEE::~VAdjIEEE() {};


bool assign_VAdjIEEE_adjslew(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1)) {
                buffer >> element->adjslew;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VAdjIEEE_taoff(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1)) {
                buffer >> element->taoff;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VAdjIEEE_taon(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1)) {
                buffer >> element->taon;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VAdjIEEE_vadjf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1)) {
                buffer >> element->vadjf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VAdjIEEE_vadjmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1)) {
                buffer >> element->vadjmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VAdjIEEE_vadjmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1)) {
                buffer >> element->vadjmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}








namespace CIMPP {
	BaseClass* VAdjIEEE_factory() {
		return new VAdjIEEE;
	}
}

void VAdjIEEE::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:VAdjIEEE"), &VAdjIEEE_factory));
}

void VAdjIEEE::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:VAdjIEEE.adjslew"), &assign_VAdjIEEE_adjslew));
	assign_map.insert(std::make_pair(std::string("cim:VAdjIEEE.taoff"), &assign_VAdjIEEE_taoff));
	assign_map.insert(std::make_pair(std::string("cim:VAdjIEEE.taon"), &assign_VAdjIEEE_taon));
	assign_map.insert(std::make_pair(std::string("cim:VAdjIEEE.vadjf"), &assign_VAdjIEEE_vadjf));
	assign_map.insert(std::make_pair(std::string("cim:VAdjIEEE.vadjmax"), &assign_VAdjIEEE_vadjmax));
	assign_map.insert(std::make_pair(std::string("cim:VAdjIEEE.vadjmin"), &assign_VAdjIEEE_vadjmin));
}

void VAdjIEEE::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
						}

const char VAdjIEEE::debugName[] = "VAdjIEEE";
const char* VAdjIEEE::debugString()
{
	return VAdjIEEE::debugName;
}

const BaseClassDefiner VAdjIEEE::declare()
{
	return BaseClassDefiner(VAdjIEEE::addConstructToMap, VAdjIEEE::addPrimitiveAssignFnsToMap, VAdjIEEE::addClassAssignFnsToMap, VAdjIEEE::debugName);
}
