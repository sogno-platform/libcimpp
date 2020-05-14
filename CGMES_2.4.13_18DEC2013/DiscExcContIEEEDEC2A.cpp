#include <sstream>
#include "DiscontinuousExcitationControlDynamics.hpp"
#include "DiscExcContIEEEDEC2A.hpp"

#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

DiscExcContIEEEDEC2A::DiscExcContIEEEDEC2A() {};

DiscExcContIEEEDEC2A::~DiscExcContIEEEDEC2A() {};








bool assign_DiscExcContIEEEDEC2A_vk(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1)) {
                buffer >> element->vk;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DiscExcContIEEEDEC2A_td1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1)) {
                buffer >> element->td1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DiscExcContIEEEDEC2A_td2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1)) {
                buffer >> element->td2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DiscExcContIEEEDEC2A_vdmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1)) {
                buffer >> element->vdmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DiscExcContIEEEDEC2A_vdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1)) {
                buffer >> element->vdmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* DiscExcContIEEEDEC2A_factory() {
		return new DiscExcContIEEEDEC2A;
	}
}

void DiscExcContIEEEDEC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC2A"), &DiscExcContIEEEDEC2A_factory));
}

void DiscExcContIEEEDEC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC2A.vk"), &assign_DiscExcContIEEEDEC2A_vk));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC2A.td1"), &assign_DiscExcContIEEEDEC2A_td1));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC2A.td2"), &assign_DiscExcContIEEEDEC2A_td2));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC2A.vdmin"), &assign_DiscExcContIEEEDEC2A_vdmin));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC2A.vdmax"), &assign_DiscExcContIEEEDEC2A_vdmax));
}

void DiscExcContIEEEDEC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
					}

const char DiscExcContIEEEDEC2A::debugName[] = "DiscExcContIEEEDEC2A";
const char* DiscExcContIEEEDEC2A::debugString()
{
	return DiscExcContIEEEDEC2A::debugName;
}

const BaseClassDefiner DiscExcContIEEEDEC2A::declare()
{
	return BaseClassDefiner(DiscExcContIEEEDEC2A::addConstructToMap, DiscExcContIEEEDEC2A::addPrimitiveAssignFnsToMap, DiscExcContIEEEDEC2A::addClassAssignFnsToMap, DiscExcContIEEEDEC2A::debugName);
}


