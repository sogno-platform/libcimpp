#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcPIC.hpp"

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
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcPIC::ExcPIC() {};

ExcPIC::~ExcPIC() {};


bool assign_ExcPIC_e1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->e1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_e2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->e2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->efdmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_efdmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->efdmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->ki;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->kp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_se1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->se1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_se2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->se2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_ta1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->ta1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_ta2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->ta2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_ta3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->ta3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_ta4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->ta4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_tf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->tf1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_tf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->tf2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_vr1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->vr1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_vr2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->vr2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcPIC_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

























namespace CIMPP {
	BaseClass* ExcPIC_factory() {
		return new ExcPIC;
	}
}

void ExcPIC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcPIC"), &ExcPIC_factory));
}

void ExcPIC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.e1"), &assign_ExcPIC_e1));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.e2"), &assign_ExcPIC_e2));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.efdmax"), &assign_ExcPIC_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.efdmin"), &assign_ExcPIC_efdmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.ka"), &assign_ExcPIC_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.kc"), &assign_ExcPIC_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.ke"), &assign_ExcPIC_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.kf"), &assign_ExcPIC_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.ki"), &assign_ExcPIC_ki));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.kp"), &assign_ExcPIC_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.se1"), &assign_ExcPIC_se1));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.se2"), &assign_ExcPIC_se2));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.ta1"), &assign_ExcPIC_ta1));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.ta2"), &assign_ExcPIC_ta2));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.ta3"), &assign_ExcPIC_ta3));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.ta4"), &assign_ExcPIC_ta4));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.te"), &assign_ExcPIC_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.tf1"), &assign_ExcPIC_tf1));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.tf2"), &assign_ExcPIC_tf2));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.vr1"), &assign_ExcPIC_vr1));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.vr2"), &assign_ExcPIC_vr2));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.vrmax"), &assign_ExcPIC_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcPIC.vrmin"), &assign_ExcPIC_vrmin));
}

void ExcPIC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																							}

const char ExcPIC::debugName[] = "ExcPIC";
const char* ExcPIC::debugString()
{
	return ExcPIC::debugName;
}

const BaseClassDefiner ExcPIC::declare()
{
	return BaseClassDefiner(ExcPIC::addConstructToMap, ExcPIC::addPrimitiveAssignFnsToMap, ExcPIC::addClassAssignFnsToMap, ExcPIC::debugName);
}
