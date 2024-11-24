#include <sstream>
#include "DiscontinuousExcitationControlDynamics.hpp"
#include "DiscExcContIEEEDEC3A.hpp"

#include "Seconds.hpp"
#include "PU.hpp"

using namespace CIMPP;

DiscExcContIEEEDEC3A::DiscExcContIEEEDEC3A() {};

DiscExcContIEEEDEC3A::~DiscExcContIEEEDEC3A() {};


bool assign_DiscExcContIEEEDEC3A_tdr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiscExcContIEEEDEC3A* element = dynamic_cast<DiscExcContIEEEDEC3A*>(BaseClass_ptr1)) {
                buffer >> element->tdr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DiscExcContIEEEDEC3A_vtmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiscExcContIEEEDEC3A* element = dynamic_cast<DiscExcContIEEEDEC3A*>(BaseClass_ptr1)) {
                buffer >> element->vtmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}




namespace CIMPP {
	BaseClass* DiscExcContIEEEDEC3A_factory() {
		return new DiscExcContIEEEDEC3A;
	}
}

void DiscExcContIEEEDEC3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC3A"), &DiscExcContIEEEDEC3A_factory));
}

void DiscExcContIEEEDEC3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC3A.tdr"), &assign_DiscExcContIEEEDEC3A_tdr));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC3A.vtmin"), &assign_DiscExcContIEEEDEC3A_vtmin));
}

void DiscExcContIEEEDEC3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		}

const char DiscExcContIEEEDEC3A::debugName[] = "DiscExcContIEEEDEC3A";
const char* DiscExcContIEEEDEC3A::debugString()
{
	return DiscExcContIEEEDEC3A::debugName;
}

const BaseClassDefiner DiscExcContIEEEDEC3A::declare()
{
	return BaseClassDefiner(DiscExcContIEEEDEC3A::addConstructToMap, DiscExcContIEEEDEC3A::addPrimitiveAssignFnsToMap, DiscExcContIEEEDEC3A::addClassAssignFnsToMap, DiscExcContIEEEDEC3A::debugName);
}
