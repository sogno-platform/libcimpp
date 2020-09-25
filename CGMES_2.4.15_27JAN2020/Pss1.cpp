#include <sstream>
#include "PowerSystemStabilizerDynamics.hpp"
#include "Pss1.hpp"

#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

Pss1::Pss1() {};

Pss1::~Pss1() {};


















bool assign_Pss1_kw(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->kw;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_kpe(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->kpe;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->pmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->ks;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_vsmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->vsmn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_vsmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->vsmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_tpe(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->tpe;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->t5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->t6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_t7(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->t7;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_t8(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->t8;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_t9(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->t9;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_t10(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
                buffer >> element->t10;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1_vadat(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1)) {
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
	BaseClass* Pss1_factory() {
		return new Pss1;
	}
}

void Pss1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Pss1"), &Pss1_factory));
}

void Pss1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Pss1.kw"), &assign_Pss1_kw));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.kf"), &assign_Pss1_kf));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.kpe"), &assign_Pss1_kpe));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.pmin"), &assign_Pss1_pmin));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.ks"), &assign_Pss1_ks));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.vsmn"), &assign_Pss1_vsmn));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.vsmx"), &assign_Pss1_vsmx));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.tpe"), &assign_Pss1_tpe));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.t5"), &assign_Pss1_t5));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.t6"), &assign_Pss1_t6));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.t7"), &assign_Pss1_t7));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.t8"), &assign_Pss1_t8));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.t9"), &assign_Pss1_t9));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.t10"), &assign_Pss1_t10));
	assign_map.insert(std::make_pair(std::string("cim:Pss1.vadat"), &assign_Pss1_vadat));
}

void Pss1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
															}

const char Pss1::debugName[] = "Pss1";
const char* Pss1::debugString()
{
	return Pss1::debugName;
}

const BaseClassDefiner Pss1::declare()
{
	return BaseClassDefiner(Pss1::addConstructToMap, Pss1::addPrimitiveAssignFnsToMap, Pss1::addClassAssignFnsToMap, Pss1::debugName);
}


