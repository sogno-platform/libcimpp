#include <sstream>
#include "ACDCTerminal.hpp"
#include "Terminal.hpp"

#include "TopologicalNode.hpp"
#include "ConductingEquipment.hpp"
#include "ACDCConverter.hpp"
#include "ConnectivityNode.hpp"
#include "PhaseCode.hpp"
#include "MutualCoupling.hpp"
#include "MutualCoupling.hpp"
#include "RegulatingControl.hpp"
#include "TieFlow.hpp"
#include "TransformerEnd.hpp"
#include "SvPowerFlow.hpp"
#include "RemoteInputSignal.hpp"

using namespace CIMPP;

Terminal::Terminal(): TopologicalNode(nullptr), ConductingEquipment(nullptr), ConnectivityNode(nullptr), RegulatingControl(nullptr), TieFlow(nullptr), SvPowerFlow(nullptr) {};

Terminal::~Terminal() {};


bool assign_TopologicalNode_Terminal(BaseClass*, BaseClass*);
bool assign_Terminal_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1)) {
                element->TopologicalNode = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
                if(element->TopologicalNode != nullptr)
                        return assign_TopologicalNode_Terminal(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_ConductingEquipment_Terminals(BaseClass*, BaseClass*);
bool assign_Terminal_ConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1)) {
                element->ConductingEquipment = dynamic_cast<ConductingEquipment*>(BaseClass_ptr2);
                if(element->ConductingEquipment != nullptr)
                        return assign_ConductingEquipment_Terminals(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_Terminal_ConverterDCSides(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1)) {
		if(dynamic_cast<ACDCConverter*>(BaseClass_ptr2) != nullptr) {
                        element->ConverterDCSides.push_back(dynamic_cast<ACDCConverter*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ConnectivityNode_Terminals(BaseClass*, BaseClass*);
bool assign_Terminal_ConnectivityNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1)) {
                element->ConnectivityNode = dynamic_cast<ConnectivityNode*>(BaseClass_ptr2);
                if(element->ConnectivityNode != nullptr)
                        return assign_ConnectivityNode_Terminals(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}


bool assign_Terminal_HasFirstMutualCoupling(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1)) {
		if(dynamic_cast<MutualCoupling*>(BaseClass_ptr2) != nullptr) {
                        element->HasFirstMutualCoupling.push_back(dynamic_cast<MutualCoupling*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Terminal_HasSecondMutualCoupling(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1)) {
		if(dynamic_cast<MutualCoupling*>(BaseClass_ptr2) != nullptr) {
                        element->HasSecondMutualCoupling.push_back(dynamic_cast<MutualCoupling*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Terminal_RegulatingControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1)) {
                element->RegulatingControl = dynamic_cast<RegulatingControl*>(BaseClass_ptr2);
                if(element->RegulatingControl != nullptr)
                        return true;
        }
        return false;
}

bool assign_Terminal_TieFlow(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1)) {
                element->TieFlow = dynamic_cast<TieFlow*>(BaseClass_ptr2);
                if(element->TieFlow != nullptr)
                        return true;
        }
        return false;
}

bool assign_Terminal_TransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1)) {
		if(dynamic_cast<TransformerEnd*>(BaseClass_ptr2) != nullptr) {
                        element->TransformerEnd.push_back(dynamic_cast<TransformerEnd*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Terminal_SvPowerFlow(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1)) {
                element->SvPowerFlow = dynamic_cast<SvPowerFlow*>(BaseClass_ptr2);
                if(element->SvPowerFlow != nullptr)
                        return true;
        }
        return false;
}

bool assign_Terminal_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1)) {
		if(dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2) != nullptr) {
                        element->RemoteInputSignal.push_back(dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}






bool assign_Terminal_phases(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1)) {
                buffer >> element->phases;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}








namespace CIMPP {
	BaseClass* Terminal_factory() {
		return new Terminal;
	}
}

void Terminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Terminal"), &Terminal_factory));
}

void Terminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
					assign_map.insert(std::make_pair(std::string("cim:Terminal.phases"), &assign_Terminal_phases));
							}

void Terminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Terminal.TopologicalNode"), &assign_Terminal_TopologicalNode));
	assign_map.insert(std::make_pair(std::string("cim:Terminal.ConductingEquipment"), &assign_Terminal_ConductingEquipment));
	assign_map.insert(std::make_pair(std::string("cim:Terminal.ConverterDCSides"), &assign_Terminal_ConverterDCSides));
	assign_map.insert(std::make_pair(std::string("cim:Terminal.ConnectivityNode"), &assign_Terminal_ConnectivityNode));
		assign_map.insert(std::make_pair(std::string("cim:Terminal.HasFirstMutualCoupling"), &assign_Terminal_HasFirstMutualCoupling));
	assign_map.insert(std::make_pair(std::string("cim:Terminal.HasSecondMutualCoupling"), &assign_Terminal_HasSecondMutualCoupling));
	assign_map.insert(std::make_pair(std::string("cim:Terminal.RegulatingControl"), &assign_Terminal_RegulatingControl));
	assign_map.insert(std::make_pair(std::string("cim:Terminal.TieFlow"), &assign_Terminal_TieFlow));
	assign_map.insert(std::make_pair(std::string("cim:Terminal.TransformerEnd"), &assign_Terminal_TransformerEnd));
	assign_map.insert(std::make_pair(std::string("cim:Terminal.SvPowerFlow"), &assign_Terminal_SvPowerFlow));
	assign_map.insert(std::make_pair(std::string("cim:Terminal.RemoteInputSignal"), &assign_Terminal_RemoteInputSignal));
}

const char Terminal::debugName[] = "Terminal";
const char* Terminal::debugString()
{
	return Terminal::debugName;
}

const BaseClassDefiner Terminal::declare()
{
	return BaseClassDefiner(Terminal::addConstructToMap, Terminal::addPrimitiveAssignFnsToMap, Terminal::addClassAssignFnsToMap, Terminal::debugName);
}


