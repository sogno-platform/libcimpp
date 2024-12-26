#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcAVR5.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

ExcAVR5::ExcAVR5() {};

ExcAVR5::~ExcAVR5() {};


bool assign_ExcAVR5_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR5* element = dynamic_cast<ExcAVR5*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR5_rex(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR5* element = dynamic_cast<ExcAVR5*>(BaseClass_ptr1)) {
                buffer >> element->rex;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR5_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR5* element = dynamic_cast<ExcAVR5*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}





namespace CIMPP {
	BaseClass* ExcAVR5_factory() {
		return new ExcAVR5;
	}
}

void ExcAVR5::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcAVR5"), &ExcAVR5_factory));
}

void ExcAVR5::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR5.ka"), &assign_ExcAVR5_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR5.rex"), &assign_ExcAVR5_rex));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR5.ta"), &assign_ExcAVR5_ta));
}

void ExcAVR5::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			}

const char ExcAVR5::debugName[] = "ExcAVR5";
const char* ExcAVR5::debugString()
{
	return ExcAVR5::debugName;
}

const BaseClassDefiner ExcAVR5::declare()
{
	return BaseClassDefiner(ExcAVR5::addConstructToMap, ExcAVR5::addPrimitiveAssignFnsToMap, ExcAVR5::addClassAssignFnsToMap, ExcAVR5::debugName);
}
