#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcST3A.hpp"

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
#include "AngleDegrees.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcST3A::ExcST3A() {};

ExcST3A::~ExcST3A() {};


bool assign_ExcST3A_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->efdmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->kg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->ki;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_kj(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->kj;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_km(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->km;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->kp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->ks;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_ks1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->ks1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_thetap(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->thetap;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_tm(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->tm;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_vbmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->vbmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_vgmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->vgmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_vimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->vimax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_vimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->vimin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST3A_xl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1)) {
                buffer >> element->xl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}






















namespace CIMPP {
	BaseClass* ExcST3A_factory() {
		return new ExcST3A;
	}
}

void ExcST3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcST3A"), &ExcST3A_factory));
}

void ExcST3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.efdmax"), &assign_ExcST3A_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.kc"), &assign_ExcST3A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.kg"), &assign_ExcST3A_kg));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.ki"), &assign_ExcST3A_ki));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.kj"), &assign_ExcST3A_kj));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.km"), &assign_ExcST3A_km));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.kp"), &assign_ExcST3A_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.ks"), &assign_ExcST3A_ks));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.ks1"), &assign_ExcST3A_ks1));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.tb"), &assign_ExcST3A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.tc"), &assign_ExcST3A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.thetap"), &assign_ExcST3A_thetap));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.tm"), &assign_ExcST3A_tm));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.vbmax"), &assign_ExcST3A_vbmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.vgmax"), &assign_ExcST3A_vgmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.vimax"), &assign_ExcST3A_vimax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.vimin"), &assign_ExcST3A_vimin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.vrmax"), &assign_ExcST3A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.vrmin"), &assign_ExcST3A_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.xl"), &assign_ExcST3A_xl));
}

void ExcST3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																				}

const char ExcST3A::debugName[] = "ExcST3A";
const char* ExcST3A::debugString()
{
	return ExcST3A::debugName;
}

const BaseClassDefiner ExcST3A::declare()
{
	return BaseClassDefiner(ExcST3A::addConstructToMap, ExcST3A::addPrimitiveAssignFnsToMap, ExcST3A::addClassAssignFnsToMap, ExcST3A::debugName);
}
