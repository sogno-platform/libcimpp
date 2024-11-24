#include <sstream>
#include "LoadDynamics.hpp"
#include "LoadGenericNonLinear.hpp"

#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "GenericNonLinearLoadModelKind.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

LoadGenericNonLinear::LoadGenericNonLinear() {};

LoadGenericNonLinear::~LoadGenericNonLinear() {};


bool assign_LoadGenericNonLinear_bs(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1)) {
                buffer >> element->bs;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadGenericNonLinear_bt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1)) {
                buffer >> element->bt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadGenericNonLinear_genericNonLinearLoadModelType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1)) {
                buffer >> element->genericNonLinearLoadModelType;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadGenericNonLinear_ls(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1)) {
                buffer >> element->ls;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadGenericNonLinear_lt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1)) {
                buffer >> element->lt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadGenericNonLinear_pt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1)) {
                buffer >> element->pt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadGenericNonLinear_qt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1)) {
                buffer >> element->qt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadGenericNonLinear_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1)) {
                buffer >> element->tp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadGenericNonLinear_tq(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadGenericNonLinear* element = dynamic_cast<LoadGenericNonLinear*>(BaseClass_ptr1)) {
                buffer >> element->tq;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}











namespace CIMPP {
	BaseClass* LoadGenericNonLinear_factory() {
		return new LoadGenericNonLinear;
	}
}

void LoadGenericNonLinear::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:LoadGenericNonLinear"), &LoadGenericNonLinear_factory));
}

void LoadGenericNonLinear::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:LoadGenericNonLinear.bs"), &assign_LoadGenericNonLinear_bs));
	assign_map.insert(std::make_pair(std::string("cim:LoadGenericNonLinear.bt"), &assign_LoadGenericNonLinear_bt));
	assign_map.insert(std::make_pair(std::string("cim:LoadGenericNonLinear.genericNonLinearLoadModelType"), &assign_LoadGenericNonLinear_genericNonLinearLoadModelType));
	assign_map.insert(std::make_pair(std::string("cim:LoadGenericNonLinear.ls"), &assign_LoadGenericNonLinear_ls));
	assign_map.insert(std::make_pair(std::string("cim:LoadGenericNonLinear.lt"), &assign_LoadGenericNonLinear_lt));
	assign_map.insert(std::make_pair(std::string("cim:LoadGenericNonLinear.pt"), &assign_LoadGenericNonLinear_pt));
	assign_map.insert(std::make_pair(std::string("cim:LoadGenericNonLinear.qt"), &assign_LoadGenericNonLinear_qt));
	assign_map.insert(std::make_pair(std::string("cim:LoadGenericNonLinear.tp"), &assign_LoadGenericNonLinear_tp));
	assign_map.insert(std::make_pair(std::string("cim:LoadGenericNonLinear.tq"), &assign_LoadGenericNonLinear_tq));
}

void LoadGenericNonLinear::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
									}

const char LoadGenericNonLinear::debugName[] = "LoadGenericNonLinear";
const char* LoadGenericNonLinear::debugString()
{
	return LoadGenericNonLinear::debugName;
}

const BaseClassDefiner LoadGenericNonLinear::declare()
{
	return BaseClassDefiner(LoadGenericNonLinear::addConstructToMap, LoadGenericNonLinear::addPrimitiveAssignFnsToMap, LoadGenericNonLinear::addClassAssignFnsToMap, LoadGenericNonLinear::debugName);
}
