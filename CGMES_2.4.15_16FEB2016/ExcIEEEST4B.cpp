#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcIEEEST4B.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEST4B::ExcIEEEST4B() {};

ExcIEEEST4B::~ExcIEEEST4B() {};


bool assign_ExcIEEEST4B_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->kg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->ki;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_kim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->kim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_kir(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->kir;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->kp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_kpm(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->kpm;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_kpr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->kpr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_thetap(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->thetap;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_vbmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->vbmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_vmmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->vmmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_vmmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->vmmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST4B_xl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1)) {
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
	BaseClass* ExcIEEEST4B_factory() {
		return new ExcIEEEST4B;
	}
}

void ExcIEEEST4B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B"), &ExcIEEEST4B_factory));
}

void ExcIEEEST4B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kc"), &assign_ExcIEEEST4B_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kg"), &assign_ExcIEEEST4B_kg));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.ki"), &assign_ExcIEEEST4B_ki));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kim"), &assign_ExcIEEEST4B_kim));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kir"), &assign_ExcIEEEST4B_kir));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kp"), &assign_ExcIEEEST4B_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kpm"), &assign_ExcIEEEST4B_kpm));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kpr"), &assign_ExcIEEEST4B_kpr));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.ta"), &assign_ExcIEEEST4B_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.thetap"), &assign_ExcIEEEST4B_thetap));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.vbmax"), &assign_ExcIEEEST4B_vbmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.vmmax"), &assign_ExcIEEEST4B_vmmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.vmmin"), &assign_ExcIEEEST4B_vmmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.vrmax"), &assign_ExcIEEEST4B_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.vrmin"), &assign_ExcIEEEST4B_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.xl"), &assign_ExcIEEEST4B_xl));
}

void ExcIEEEST4B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																}

const char ExcIEEEST4B::debugName[] = "ExcIEEEST4B";
const char* ExcIEEEST4B::debugString()
{
	return ExcIEEEST4B::debugName;
}

const BaseClassDefiner ExcIEEEST4B::declare()
{
	return BaseClassDefiner(ExcIEEEST4B::addConstructToMap, ExcIEEEST4B::addPrimitiveAssignFnsToMap, ExcIEEEST4B::addClassAssignFnsToMap, ExcIEEEST4B::debugName);
}
