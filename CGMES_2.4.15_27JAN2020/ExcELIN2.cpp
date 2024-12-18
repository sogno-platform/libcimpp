#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcELIN2.hpp"

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
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcELIN2::ExcELIN2() {};

ExcELIN2::~ExcELIN2() {};


bool assign_ExcELIN2_efdbas(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->efdbas;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_iefmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->iefmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_iefmax2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->iefmax2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_iefmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->iefmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->k1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_k1ec(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->k1ec;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->k2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->k3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_k4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->k4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_kd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->kd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_ke2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ke2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_ketb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ketb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_pid1max(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->pid1max;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_seve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->seve1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_seve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->seve2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_tb1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->tb1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_te2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->te2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_ti1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ti1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_ti3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ti3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_ti4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ti4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_tr4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->tr4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_upmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->upmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_upmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->upmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_ve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ve1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_ve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ve2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN2_xp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1)) {
                buffer >> element->xp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}





























namespace CIMPP {
	BaseClass* ExcELIN2_factory() {
		return new ExcELIN2;
	}
}

void ExcELIN2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcELIN2"), &ExcELIN2_factory));
}

void ExcELIN2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.efdbas"), &assign_ExcELIN2_efdbas));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.iefmax"), &assign_ExcELIN2_iefmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.iefmax2"), &assign_ExcELIN2_iefmax2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.iefmin"), &assign_ExcELIN2_iefmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.k1"), &assign_ExcELIN2_k1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.k1ec"), &assign_ExcELIN2_k1ec));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.k2"), &assign_ExcELIN2_k2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.k3"), &assign_ExcELIN2_k3));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.k4"), &assign_ExcELIN2_k4));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.kd1"), &assign_ExcELIN2_kd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ke2"), &assign_ExcELIN2_ke2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ketb"), &assign_ExcELIN2_ketb));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.pid1max"), &assign_ExcELIN2_pid1max));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.seve1"), &assign_ExcELIN2_seve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.seve2"), &assign_ExcELIN2_seve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.tb1"), &assign_ExcELIN2_tb1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.te"), &assign_ExcELIN2_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.te2"), &assign_ExcELIN2_te2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ti1"), &assign_ExcELIN2_ti1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ti3"), &assign_ExcELIN2_ti3));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ti4"), &assign_ExcELIN2_ti4));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.tr4"), &assign_ExcELIN2_tr4));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.upmax"), &assign_ExcELIN2_upmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.upmin"), &assign_ExcELIN2_upmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ve1"), &assign_ExcELIN2_ve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ve2"), &assign_ExcELIN2_ve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.xp"), &assign_ExcELIN2_xp));
}

void ExcELIN2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																											}

const char ExcELIN2::debugName[] = "ExcELIN2";
const char* ExcELIN2::debugString()
{
	return ExcELIN2::debugName;
}

const BaseClassDefiner ExcELIN2::declare()
{
	return BaseClassDefiner(ExcELIN2::addConstructToMap, ExcELIN2::addPrimitiveAssignFnsToMap, ExcELIN2::addClassAssignFnsToMap, ExcELIN2::debugName);
}
