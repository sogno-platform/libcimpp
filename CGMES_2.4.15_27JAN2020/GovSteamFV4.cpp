#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovSteamFV4.hpp"

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
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
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
#include "PU.hpp"

using namespace CIMPP;

GovSteamFV4::GovSteamFV4() {};

GovSteamFV4::~GovSteamFV4() {};


bool assign_GovSteamFV4_cpsmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->cpsmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_cpsmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->cpsmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_crmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->crmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_crmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->crmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_kdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->kdc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_kf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->kf1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_kf3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->kf3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_khp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->khp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_kic(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->kic;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_kip(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->kip;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_kit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->kit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_kmp1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->kmp1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_kmp2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->kmp2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_kpc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->kpc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_kpp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->kpp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_kpt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->kpt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_krc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->krc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_ksh(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->ksh;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_lpi(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->lpi;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_lps(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->lps;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_mnef(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->mnef;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_mxef(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->mxef;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_pr1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->pr1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_pr2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->pr2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_psmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->psmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_rsmimn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->rsmimn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_rsmimx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->rsmimx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_rvgmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->rvgmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_rvgmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->rvgmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_srmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->srmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_srmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->srmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_srsmp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->srsmp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_svmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->svmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_svmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->svmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_tam(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->tam;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_tcm(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->tcm;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_tdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->tdc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_tf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->tf1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_tf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->tf2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_thp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->thp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_tmp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->tmp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_trh(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->trh;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_tv(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->tv;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_ty(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->ty;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_y(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->y;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_yhpmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->yhpmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_yhpmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->yhpmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_ympmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->ympmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV4_ympmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1)) {
                buffer >> element->ympmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}





















































namespace CIMPP {
	BaseClass* GovSteamFV4_factory() {
		return new GovSteamFV4;
	}
}

void GovSteamFV4::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovSteamFV4"), &GovSteamFV4_factory));
}

void GovSteamFV4::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.cpsmn"), &assign_GovSteamFV4_cpsmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.cpsmx"), &assign_GovSteamFV4_cpsmx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.crmn"), &assign_GovSteamFV4_crmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.crmx"), &assign_GovSteamFV4_crmx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kdc"), &assign_GovSteamFV4_kdc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kf1"), &assign_GovSteamFV4_kf1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kf3"), &assign_GovSteamFV4_kf3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.khp"), &assign_GovSteamFV4_khp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kic"), &assign_GovSteamFV4_kic));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kip"), &assign_GovSteamFV4_kip));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kit"), &assign_GovSteamFV4_kit));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kmp1"), &assign_GovSteamFV4_kmp1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kmp2"), &assign_GovSteamFV4_kmp2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kpc"), &assign_GovSteamFV4_kpc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kpp"), &assign_GovSteamFV4_kpp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kpt"), &assign_GovSteamFV4_kpt));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.krc"), &assign_GovSteamFV4_krc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.ksh"), &assign_GovSteamFV4_ksh));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.lpi"), &assign_GovSteamFV4_lpi));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.lps"), &assign_GovSteamFV4_lps));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.mnef"), &assign_GovSteamFV4_mnef));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.mxef"), &assign_GovSteamFV4_mxef));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.pr1"), &assign_GovSteamFV4_pr1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.pr2"), &assign_GovSteamFV4_pr2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.psmn"), &assign_GovSteamFV4_psmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.rsmimn"), &assign_GovSteamFV4_rsmimn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.rsmimx"), &assign_GovSteamFV4_rsmimx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.rvgmn"), &assign_GovSteamFV4_rvgmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.rvgmx"), &assign_GovSteamFV4_rvgmx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.srmn"), &assign_GovSteamFV4_srmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.srmx"), &assign_GovSteamFV4_srmx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.srsmp"), &assign_GovSteamFV4_srsmp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.svmn"), &assign_GovSteamFV4_svmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.svmx"), &assign_GovSteamFV4_svmx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.ta"), &assign_GovSteamFV4_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tam"), &assign_GovSteamFV4_tam));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tc"), &assign_GovSteamFV4_tc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tcm"), &assign_GovSteamFV4_tcm));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tdc"), &assign_GovSteamFV4_tdc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tf1"), &assign_GovSteamFV4_tf1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tf2"), &assign_GovSteamFV4_tf2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.thp"), &assign_GovSteamFV4_thp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tmp"), &assign_GovSteamFV4_tmp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.trh"), &assign_GovSteamFV4_trh));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tv"), &assign_GovSteamFV4_tv));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.ty"), &assign_GovSteamFV4_ty));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.y"), &assign_GovSteamFV4_y));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.yhpmn"), &assign_GovSteamFV4_yhpmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.yhpmx"), &assign_GovSteamFV4_yhpmx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.ympmn"), &assign_GovSteamFV4_ympmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.ympmx"), &assign_GovSteamFV4_ympmx));
}

void GovSteamFV4::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																																																			}

const char GovSteamFV4::debugName[] = "GovSteamFV4";
const char* GovSteamFV4::debugString()
{
	return GovSteamFV4::debugName;
}

const BaseClassDefiner GovSteamFV4::declare()
{
	return BaseClassDefiner(GovSteamFV4::addConstructToMap, GovSteamFV4::addPrimitiveAssignFnsToMap, GovSteamFV4::addClassAssignFnsToMap, GovSteamFV4::debugName);
}
