#include <sstream>
#include "UnderexcitationLimiterDynamics.hpp"
#include "UnderexcLimX2.hpp"

#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

UnderexcLimX2::UnderexcLimX2() {};

UnderexcLimX2::~UnderexcLimX2() {};










bool assign_UnderexcLimX2_kf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1)) {
                buffer >> element->kf2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimX2_tf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1)) {
                buffer >> element->tf2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimX2_km(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1)) {
                buffer >> element->km;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimX2_tm(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1)) {
                buffer >> element->tm;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimX2_melmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1)) {
                buffer >> element->melmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimX2_qo(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1)) {
                buffer >> element->qo;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLimX2_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* UnderexcLimX2_factory() {
		return new UnderexcLimX2;
	}
}

void UnderexcLimX2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:UnderexcLimX2"), &UnderexcLimX2_factory));
}

void UnderexcLimX2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX2.kf2"), &assign_UnderexcLimX2_kf2));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX2.tf2"), &assign_UnderexcLimX2_tf2));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX2.km"), &assign_UnderexcLimX2_km));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX2.tm"), &assign_UnderexcLimX2_tm));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX2.melmax"), &assign_UnderexcLimX2_melmax));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX2.qo"), &assign_UnderexcLimX2_qo));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimX2.r"), &assign_UnderexcLimX2_r));
}

void UnderexcLimX2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
							}

const char UnderexcLimX2::debugName[] = "UnderexcLimX2";
const char* UnderexcLimX2::debugString()
{
	return UnderexcLimX2::debugName;
}

const BaseClassDefiner UnderexcLimX2::declare()
{
	return BaseClassDefiner(UnderexcLimX2::addConstructToMap, UnderexcLimX2::addPrimitiveAssignFnsToMap, UnderexcLimX2::addClassAssignFnsToMap, UnderexcLimX2::debugName);
}


