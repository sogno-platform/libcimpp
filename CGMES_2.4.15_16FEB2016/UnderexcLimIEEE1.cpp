#include <sstream>
#include "UnderexcitationLimiterDynamics.hpp"
#include "UnderexcLimIEEE1.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

UnderexcLimIEEE1::UnderexcLimIEEE1() {};

UnderexcLimIEEE1::~UnderexcLimIEEE1() {};


bool assign_UnderexcLimIEEE1_kuc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->kuc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_kuf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->kuf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_kui(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->kui;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_kul(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->kul;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_kur(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->kur;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_tu1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->tu1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_tu2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->tu2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_tu3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->tu3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_tu4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->tu4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_vucmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->vucmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_vuimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->vuimax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_vuimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->vuimin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_vulmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->vulmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_vulmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->vulmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimIEEE1_vurmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1)) {
                buffer >> element->vurmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

















namespace CIMPP {
	BaseClass* UnderexcLimIEEE1_factory() {
		return new UnderexcLimIEEE1;
	}
}

void UnderexcLimIEEE1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1"), &UnderexcLimIEEE1_factory));
}

void UnderexcLimIEEE1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.kuc"), &assign_UnderexcLimIEEE1_kuc));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.kuf"), &assign_UnderexcLimIEEE1_kuf));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.kui"), &assign_UnderexcLimIEEE1_kui));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.kul"), &assign_UnderexcLimIEEE1_kul));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.kur"), &assign_UnderexcLimIEEE1_kur));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.tu1"), &assign_UnderexcLimIEEE1_tu1));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.tu2"), &assign_UnderexcLimIEEE1_tu2));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.tu3"), &assign_UnderexcLimIEEE1_tu3));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.tu4"), &assign_UnderexcLimIEEE1_tu4));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.vucmax"), &assign_UnderexcLimIEEE1_vucmax));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.vuimax"), &assign_UnderexcLimIEEE1_vuimax));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.vuimin"), &assign_UnderexcLimIEEE1_vuimin));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.vulmax"), &assign_UnderexcLimIEEE1_vulmax));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.vulmin"), &assign_UnderexcLimIEEE1_vulmin));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.vurmax"), &assign_UnderexcLimIEEE1_vurmax));
}

void UnderexcLimIEEE1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
															}

const char UnderexcLimIEEE1::debugName[] = "UnderexcLimIEEE1";
const char* UnderexcLimIEEE1::debugString()
{
	return UnderexcLimIEEE1::debugName;
}

const BaseClassDefiner UnderexcLimIEEE1::declare()
{
	return BaseClassDefiner(UnderexcLimIEEE1::addConstructToMap, UnderexcLimIEEE1::addPrimitiveAssignFnsToMap, UnderexcLimIEEE1::addClassAssignFnsToMap, UnderexcLimIEEE1::debugName);
}
