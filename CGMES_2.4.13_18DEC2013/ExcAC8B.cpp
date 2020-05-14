#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcAC8B.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

ExcAC8B::ExcAC8B() {};

ExcAC8B::~ExcAC8B() {};






























bool assign_ExcAC8B_kpr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->kpr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_kir(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->kir;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_kdr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->kdr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->ks;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_tdr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->tdr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_vimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->vimax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_vimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->vimin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_vpidmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->vpidmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_vpidmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->vpidmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_vfemax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->vfemax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_vemin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->vemin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->kd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_ve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->ve1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_seve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->seve1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_ve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->ve2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_seve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->seve2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_vtmult(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->vtmult;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_inlim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->inlim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_pidlim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->pidlim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC8B_telim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1)) {
                buffer >> element->telim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ExcAC8B_factory() {
		return new ExcAC8B;
	}
}

void ExcAC8B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcAC8B"), &ExcAC8B_factory));
}

void ExcAC8B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.kpr"), &assign_ExcAC8B_kpr));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.kir"), &assign_ExcAC8B_kir));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.kdr"), &assign_ExcAC8B_kdr));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.ks"), &assign_ExcAC8B_ks));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.tdr"), &assign_ExcAC8B_tdr));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.vrmax"), &assign_ExcAC8B_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.vrmin"), &assign_ExcAC8B_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.vimax"), &assign_ExcAC8B_vimax));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.vimin"), &assign_ExcAC8B_vimin));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.vpidmax"), &assign_ExcAC8B_vpidmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.vpidmin"), &assign_ExcAC8B_vpidmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.ka"), &assign_ExcAC8B_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.ta"), &assign_ExcAC8B_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.te"), &assign_ExcAC8B_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.vfemax"), &assign_ExcAC8B_vfemax));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.vemin"), &assign_ExcAC8B_vemin));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.ke"), &assign_ExcAC8B_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.kc"), &assign_ExcAC8B_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.kd"), &assign_ExcAC8B_kd));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.ve1"), &assign_ExcAC8B_ve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.seve1"), &assign_ExcAC8B_seve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.ve2"), &assign_ExcAC8B_ve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.seve2"), &assign_ExcAC8B_seve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.vtmult"), &assign_ExcAC8B_vtmult));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.inlim"), &assign_ExcAC8B_inlim));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.pidlim"), &assign_ExcAC8B_pidlim));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC8B.telim"), &assign_ExcAC8B_telim));
}

void ExcAC8B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																											}

const char ExcAC8B::debugName[] = "ExcAC8B";
const char* ExcAC8B::debugString()
{
	return ExcAC8B::debugName;
}

const BaseClassDefiner ExcAC8B::declare()
{
	return BaseClassDefiner(ExcAC8B::addConstructToMap, ExcAC8B::addPrimitiveAssignFnsToMap, ExcAC8B::addClassAssignFnsToMap, ExcAC8B::debugName);
}


