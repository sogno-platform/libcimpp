#include <sstream>
#include "OverexcitationLimiterDynamics.hpp"
#include "OverexcLimX1.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

OverexcLimX1::OverexcLimX1() {};

OverexcLimX1::~OverexcLimX1() {};













bool assign_OverexcLimX1_efdrated(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->efdrated;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimX1_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->efd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimX1_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimX1_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->efd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimX1_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimX1_efd3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->efd3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimX1_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimX1_efddes(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->efddes;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimX1_kmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->kmx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimX1_vlow(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1)) {
                buffer >> element->vlow;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* OverexcLimX1_factory() {
		return new OverexcLimX1;
	}
}

void OverexcLimX1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:OverexcLimX1"), &OverexcLimX1_factory));
}

void OverexcLimX1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.efdrated"), &assign_OverexcLimX1_efdrated));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.efd1"), &assign_OverexcLimX1_efd1));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.t1"), &assign_OverexcLimX1_t1));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.efd2"), &assign_OverexcLimX1_efd2));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.t2"), &assign_OverexcLimX1_t2));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.efd3"), &assign_OverexcLimX1_efd3));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.t3"), &assign_OverexcLimX1_t3));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.efddes"), &assign_OverexcLimX1_efddes));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.kmx"), &assign_OverexcLimX1_kmx));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.vlow"), &assign_OverexcLimX1_vlow));
}

void OverexcLimX1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
										}

const char OverexcLimX1::debugName[] = "OverexcLimX1";
const char* OverexcLimX1::debugString()
{
	return OverexcLimX1::debugName;
}

const BaseClassDefiner OverexcLimX1::declare()
{
	return BaseClassDefiner(OverexcLimX1::addConstructToMap, OverexcLimX1::addPrimitiveAssignFnsToMap, OverexcLimX1::addClassAssignFnsToMap, OverexcLimX1::debugName);
}


