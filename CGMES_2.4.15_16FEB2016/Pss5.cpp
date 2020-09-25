#include <sstream>
#include "PowerSystemStabilizerDynamics.hpp"
#include "Pss5.hpp"

#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

Pss5::Pss5() {};

Pss5::~Pss5() {};




















bool assign_Pss5_kpe(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->kpe;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_isfreq(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->isfreq;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_kpss(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->kpss;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_ctw2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->ctw2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_tw1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->tw1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_tw2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->tw2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_tl1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->tl1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_tl2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->tl2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_tl3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->tl3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_tl4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->tl4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_vsmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->vsmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_vsmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->vsmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_tpe(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->tpe;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_pmm(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->pmm;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_deadband(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->deadband;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss5_vadat(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1)) {
                buffer >> element->vadat;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* Pss5_factory() {
		return new Pss5;
	}
}

void Pss5::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Pss5"), &Pss5_factory));
}

void Pss5::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Pss5.kpe"), &assign_Pss5_kpe));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.kf"), &assign_Pss5_kf));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.isfreq"), &assign_Pss5_isfreq));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.kpss"), &assign_Pss5_kpss));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.ctw2"), &assign_Pss5_ctw2));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.tw1"), &assign_Pss5_tw1));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.tw2"), &assign_Pss5_tw2));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.tl1"), &assign_Pss5_tl1));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.tl2"), &assign_Pss5_tl2));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.tl3"), &assign_Pss5_tl3));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.tl4"), &assign_Pss5_tl4));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.vsmn"), &assign_Pss5_vsmn));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.vsmx"), &assign_Pss5_vsmx));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.tpe"), &assign_Pss5_tpe));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.pmm"), &assign_Pss5_pmm));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.deadband"), &assign_Pss5_deadband));
	assign_map.insert(std::make_pair(std::string("cim:Pss5.vadat"), &assign_Pss5_vadat));
}

void Pss5::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																	}

const char Pss5::debugName[] = "Pss5";
const char* Pss5::debugString()
{
	return Pss5::debugName;
}

const BaseClassDefiner Pss5::declare()
{
	return BaseClassDefiner(Pss5::addConstructToMap, Pss5::addPrimitiveAssignFnsToMap, Pss5::addClassAssignFnsToMap, Pss5::debugName);
}


