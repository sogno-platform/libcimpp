#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovCT2.hpp"

#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Frequency.hpp"
#include "Frequency.hpp"
#include "Frequency.hpp"
#include "Frequency.hpp"
#include "Frequency.hpp"
#include "Frequency.hpp"
#include "Frequency.hpp"
#include "Frequency.hpp"
#include "Frequency.hpp"
#include "Frequency.hpp"
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
#include "ActivePower.hpp"
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
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "DroopSignalFeedbackKind.hpp"
#include "PU.hpp"
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
#include "Boolean.hpp"

using namespace CIMPP;

GovCT2::GovCT2() {};

GovCT2::~GovCT2() {};


bool assign_GovCT2_aset(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->aset;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_db(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->db;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_dm(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->dm;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_flim1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->flim1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_flim10(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->flim10;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_flim2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->flim2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_flim3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->flim3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_flim4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->flim4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_flim5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->flim5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_flim6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->flim6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_flim7(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->flim7;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_flim8(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->flim8;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_flim9(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->flim9;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_kdgov(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->kdgov;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_kigov(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->kigov;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_kiload(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->kiload;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_kimw(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->kimw;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_kpgov(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->kpgov;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_kpload(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->kpload;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_kturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->kturb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_ldref(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->ldref;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_maxerr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->maxerr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_minerr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->minerr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_plim1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->plim1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_plim10(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->plim10;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_plim2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->plim2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_plim3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->plim3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_plim4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->plim4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_plim5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->plim5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_plim6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->plim6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_plim7(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->plim7;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_plim8(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->plim8;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_plim9(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->plim9;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_prate(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->prate;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_rclose(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->rclose;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_rdown(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->rdown;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_ropen(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->ropen;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_rselect(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->rselect;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_rup(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->rup;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_tact(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->tact;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_tdgov(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->tdgov;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_teng(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->teng;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_tfload(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->tfload;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_tpelec(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->tpelec;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_tsa(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->tsa;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_tsb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->tsb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_vmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->vmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_vmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->vmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_wfnl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->wfnl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovCT2_wfspd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1)) {
                buffer >> element->wfspd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


























































namespace CIMPP {
	BaseClass* GovCT2_factory() {
		return new GovCT2;
	}
}

void GovCT2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovCT2"), &GovCT2_factory));
}

void GovCT2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.aset"), &assign_GovCT2_aset));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.db"), &assign_GovCT2_db));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.dm"), &assign_GovCT2_dm));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.flim1"), &assign_GovCT2_flim1));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.flim10"), &assign_GovCT2_flim10));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.flim2"), &assign_GovCT2_flim2));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.flim3"), &assign_GovCT2_flim3));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.flim4"), &assign_GovCT2_flim4));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.flim5"), &assign_GovCT2_flim5));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.flim6"), &assign_GovCT2_flim6));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.flim7"), &assign_GovCT2_flim7));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.flim8"), &assign_GovCT2_flim8));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.flim9"), &assign_GovCT2_flim9));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.ka"), &assign_GovCT2_ka));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.kdgov"), &assign_GovCT2_kdgov));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.kigov"), &assign_GovCT2_kigov));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.kiload"), &assign_GovCT2_kiload));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.kimw"), &assign_GovCT2_kimw));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.kpgov"), &assign_GovCT2_kpgov));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.kpload"), &assign_GovCT2_kpload));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.kturb"), &assign_GovCT2_kturb));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.ldref"), &assign_GovCT2_ldref));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.maxerr"), &assign_GovCT2_maxerr));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.minerr"), &assign_GovCT2_minerr));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.mwbase"), &assign_GovCT2_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.plim1"), &assign_GovCT2_plim1));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.plim10"), &assign_GovCT2_plim10));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.plim2"), &assign_GovCT2_plim2));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.plim3"), &assign_GovCT2_plim3));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.plim4"), &assign_GovCT2_plim4));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.plim5"), &assign_GovCT2_plim5));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.plim6"), &assign_GovCT2_plim6));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.plim7"), &assign_GovCT2_plim7));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.plim8"), &assign_GovCT2_plim8));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.plim9"), &assign_GovCT2_plim9));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.prate"), &assign_GovCT2_prate));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.r"), &assign_GovCT2_r));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.rclose"), &assign_GovCT2_rclose));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.rdown"), &assign_GovCT2_rdown));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.ropen"), &assign_GovCT2_ropen));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.rselect"), &assign_GovCT2_rselect));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.rup"), &assign_GovCT2_rup));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.ta"), &assign_GovCT2_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.tact"), &assign_GovCT2_tact));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.tb"), &assign_GovCT2_tb));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.tc"), &assign_GovCT2_tc));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.tdgov"), &assign_GovCT2_tdgov));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.teng"), &assign_GovCT2_teng));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.tfload"), &assign_GovCT2_tfload));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.tpelec"), &assign_GovCT2_tpelec));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.tsa"), &assign_GovCT2_tsa));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.tsb"), &assign_GovCT2_tsb));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.vmax"), &assign_GovCT2_vmax));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.vmin"), &assign_GovCT2_vmin));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.wfnl"), &assign_GovCT2_wfnl));
	assign_map.insert(std::make_pair(std::string("cim:GovCT2.wfspd"), &assign_GovCT2_wfspd));
}

void GovCT2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																																																								}

const char GovCT2::debugName[] = "GovCT2";
const char* GovCT2::debugString()
{
	return GovCT2::debugName;
}

const BaseClassDefiner GovCT2::declare()
{
	return BaseClassDefiner(GovCT2::addConstructToMap, GovCT2::addPrimitiveAssignFnsToMap, GovCT2::addClassAssignFnsToMap, GovCT2::debugName);
}
