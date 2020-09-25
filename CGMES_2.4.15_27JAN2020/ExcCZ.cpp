#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcCZ.hpp"

#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcCZ::ExcCZ() {};

ExcCZ::~ExcCZ() {};













bool assign_ExcCZ_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1)) {
                buffer >> element->kp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcCZ_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcCZ_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcCZ_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcCZ_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcCZ_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcCZ_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcCZ_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcCZ_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1)) {
                buffer >> element->efdmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcCZ_efdmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1)) {
                buffer >> element->efdmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ExcCZ_factory() {
		return new ExcCZ;
	}
}

void ExcCZ::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcCZ"), &ExcCZ_factory));
}

void ExcCZ::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.kp"), &assign_ExcCZ_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.tc"), &assign_ExcCZ_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.vrmax"), &assign_ExcCZ_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.vrmin"), &assign_ExcCZ_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.ka"), &assign_ExcCZ_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.ta"), &assign_ExcCZ_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.ke"), &assign_ExcCZ_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.te"), &assign_ExcCZ_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.efdmax"), &assign_ExcCZ_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.efdmin"), &assign_ExcCZ_efdmin));
}

void ExcCZ::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
										}

const char ExcCZ::debugName[] = "ExcCZ";
const char* ExcCZ::debugString()
{
	return ExcCZ::debugName;
}

const BaseClassDefiner ExcCZ::declare()
{
	return BaseClassDefiner(ExcCZ::addConstructToMap, ExcCZ::addPrimitiveAssignFnsToMap, ExcCZ::addClassAssignFnsToMap, ExcCZ::debugName);
}


