#include <sstream>
#include "IdentifiedObject.hpp"
#include "TransformerEnd.hpp"

#include "BaseVoltage.hpp"
#include "PhaseTapChanger.hpp"
#include "RatioTapChanger.hpp"
#include "Terminal.hpp"
#include "Integer.hpp"
#include "Boolean.hpp"
#include "Resistance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

TransformerEnd::TransformerEnd(): BaseVoltage(nullptr), PhaseTapChanger(nullptr), RatioTapChanger(nullptr), Terminal(nullptr) {};

TransformerEnd::~TransformerEnd() {};






bool assign_TransformerEnd_endNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->endNumber;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TransformerEnd_grounded(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->grounded;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TransformerEnd_rground(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->rground;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TransformerEnd_xground(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->xground;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_BaseVoltage_TransformerEnds(BaseClass*, BaseClass*);
bool assign_TransformerEnd_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1)) {
                element->BaseVoltage = dynamic_cast<BaseVoltage*>(BaseClass_ptr2);
                if(element->BaseVoltage != nullptr)
                        return assign_BaseVoltage_TransformerEnds(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_TransformerEnd_PhaseTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1)) {
                element->PhaseTapChanger = dynamic_cast<PhaseTapChanger*>(BaseClass_ptr2);
                if(element->PhaseTapChanger != nullptr)
                        return true;
        }
        return false;
}

bool assign_TransformerEnd_RatioTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1)) {
                element->RatioTapChanger = dynamic_cast<RatioTapChanger*>(BaseClass_ptr2);
                if(element->RatioTapChanger != nullptr)
                        return true;
        }
        return false;
}

bool assign_Terminal_TransformerEnd(BaseClass*, BaseClass*);
bool assign_TransformerEnd_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1)) {
                element->Terminal = dynamic_cast<Terminal*>(BaseClass_ptr2);
                if(element->Terminal != nullptr)
                        return assign_Terminal_TransformerEnd(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}





namespace CIMPP {
	BaseClass* TransformerEnd_factory() {
		return new TransformerEnd;
	}
}

void TransformerEnd::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TransformerEnd"), &TransformerEnd_factory));
}

void TransformerEnd::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
					assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.endNumber"), &assign_TransformerEnd_endNumber));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.grounded"), &assign_TransformerEnd_grounded));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.rground"), &assign_TransformerEnd_rground));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.xground"), &assign_TransformerEnd_xground));
}

void TransformerEnd::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.BaseVoltage"), &assign_TransformerEnd_BaseVoltage));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.PhaseTapChanger"), &assign_TransformerEnd_PhaseTapChanger));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.RatioTapChanger"), &assign_TransformerEnd_RatioTapChanger));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.Terminal"), &assign_TransformerEnd_Terminal));
				}

const char TransformerEnd::debugName[] = "TransformerEnd";
const char* TransformerEnd::debugString()
{
	return TransformerEnd::debugName;
}

const BaseClassDefiner TransformerEnd::declare()
{
	return BaseClassDefiner(TransformerEnd::addConstructToMap, TransformerEnd::addPrimitiveAssignFnsToMap, TransformerEnd::addClassAssignFnsToMap, TransformerEnd::debugName);
}
