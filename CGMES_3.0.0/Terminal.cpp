/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Terminal.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ACDCConverter.hpp"
#include "AuxiliaryEquipment.hpp"
#include "ConductingEquipment.hpp"
#include "ConnectivityNode.hpp"
#include "MutualCoupling.hpp"
#include "RegulatingControl.hpp"
#include "RemoteInputSignal.hpp"
#include "SvPowerFlow.hpp"
#include "TieFlow.hpp"
#include "TopologicalNode.hpp"
#include "TransformerEnd.hpp"

using namespace CIMPP;

Terminal::Terminal() : ConductingEquipment(nullptr), ConnectivityNode(nullptr), SvPowerFlow(nullptr), TopologicalNode(nullptr) {}
Terminal::~Terminal() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
	CGMESProfile::EQ,
	CGMESProfile::EQBD,
	CGMESProfile::OP,
	CGMESProfile::SC,
	CGMESProfile::SSH,
	CGMESProfile::SV,
	CGMESProfile::TP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Terminal.AuxiliaryEquipment", { CGMESProfile::EQ, } },
	{ "cim:Terminal.ConductingEquipment", { CGMESProfile::DY, CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:Terminal.ConnectivityNode", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:Terminal.ConverterDCSides", { CGMESProfile::EQ, } },
	{ "cim:Terminal.HasFirstMutualCoupling", { CGMESProfile::SC, } },
	{ "cim:Terminal.HasSecondMutualCoupling", { CGMESProfile::SC, } },
	{ "cim:Terminal.RegulatingControl", { CGMESProfile::EQ, } },
	{ "cim:Terminal.RemoteInputSignal", { CGMESProfile::DY, } },
	{ "cim:Terminal.SvPowerFlow", { CGMESProfile::SV, } },
	{ "cim:Terminal.TieFlow", { CGMESProfile::EQ, } },
	{ "cim:Terminal.TopologicalNode", { CGMESProfile::TP, } },
	{ "cim:Terminal.TransformerEnd", { CGMESProfile::EQ, } },
	{ "cim:Terminal.phases", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
Terminal::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Terminal::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ACDCTerminal::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_AuxiliaryEquipment_Terminal(BaseClass*, BaseClass*);
bool assign_Terminal_AuxiliaryEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	AuxiliaryEquipment* element2 = dynamic_cast<AuxiliaryEquipment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->AuxiliaryEquipment.begin(), element->AuxiliaryEquipment.end(), element2) == element->AuxiliaryEquipment.end())
		{
			element->AuxiliaryEquipment.push_back(element2);
			return assign_AuxiliaryEquipment_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ConductingEquipment_Terminals(BaseClass*, BaseClass*);
bool assign_Terminal_ConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	ConductingEquipment* element2 = dynamic_cast<ConductingEquipment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ConductingEquipment != element2)
		{
			element->ConductingEquipment = element2;
			return assign_ConductingEquipment_Terminals(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ConnectivityNode_Terminals(BaseClass*, BaseClass*);
bool assign_Terminal_ConnectivityNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	ConnectivityNode* element2 = dynamic_cast<ConnectivityNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ConnectivityNode != element2)
		{
			element->ConnectivityNode = element2;
			return assign_ConnectivityNode_Terminals(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ACDCConverter_PccTerminal(BaseClass*, BaseClass*);
bool assign_Terminal_ConverterDCSides(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	ACDCConverter* element2 = dynamic_cast<ACDCConverter*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ConverterDCSides.begin(), element->ConverterDCSides.end(), element2) == element->ConverterDCSides.end())
		{
			element->ConverterDCSides.push_back(element2);
			return assign_ACDCConverter_PccTerminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_MutualCoupling_First_Terminal(BaseClass*, BaseClass*);
bool assign_Terminal_HasFirstMutualCoupling(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	MutualCoupling* element2 = dynamic_cast<MutualCoupling*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->HasFirstMutualCoupling.begin(), element->HasFirstMutualCoupling.end(), element2) == element->HasFirstMutualCoupling.end())
		{
			element->HasFirstMutualCoupling.push_back(element2);
			return assign_MutualCoupling_First_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_MutualCoupling_Second_Terminal(BaseClass*, BaseClass*);
bool assign_Terminal_HasSecondMutualCoupling(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	MutualCoupling* element2 = dynamic_cast<MutualCoupling*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->HasSecondMutualCoupling.begin(), element->HasSecondMutualCoupling.end(), element2) == element->HasSecondMutualCoupling.end())
		{
			element->HasSecondMutualCoupling.push_back(element2);
			return assign_MutualCoupling_Second_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RegulatingControl_Terminal(BaseClass*, BaseClass*);
bool assign_Terminal_RegulatingControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	RegulatingControl* element2 = dynamic_cast<RegulatingControl*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RegulatingControl.begin(), element->RegulatingControl.end(), element2) == element->RegulatingControl.end())
		{
			element->RegulatingControl.push_back(element2);
			return assign_RegulatingControl_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RemoteInputSignal_Terminal(BaseClass*, BaseClass*);
bool assign_Terminal_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RemoteInputSignal.begin(), element->RemoteInputSignal.end(), element2) == element->RemoteInputSignal.end())
		{
			element->RemoteInputSignal.push_back(element2);
			return assign_RemoteInputSignal_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SvPowerFlow_Terminal(BaseClass*, BaseClass*);
bool assign_Terminal_SvPowerFlow(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	SvPowerFlow* element2 = dynamic_cast<SvPowerFlow*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SvPowerFlow != element2)
		{
			element->SvPowerFlow = element2;
			return assign_SvPowerFlow_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TieFlow_Terminal(BaseClass*, BaseClass*);
bool assign_Terminal_TieFlow(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	TieFlow* element2 = dynamic_cast<TieFlow*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TieFlow.begin(), element->TieFlow.end(), element2) == element->TieFlow.end())
		{
			element->TieFlow.push_back(element2);
			return assign_TieFlow_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TopologicalNode_Terminal(BaseClass*, BaseClass*);
bool assign_Terminal_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TopologicalNode != element2)
		{
			element->TopologicalNode = element2;
			return assign_TopologicalNode_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TransformerEnd_Terminal(BaseClass*, BaseClass*);
bool assign_Terminal_TransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	TransformerEnd* element2 = dynamic_cast<TransformerEnd*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TransformerEnd.begin(), element->TransformerEnd.end(), element2) == element->TransformerEnd.end())
		{
			element->TransformerEnd.push_back(element2);
			return assign_TransformerEnd_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Terminal_phases(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Terminal* element = dynamic_cast<Terminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->phases;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_Terminal_ConductingEquipment(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Terminal* element = dynamic_cast<const Terminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ConductingEquipment != 0)
		{
			BaseClass_list.push_back(element->ConductingEquipment);
			return true;
		}
	}
	return false;
}

