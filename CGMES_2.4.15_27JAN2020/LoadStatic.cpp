#include <sstream>
#include "IdentifiedObject.hpp"
#include "LoadStatic.hpp"

#include "LoadAggregate.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "StaticLoadModelKind.hpp"

using namespace CIMPP;

LoadStatic::LoadStatic(): LoadAggregate(nullptr) {};

LoadStatic::~LoadStatic() {};



bool assign_LoadStatic_ep1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->ep1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_ep2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->ep2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_ep3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->ep3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_eq1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->eq1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_eq2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->eq2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_eq3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->eq3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_kp1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->kp1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_kp2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->kp2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_kp3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->kp3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_kp4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->kp4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_kpf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->kpf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_kq1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->kq1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_kq2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->kq2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_kq3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->kq3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_kq4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->kq4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_kqf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->kqf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_LoadStatic_staticLoadModelType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                buffer >> element->staticLoadModelType;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_LoadAggregate_LoadStatic(BaseClass*, BaseClass*);
bool assign_LoadStatic_LoadAggregate(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1)) {
                element->LoadAggregate = dynamic_cast<LoadAggregate*>(BaseClass_ptr2);
                if(element->LoadAggregate != nullptr)
                        return assign_LoadAggregate_LoadStatic(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}


















namespace CIMPP {
	BaseClass* LoadStatic_factory() {
		return new LoadStatic;
	}
}

void LoadStatic::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:LoadStatic"), &LoadStatic_factory));
}

void LoadStatic::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:LoadStatic.ep1"), &assign_LoadStatic_ep1));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.ep2"), &assign_LoadStatic_ep2));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.ep3"), &assign_LoadStatic_ep3));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.eq1"), &assign_LoadStatic_eq1));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.eq2"), &assign_LoadStatic_eq2));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.eq3"), &assign_LoadStatic_eq3));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.kp1"), &assign_LoadStatic_kp1));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.kp2"), &assign_LoadStatic_kp2));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.kp3"), &assign_LoadStatic_kp3));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.kp4"), &assign_LoadStatic_kp4));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.kpf"), &assign_LoadStatic_kpf));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.kq1"), &assign_LoadStatic_kq1));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.kq2"), &assign_LoadStatic_kq2));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.kq3"), &assign_LoadStatic_kq3));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.kq4"), &assign_LoadStatic_kq4));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.kqf"), &assign_LoadStatic_kqf));
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.staticLoadModelType"), &assign_LoadStatic_staticLoadModelType));
}

void LoadStatic::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:LoadStatic.LoadAggregate"), &assign_LoadStatic_LoadAggregate));
																	}

const char LoadStatic::debugName[] = "LoadStatic";
const char* LoadStatic::debugString()
{
	return LoadStatic::debugName;
}

const BaseClassDefiner LoadStatic::declare()
{
	return BaseClassDefiner(LoadStatic::addConstructToMap, LoadStatic::addPrimitiveAssignFnsToMap, LoadStatic::addClassAssignFnsToMap, LoadStatic::debugName);
}
