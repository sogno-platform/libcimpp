#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovGAST3.hpp"

#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Temperature.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Temperature.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Temperature.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

GovGAST3::GovGAST3() {};

GovGAST3::~GovGAST3() {};


bool assign_GovGAST3_bca(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->bca;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_bp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->bp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_dtc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->dtc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_kac(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->kac;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_kca(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->kca;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_ksi(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->ksi;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_ky(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->ky;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_mnef(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->mnef;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_mxef(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->mxef;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_rcmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->rcmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_rcmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->rcmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_tac(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->tac;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->td;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_tfen(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->tfen;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->tg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_tsi(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->tsi;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_tt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->tt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_ttc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->ttc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST3_ty(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1)) {
                buffer >> element->ty;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}























namespace CIMPP {
	BaseClass* GovGAST3_factory() {
		return new GovGAST3;
	}
}

void GovGAST3::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovGAST3"), &GovGAST3_factory));
}

void GovGAST3::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.bca"), &assign_GovGAST3_bca));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.bp"), &assign_GovGAST3_bp));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.dtc"), &assign_GovGAST3_dtc));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.ka"), &assign_GovGAST3_ka));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.kac"), &assign_GovGAST3_kac));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.kca"), &assign_GovGAST3_kca));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.ksi"), &assign_GovGAST3_ksi));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.ky"), &assign_GovGAST3_ky));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.mnef"), &assign_GovGAST3_mnef));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.mxef"), &assign_GovGAST3_mxef));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.rcmn"), &assign_GovGAST3_rcmn));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.rcmx"), &assign_GovGAST3_rcmx));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.tac"), &assign_GovGAST3_tac));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.tc"), &assign_GovGAST3_tc));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.td"), &assign_GovGAST3_td));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.tfen"), &assign_GovGAST3_tfen));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.tg"), &assign_GovGAST3_tg));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.tsi"), &assign_GovGAST3_tsi));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.tt"), &assign_GovGAST3_tt));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.ttc"), &assign_GovGAST3_ttc));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.ty"), &assign_GovGAST3_ty));
}

void GovGAST3::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																					}

const char GovGAST3::debugName[] = "GovGAST3";
const char* GovGAST3::debugString()
{
	return GovGAST3::debugName;
}

const BaseClassDefiner GovGAST3::declare()
{
	return BaseClassDefiner(GovGAST3::addConstructToMap, GovGAST3::addPrimitiveAssignFnsToMap, GovGAST3::addClassAssignFnsToMap, GovGAST3::debugName);
}
