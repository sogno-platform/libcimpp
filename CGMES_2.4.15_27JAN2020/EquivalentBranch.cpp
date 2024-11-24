#include <sstream>
#include "EquivalentEquipment.hpp"
#include "EquivalentBranch.hpp"

#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

EquivalentBranch::EquivalentBranch() {};

EquivalentBranch::~EquivalentBranch() {};


bool assign_EquivalentBranch_negativeR12(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->negativeR12;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_negativeR21(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->negativeR21;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_negativeX12(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->negativeX12;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_negativeX21(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->negativeX21;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_positiveR12(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->positiveR12;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_positiveR21(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->positiveR21;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_positiveX12(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->positiveX12;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_positiveX21(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->positiveX21;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_r21(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->r21;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->x;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_x21(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->x21;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_zeroR12(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->zeroR12;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_zeroR21(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->zeroR21;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_zeroX12(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->zeroX12;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EquivalentBranch_zeroX21(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1)) {
                buffer >> element->zeroX21;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


















namespace CIMPP {
	BaseClass* EquivalentBranch_factory() {
		return new EquivalentBranch;
	}
}

void EquivalentBranch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:EquivalentBranch"), &EquivalentBranch_factory));
}

void EquivalentBranch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.negativeR12"), &assign_EquivalentBranch_negativeR12));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.negativeR21"), &assign_EquivalentBranch_negativeR21));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.negativeX12"), &assign_EquivalentBranch_negativeX12));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.negativeX21"), &assign_EquivalentBranch_negativeX21));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.positiveR12"), &assign_EquivalentBranch_positiveR12));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.positiveR21"), &assign_EquivalentBranch_positiveR21));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.positiveX12"), &assign_EquivalentBranch_positiveX12));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.positiveX21"), &assign_EquivalentBranch_positiveX21));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.r"), &assign_EquivalentBranch_r));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.r21"), &assign_EquivalentBranch_r21));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.x"), &assign_EquivalentBranch_x));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.x21"), &assign_EquivalentBranch_x21));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.zeroR12"), &assign_EquivalentBranch_zeroR12));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.zeroR21"), &assign_EquivalentBranch_zeroR21));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.zeroX12"), &assign_EquivalentBranch_zeroX12));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentBranch.zeroX21"), &assign_EquivalentBranch_zeroX21));
}

void EquivalentBranch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																}

const char EquivalentBranch::debugName[] = "EquivalentBranch";
const char* EquivalentBranch::debugString()
{
	return EquivalentBranch::debugName;
}

const BaseClassDefiner EquivalentBranch::declare()
{
	return BaseClassDefiner(EquivalentBranch::addConstructToMap, EquivalentBranch::addPrimitiveAssignFnsToMap, EquivalentBranch::addClassAssignFnsToMap, EquivalentBranch::debugName);
}
