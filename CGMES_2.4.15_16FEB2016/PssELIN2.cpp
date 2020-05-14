#include <sstream>
#include "PowerSystemStabilizerDynamics.hpp"
#include "PssELIN2.hpp"

#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PssELIN2::PssELIN2() {};

PssELIN2::~PssELIN2() {};














bool assign_PssELIN2_ts1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ts1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssELIN2_ts2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ts2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssELIN2_ts3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ts3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssELIN2_ts4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ts4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssELIN2_ts5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ts5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssELIN2_ts6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ts6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssELIN2_ks1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ks1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssELIN2_ks2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ks2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssELIN2_ppss(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1)) {
                buffer >> element->ppss;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssELIN2_apss(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1)) {
                buffer >> element->apss;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssELIN2_psslim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1)) {
                buffer >> element->psslim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* PssELIN2_factory() {
		return new PssELIN2;
	}
}

void PssELIN2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PssELIN2"), &PssELIN2_factory));
}

void PssELIN2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PssELIN2.ts1"), &assign_PssELIN2_ts1));
	assign_map.insert(std::make_pair(std::string("cim:PssELIN2.ts2"), &assign_PssELIN2_ts2));
	assign_map.insert(std::make_pair(std::string("cim:PssELIN2.ts3"), &assign_PssELIN2_ts3));
	assign_map.insert(std::make_pair(std::string("cim:PssELIN2.ts4"), &assign_PssELIN2_ts4));
	assign_map.insert(std::make_pair(std::string("cim:PssELIN2.ts5"), &assign_PssELIN2_ts5));
	assign_map.insert(std::make_pair(std::string("cim:PssELIN2.ts6"), &assign_PssELIN2_ts6));
	assign_map.insert(std::make_pair(std::string("cim:PssELIN2.ks1"), &assign_PssELIN2_ks1));
	assign_map.insert(std::make_pair(std::string("cim:PssELIN2.ks2"), &assign_PssELIN2_ks2));
	assign_map.insert(std::make_pair(std::string("cim:PssELIN2.ppss"), &assign_PssELIN2_ppss));
	assign_map.insert(std::make_pair(std::string("cim:PssELIN2.apss"), &assign_PssELIN2_apss));
	assign_map.insert(std::make_pair(std::string("cim:PssELIN2.psslim"), &assign_PssELIN2_psslim));
}

void PssELIN2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
											}

const char PssELIN2::debugName[] = "PssELIN2";
const char* PssELIN2::debugString()
{
	return PssELIN2::debugName;
}

const BaseClassDefiner PssELIN2::declare()
{
	return BaseClassDefiner(PssELIN2::addConstructToMap, PssELIN2::addPrimitiveAssignFnsToMap, PssELIN2::addClassAssignFnsToMap, PssELIN2::debugName);
}


