#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcIEEEST7B.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "ExcST7BOELselectorKind.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "ExcST7BUELselectorKind.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEST7B::ExcIEEEST7B() {};

ExcIEEEST7B::~ExcIEEEST7B() {};


bool assign_ExcIEEEST7B_kh(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->kh;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_kia(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->kia;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_kl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->kl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_kpa(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->kpa;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_oelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->oelin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->tf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->tg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_tia(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->tia;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_uelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->uelin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_vmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->vmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_vmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->vmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST7B_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST7B* element = dynamic_cast<ExcIEEEST7B*>(BaseClass_ptr1)) {
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
	BaseClass* ExcIEEEST7B_factory() {
		return new ExcIEEEST7B;
	}
}

void ExcIEEEST7B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B"), &ExcIEEEST7B_factory));
}

void ExcIEEEST7B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.kh"), &assign_ExcIEEEST7B_kh));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.kia"), &assign_ExcIEEEST7B_kia));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.kl"), &assign_ExcIEEEST7B_kl));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.kpa"), &assign_ExcIEEEST7B_kpa));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.oelin"), &assign_ExcIEEEST7B_oelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.tb"), &assign_ExcIEEEST7B_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.tc"), &assign_ExcIEEEST7B_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.tf"), &assign_ExcIEEEST7B_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.tg"), &assign_ExcIEEEST7B_tg));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.tia"), &assign_ExcIEEEST7B_tia));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.uelin"), &assign_ExcIEEEST7B_uelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.vmax"), &assign_ExcIEEEST7B_vmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.vmin"), &assign_ExcIEEEST7B_vmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.vrmax"), &assign_ExcIEEEST7B_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST7B.vrmin"), &assign_ExcIEEEST7B_vrmin));
}

void ExcIEEEST7B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
															}

const char ExcIEEEST7B::debugName[] = "ExcIEEEST7B";
const char* ExcIEEEST7B::debugString()
{
	return ExcIEEEST7B::debugName;
}

const BaseClassDefiner ExcIEEEST7B::declare()
{
	return BaseClassDefiner(ExcIEEEST7B::addConstructToMap, ExcIEEEST7B::addPrimitiveAssignFnsToMap, ExcIEEEST7B::addClassAssignFnsToMap, ExcIEEEST7B::debugName);
}
