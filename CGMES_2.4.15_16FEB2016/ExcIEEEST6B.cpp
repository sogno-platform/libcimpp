#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcIEEEST6B.hpp"

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
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEST6B::ExcIEEEST6B() {};

ExcIEEEST6B::~ExcIEEEST6B() {};

















bool assign_ExcIEEEST6B_ilr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->ilr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_kci(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->kci;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_kff(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->kff;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->kg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_kia(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->kia;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_klr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->klr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_km(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->km;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_kpa(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->kpa;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_oelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->oelin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->tg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_vamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->vamax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_vamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->vamin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST6B_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1)) {
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
	BaseClass* ExcIEEEST6B_factory() {
		return new ExcIEEEST6B;
	}
}

void ExcIEEEST6B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B"), &ExcIEEEST6B_factory));
}

void ExcIEEEST6B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.ilr"), &assign_ExcIEEEST6B_ilr));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.kci"), &assign_ExcIEEEST6B_kci));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.kff"), &assign_ExcIEEEST6B_kff));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.kg"), &assign_ExcIEEEST6B_kg));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.kia"), &assign_ExcIEEEST6B_kia));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.klr"), &assign_ExcIEEEST6B_klr));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.km"), &assign_ExcIEEEST6B_km));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.kpa"), &assign_ExcIEEEST6B_kpa));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.oelin"), &assign_ExcIEEEST6B_oelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.tg"), &assign_ExcIEEEST6B_tg));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.vamax"), &assign_ExcIEEEST6B_vamax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.vamin"), &assign_ExcIEEEST6B_vamin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.vrmax"), &assign_ExcIEEEST6B_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST6B.vrmin"), &assign_ExcIEEEST6B_vrmin));
}

void ExcIEEEST6B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
														}

const char ExcIEEEST6B::debugName[] = "ExcIEEEST6B";
const char* ExcIEEEST6B::debugString()
{
	return ExcIEEEST6B::debugName;
}

const BaseClassDefiner ExcIEEEST6B::declare()
{
	return BaseClassDefiner(ExcIEEEST6B::addConstructToMap, ExcIEEEST6B::addPrimitiveAssignFnsToMap, ExcIEEEST6B::addClassAssignFnsToMap, ExcIEEEST6B::debugName);
}


