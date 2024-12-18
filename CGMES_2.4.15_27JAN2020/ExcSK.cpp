#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcSK.hpp"

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
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "ApparentPower.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcSK::ExcSK() {};

ExcSK::~ExcSK() {};


bool assign_ExcSK_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->efdmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_efdmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->efdmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_emax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->emax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_emin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->emin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->k;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->k1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->k2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_kce(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->kce;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->kd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_kgob(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->kgob;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->kp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_kqi(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->kqi;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_kqob(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->kqob;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_kqp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->kqp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_nq(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->nq;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_qconoff(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->qconoff;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_qz(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->qz;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_remote(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->remote;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_sbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->sbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_ti(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->ti;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->tp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->tr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_uimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->uimax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_uimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->uimin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_urmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->urmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_urmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->urmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_vtmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->vtmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_vtmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->vtmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSK_yp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1)) {
                buffer >> element->yp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


































namespace CIMPP {
	BaseClass* ExcSK_factory() {
		return new ExcSK;
	}
}

void ExcSK::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcSK"), &ExcSK_factory));
}

void ExcSK::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.efdmax"), &assign_ExcSK_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.efdmin"), &assign_ExcSK_efdmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.emax"), &assign_ExcSK_emax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.emin"), &assign_ExcSK_emin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.k"), &assign_ExcSK_k));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.k1"), &assign_ExcSK_k1));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.k2"), &assign_ExcSK_k2));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kc"), &assign_ExcSK_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kce"), &assign_ExcSK_kce));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kd"), &assign_ExcSK_kd));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kgob"), &assign_ExcSK_kgob));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kp"), &assign_ExcSK_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kqi"), &assign_ExcSK_kqi));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kqob"), &assign_ExcSK_kqob));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kqp"), &assign_ExcSK_kqp));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.nq"), &assign_ExcSK_nq));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.qconoff"), &assign_ExcSK_qconoff));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.qz"), &assign_ExcSK_qz));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.remote"), &assign_ExcSK_remote));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.sbase"), &assign_ExcSK_sbase));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.tc"), &assign_ExcSK_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.te"), &assign_ExcSK_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.ti"), &assign_ExcSK_ti));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.tp"), &assign_ExcSK_tp));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.tr"), &assign_ExcSK_tr));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.uimax"), &assign_ExcSK_uimax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.uimin"), &assign_ExcSK_uimin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.urmax"), &assign_ExcSK_urmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.urmin"), &assign_ExcSK_urmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.vtmax"), &assign_ExcSK_vtmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.vtmin"), &assign_ExcSK_vtmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.yp"), &assign_ExcSK_yp));
}

void ExcSK::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																																}

const char ExcSK::debugName[] = "ExcSK";
const char* ExcSK::debugString()
{
	return ExcSK::debugName;
}

const BaseClassDefiner ExcSK::declare()
{
	return BaseClassDefiner(ExcSK::addConstructToMap, ExcSK::addPrimitiveAssignFnsToMap, ExcSK::addClassAssignFnsToMap, ExcSK::debugName);
}
