#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovSteam1.hpp"

#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Frequency.hpp"
#include "Frequency.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
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

using namespace CIMPP;

GovSteam1::GovSteam1() {};

GovSteam1::~GovSteam1() {};










































bool assign_GovSteam1_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->k;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_uo(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->uo;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_uc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->uc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->pmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->pmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->k1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->k2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->t5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->k3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_k4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->k4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->t6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_k5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->k5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_k6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->k6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_t7(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->t7;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_k7(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->k7;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_k8(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->k8;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_db1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->db1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_eps(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->eps;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_sdb1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->sdb1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_sdb2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->sdb2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_db2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->db2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_valve(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->valve;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_gv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->gv1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_pgv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->pgv1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_gv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->gv2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_pgv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->pgv2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_gv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->gv3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_pgv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->pgv3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_gv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->gv4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_pgv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->pgv4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_gv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->gv5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_pgv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->pgv5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_gv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->gv6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam1_pgv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1)) {
                buffer >> element->pgv6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* GovSteam1_factory() {
		return new GovSteam1;
	}
}

void GovSteam1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovSteam1"), &GovSteam1_factory));
}

void GovSteam1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.mwbase"), &assign_GovSteam1_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.k"), &assign_GovSteam1_k));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.t1"), &assign_GovSteam1_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.t2"), &assign_GovSteam1_t2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.t3"), &assign_GovSteam1_t3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.uo"), &assign_GovSteam1_uo));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.uc"), &assign_GovSteam1_uc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.pmax"), &assign_GovSteam1_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.pmin"), &assign_GovSteam1_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.t4"), &assign_GovSteam1_t4));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.k1"), &assign_GovSteam1_k1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.k2"), &assign_GovSteam1_k2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.t5"), &assign_GovSteam1_t5));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.k3"), &assign_GovSteam1_k3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.k4"), &assign_GovSteam1_k4));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.t6"), &assign_GovSteam1_t6));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.k5"), &assign_GovSteam1_k5));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.k6"), &assign_GovSteam1_k6));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.t7"), &assign_GovSteam1_t7));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.k7"), &assign_GovSteam1_k7));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.k8"), &assign_GovSteam1_k8));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.db1"), &assign_GovSteam1_db1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.eps"), &assign_GovSteam1_eps));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.sdb1"), &assign_GovSteam1_sdb1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.sdb2"), &assign_GovSteam1_sdb2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.db2"), &assign_GovSteam1_db2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.valve"), &assign_GovSteam1_valve));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.gv1"), &assign_GovSteam1_gv1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.pgv1"), &assign_GovSteam1_pgv1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.gv2"), &assign_GovSteam1_gv2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.pgv2"), &assign_GovSteam1_pgv2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.gv3"), &assign_GovSteam1_gv3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.pgv3"), &assign_GovSteam1_pgv3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.gv4"), &assign_GovSteam1_gv4));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.pgv4"), &assign_GovSteam1_pgv4));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.gv5"), &assign_GovSteam1_gv5));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.pgv5"), &assign_GovSteam1_pgv5));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.gv6"), &assign_GovSteam1_gv6));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam1.pgv6"), &assign_GovSteam1_pgv6));
}

void GovSteam1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																																							}

const char GovSteam1::debugName[] = "GovSteam1";
const char* GovSteam1::debugString()
{
	return GovSteam1::debugName;
}

const BaseClassDefiner GovSteam1::declare()
{
	return BaseClassDefiner(GovSteam1::addConstructToMap, GovSteam1::addPrimitiveAssignFnsToMap, GovSteam1::addClassAssignFnsToMap, GovSteam1::debugName);
}


