#include <sstream>
#include "IdentifiedObject.hpp"
#include "BaseVoltage.hpp"

#include "Voltage.hpp"
#include "ConductingEquipment.hpp"
#include "VoltageLevel.hpp"
#include "TransformerEnd.hpp"
#include "TopologicalNode.hpp"

using namespace CIMPP;

BaseVoltage::BaseVoltage() {};

BaseVoltage::~BaseVoltage() {};



bool assign_BaseVoltage_ConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(BaseVoltage* element = dynamic_cast<BaseVoltage*>(BaseClass_ptr1)) {
		if(dynamic_cast<ConductingEquipment*>(BaseClass_ptr2) != nullptr) {
                        element->ConductingEquipment.push_back(dynamic_cast<ConductingEquipment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_BaseVoltage_VoltageLevel(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(BaseVoltage* element = dynamic_cast<BaseVoltage*>(BaseClass_ptr1)) {
		if(dynamic_cast<VoltageLevel*>(BaseClass_ptr2) != nullptr) {
                        element->VoltageLevel.push_back(dynamic_cast<VoltageLevel*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_BaseVoltage_TransformerEnds(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(BaseVoltage* element = dynamic_cast<BaseVoltage*>(BaseClass_ptr1)) {
		if(dynamic_cast<TransformerEnd*>(BaseClass_ptr2) != nullptr) {
                        element->TransformerEnds.push_back(dynamic_cast<TransformerEnd*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_BaseVoltage_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(BaseVoltage* element = dynamic_cast<BaseVoltage*>(BaseClass_ptr1)) {
		if(dynamic_cast<TopologicalNode*>(BaseClass_ptr2) != nullptr) {
                        element->TopologicalNode.push_back(dynamic_cast<TopologicalNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_BaseVoltage_nominalVoltage(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(BaseVoltage* element = dynamic_cast<BaseVoltage*>(BaseClass_ptr1)) {
                buffer >> element->nominalVoltage;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}





namespace CIMPP {
	BaseClass* BaseVoltage_factory() {
		return new BaseVoltage;
	}
}

void BaseVoltage::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:BaseVoltage"), &BaseVoltage_factory));
}

void BaseVoltage::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:BaseVoltage.nominalVoltage"), &assign_BaseVoltage_nominalVoltage));
				}

void BaseVoltage::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:BaseVoltage.ConductingEquipment"), &assign_BaseVoltage_ConductingEquipment));
	assign_map.insert(std::make_pair(std::string("cim:BaseVoltage.VoltageLevel"), &assign_BaseVoltage_VoltageLevel));
	assign_map.insert(std::make_pair(std::string("cim:BaseVoltage.TransformerEnds"), &assign_BaseVoltage_TransformerEnds));
	assign_map.insert(std::make_pair(std::string("cim:BaseVoltage.TopologicalNode"), &assign_BaseVoltage_TopologicalNode));
}

const char BaseVoltage::debugName[] = "BaseVoltage";
const char* BaseVoltage::debugString()
{
	return BaseVoltage::debugName;
}

const BaseClassDefiner BaseVoltage::declare()
{
	return BaseClassDefiner(BaseVoltage::addConstructToMap, BaseVoltage::addPrimitiveAssignFnsToMap, BaseVoltage::addClassAssignFnsToMap, BaseVoltage::debugName);
}


