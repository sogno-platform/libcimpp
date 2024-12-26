#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcSEXS.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

ExcSEXS::ExcSEXS() {};

ExcSEXS::~ExcSEXS() {};


bool assign_ExcSEXS_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1)) {
                buffer >> element->efdmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSEXS_efdmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1)) {
                buffer >> element->efdmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSEXS_emax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1)) {
                buffer >> element->emax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSEXS_emin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1)) {
                buffer >> element->emin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSEXS_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1)) {
                buffer >> element->k;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSEXS_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSEXS_tatb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1)) {
                buffer >> element->tatb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSEXS_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSEXS_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSEXS_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}












namespace CIMPP {
	BaseClass* ExcSEXS_factory() {
		return new ExcSEXS;
	}
}

void ExcSEXS::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcSEXS"), &ExcSEXS_factory));
}

void ExcSEXS::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcSEXS.efdmax"), &assign_ExcSEXS_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSEXS.efdmin"), &assign_ExcSEXS_efdmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSEXS.emax"), &assign_ExcSEXS_emax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSEXS.emin"), &assign_ExcSEXS_emin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSEXS.k"), &assign_ExcSEXS_k));
	assign_map.insert(std::make_pair(std::string("cim:ExcSEXS.kc"), &assign_ExcSEXS_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcSEXS.tatb"), &assign_ExcSEXS_tatb));
	assign_map.insert(std::make_pair(std::string("cim:ExcSEXS.tb"), &assign_ExcSEXS_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcSEXS.tc"), &assign_ExcSEXS_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcSEXS.te"), &assign_ExcSEXS_te));
}

void ExcSEXS::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
										}

const char ExcSEXS::debugName[] = "ExcSEXS";
const char* ExcSEXS::debugString()
{
	return ExcSEXS::debugName;
}

const BaseClassDefiner ExcSEXS::declare()
{
	return BaseClassDefiner(ExcSEXS::addConstructToMap, ExcSEXS::addPrimitiveAssignFnsToMap, ExcSEXS::addClassAssignFnsToMap, ExcSEXS::debugName);
}
