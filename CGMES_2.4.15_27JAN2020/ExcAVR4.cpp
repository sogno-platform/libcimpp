#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcAVR4.hpp"

#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
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

ExcAVR4::ExcAVR4() {};

ExcAVR4::~ExcAVR4() {};


bool assign_ExcAVR4_imul(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->imul;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_kif(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->kif;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_t1if(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->t1if;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_tif(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->tif;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_vfmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->vfmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_vfmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->vfmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_vrmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->vrmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAVR4_vrmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1)) {
                buffer >> element->vrmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}
















namespace CIMPP {
	BaseClass* ExcAVR4_factory() {
		return new ExcAVR4;
	}
}

void ExcAVR4::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcAVR4"), &ExcAVR4_factory));
}

void ExcAVR4::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.imul"), &assign_ExcAVR4_imul));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.ka"), &assign_ExcAVR4_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.ke"), &assign_ExcAVR4_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.kif"), &assign_ExcAVR4_kif));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.t1"), &assign_ExcAVR4_t1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.t1if"), &assign_ExcAVR4_t1if));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.t2"), &assign_ExcAVR4_t2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.t3"), &assign_ExcAVR4_t3));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.t4"), &assign_ExcAVR4_t4));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.tif"), &assign_ExcAVR4_tif));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.vfmn"), &assign_ExcAVR4_vfmn));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.vfmx"), &assign_ExcAVR4_vfmx));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.vrmn"), &assign_ExcAVR4_vrmn));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.vrmx"), &assign_ExcAVR4_vrmx));
}

void ExcAVR4::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
														}

const char ExcAVR4::debugName[] = "ExcAVR4";
const char* ExcAVR4::debugString()
{
	return ExcAVR4::debugName;
}

const BaseClassDefiner ExcAVR4::declare()
{
	return BaseClassDefiner(ExcAVR4::addConstructToMap, ExcAVR4::addPrimitiveAssignFnsToMap, ExcAVR4::addClassAssignFnsToMap, ExcAVR4::debugName);
}
