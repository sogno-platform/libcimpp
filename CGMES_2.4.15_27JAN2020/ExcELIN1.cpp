#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcELIN1.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
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

ExcELIN1::ExcELIN1() {};

ExcELIN1::~ExcELIN1() {};


bool assign_ExcELIN1_dpnf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->dpnf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_efmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->efmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_efmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->efmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_ks1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->ks1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_ks2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->ks2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_smax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->smax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_tfi(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->tfi;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_tnu(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->tnu;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_ts1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->ts1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_ts2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->ts2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_tsw(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->tsw;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_vpi(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->vpi;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_vpnf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->vpnf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_vpu(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->vpu;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcELIN1_xe(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1)) {
                buffer >> element->xe;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

















namespace CIMPP {
	BaseClass* ExcELIN1_factory() {
		return new ExcELIN1;
	}
}

void ExcELIN1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcELIN1"), &ExcELIN1_factory));
}

void ExcELIN1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.dpnf"), &assign_ExcELIN1_dpnf));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.efmax"), &assign_ExcELIN1_efmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.efmin"), &assign_ExcELIN1_efmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.ks1"), &assign_ExcELIN1_ks1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.ks2"), &assign_ExcELIN1_ks2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.smax"), &assign_ExcELIN1_smax));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.tfi"), &assign_ExcELIN1_tfi));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.tnu"), &assign_ExcELIN1_tnu));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.ts1"), &assign_ExcELIN1_ts1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.ts2"), &assign_ExcELIN1_ts2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.tsw"), &assign_ExcELIN1_tsw));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.vpi"), &assign_ExcELIN1_vpi));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.vpnf"), &assign_ExcELIN1_vpnf));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.vpu"), &assign_ExcELIN1_vpu));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.xe"), &assign_ExcELIN1_xe));
}

void ExcELIN1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
															}

const char ExcELIN1::debugName[] = "ExcELIN1";
const char* ExcELIN1::debugString()
{
	return ExcELIN1::debugName;
}

const BaseClassDefiner ExcELIN1::declare()
{
	return BaseClassDefiner(ExcELIN1::addConstructToMap, ExcELIN1::addPrimitiveAssignFnsToMap, ExcELIN1::addClassAssignFnsToMap, ExcELIN1::debugName);
}