bool get_Terminal_ConnectivityNode(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Terminal* element = dynamic_cast<const Terminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ConnectivityNode != 0)
		{
			BaseClass_list.push_back(element->ConnectivityNode);
			return true;
		}
	}
	return false;
}








bool get_Terminal_TopologicalNode(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Terminal* element = dynamic_cast<const Terminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TopologicalNode != 0)
		{
			BaseClass_list.push_back(element->TopologicalNode);
			return true;
		}
	}
	return false;
}


bool get_Terminal_phases(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Terminal* element = dynamic_cast<const Terminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->phases;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Terminal::debugName[] = "Terminal";
const char* Terminal::debugString() const
{
	return Terminal::debugName;
}

void Terminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Terminal", &Terminal_factory);
}

void Terminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:Terminal.phases", &assign_Terminal_phases);
}

void Terminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:Terminal.AuxiliaryEquipment", &assign_Terminal_AuxiliaryEquipment);
	assign_map.emplace("cim:Terminal.ConductingEquipment", &assign_Terminal_ConductingEquipment);
	assign_map.emplace("cim:Terminal.ConnectivityNode", &assign_Terminal_ConnectivityNode);
	assign_map.emplace("cim:Terminal.ConverterDCSides", &assign_Terminal_ConverterDCSides);
	assign_map.emplace("cim:Terminal.HasFirstMutualCoupling", &assign_Terminal_HasFirstMutualCoupling);
	assign_map.emplace("cim:Terminal.HasSecondMutualCoupling", &assign_Terminal_HasSecondMutualCoupling);
	assign_map.emplace("cim:Terminal.RegulatingControl", &assign_Terminal_RegulatingControl);
	assign_map.emplace("cim:Terminal.RemoteInputSignal", &assign_Terminal_RemoteInputSignal);
	assign_map.emplace("cim:Terminal.SvPowerFlow", &assign_Terminal_SvPowerFlow);
	assign_map.emplace("cim:Terminal.TieFlow", &assign_Terminal_TieFlow);
	assign_map.emplace("cim:Terminal.TopologicalNode", &assign_Terminal_TopologicalNode);
	assign_map.emplace("cim:Terminal.TransformerEnd", &assign_Terminal_TransformerEnd);
}

void Terminal::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCTerminal::addPrimitiveGetFnsToMap(get_map);
}

void Terminal::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ACDCTerminal::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:Terminal.ConductingEquipment", &get_Terminal_ConductingEquipment);
	get_map.emplace("cim:Terminal.ConnectivityNode", &get_Terminal_ConnectivityNode);
	get_map.emplace("cim:Terminal.TopologicalNode", &get_Terminal_TopologicalNode);
}

void Terminal::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCTerminal::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:Terminal.phases", &get_Terminal_phases);
}

const BaseClassDefiner Terminal::declare()
{
	return BaseClassDefiner(Terminal::addConstructToMap, Terminal::addPrimitiveAssignFnsToMap, Terminal::addClassAssignFnsToMap, Terminal::debugName);
}

namespace CIMPP
{
	BaseClass* Terminal_factory()
	{
		return new Terminal;
	}
}
