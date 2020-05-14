#include <sstream>
#include "OverexcitationLimiterDynamics.hpp"
#include "OverexcLimIEEE.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

OverexcLimIEEE::OverexcLimIEEE() {};

OverexcLimIEEE::~OverexcLimIEEE() {};









bool assign_OverexcLimIEEE_itfpu(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1)) {
                buffer >> element->itfpu;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimIEEE_ifdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1)) {
                buffer >> element->ifdmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimIEEE_ifdlim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1)) {
                buffer >> element->ifdlim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimIEEE_hyst(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1)) {
                buffer >> element->hyst;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimIEEE_kcd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1)) {
                buffer >> element->kcd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OverexcLimIEEE_kramp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1)) {
                buffer >> element->kramp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* OverexcLimIEEE_factory() {
		return new OverexcLimIEEE;
	}
}

void OverexcLimIEEE::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE"), &OverexcLimIEEE_factory));
}

void OverexcLimIEEE::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE.itfpu"), &assign_OverexcLimIEEE_itfpu));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE.ifdmax"), &assign_OverexcLimIEEE_ifdmax));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE.ifdlim"), &assign_OverexcLimIEEE_ifdlim));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE.hyst"), &assign_OverexcLimIEEE_hyst));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE.kcd"), &assign_OverexcLimIEEE_kcd));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE.kramp"), &assign_OverexcLimIEEE_kramp));
}

void OverexcLimIEEE::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
						}

const char OverexcLimIEEE::debugName[] = "OverexcLimIEEE";
const char* OverexcLimIEEE::debugString()
{
	return OverexcLimIEEE::debugName;
}

const BaseClassDefiner OverexcLimIEEE::declare()
{
	return BaseClassDefiner(OverexcLimIEEE::addConstructToMap, OverexcLimIEEE::addPrimitiveAssignFnsToMap, OverexcLimIEEE::addClassAssignFnsToMap, OverexcLimIEEE::debugName);
}


