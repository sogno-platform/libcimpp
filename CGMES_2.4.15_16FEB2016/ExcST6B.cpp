#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcST6B.hpp"

#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "ExcST6BOELselectorKind.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcST6B::ExcST6B() {};

ExcST6B::~ExcST6B() {};


























bool assign_ExcST6B_ilr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->ilr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->k1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_kcl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->kcl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_kff(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->kff;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->kg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_kia(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->kia;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_klr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->klr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_km(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->km;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_kpa(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->kpa;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_kvd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->kvd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_oelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->oelin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->tg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_ts(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->ts;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_tvd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->tvd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_vamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->vamax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_vamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->vamin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_vilim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->vilim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_vimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->vimax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_vimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->vimin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_vmult(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->vmult;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST6B_xc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST6B* element = dynamic_cast<ExcST6B*>(BaseClass_ptr1)) {
                buffer >> element->xc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ExcST6B_factory() {
		return new ExcST6B;
	}
}

void ExcST6B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcST6B"), &ExcST6B_factory));
}

void ExcST6B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.ilr"), &assign_ExcST6B_ilr));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.k1"), &assign_ExcST6B_k1));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.kcl"), &assign_ExcST6B_kcl));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.kff"), &assign_ExcST6B_kff));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.kg"), &assign_ExcST6B_kg));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.kia"), &assign_ExcST6B_kia));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.klr"), &assign_ExcST6B_klr));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.km"), &assign_ExcST6B_km));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.kpa"), &assign_ExcST6B_kpa));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.kvd"), &assign_ExcST6B_kvd));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.oelin"), &assign_ExcST6B_oelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.tg"), &assign_ExcST6B_tg));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.ts"), &assign_ExcST6B_ts));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.tvd"), &assign_ExcST6B_tvd));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.vamax"), &assign_ExcST6B_vamax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.vamin"), &assign_ExcST6B_vamin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.vilim"), &assign_ExcST6B_vilim));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.vimax"), &assign_ExcST6B_vimax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.vimin"), &assign_ExcST6B_vimin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.vmult"), &assign_ExcST6B_vmult));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.vrmax"), &assign_ExcST6B_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.vrmin"), &assign_ExcST6B_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST6B.xc"), &assign_ExcST6B_xc));
}

void ExcST6B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																							}

const char ExcST6B::debugName[] = "ExcST6B";
const char* ExcST6B::debugString()
{
	return ExcST6B::debugName;
}

const BaseClassDefiner ExcST6B::declare()
{
	return BaseClassDefiner(ExcST6B::addConstructToMap, ExcST6B::addPrimitiveAssignFnsToMap, ExcST6B::addClassAssignFnsToMap, ExcST6B::debugName);
}


