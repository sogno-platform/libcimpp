#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcST7B.hpp"

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
#include "Seconds.hpp"
#include "ExcST7BUELselectorKind.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcST7B::ExcST7B() {};

ExcST7B::~ExcST7B() {};



















bool assign_ExcST7B_kh(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->kh;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_kia(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->kia;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_kl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->kl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_kpa(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->kpa;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_oelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->oelin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->tf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->tg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_tia(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->tia;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_ts(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->ts;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_uelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->uelin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_vmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->vmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_vmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->vmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST7B_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1)) {
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
	BaseClass* ExcST7B_factory() {
		return new ExcST7B;
	}
}

void ExcST7B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcST7B"), &ExcST7B_factory));
}

void ExcST7B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.kh"), &assign_ExcST7B_kh));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.kia"), &assign_ExcST7B_kia));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.kl"), &assign_ExcST7B_kl));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.kpa"), &assign_ExcST7B_kpa));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.oelin"), &assign_ExcST7B_oelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.tb"), &assign_ExcST7B_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.tc"), &assign_ExcST7B_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.tf"), &assign_ExcST7B_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.tg"), &assign_ExcST7B_tg));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.tia"), &assign_ExcST7B_tia));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.ts"), &assign_ExcST7B_ts));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.uelin"), &assign_ExcST7B_uelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.vmax"), &assign_ExcST7B_vmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.vmin"), &assign_ExcST7B_vmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.vrmax"), &assign_ExcST7B_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST7B.vrmin"), &assign_ExcST7B_vrmin));
}

void ExcST7B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																}

const char ExcST7B::debugName[] = "ExcST7B";
const char* ExcST7B::debugString()
{
	return ExcST7B::debugName;
}

const BaseClassDefiner ExcST7B::declare()
{
	return BaseClassDefiner(ExcST7B::addConstructToMap, ExcST7B::addPrimitiveAssignFnsToMap, ExcST7B::addClassAssignFnsToMap, ExcST7B::debugName);
}


