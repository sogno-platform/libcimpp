#include <sstream>
#include "UnderexcitationLimiterDynamics.hpp"
#include "UnderexcLim2Simplified.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

UnderexcLim2Simplified::UnderexcLim2Simplified() {};

UnderexcLim2Simplified::~UnderexcLim2Simplified() {};










bool assign_UnderexcLim2Simplified_q0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1)) {
                buffer >> element->q0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLim2Simplified_q1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1)) {
                buffer >> element->q1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLim2Simplified_p0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1)) {
                buffer >> element->p0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLim2Simplified_p1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1)) {
                buffer >> element->p1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLim2Simplified_kui(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1)) {
                buffer >> element->kui;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLim2Simplified_vuimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1)) {
                buffer >> element->vuimin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_UnderexcLim2Simplified_vuimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1)) {
                buffer >> element->vuimax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* UnderexcLim2Simplified_factory() {
		return new UnderexcLim2Simplified;
	}
}

void UnderexcLim2Simplified::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified"), &UnderexcLim2Simplified_factory));
}

void UnderexcLim2Simplified::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.q0"), &assign_UnderexcLim2Simplified_q0));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.q1"), &assign_UnderexcLim2Simplified_q1));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.p0"), &assign_UnderexcLim2Simplified_p0));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.p1"), &assign_UnderexcLim2Simplified_p1));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.kui"), &assign_UnderexcLim2Simplified_kui));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.vuimin"), &assign_UnderexcLim2Simplified_vuimin));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.vuimax"), &assign_UnderexcLim2Simplified_vuimax));
}

void UnderexcLim2Simplified::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
							}

const char UnderexcLim2Simplified::debugName[] = "UnderexcLim2Simplified";
const char* UnderexcLim2Simplified::debugString()
{
	return UnderexcLim2Simplified::debugName;
}

const BaseClassDefiner UnderexcLim2Simplified::declare()
{
	return BaseClassDefiner(UnderexcLim2Simplified::addConstructToMap, UnderexcLim2Simplified::addPrimitiveAssignFnsToMap, UnderexcLim2Simplified::addClassAssignFnsToMap, UnderexcLim2Simplified::debugName);
}


