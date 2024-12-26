#include <sstream>
#include "UnderexcitationLimiterDynamics.hpp"
#include "UnderexcLimX1.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

UnderexcLimX1::UnderexcLimX1() {};

UnderexcLimX1::~UnderexcLimX1() {};


bool assign_UnderexcLimX1_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->k;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimX1_kf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->kf2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimX1_km(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->km;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimX1_melmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->melmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimX1_tf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->tf2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimX1_tm(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->tm;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}








namespace CIMPP {
	BaseClass* UnderexcLimX1_factory() {
		return new UnderexcLimX1;
	}
}

void UnderexcLimX1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:UnderexcLimX1"), &UnderexcLimX1_factory));
}

void UnderexcLimX1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX1.k"), &assign_UnderexcLimX1_k));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX1.kf2"), &assign_UnderexcLimX1_kf2));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX1.km"), &assign_UnderexcLimX1_km));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX1.melmax"), &assign_UnderexcLimX1_melmax));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX1.tf2"), &assign_UnderexcLimX1_tf2));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX1.tm"), &assign_UnderexcLimX1_tm));
}

void UnderexcLimX1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
						}

const char UnderexcLimX1::debugName[] = "UnderexcLimX1";
const char* UnderexcLimX1::debugString()
{
	return UnderexcLimX1::debugName;
}

const BaseClassDefiner UnderexcLimX1::declare()
{
	return BaseClassDefiner(UnderexcLimX1::addConstructToMap, UnderexcLimX1::addPrimitiveAssignFnsToMap, UnderexcLimX1::addClassAssignFnsToMap, UnderexcLimX1::debugName);
}
