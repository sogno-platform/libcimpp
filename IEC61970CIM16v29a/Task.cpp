#include "Task.hpp"
#include "Folders.hpp"
#include <iostream>
#include <fstream>
#include <regex>
static std::unordered_map<std::string, bool (*)(BaseClass*, BaseClass*)> initialize();
std::unordered_map<std::string, bool (*)(BaseClass*, BaseClass*)> Task::dynamic_switch = initialize();

Task::Task()
{
}

Task::Task(BaseClass* CIMObj, const std::string CIMAttrName, const std::string Value)
	: _CIMObj(CIMObj), _CIMAttrName(CIMAttrName), _Value(Value)
{
}

Task::~Task()
{
}

void Task::print()
{
	if(IEC61970::Base::Core::IdentifiedObject* IdObj = dynamic_cast<IEC61970::Base::Core::IdentifiedObject*>(_CIMObj))
		std::cout << _CIMAttrName << " '" << IdObj->name << "' = '" << _Value << "'" << std::endl;
	else
		std::cout << _CIMAttrName << " = '" << _Value << "'" << std::endl;

}

bool Task::resolve(std::unordered_map<std::string, BaseClass*> *RDFMap)
{
	std::unordered_map<std::string, BaseClass*>::iterator it_id = RDFMap->find(_Value);
	if(it_id == RDFMap->end())
		return false;

	std::unordered_map<std::string, bool (*)(BaseClass*, BaseClass*)>::iterator it_func = dynamic_switch.find(_CIMAttrName);
	if(it_func == dynamic_switch.end())
		return false;

	if((*it_func->second)(_CIMObj, it_id->second))
		return true;
	else
		return (*it_func->second)(it_id->second, _CIMObj);
}


bool assign_Measurement_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::Measurement* element = dynamic_cast<IEC61970::Base::Meas::Measurement*>(BaseClass_ptr1))
	{
		element->Terminal = dynamic_cast<IEC61970::Base::Core::ACDCTerminal*>(BaseClass_ptr2);
		if(element->Terminal != nullptr)
			return true;
	}
	return false;
}

bool assign_PowerSystemResource_PSRType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::PowerSystemResource* element = dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr1))
	{
		element->PSRType = dynamic_cast<IEC61970::Base::Core::PSRType*>(BaseClass_ptr2);
		if(element->PSRType != nullptr)
			return true;
	}
	return false;
}

bool assign_ConnectivityNode_ConnectivityNodeContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::ConnectivityNode* element = dynamic_cast<IEC61970::Base::Core::ConnectivityNode*>(BaseClass_ptr1))
	{
		element->ConnectivityNodeContainer = dynamic_cast<IEC61970::Base::Core::ConnectivityNodeContainer*>(BaseClass_ptr2);
		if(element->ConnectivityNodeContainer != nullptr)
			return true;
	}
	return false;
}

bool assign_Terminal_ConnectivityNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::Terminal* element = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr1))
	{
		element->ConnectivityNode = dynamic_cast<IEC61970::Base::Core::ConnectivityNode*>(BaseClass_ptr2);
		if(element->ConnectivityNode != nullptr)
			return true;
	}
	return false;
}

bool assign_Terminal_ConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::Terminal* element = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr1))
	{
		element->ConductingEquipment = dynamic_cast<IEC61970::Base::Core::ConductingEquipment*>(BaseClass_ptr2);
		if(element->ConductingEquipment != nullptr)
			return true;
	}
	return false;
}

bool assign_AuxiliaryEquipment_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::AuxiliaryEquipment::AuxiliaryEquipment* element = dynamic_cast<IEC61970::Base::AuxiliaryEquipment::AuxiliaryEquipment*>(BaseClass_ptr1))
	{
		element->Terminal = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2);
		if(element->Terminal != nullptr)
			return true;
	}
	return false;
}

bool assign_ContingencyEquipment_Equipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Contingency::ContingencyEquipment* element = dynamic_cast<IEC61970::Base::Contingency::ContingencyEquipment*>(BaseClass_ptr1))
	{
		element->Equipment = dynamic_cast<IEC61970::Base::Core::Equipment*>(BaseClass_ptr2);
		if(element->Equipment != nullptr)
			return true;
	}
	return false;
}

bool assign_MeasurementValue_RemoteSource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::MeasurementValue* element = dynamic_cast<IEC61970::Base::Meas::MeasurementValue*>(BaseClass_ptr1))
	{
		element->RemoteSource = dynamic_cast<IEC61970::Base::SCADA::RemoteSource*>(BaseClass_ptr2);
		if(element->RemoteSource != nullptr)
			return true;
	}
	return false;
}

bool assign_MeasurementValue_MeasurementValueQuality(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::MeasurementValue* element = dynamic_cast<IEC61970::Base::Meas::MeasurementValue*>(BaseClass_ptr1))
	{
		element->MeasurementValueQuality = dynamic_cast<IEC61970::Base::Meas::MeasurementValueQuality*>(BaseClass_ptr2);
		if(element->MeasurementValueQuality != nullptr)
			return true;
	}
	return false;
}

bool assign_AnalogValue_AnalogControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::AnalogValue* element = dynamic_cast<IEC61970::Base::Meas::AnalogValue*>(BaseClass_ptr1))
	{
		element->AnalogControl = dynamic_cast<IEC61970::Base::Meas::AnalogControl*>(BaseClass_ptr2);
		if(element->AnalogControl != nullptr)
			return true;
	}
	return false;
}

bool assign_AltGeneratingUnitMeas_AnalogValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::ControlArea::AltGeneratingUnitMeas* element = dynamic_cast<IEC61970::Base::ControlArea::AltGeneratingUnitMeas*>(BaseClass_ptr1))
	{
		element->AnalogValue = dynamic_cast<IEC61970::Base::Meas::AnalogValue*>(BaseClass_ptr2);
		if(element->AnalogValue != nullptr)
			return true;
	}
	return false;
}

bool assign_AltTieMeas_AnalogValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::ControlArea::AltTieMeas* element = dynamic_cast<IEC61970::Base::ControlArea::AltTieMeas*>(BaseClass_ptr1))
	{
		element->AnalogValue = dynamic_cast<IEC61970::Base::Meas::AnalogValue*>(BaseClass_ptr2);
		if(element->AnalogValue != nullptr)
			return true;
	}
	return false;
}

bool assign_HydroPump_HydroPumpOpSchedule(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::HydroPump* element = dynamic_cast<IEC61970::Base::Generation::Production::HydroPump*>(BaseClass_ptr1))
	{
		element->HydroPumpOpSchedule = dynamic_cast<IEC61970::Base::Generation::Production::HydroPumpOpSchedule*>(BaseClass_ptr2);
		if(element->HydroPumpOpSchedule != nullptr)
			return true;
	}
	return false;
}

bool assign_RegulatingCondEq_RegulatingControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::RegulatingCondEq* element = dynamic_cast<IEC61970::Base::Wires::RegulatingCondEq*>(BaseClass_ptr1))
	{
		element->RegulatingControl = dynamic_cast<IEC61970::Base::Wires::RegulatingControl*>(BaseClass_ptr2);
		if(element->RegulatingControl != nullptr)
			return true;
	}
	return false;
}

bool assign_RotatingMachine_HydroPump(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::RotatingMachine* element = dynamic_cast<IEC61970::Base::Wires::RotatingMachine*>(BaseClass_ptr1))
	{
		element->HydroPump = dynamic_cast<IEC61970::Base::Generation::Production::HydroPump*>(BaseClass_ptr2);
		if(element->HydroPump != nullptr)
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_GenUnitOpSchedule(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::GeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::GeneratingUnit*>(BaseClass_ptr1))
	{
		element->GenUnitOpSchedule = dynamic_cast<IEC61970::Base::Generation::Production::GenUnitOpSchedule*>(BaseClass_ptr2);
		if(element->GenUnitOpSchedule != nullptr)
			return true;
	}
	return false;
}

bool assign_ControlAreaGeneratingUnit_GeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::ControlArea::ControlAreaGeneratingUnit* element = dynamic_cast<IEC61970::Base::ControlArea::ControlAreaGeneratingUnit*>(BaseClass_ptr1))
	{
		element->GeneratingUnit = dynamic_cast<IEC61970::Base::Generation::Production::GeneratingUnit*>(BaseClass_ptr2);
		if(element->GeneratingUnit != nullptr)
			return true;
	}
	return false;
}

bool assign_TieFlow_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::ControlArea::TieFlow* element = dynamic_cast<IEC61970::Base::ControlArea::TieFlow*>(BaseClass_ptr1))
	{
		element->Terminal = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2);
		if(element->Terminal != nullptr)
			return true;
	}
	return false;
}

bool assign_ControlArea_EnergyArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::ControlArea::ControlArea* element = dynamic_cast<IEC61970::Base::ControlArea::ControlArea*>(BaseClass_ptr1))
	{
		element->EnergyArea = dynamic_cast<IEC61970::Base::LoadModel::EnergyArea*>(BaseClass_ptr2);
		if(element->EnergyArea != nullptr)
			return true;
	}
	return false;
}

bool assign_VoltageLevel_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::VoltageLevel* element = dynamic_cast<IEC61970::Base::Core::VoltageLevel*>(BaseClass_ptr1))
	{
		element->BaseVoltage = dynamic_cast<IEC61970::Base::Core::BaseVoltage*>(BaseClass_ptr2);
		if(element->BaseVoltage != nullptr)
			return true;
	}
	return false;
}

bool assign_NameType_NameTypeAuthority(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::NameType* element = dynamic_cast<IEC61970::Base::Core::NameType*>(BaseClass_ptr1))
	{
		element->NameTypeAuthority = dynamic_cast<IEC61970::Base::Core::NameTypeAuthority*>(BaseClass_ptr2);
		if(element->NameTypeAuthority != nullptr)
			return true;
	}
	return false;
}

bool assign_Name_NameType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::Name* element = dynamic_cast<IEC61970::Base::Core::Name*>(BaseClass_ptr1))
	{
		element->NameType = dynamic_cast<IEC61970::Base::Core::NameType*>(BaseClass_ptr2);
		if(element->NameType != nullptr)
			return true;
	}
	return false;
}

bool assign_Name_IdentifiedObject(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::Name* element = dynamic_cast<IEC61970::Base::Core::Name*>(BaseClass_ptr1))
	{
		element->IdentifiedObject = dynamic_cast<IEC61970::Base::Core::IdentifiedObject*>(BaseClass_ptr2);
		if(element->IdentifiedObject != nullptr)
			return true;
	}
	return false;
}

bool assign_OperatingShare_OperatingParticipant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::OperatingShare* element = dynamic_cast<IEC61970::Base::Core::OperatingShare*>(BaseClass_ptr1))
	{
		element->OperatingParticipant = dynamic_cast<IEC61970::Base::Core::OperatingParticipant*>(BaseClass_ptr2);
		if(element->OperatingParticipant != nullptr)
			return true;
	}
	return false;
}

bool assign_OperatingShare_PowerSystemResource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::OperatingShare* element = dynamic_cast<IEC61970::Base::Core::OperatingShare*>(BaseClass_ptr1))
	{
		element->PowerSystemResource = dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2);
		if(element->PowerSystemResource != nullptr)
			return true;
	}
	return false;
}

bool assign_ACDCConverter_PccTerminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DC::ACDCConverter* element = dynamic_cast<IEC61970::Base::DC::ACDCConverter*>(BaseClass_ptr1))
	{
		element->PccTerminal = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2);
		if(element->PccTerminal != nullptr)
			return true;
	}
	return false;
}

bool assign_DCBaseTerminal_DCTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DC::DCBaseTerminal* element = dynamic_cast<IEC61970::Base::DC::DCBaseTerminal*>(BaseClass_ptr1))
	{
		element->DCTopologicalNode = dynamic_cast<IEC61970::Base::Topology::DCTopologicalNode*>(BaseClass_ptr2);
		if(element->DCTopologicalNode != nullptr)
			return true;
	}
	return false;
}

bool assign_ACDCConverterDCTerminal_DCConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DC::ACDCConverterDCTerminal* element = dynamic_cast<IEC61970::Base::DC::ACDCConverterDCTerminal*>(BaseClass_ptr1))
	{
		element->DCConductingEquipment = dynamic_cast<IEC61970::Base::DC::ACDCConverter*>(BaseClass_ptr2);
		if(element->DCConductingEquipment != nullptr)
			return true;
	}
	return false;
}

bool assign_DCLine_Region(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DC::DCLine* element = dynamic_cast<IEC61970::Base::DC::DCLine*>(BaseClass_ptr1))
	{
		element->Region = dynamic_cast<IEC61970::Base::Core::SubGeographicalRegion*>(BaseClass_ptr2);
		if(element->Region != nullptr)
			return true;
	}
	return false;
}

bool assign_DCNode_DCTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DC::DCNode* element = dynamic_cast<IEC61970::Base::DC::DCNode*>(BaseClass_ptr1))
	{
		element->DCTopologicalNode = dynamic_cast<IEC61970::Base::Topology::DCTopologicalNode*>(BaseClass_ptr2);
		if(element->DCTopologicalNode != nullptr)
			return true;
	}
	return false;
}

bool assign_DCNode_DCEquipmentContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DC::DCNode* element = dynamic_cast<IEC61970::Base::DC::DCNode*>(BaseClass_ptr1))
	{
		element->DCEquipmentContainer = dynamic_cast<IEC61970::Base::DC::DCEquipmentContainer*>(BaseClass_ptr2);
		if(element->DCEquipmentContainer != nullptr)
			return true;
	}
	return false;
}

bool assign_VsConverter_CapabilityCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DC::VsConverter* element = dynamic_cast<IEC61970::Base::DC::VsConverter*>(BaseClass_ptr1))
	{
		element->CapabilityCurve = dynamic_cast<IEC61970::Base::DC::VsCapabilityCurve*>(BaseClass_ptr2);
		if(element->CapabilityCurve != nullptr)
			return true;
	}
	return false;
}

bool assign_DiagramObjectPoint_DiagramObjectGluePoint(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DiagramLayout::DiagramObjectPoint* element = dynamic_cast<IEC61970::Base::DiagramLayout::DiagramObjectPoint*>(BaseClass_ptr1))
	{
		element->DiagramObjectGluePoint = dynamic_cast<IEC61970::Base::DiagramLayout::DiagramObjectGluePoint*>(BaseClass_ptr2);
		if(element->DiagramObjectGluePoint != nullptr)
			return true;
	}
	return false;
}

bool assign_DiagramObject_Diagram(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DiagramLayout::DiagramObject* element = dynamic_cast<IEC61970::Base::DiagramLayout::DiagramObject*>(BaseClass_ptr1))
	{
		element->Diagram = dynamic_cast<IEC61970::Base::DiagramLayout::Diagram*>(BaseClass_ptr2);
		if(element->Diagram != nullptr)
			return true;
	}
	return false;
}

bool assign_DiagramObject_DiagramObjectStyle(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DiagramLayout::DiagramObject* element = dynamic_cast<IEC61970::Base::DiagramLayout::DiagramObject*>(BaseClass_ptr1))
	{
		element->DiagramObjectStyle = dynamic_cast<IEC61970::Base::DiagramLayout::DiagramObjectStyle*>(BaseClass_ptr2);
		if(element->DiagramObjectStyle != nullptr)
			return true;
	}
	return false;
}

bool assign_Fault_FaultyEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Faults::Fault* element = dynamic_cast<IEC61970::Base::Faults::Fault*>(BaseClass_ptr1))
	{
		element->FaultyEquipment = dynamic_cast<IEC61970::Base::Core::Equipment*>(BaseClass_ptr2);
		if(element->FaultyEquipment != nullptr)
			return true;
	}
	return false;
}

bool assign_EquipmentFault_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Faults::EquipmentFault* element = dynamic_cast<IEC61970::Base::Faults::EquipmentFault*>(BaseClass_ptr1))
	{
		element->Terminal = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2);
		if(element->Terminal != nullptr)
			return true;
	}
	return false;
}

bool assign_LineFault_ACLineSegment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Faults::LineFault* element = dynamic_cast<IEC61970::Base::Faults::LineFault*>(BaseClass_ptr1))
	{
		element->ACLineSegment = dynamic_cast<IEC61970::Base::Wires::ACLineSegment*>(BaseClass_ptr2);
		if(element->ACLineSegment != nullptr)
			return true;
	}
	return false;
}

bool assign_CombustionTurbine_AirCompressor(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::GenerationTrainingSimulation::CombustionTurbine* element = dynamic_cast<IEC61970::Base::Generation::GenerationTrainingSimulation::CombustionTurbine*>(BaseClass_ptr1))
	{
		element->AirCompressor = dynamic_cast<IEC61970::Base::Generation::Production::AirCompressor*>(BaseClass_ptr2);
		if(element->AirCompressor != nullptr)
			return true;
	}
	return false;
}

bool assign_CombustionTurbine_CTTempActivePowerCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::GenerationTrainingSimulation::CombustionTurbine* element = dynamic_cast<IEC61970::Base::Generation::GenerationTrainingSimulation::CombustionTurbine*>(BaseClass_ptr1))
	{
		element->CTTempActivePowerCurve = dynamic_cast<IEC61970::Base::Generation::GenerationTrainingSimulation::CTTempActivePowerCurve*>(BaseClass_ptr2);
		if(element->CTTempActivePowerCurve != nullptr)
			return true;
	}
	return false;
}

bool assign_StartupModel_StartRampCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::StartupModel* element = dynamic_cast<IEC61970::Base::Generation::Production::StartupModel*>(BaseClass_ptr1))
	{
		element->StartRampCurve = dynamic_cast<IEC61970::Base::Generation::Production::StartRampCurve*>(BaseClass_ptr2);
		if(element->StartRampCurve != nullptr)
			return true;
	}
	return false;
}

bool assign_StartupModel_StartIgnFuelCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::StartupModel* element = dynamic_cast<IEC61970::Base::Generation::Production::StartupModel*>(BaseClass_ptr1))
	{
		element->StartIgnFuelCurve = dynamic_cast<IEC61970::Base::Generation::Production::StartIgnFuelCurve*>(BaseClass_ptr2);
		if(element->StartIgnFuelCurve != nullptr)
			return true;
	}
	return false;
}

bool assign_StartupModel_StartMainFuelCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::StartupModel* element = dynamic_cast<IEC61970::Base::Generation::Production::StartupModel*>(BaseClass_ptr1))
	{
		element->StartMainFuelCurve = dynamic_cast<IEC61970::Base::Generation::Production::StartMainFuelCurve*>(BaseClass_ptr2);
		if(element->StartMainFuelCurve != nullptr)
			return true;
	}
	return false;
}

bool assign_ThermalGeneratingUnit_HeatRateCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::ThermalGeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr1))
	{
		element->HeatRateCurve = dynamic_cast<IEC61970::Base::Generation::Production::HeatRateCurve*>(BaseClass_ptr2);
		if(element->HeatRateCurve != nullptr)
			return true;
	}
	return false;
}

bool assign_ThermalGeneratingUnit_StartupModel(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::ThermalGeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr1))
	{
		element->StartupModel = dynamic_cast<IEC61970::Base::Generation::Production::StartupModel*>(BaseClass_ptr2);
		if(element->StartupModel != nullptr)
			return true;
	}
	return false;
}

bool assign_ThermalGeneratingUnit_ShutdownCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::ThermalGeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr1))
	{
		element->ShutdownCurve = dynamic_cast<IEC61970::Base::Generation::Production::ShutdownCurve*>(BaseClass_ptr2);
		if(element->ShutdownCurve != nullptr)
			return true;
	}
	return false;
}

bool assign_ThermalGeneratingUnit_IncrementalHeatRateCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::ThermalGeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr1))
	{
		element->IncrementalHeatRateCurve = dynamic_cast<IEC61970::Base::Generation::Production::IncrementalHeatRateCurve*>(BaseClass_ptr2);
		if(element->IncrementalHeatRateCurve != nullptr)
			return true;
	}
	return false;
}

bool assign_ThermalGeneratingUnit_HeatInputCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::ThermalGeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr1))
	{
		element->HeatInputCurve = dynamic_cast<IEC61970::Base::Generation::Production::HeatInputCurve*>(BaseClass_ptr2);
		if(element->HeatInputCurve != nullptr)
			return true;
	}
	return false;
}

bool assign_CAESPlant_ThermalGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::CAESPlant* element = dynamic_cast<IEC61970::Base::Generation::Production::CAESPlant*>(BaseClass_ptr1))
	{
		element->ThermalGeneratingUnit = dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr2);
		if(element->ThermalGeneratingUnit != nullptr)
			return true;
	}
	return false;
}

bool assign_CAESPlant_AirCompressor(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::CAESPlant* element = dynamic_cast<IEC61970::Base::Generation::Production::CAESPlant*>(BaseClass_ptr1))
	{
		element->AirCompressor = dynamic_cast<IEC61970::Base::Generation::Production::AirCompressor*>(BaseClass_ptr2);
		if(element->AirCompressor != nullptr)
			return true;
	}
	return false;
}

bool assign_CogenerationPlant_SteamSendoutSchedule(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::CogenerationPlant* element = dynamic_cast<IEC61970::Base::Generation::Production::CogenerationPlant*>(BaseClass_ptr1))
	{
		element->SteamSendoutSchedule = dynamic_cast<IEC61970::Base::Generation::Production::SteamSendoutSchedule*>(BaseClass_ptr2);
		if(element->SteamSendoutSchedule != nullptr)
			return true;
	}
	return false;
}

bool assign_FossilFuel_ThermalGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::FossilFuel* element = dynamic_cast<IEC61970::Base::Generation::Production::FossilFuel*>(BaseClass_ptr1))
	{
		element->ThermalGeneratingUnit = dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr2);
		if(element->ThermalGeneratingUnit != nullptr)
			return true;
	}
	return false;
}

bool assign_HydroGeneratingUnit_PenstockLossCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::HydroGeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::HydroGeneratingUnit*>(BaseClass_ptr1))
	{
		element->PenstockLossCurve = dynamic_cast<IEC61970::Base::Generation::Production::PenstockLossCurve*>(BaseClass_ptr2);
		if(element->PenstockLossCurve != nullptr)
			return true;
	}
	return false;
}

bool assign_Reservoir_TargetLevelSchedule(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::Reservoir* element = dynamic_cast<IEC61970::Base::Generation::Production::Reservoir*>(BaseClass_ptr1))
	{
		element->TargetLevelSchedule = dynamic_cast<IEC61970::Base::Generation::Production::TargetLevelSchedule*>(BaseClass_ptr2);
		if(element->TargetLevelSchedule != nullptr)
			return true;
	}
	return false;
}

bool assign_HydroPowerPlant_Reservoir(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::HydroPowerPlant* element = dynamic_cast<IEC61970::Base::Generation::Production::HydroPowerPlant*>(BaseClass_ptr1))
	{
		element->Reservoir = dynamic_cast<IEC61970::Base::Generation::Production::Reservoir*>(BaseClass_ptr2);
		if(element->Reservoir != nullptr)
			return true;
	}
	return false;
}

bool assign_HydroPowerPlant_GenSourcePumpDischargeReservoir(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::HydroPowerPlant* element = dynamic_cast<IEC61970::Base::Generation::Production::HydroPowerPlant*>(BaseClass_ptr1))
	{
		element->GenSourcePumpDischargeReservoir = dynamic_cast<IEC61970::Base::Generation::Production::Reservoir*>(BaseClass_ptr2);
		if(element->GenSourcePumpDischargeReservoir != nullptr)
			return true;
	}
	return false;
}

bool assign_EnergyConsumer_LoadResponse(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::EnergyConsumer* element = dynamic_cast<IEC61970::Base::Wires::EnergyConsumer*>(BaseClass_ptr1))
	{
		element->LoadResponse = dynamic_cast<IEC61970::Base::LoadModel::LoadResponseCharacteristic*>(BaseClass_ptr2);
		if(element->LoadResponse != nullptr)
			return true;
	}
	return false;
}

bool assign_AccumulatorReset_AccumulatorValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::AccumulatorReset* element = dynamic_cast<IEC61970::Base::Meas::AccumulatorReset*>(BaseClass_ptr1))
	{
		element->AccumulatorValue = dynamic_cast<IEC61970::Base::Meas::AccumulatorValue*>(BaseClass_ptr2);
		if(element->AccumulatorValue != nullptr)
			return true;
	}
	return false;
}

bool assign_Command_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::Command* element = dynamic_cast<IEC61970::Base::Meas::Command*>(BaseClass_ptr1))
	{
		element->ValueAliasSet = dynamic_cast<IEC61970::Base::Meas::ValueAliasSet*>(BaseClass_ptr2);
		if(element->ValueAliasSet != nullptr)
			return true;
	}
	return false;
}

bool assign_DiscreteValue_Command(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::DiscreteValue* element = dynamic_cast<IEC61970::Base::Meas::DiscreteValue*>(BaseClass_ptr1))
	{
		element->Command = dynamic_cast<IEC61970::Base::Meas::Command*>(BaseClass_ptr2);
		if(element->Command != nullptr)
			return true;
	}
	return false;
}

bool assign_RaiseLowerCommand_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::RaiseLowerCommand* element = dynamic_cast<IEC61970::Base::Meas::RaiseLowerCommand*>(BaseClass_ptr1))
	{
		element->ValueAliasSet = dynamic_cast<IEC61970::Base::Meas::ValueAliasSet*>(BaseClass_ptr2);
		if(element->ValueAliasSet != nullptr)
			return true;
	}
	return false;
}

bool assign_StringMeasurementValue_StringMeasurement(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::StringMeasurementValue* element = dynamic_cast<IEC61970::Base::Meas::StringMeasurementValue*>(BaseClass_ptr1))
	{
		element->StringMeasurement = dynamic_cast<IEC61970::Base::Meas::StringMeasurement*>(BaseClass_ptr2);
		if(element->StringMeasurement != nullptr)
			return true;
	}
	return false;
}

bool assign_OperationalLimit_OperationalLimitType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::OperationalLimits::OperationalLimit* element = dynamic_cast<IEC61970::Base::OperationalLimits::OperationalLimit*>(BaseClass_ptr1))
	{
		element->OperationalLimitType = dynamic_cast<IEC61970::Base::OperationalLimits::OperationalLimitType*>(BaseClass_ptr2);
		if(element->OperationalLimitType != nullptr)
			return true;
	}
	return false;
}

bool assign_BranchGroupTerminal_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::OperationalLimits::BranchGroupTerminal* element = dynamic_cast<IEC61970::Base::OperationalLimits::BranchGroupTerminal*>(BaseClass_ptr1))
	{
		element->Terminal = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2);
		if(element->Terminal != nullptr)
			return true;
	}
	return false;
}

bool assign_OperationalLimitSet_Equipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::OperationalLimits::OperationalLimitSet* element = dynamic_cast<IEC61970::Base::OperationalLimits::OperationalLimitSet*>(BaseClass_ptr1))
	{
		element->Equipment = dynamic_cast<IEC61970::Base::Core::Equipment*>(BaseClass_ptr2);
		if(element->Equipment != nullptr)
			return true;
	}
	return false;
}

bool assign_OperationalLimitSet_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::OperationalLimits::OperationalLimitSet* element = dynamic_cast<IEC61970::Base::OperationalLimits::OperationalLimitSet*>(BaseClass_ptr1))
	{
		element->Terminal = dynamic_cast<IEC61970::Base::Core::ACDCTerminal*>(BaseClass_ptr2);
		if(element->Terminal != nullptr)
			return true;
	}
	return false;
}

bool assign_RemoteControl_Control(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::SCADA::RemoteControl* element = dynamic_cast<IEC61970::Base::SCADA::RemoteControl*>(BaseClass_ptr1))
	{
		element->Control = dynamic_cast<IEC61970::Base::Meas::Control*>(BaseClass_ptr2);
		if(element->Control != nullptr)
			return true;
	}
	return false;
}

bool assign_TopologicalNode_ReportingGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Topology::TopologicalNode* element = dynamic_cast<IEC61970::Base::Topology::TopologicalNode*>(BaseClass_ptr1))
	{
		element->ReportingGroup = dynamic_cast<IEC61970::Base::Core::ReportingSuperGroup::ReportingGroup*>(BaseClass_ptr2);
		if(element->ReportingGroup != nullptr)
			return true;
	}
	return false;
}

bool assign_TopologicalNode_ConnectivityNodeContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Topology::TopologicalNode* element = dynamic_cast<IEC61970::Base::Topology::TopologicalNode*>(BaseClass_ptr1))
	{
		element->ConnectivityNodeContainer = dynamic_cast<IEC61970::Base::Core::ConnectivityNodeContainer*>(BaseClass_ptr2);
		if(element->ConnectivityNodeContainer != nullptr)
			return true;
	}
	return false;
}

bool assign_TopologicalNode_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Topology::TopologicalNode* element = dynamic_cast<IEC61970::Base::Topology::TopologicalNode*>(BaseClass_ptr1))
	{
		element->BaseVoltage = dynamic_cast<IEC61970::Base::Core::BaseVoltage*>(BaseClass_ptr2);
		if(element->BaseVoltage != nullptr)
			return true;
	}
	return false;
}

bool assign_SvInjection_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::StateVariables::SvInjection* element = dynamic_cast<IEC61970::Base::StateVariables::SvInjection*>(BaseClass_ptr1))
	{
		element->TopologicalNode = dynamic_cast<IEC61970::Base::Topology::TopologicalNode*>(BaseClass_ptr2);
		if(element->TopologicalNode != nullptr)
			return true;
	}
	return false;
}

bool assign_SvPowerFlow_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::StateVariables::SvPowerFlow* element = dynamic_cast<IEC61970::Base::StateVariables::SvPowerFlow*>(BaseClass_ptr1))
	{
		element->Terminal = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2);
		if(element->Terminal != nullptr)
			return true;
	}
	return false;
}

bool assign_SvShuntCompensatorSections_ShuntCompensator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::StateVariables::SvShuntCompensatorSections* element = dynamic_cast<IEC61970::Base::StateVariables::SvShuntCompensatorSections*>(BaseClass_ptr1))
	{
		element->ShuntCompensator = dynamic_cast<IEC61970::Base::Wires::ShuntCompensator*>(BaseClass_ptr2);
		if(element->ShuntCompensator != nullptr)
			return true;
	}
	return false;
}

bool assign_SvStatus_ConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::StateVariables::SvStatus* element = dynamic_cast<IEC61970::Base::StateVariables::SvStatus*>(BaseClass_ptr1))
	{
		element->ConductingEquipment = dynamic_cast<IEC61970::Base::Core::ConductingEquipment*>(BaseClass_ptr2);
		if(element->ConductingEquipment != nullptr)
			return true;
	}
	return false;
}

bool assign_TapChanger_TapChangerControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::TapChanger* element = dynamic_cast<IEC61970::Base::Wires::TapChanger*>(BaseClass_ptr1))
	{
		element->TapChangerControl = dynamic_cast<IEC61970::Base::Wires::TapChangerControl*>(BaseClass_ptr2);
		if(element->TapChangerControl != nullptr)
			return true;
	}
	return false;
}

bool assign_SvTapStep_TapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::StateVariables::SvTapStep* element = dynamic_cast<IEC61970::Base::StateVariables::SvTapStep*>(BaseClass_ptr1))
	{
		element->TapChanger = dynamic_cast<IEC61970::Base::Wires::TapChanger*>(BaseClass_ptr2);
		if(element->TapChanger != nullptr)
			return true;
	}
	return false;
}

bool assign_SvVoltage_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::StateVariables::SvVoltage* element = dynamic_cast<IEC61970::Base::StateVariables::SvVoltage*>(BaseClass_ptr1))
	{
		element->TopologicalNode = dynamic_cast<IEC61970::Base::Topology::TopologicalNode*>(BaseClass_ptr2);
		if(element->TopologicalNode != nullptr)
			return true;
	}
	return false;
}

bool assign_BusNameMarker_ReportingGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Topology::BusNameMarker* element = dynamic_cast<IEC61970::Base::Topology::BusNameMarker*>(BaseClass_ptr1))
	{
		element->ReportingGroup = dynamic_cast<IEC61970::Base::Core::ReportingSuperGroup::ReportingGroup*>(BaseClass_ptr2);
		if(element->ReportingGroup != nullptr)
			return true;
	}
	return false;
}

bool assign_TopologicalIsland_AngleRefTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Topology::TopologicalIsland* element = dynamic_cast<IEC61970::Base::Topology::TopologicalIsland*>(BaseClass_ptr1))
	{
		element->AngleRefTopologicalNode = dynamic_cast<IEC61970::Base::Topology::TopologicalNode*>(BaseClass_ptr2);
		if(element->AngleRefTopologicalNode != nullptr)
			return true;
	}
	return false;
}

bool assign_ACLineSegmentPhase_ACLineSegment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::ACLineSegmentPhase* element = dynamic_cast<IEC61970::Base::Wires::ACLineSegmentPhase*>(BaseClass_ptr1))
	{
		element->ACLineSegment = dynamic_cast<IEC61970::Base::Wires::ACLineSegment*>(BaseClass_ptr2);
		if(element->ACLineSegment != nullptr)
			return true;
	}
	return false;
}

bool assign_BusbarSection_VoltageControlZone(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::BusbarSection* element = dynamic_cast<IEC61970::Base::Wires::BusbarSection*>(BaseClass_ptr1))
	{
		element->VoltageControlZone = dynamic_cast<IEC61970::Base::Wires::VoltageControlZone*>(BaseClass_ptr2);
		if(element->VoltageControlZone != nullptr)
			return true;
	}
	return false;
}

bool assign_Cut_ACLineSegment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::Cut* element = dynamic_cast<IEC61970::Base::Wires::Cut*>(BaseClass_ptr1))
	{
		element->ACLineSegment = dynamic_cast<IEC61970::Base::Wires::ACLineSegment*>(BaseClass_ptr2);
		if(element->ACLineSegment != nullptr)
			return true;
	}
	return false;
}

bool assign_MutualCoupling_First_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::MutualCoupling* element = dynamic_cast<IEC61970::Base::Wires::MutualCoupling*>(BaseClass_ptr1))
	{
		element->First_Terminal = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2);
		if(element->First_Terminal != nullptr)
			return true;
	}
	return false;
}

bool assign_MutualCoupling_Second_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::MutualCoupling* element = dynamic_cast<IEC61970::Base::Wires::MutualCoupling*>(BaseClass_ptr1))
	{
		element->Second_Terminal = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2);
		if(element->Second_Terminal != nullptr)
			return true;
	}
	return false;
}

bool assign_PhaseTapChangerTablePoint_PhaseTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::PhaseTapChangerTablePoint* element = dynamic_cast<IEC61970::Base::Wires::PhaseTapChangerTablePoint*>(BaseClass_ptr1))
	{
		element->PhaseTapChangerTable = dynamic_cast<IEC61970::Base::Wires::PhaseTapChangerTable*>(BaseClass_ptr2);
		if(element->PhaseTapChangerTable != nullptr)
			return true;
	}
	return false;
}

bool assign_RatioTapChanger_RatioTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::RatioTapChanger* element = dynamic_cast<IEC61970::Base::Wires::RatioTapChanger*>(BaseClass_ptr1))
	{
		element->RatioTapChangerTable = dynamic_cast<IEC61970::Base::Wires::RatioTapChangerTable*>(BaseClass_ptr2);
		if(element->RatioTapChangerTable != nullptr)
			return true;
	}
	return false;
}

bool assign_TransformerEnd_PhaseTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::TransformerEnd* element = dynamic_cast<IEC61970::Base::Wires::TransformerEnd*>(BaseClass_ptr1))
	{
		element->PhaseTapChanger = dynamic_cast<IEC61970::Base::Wires::PhaseTapChanger*>(BaseClass_ptr2);
		if(element->PhaseTapChanger != nullptr)
			return true;
	}
	return false;
}

bool assign_TransformerEnd_StarImpedance(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::TransformerEnd* element = dynamic_cast<IEC61970::Base::Wires::TransformerEnd*>(BaseClass_ptr1))
	{
		element->StarImpedance = dynamic_cast<IEC61970::Base::Wires::TransformerStarImpedance*>(BaseClass_ptr2);
		if(element->StarImpedance != nullptr)
			return true;
	}
	return false;
}

bool assign_TransformerEnd_RatioTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::TransformerEnd* element = dynamic_cast<IEC61970::Base::Wires::TransformerEnd*>(BaseClass_ptr1))
	{
		element->RatioTapChanger = dynamic_cast<IEC61970::Base::Wires::RatioTapChanger*>(BaseClass_ptr2);
		if(element->RatioTapChanger != nullptr)
			return true;
	}
	return false;
}

bool assign_TransformerEnd_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::TransformerEnd* element = dynamic_cast<IEC61970::Base::Wires::TransformerEnd*>(BaseClass_ptr1))
	{
		element->BaseVoltage = dynamic_cast<IEC61970::Base::Core::BaseVoltage*>(BaseClass_ptr2);
		if(element->BaseVoltage != nullptr)
			return true;
	}
	return false;
}

bool assign_TransformerEnd_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::TransformerEnd* element = dynamic_cast<IEC61970::Base::Wires::TransformerEnd*>(BaseClass_ptr1))
	{
		element->Terminal = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2);
		if(element->Terminal != nullptr)
			return true;
	}
	return false;
}

bool assign_RatioTapChangerTablePoint_RatioTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::RatioTapChangerTablePoint* element = dynamic_cast<IEC61970::Base::Wires::RatioTapChangerTablePoint*>(BaseClass_ptr1))
	{
		element->RatioTapChangerTable = dynamic_cast<IEC61970::Base::Wires::RatioTapChangerTable*>(BaseClass_ptr2);
		if(element->RatioTapChangerTable != nullptr)
			return true;
	}
	return false;
}

bool assign_RegulationSchedule_RegulatingControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::RegulationSchedule* element = dynamic_cast<IEC61970::Base::Wires::RegulationSchedule*>(BaseClass_ptr1))
	{
		element->RegulatingControl = dynamic_cast<IEC61970::Base::Wires::RegulatingControl*>(BaseClass_ptr2);
		if(element->RegulatingControl != nullptr)
			return true;
	}
	return false;
}

bool assign_TapSchedule_TapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::TapSchedule* element = dynamic_cast<IEC61970::Base::Wires::TapSchedule*>(BaseClass_ptr1))
	{
		element->TapChanger = dynamic_cast<IEC61970::Base::Wires::TapChanger*>(BaseClass_ptr2);
		if(element->TapChanger != nullptr)
			return true;
	}
	return false;
}

bool assign_TransformerMeshImpedance_FromTransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::TransformerMeshImpedance* element = dynamic_cast<IEC61970::Base::Wires::TransformerMeshImpedance*>(BaseClass_ptr1))
	{
		element->FromTransformerEnd = dynamic_cast<IEC61970::Base::Wires::TransformerEnd*>(BaseClass_ptr2);
		if(element->FromTransformerEnd != nullptr)
			return true;
	}
	return false;
}

bool assign_TransformerTank_PowerTransformer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::TransformerTank* element = dynamic_cast<IEC61970::Base::Wires::TransformerTank*>(BaseClass_ptr1))
	{
		element->PowerTransformer = dynamic_cast<IEC61970::Base::Wires::PowerTransformer*>(BaseClass_ptr2);
		if(element->PowerTransformer != nullptr)
			return true;
	}
	return false;
}

bool assign_TransformerTankEnd_TransformerTank(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::TransformerTankEnd* element = dynamic_cast<IEC61970::Base::Wires::TransformerTankEnd*>(BaseClass_ptr1))
	{
		element->TransformerTank = dynamic_cast<IEC61970::Base::Wires::TransformerTank*>(BaseClass_ptr2);
		if(element->TransformerTank != nullptr)
			return true;
	}
	return false;
}

bool assign_RemoteInputSignal_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal* element = dynamic_cast<IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal*>(BaseClass_ptr1))
	{
		element->Terminal = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2);
		if(element->Terminal != nullptr)
			return true;
	}
	return false;
}

bool assign_AsynchronousMachineDynamics_AsynchronousMachine(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineDynamics*>(BaseClass_ptr1))
	{
		element->AsynchronousMachine = dynamic_cast<IEC61970::Base::Wires::AsynchronousMachine*>(BaseClass_ptr2);
		if(element->AsynchronousMachine != nullptr)
			return true;
	}
	return false;
}

bool assign_TurbineGovernorDynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics*>(BaseClass_ptr1))
	{
		element->AsynchronousMachineDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineDynamics*>(BaseClass_ptr2);
		if(element->AsynchronousMachineDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_SynchronousMachineDynamics_SynchronousMachine(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics*>(BaseClass_ptr1))
	{
		element->SynchronousMachine = dynamic_cast<IEC61970::Base::Wires::SynchronousMachine*>(BaseClass_ptr2);
		if(element->SynchronousMachine != nullptr)
			return true;
	}
	return false;
}

bool assign_ExcitationSystemDynamics_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics*>(BaseClass_ptr1))
	{
		element->SynchronousMachineDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics*>(BaseClass_ptr2);
		if(element->SynchronousMachineDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics*>(BaseClass_ptr1))
	{
		element->ExcitationSystemDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics*>(BaseClass_ptr2);
		if(element->ExcitationSystemDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics*>(BaseClass_ptr1))
	{
		element->RemoteInputSignal = dynamic_cast<IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal*>(BaseClass_ptr2);
		if(element->RemoteInputSignal != nullptr)
			return true;
	}
	return false;
}

bool assign_LoadMotor_LoadAggregate(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::LoadDynamics::LoadMotor* element = dynamic_cast<IEC61970::Dynamics::StandardModels::LoadDynamics::LoadMotor*>(BaseClass_ptr1))
	{
		element->LoadAggregate = dynamic_cast<IEC61970::Dynamics::StandardModels::LoadDynamics::LoadAggregate*>(BaseClass_ptr2);
		if(element->LoadAggregate != nullptr)
			return true;
	}
	return false;
}

bool assign_LoadStatic_LoadAggregate(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::LoadDynamics::LoadStatic* element = dynamic_cast<IEC61970::Dynamics::StandardModels::LoadDynamics::LoadStatic*>(BaseClass_ptr1))
	{
		element->LoadAggregate = dynamic_cast<IEC61970::Dynamics::StandardModels::LoadDynamics::LoadAggregate*>(BaseClass_ptr2);
		if(element->LoadAggregate != nullptr)
			return true;
	}
	return false;
}

bool assign_MechanicalLoadDynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::MechanicalLoadDynamics::MechanicalLoadDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::MechanicalLoadDynamics::MechanicalLoadDynamics*>(BaseClass_ptr1))
	{
		element->AsynchronousMachineDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineDynamics*>(BaseClass_ptr2);
		if(element->AsynchronousMachineDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_MechanicalLoadDynamics_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::MechanicalLoadDynamics::MechanicalLoadDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::MechanicalLoadDynamics::MechanicalLoadDynamics*>(BaseClass_ptr1))
	{
		element->SynchronousMachineDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics*>(BaseClass_ptr2);
		if(element->SynchronousMachineDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcitationLimiterDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcitationLimiterDynamics*>(BaseClass_ptr1))
	{
		element->ExcitationSystemDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics*>(BaseClass_ptr2);
		if(element->ExcitationSystemDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArControllerType1Dynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArControllerType1Dynamics*>(BaseClass_ptr1))
	{
		element->ExcitationSystemDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics*>(BaseClass_ptr2);
		if(element->ExcitationSystemDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_PFVArControllerType1Dynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArControllerType1Dynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArControllerType1Dynamics*>(BaseClass_ptr1))
	{
		element->RemoteInputSignal = dynamic_cast<IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal*>(BaseClass_ptr2);
		if(element->RemoteInputSignal != nullptr)
			return true;
	}
	return false;
}

bool assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::PFVArControllerType2Dynamics::PFVArControllerType2Dynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::PFVArControllerType2Dynamics::PFVArControllerType2Dynamics*>(BaseClass_ptr1))
	{
		element->ExcitationSystemDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics*>(BaseClass_ptr2);
		if(element->ExcitationSystemDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics*>(BaseClass_ptr1))
	{
		element->ExcitationSystemDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics*>(BaseClass_ptr2);
		if(element->ExcitationSystemDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::TurbineLoadControllerDynamics::TurbineLoadControllerDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::TurbineLoadControllerDynamics::TurbineLoadControllerDynamics*>(BaseClass_ptr1))
	{
		element->TurbineGovernorDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics*>(BaseClass_ptr2);
		if(element->TurbineGovernorDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics*>(BaseClass_ptr1))
	{
		element->ExcitationSystemDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics*>(BaseClass_ptr2);
		if(element->ExcitationSystemDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_UnderexcitationLimiterDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics*>(BaseClass_ptr1))
	{
		element->RemoteInputSignal = dynamic_cast<IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal*>(BaseClass_ptr2);
		if(element->RemoteInputSignal != nullptr)
			return true;
	}
	return false;
}

bool assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::VoltageAdjusterDynamics::VoltageAdjusterDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::VoltageAdjusterDynamics::VoltageAdjusterDynamics*>(BaseClass_ptr1))
	{
		element->PFVArControllerType1Dynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArControllerType1Dynamics*>(BaseClass_ptr2);
		if(element->PFVArControllerType1Dynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_VoltageCompensatorDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VoltageCompensatorDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VoltageCompensatorDynamics*>(BaseClass_ptr1))
	{
		element->ExcitationSystemDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics*>(BaseClass_ptr2);
		if(element->ExcitationSystemDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_VoltageCompensatorDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VoltageCompensatorDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VoltageCompensatorDynamics*>(BaseClass_ptr1))
	{
		element->RemoteInputSignal = dynamic_cast<IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal*>(BaseClass_ptr2);
		if(element->RemoteInputSignal != nullptr)
			return true;
	}
	return false;
}

bool assign_GenICompensationForGenJ_VcompIEEEType2(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::GenICompensationForGenJ* element = dynamic_cast<IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::GenICompensationForGenJ*>(BaseClass_ptr1))
	{
		element->VcompIEEEType2 = dynamic_cast<IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VCompIEEEType2*>(BaseClass_ptr2);
		if(element->VcompIEEEType2 != nullptr)
			return true;
	}
	return false;
}

bool assign_GenICompensationForGenJ_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::GenICompensationForGenJ* element = dynamic_cast<IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::GenICompensationForGenJ*>(BaseClass_ptr1))
	{
		element->SynchronousMachineDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics*>(BaseClass_ptr2);
		if(element->SynchronousMachineDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2Dynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2Dynamics*>(BaseClass_ptr1))
	{
		element->AsynchronousMachineDynamics = dynamic_cast<IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineDynamics*>(BaseClass_ptr2);
		if(element->AsynchronousMachineDynamics != nullptr)
			return true;
	}
	return false;
}

bool assign_WindTurbineType1or2Dynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2Dynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2Dynamics*>(BaseClass_ptr1))
	{
		element->RemoteInputSignal = dynamic_cast<IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal*>(BaseClass_ptr2);
		if(element->RemoteInputSignal != nullptr)
			return true;
	}
	return false;
}

bool assign_WindAeroConstIEC_WindGenTurbineType1aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindAeroConstIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindAeroConstIEC*>(BaseClass_ptr1))
	{
		element->WindGenTurbineType1aIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType1aIEC*>(BaseClass_ptr2);
		if(element->WindGenTurbineType1aIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindTurbineType3or4Dynamics_EnergySource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4Dynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4Dynamics*>(BaseClass_ptr1))
	{
		element->EnergySource = dynamic_cast<IEC61970::Base::Wires::EnergySource*>(BaseClass_ptr2);
		if(element->EnergySource != nullptr)
			return true;
	}
	return false;
}

bool assign_WindTurbineType3or4Dynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4Dynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4Dynamics*>(BaseClass_ptr1))
	{
		element->RemoteInputSignal = dynamic_cast<IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal*>(BaseClass_ptr2);
		if(element->RemoteInputSignal != nullptr)
			return true;
	}
	return false;
}

bool assign_WindAeroOneDimIEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindAeroOneDimIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindAeroOneDimIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType3IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType3IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindAeroTwoDimIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindAeroTwoDimIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType3IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType3IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindContCurrLimIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindContCurrLimIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContCurrLimIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType3or4IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType3or4IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindContPitchAngleIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType3IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType3IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType3IEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType3IEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType3IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType3IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindContPType4aIEC_WindTurbineType4aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType4aIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType4aIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType4aIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4aIEC*>(BaseClass_ptr2);
		if(element->WindTurbineType4aIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindContPType4bIEC_WindTurbineType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType4bIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType4bIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType4bIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4bIEC*>(BaseClass_ptr2);
		if(element->WindTurbineType4bIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindContQIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindContQIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContQIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType3or4IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType3or4IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindContQLimIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindContQLimIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContQLimIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType3or4IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType3or4IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindContQPQULimIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindContQPQULimIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContQPQULimIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType3or4IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType3or4IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindContRotorRIEC_WindGenTurbineType2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindContRotorRIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContRotorRIEC*>(BaseClass_ptr1))
	{
		element->WindGenTurbineType2IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType2IEC*>(BaseClass_ptr2);
		if(element->WindGenTurbineType2IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindPlantDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantDynamics*>(BaseClass_ptr1))
	{
		element->RemoteInputSignal = dynamic_cast<IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal*>(BaseClass_ptr2);
		if(element->RemoteInputSignal != nullptr)
			return true;
	}
	return false;
}

bool assign_WindPlantIEC_WindPlantReactiveControlIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantIEC*>(BaseClass_ptr1))
	{
		element->WindPlantReactiveControlIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantReactiveControlIEC*>(BaseClass_ptr2);
		if(element->WindPlantReactiveControlIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_WindPlantIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantFreqPcontrolIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		element->WindPlantIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantIEC*>(BaseClass_ptr2);
		if(element->WindPlantIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindProtectionIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindProtectionIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindProtectionIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType3or4IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType3or4IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindProtectionIEC_WindTurbineType1or2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindProtectionIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindProtectionIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType1or2IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType1or2IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindPitchContPowerIEC_WindGenTurbineType2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindPitchContPowerIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindPitchContPowerIEC*>(BaseClass_ptr1))
	{
		element->WindGenTurbineType2IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType2IEC*>(BaseClass_ptr2);
		if(element->WindGenTurbineType2IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindGenType3IEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType3IEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType3IEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType3IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType3IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		element->WindPlantFreqPcontrolIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantFreqPcontrolIEC*>(BaseClass_ptr2);
		if(element->WindPlantFreqPcontrolIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_WindPlantReactiveControlIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		element->WindPlantReactiveControlIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantReactiveControlIEC*>(BaseClass_ptr2);
		if(element->WindPlantReactiveControlIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_WindProtectionIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		element->WindProtectionIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindProtectionIEC*>(BaseClass_ptr2);
		if(element->WindProtectionIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_WindContQPQULimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		element->WindContQPQULimIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContQPQULimIEC*>(BaseClass_ptr2);
		if(element->WindContQPQULimIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_WindContCurrLimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		element->WindContCurrLimIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContCurrLimIEC*>(BaseClass_ptr2);
		if(element->WindContCurrLimIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_WindContPType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		element->WindContPType3IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType3IEC*>(BaseClass_ptr2);
		if(element->WindContPType3IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_WindContRotorRIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		element->WindContRotorRIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindContRotorRIEC*>(BaseClass_ptr2);
		if(element->WindContRotorRIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_WindPitchContPowerIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		element->WindPitchContPowerIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindPitchContPowerIEC*>(BaseClass_ptr2);
		if(element->WindPitchContPowerIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_WindGenType3bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		element->WindGenType3bIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType3bIEC*>(BaseClass_ptr2);
		if(element->WindGenType3bIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType1bIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType1bIEC*>(BaseClass_ptr1))
	{
		element->WindPitchContPowerIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindPitchContPowerIEC*>(BaseClass_ptr2);
		if(element->WindPitchContPowerIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindGenType3aIEC_WindTurbineType4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType3aIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType3aIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType4IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType4IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindGenType4IEC_WindTurbineType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType4IEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType4IEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType4bIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4bIEC*>(BaseClass_ptr2);
		if(element->WindTurbineType4bIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindGenType4IEC_WindTurbineType4aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType4IEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType4IEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType4aIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4aIEC*>(BaseClass_ptr2);
		if(element->WindTurbineType4aIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindMechIEC_WindTurbineType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindMechIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindMechIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType4bIEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4bIEC*>(BaseClass_ptr2);
		if(element->WindTurbineType4bIEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindMechIEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindMechIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindMechIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType3IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType3IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindMechIEC_WindTurbineType1or2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindMechIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindMechIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType1or2IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType1or2IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_WindRefFrameRotIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindRefFrameRotIEC* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindRefFrameRotIEC*>(BaseClass_ptr1))
	{
		element->WindTurbineType3or4IEC = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC*>(BaseClass_ptr2);
		if(element->WindTurbineType3or4IEC != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_LoadUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->LoadUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::LoadUserDefined*>(BaseClass_ptr2);
		if(element->LoadUserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->VoltageCompensatorUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::VoltageCompensatorUserDefined*>(BaseClass_ptr2);
		if(element->VoltageCompensatorUserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->PFVArControllerType2UserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::PFVArControllerType2UserDefined*>(BaseClass_ptr2);
		if(element->PFVArControllerType2UserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->VoltageAdjusterUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::VoltageAdjusterUserDefined*>(BaseClass_ptr2);
		if(element->VoltageAdjusterUserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->PFVArControllerType1UserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::PFVArControllerType1UserDefined*>(BaseClass_ptr2);
		if(element->PFVArControllerType1UserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->DiscontinuousExcitationControlUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr2);
		if(element->DiscontinuousExcitationControlUserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->PowerSystemStabilizerUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::PowerSystemStabilizerUserDefined*>(BaseClass_ptr2);
		if(element->PowerSystemStabilizerUserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->UnderexcitationLimiterUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::UnderexcitationLimiterUserDefined*>(BaseClass_ptr2);
		if(element->UnderexcitationLimiterUserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->OverexcitationLimiterUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::OverexcitationLimiterUserDefined*>(BaseClass_ptr2);
		if(element->OverexcitationLimiterUserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->ExcitationSystemUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ExcitationSystemUserDefined*>(BaseClass_ptr2);
		if(element->ExcitationSystemUserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_MechanicalLoadUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->MechanicalLoadUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::MechanicalLoadUserDefined*>(BaseClass_ptr2);
		if(element->MechanicalLoadUserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->TurbineLoadControllerUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::TurbineLoadControllerUserDefined*>(BaseClass_ptr2);
		if(element->TurbineLoadControllerUserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_TurbineGovernorUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->TurbineGovernorUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::TurbineGovernorUserDefined*>(BaseClass_ptr2);
		if(element->TurbineGovernorUserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_AsynchronousMachineUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->AsynchronousMachineUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::AsynchronousMachineUserDefined*>(BaseClass_ptr2);
		if(element->AsynchronousMachineUserDefined != nullptr)
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		element->SynchronousMachineUserDefined = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::SynchronousMachineUserDefined*>(BaseClass_ptr2);
		if(element->SynchronousMachineUserDefined != nullptr)
			return true;
	}
	return false;
}



bool assign_IdentifiedObject_DiagramObjects(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::IdentifiedObject* element = dynamic_cast<IEC61970::Base::Core::IdentifiedObject*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::DiagramLayout::DiagramObject*>(BaseClass_ptr2) != nullptr)
		{
			element->DiagramObjects.push_back(dynamic_cast<IEC61970::Base::DiagramLayout::DiagramObject*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PowerSystemResource_Controls(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::PowerSystemResource* element = dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::Control*>(BaseClass_ptr2) != nullptr)
		{
			element->Controls.push_back(dynamic_cast<IEC61970::Base::Meas::Control*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PowerSystemResource_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::PowerSystemResource* element = dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::Measurement*>(BaseClass_ptr2) != nullptr)
		{
			element->Measurements.push_back(dynamic_cast<IEC61970::Base::Meas::Measurement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Terminal_RegulatingControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::Terminal* element = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::RegulatingControl*>(BaseClass_ptr2) != nullptr)
		{
			element->RegulatingControl.push_back(dynamic_cast<IEC61970::Base::Wires::RegulatingControl*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Contingency_ContingencyElement(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Contingency::Contingency* element = dynamic_cast<IEC61970::Base::Contingency::Contingency*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Contingency::ContingencyElement*>(BaseClass_ptr2) != nullptr)
		{
			element->ContingencyElement.push_back(dynamic_cast<IEC61970::Base::Contingency::ContingencyElement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_RegularIntervalSchedule_TimePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::RegularIntervalSchedule* element = dynamic_cast<IEC61970::Base::Core::RegularIntervalSchedule*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::RegularTimePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->TimePoints.push_back(dynamic_cast<IEC61970::Base::Core::RegularTimePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Curve_CurveDatas(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::Curve* element = dynamic_cast<IEC61970::Base::Core::Curve*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::CurveData*>(BaseClass_ptr2) != nullptr)
		{
			element->CurveDatas.push_back(dynamic_cast<IEC61970::Base::Core::CurveData*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_GrossToNetActivePowerCurves(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::GeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::GeneratingUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::GrossToNetActivePowerCurve*>(BaseClass_ptr2) != nullptr)
		{
			element->GrossToNetActivePowerCurves.push_back(dynamic_cast<IEC61970::Base::Generation::Production::GrossToNetActivePowerCurve*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_GenUnitOpCostCurves(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::GeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::GeneratingUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::GenUnitOpCostCurve*>(BaseClass_ptr2) != nullptr)
		{
			element->GenUnitOpCostCurves.push_back(dynamic_cast<IEC61970::Base::Generation::Production::GenUnitOpCostCurve*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_RotatingMachine(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::GeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::GeneratingUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::RotatingMachine*>(BaseClass_ptr2) != nullptr)
		{
			element->RotatingMachine.push_back(dynamic_cast<IEC61970::Base::Wires::RotatingMachine*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ControlAreaGeneratingUnit_AltGeneratingUnitMeas(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::ControlArea::ControlAreaGeneratingUnit* element = dynamic_cast<IEC61970::Base::ControlArea::ControlAreaGeneratingUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::ControlArea::AltGeneratingUnitMeas*>(BaseClass_ptr2) != nullptr)
		{
			element->AltGeneratingUnitMeas.push_back(dynamic_cast<IEC61970::Base::ControlArea::AltGeneratingUnitMeas*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TieFlow_AltTieMeas(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::ControlArea::TieFlow* element = dynamic_cast<IEC61970::Base::ControlArea::TieFlow*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::ControlArea::AltTieMeas*>(BaseClass_ptr2) != nullptr)
		{
			element->AltTieMeas.push_back(dynamic_cast<IEC61970::Base::ControlArea::AltTieMeas*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ControlArea_ControlAreaGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::ControlArea::ControlArea* element = dynamic_cast<IEC61970::Base::ControlArea::ControlArea*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::ControlArea::ControlAreaGeneratingUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->ControlAreaGeneratingUnit.push_back(dynamic_cast<IEC61970::Base::ControlArea::ControlAreaGeneratingUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ControlArea_TieFlow(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::ControlArea::ControlArea* element = dynamic_cast<IEC61970::Base::ControlArea::ControlArea*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::ControlArea::TieFlow*>(BaseClass_ptr2) != nullptr)
		{
			element->TieFlow.push_back(dynamic_cast<IEC61970::Base::ControlArea::TieFlow*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_BaseVoltage_ConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::BaseVoltage* element = dynamic_cast<IEC61970::Base::Core::BaseVoltage*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::ConductingEquipment*>(BaseClass_ptr2) != nullptr)
		{
			element->ConductingEquipment.push_back(dynamic_cast<IEC61970::Base::Core::ConductingEquipment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_EquipmentContainer_Equipments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::EquipmentContainer* element = dynamic_cast<IEC61970::Base::Core::EquipmentContainer*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::Equipment*>(BaseClass_ptr2) != nullptr)
		{
			element->Equipments.push_back(dynamic_cast<IEC61970::Base::Core::Equipment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_VoltageLevel_Bays(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::VoltageLevel* element = dynamic_cast<IEC61970::Base::Core::VoltageLevel*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::Bay*>(BaseClass_ptr2) != nullptr)
		{
			element->Bays.push_back(dynamic_cast<IEC61970::Base::Core::Bay*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DCEquipmentContainer_DCTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DC::DCEquipmentContainer* element = dynamic_cast<IEC61970::Base::DC::DCEquipmentContainer*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Topology::DCTopologicalNode*>(BaseClass_ptr2) != nullptr)
		{
			element->DCTopologicalNode.push_back(dynamic_cast<IEC61970::Base::Topology::DCTopologicalNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Substation_VoltageLevels(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::Substation* element = dynamic_cast<IEC61970::Base::Core::Substation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::VoltageLevel*>(BaseClass_ptr2) != nullptr)
		{
			element->VoltageLevels.push_back(dynamic_cast<IEC61970::Base::Core::VoltageLevel*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Substation_Bays(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::Substation* element = dynamic_cast<IEC61970::Base::Core::Substation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::Bay*>(BaseClass_ptr2) != nullptr)
		{
			element->Bays.push_back(dynamic_cast<IEC61970::Base::Core::Bay*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Substation_DCConverterUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::Substation* element = dynamic_cast<IEC61970::Base::Core::Substation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::DC::DCConverterUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->DCConverterUnit.push_back(dynamic_cast<IEC61970::Base::DC::DCConverterUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SubGeographicalRegion_Lines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::SubGeographicalRegion* element = dynamic_cast<IEC61970::Base::Core::SubGeographicalRegion*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::Line*>(BaseClass_ptr2) != nullptr)
		{
			element->Lines.push_back(dynamic_cast<IEC61970::Base::Wires::Line*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SubGeographicalRegion_Substations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::SubGeographicalRegion* element = dynamic_cast<IEC61970::Base::Core::SubGeographicalRegion*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::Substation*>(BaseClass_ptr2) != nullptr)
		{
			element->Substations.push_back(dynamic_cast<IEC61970::Base::Core::Substation*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_GeographicalRegion_Regions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::GeographicalRegion* element = dynamic_cast<IEC61970::Base::Core::GeographicalRegion*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::SubGeographicalRegion*>(BaseClass_ptr2) != nullptr)
		{
			element->Regions.push_back(dynamic_cast<IEC61970::Base::Core::SubGeographicalRegion*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_IrregularIntervalSchedule_TimePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::IrregularIntervalSchedule* element = dynamic_cast<IEC61970::Base::Core::IrregularIntervalSchedule*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::IrregularTimePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->TimePoints.push_back(dynamic_cast<IEC61970::Base::Core::IrregularTimePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ReportingGroup_PowerSystemResource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::ReportingSuperGroup::ReportingGroup* element = dynamic_cast<IEC61970::Base::Core::ReportingSuperGroup::ReportingGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2) != nullptr)
		{
			element->PowerSystemResource.push_back(dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ReportingSuperGroup_ReportingGroups(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Core::ReportingSuperGroup* element = dynamic_cast<IEC61970::Base::Core::ReportingSuperGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::ReportingSuperGroup::ReportingGroup*>(BaseClass_ptr2) != nullptr)
		{
			element->ReportingGroups.push_back(dynamic_cast<IEC61970::Base::Core::ReportingSuperGroup::ReportingGroup*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DCConductingEquipment_DCTerminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DC::DCConductingEquipment* element = dynamic_cast<IEC61970::Base::DC::DCConductingEquipment*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::DC::DCTerminal*>(BaseClass_ptr2) != nullptr)
		{
			element->DCTerminals.push_back(dynamic_cast<IEC61970::Base::DC::DCTerminal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DCNode_DCTerminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DC::DCNode* element = dynamic_cast<IEC61970::Base::DC::DCNode*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::DC::DCBaseTerminal*>(BaseClass_ptr2) != nullptr)
		{
			element->DCTerminals.push_back(dynamic_cast<IEC61970::Base::DC::DCBaseTerminal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DCTopologicalIsland_DCTopologicalNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DC::DCTopologicalIsland* element = dynamic_cast<IEC61970::Base::DC::DCTopologicalIsland*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Topology::DCTopologicalNode*>(BaseClass_ptr2) != nullptr)
		{
			element->DCTopologicalNodes.push_back(dynamic_cast<IEC61970::Base::Topology::DCTopologicalNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PerLengthDCLineParameter_DCLineSegments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DC::PerLengthDCLineParameter* element = dynamic_cast<IEC61970::Base::DC::PerLengthDCLineParameter*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::DC::DCLineSegment*>(BaseClass_ptr2) != nullptr)
		{
			element->DCLineSegments.push_back(dynamic_cast<IEC61970::Base::DC::DCLineSegment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DiagramObject_VisibilityLayers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DiagramLayout::DiagramObject* element = dynamic_cast<IEC61970::Base::DiagramLayout::DiagramObject*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::DiagramLayout::VisibilityLayer*>(BaseClass_ptr2) != nullptr)
		{
			element->VisibilityLayers.push_back(dynamic_cast<IEC61970::Base::DiagramLayout::VisibilityLayer*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DiagramObject_DiagramObjectPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DiagramLayout::DiagramObject* element = dynamic_cast<IEC61970::Base::DiagramLayout::DiagramObject*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::DiagramLayout::DiagramObjectPoint*>(BaseClass_ptr2) != nullptr)
		{
			element->DiagramObjectPoints.push_back(dynamic_cast<IEC61970::Base::DiagramLayout::DiagramObjectPoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DiagramStyle_Diagram(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::DiagramLayout::DiagramStyle* element = dynamic_cast<IEC61970::Base::DiagramLayout::DiagramStyle*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::DiagramLayout::Diagram*>(BaseClass_ptr2) != nullptr)
		{
			element->Diagram.push_back(dynamic_cast<IEC61970::Base::DiagramLayout::Diagram*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_EquivalentNetwork_EquivalentEquipments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Equivalents::EquivalentNetwork* element = dynamic_cast<IEC61970::Base::Equivalents::EquivalentNetwork*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Equivalents::EquivalentEquipment*>(BaseClass_ptr2) != nullptr)
		{
			element->EquivalentEquipments.push_back(dynamic_cast<IEC61970::Base::Equivalents::EquivalentEquipment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Fault_FaultCauseTypes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Faults::Fault* element = dynamic_cast<IEC61970::Base::Faults::Fault*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Faults::FaultCauseType*>(BaseClass_ptr2) != nullptr)
		{
			element->FaultCauseTypes.push_back(dynamic_cast<IEC61970::Base::Faults::FaultCauseType*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ACLineSegment_Clamp(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::ACLineSegment* element = dynamic_cast<IEC61970::Base::Wires::ACLineSegment*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::Clamp*>(BaseClass_ptr2) != nullptr)
		{
			element->Clamp.push_back(dynamic_cast<IEC61970::Base::Wires::Clamp*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PrimeMover_SynchronousMachines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::GenerationTrainingSimulation::PrimeMover* element = dynamic_cast<IEC61970::Base::Generation::GenerationTrainingSimulation::PrimeMover*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::SynchronousMachine*>(BaseClass_ptr2) != nullptr)
		{
			element->SynchronousMachines.push_back(dynamic_cast<IEC61970::Base::Wires::SynchronousMachine*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SteamSupply_SteamTurbines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::GenerationTrainingSimulation::SteamSupply* element = dynamic_cast<IEC61970::Base::Generation::GenerationTrainingSimulation::SteamSupply*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::GenerationTrainingSimulation::SteamTurbine*>(BaseClass_ptr2) != nullptr)
		{
			element->SteamTurbines.push_back(dynamic_cast<IEC61970::Base::Generation::GenerationTrainingSimulation::SteamTurbine*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_HeatRecoveryBoiler_CombustionTurbines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::GenerationTrainingSimulation::HeatRecoveryBoiler* element = dynamic_cast<IEC61970::Base::Generation::GenerationTrainingSimulation::HeatRecoveryBoiler*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::GenerationTrainingSimulation::CombustionTurbine*>(BaseClass_ptr2) != nullptr)
		{
			element->CombustionTurbines.push_back(dynamic_cast<IEC61970::Base::Generation::GenerationTrainingSimulation::CombustionTurbine*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ThermalGeneratingUnit_FuelAllocationSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::ThermalGeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::FuelAllocationSchedule*>(BaseClass_ptr2) != nullptr)
		{
			element->FuelAllocationSchedules.push_back(dynamic_cast<IEC61970::Base::Generation::Production::FuelAllocationSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ThermalGeneratingUnit_EmissionCurves(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::ThermalGeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::EmissionCurve*>(BaseClass_ptr2) != nullptr)
		{
			element->EmissionCurves.push_back(dynamic_cast<IEC61970::Base::Generation::Production::EmissionCurve*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ThermalGeneratingUnit_EmmissionAccounts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::ThermalGeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::EmissionAccount*>(BaseClass_ptr2) != nullptr)
		{
			element->EmmissionAccounts.push_back(dynamic_cast<IEC61970::Base::Generation::Production::EmissionAccount*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CogenerationPlant_ThermalGeneratingUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::CogenerationPlant* element = dynamic_cast<IEC61970::Base::Generation::Production::CogenerationPlant*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->ThermalGeneratingUnits.push_back(dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CombinedCyclePlant_ThermalGeneratingUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::CombinedCyclePlant* element = dynamic_cast<IEC61970::Base::Generation::Production::CombinedCyclePlant*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->ThermalGeneratingUnits.push_back(dynamic_cast<IEC61970::Base::Generation::Production::ThermalGeneratingUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_FossilFuel_FuelAllocationSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::FossilFuel* element = dynamic_cast<IEC61970::Base::Generation::Production::FossilFuel*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::FuelAllocationSchedule*>(BaseClass_ptr2) != nullptr)
		{
			element->FuelAllocationSchedules.push_back(dynamic_cast<IEC61970::Base::Generation::Production::FuelAllocationSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_HydroGeneratingUnit_TailbayLossCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::HydroGeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::HydroGeneratingUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::TailbayLossCurve*>(BaseClass_ptr2) != nullptr)
		{
			element->TailbayLossCurve.push_back(dynamic_cast<IEC61970::Base::Generation::Production::TailbayLossCurve*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_HydroGeneratingUnit_HydroGeneratingEfficiencyCurves(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::HydroGeneratingUnit* element = dynamic_cast<IEC61970::Base::Generation::Production::HydroGeneratingUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::HydroGeneratingEfficiencyCurve*>(BaseClass_ptr2) != nullptr)
		{
			element->HydroGeneratingEfficiencyCurves.push_back(dynamic_cast<IEC61970::Base::Generation::Production::HydroGeneratingEfficiencyCurve*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Reservoir_SpillsIntoReservoirs(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::Reservoir* element = dynamic_cast<IEC61970::Base::Generation::Production::Reservoir*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::Reservoir*>(BaseClass_ptr2) != nullptr)
		{
			element->SpillsIntoReservoirs.push_back(dynamic_cast<IEC61970::Base::Generation::Production::Reservoir*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Reservoir_LevelVsVolumeCurves(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::Reservoir* element = dynamic_cast<IEC61970::Base::Generation::Production::Reservoir*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::LevelVsVolumeCurve*>(BaseClass_ptr2) != nullptr)
		{
			element->LevelVsVolumeCurves.push_back(dynamic_cast<IEC61970::Base::Generation::Production::LevelVsVolumeCurve*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Reservoir_InflowForecasts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::Reservoir* element = dynamic_cast<IEC61970::Base::Generation::Production::Reservoir*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::InflowForecast*>(BaseClass_ptr2) != nullptr)
		{
			element->InflowForecasts.push_back(dynamic_cast<IEC61970::Base::Generation::Production::InflowForecast*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_HydroPowerPlant_HydroPumps(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::HydroPowerPlant* element = dynamic_cast<IEC61970::Base::Generation::Production::HydroPowerPlant*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::HydroPump*>(BaseClass_ptr2) != nullptr)
		{
			element->HydroPumps.push_back(dynamic_cast<IEC61970::Base::Generation::Production::HydroPump*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_HydroPowerPlant_HydroGeneratingUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Generation::Production::HydroPowerPlant* element = dynamic_cast<IEC61970::Base::Generation::Production::HydroPowerPlant*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Generation::Production::HydroGeneratingUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->HydroGeneratingUnits.push_back(dynamic_cast<IEC61970::Base::Generation::Production::HydroGeneratingUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_EnergyConsumer_EnergyConsumerPhase(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::EnergyConsumer* element = dynamic_cast<IEC61970::Base::Wires::EnergyConsumer*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::EnergyConsumerPhase*>(BaseClass_ptr2) != nullptr)
		{
			element->EnergyConsumerPhase.push_back(dynamic_cast<IEC61970::Base::Wires::EnergyConsumerPhase*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ConformLoadGroup_EnergyConsumers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::LoadModel::ConformLoadGroup* element = dynamic_cast<IEC61970::Base::LoadModel::ConformLoadGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::LoadModel::ConformLoad*>(BaseClass_ptr2) != nullptr)
		{
			element->EnergyConsumers.push_back(dynamic_cast<IEC61970::Base::LoadModel::ConformLoad*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ConformLoadGroup_ConformLoadSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::LoadModel::ConformLoadGroup* element = dynamic_cast<IEC61970::Base::LoadModel::ConformLoadGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::LoadModel::ConformLoadSchedule*>(BaseClass_ptr2) != nullptr)
		{
			element->ConformLoadSchedules.push_back(dynamic_cast<IEC61970::Base::LoadModel::ConformLoadSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DayType_SeasonDayTypeSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::LoadModel::DayType* element = dynamic_cast<IEC61970::Base::LoadModel::DayType*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::LoadModel::SeasonDayTypeSchedule*>(BaseClass_ptr2) != nullptr)
		{
			element->SeasonDayTypeSchedules.push_back(dynamic_cast<IEC61970::Base::LoadModel::SeasonDayTypeSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SubLoadArea_LoadGroups(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::LoadModel::SubLoadArea* element = dynamic_cast<IEC61970::Base::LoadModel::SubLoadArea*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::LoadModel::LoadGroup*>(BaseClass_ptr2) != nullptr)
		{
			element->LoadGroups.push_back(dynamic_cast<IEC61970::Base::LoadModel::LoadGroup*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_LoadArea_SubLoadAreas(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::LoadModel::LoadArea* element = dynamic_cast<IEC61970::Base::LoadModel::LoadArea*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::LoadModel::SubLoadArea*>(BaseClass_ptr2) != nullptr)
		{
			element->SubLoadAreas.push_back(dynamic_cast<IEC61970::Base::LoadModel::SubLoadArea*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_NonConformLoadGroup_EnergyConsumers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::LoadModel::NonConformLoadGroup* element = dynamic_cast<IEC61970::Base::LoadModel::NonConformLoadGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::LoadModel::NonConformLoad*>(BaseClass_ptr2) != nullptr)
		{
			element->EnergyConsumers.push_back(dynamic_cast<IEC61970::Base::LoadModel::NonConformLoad*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_NonConformLoadGroup_NonConformLoadSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::LoadModel::NonConformLoadGroup* element = dynamic_cast<IEC61970::Base::LoadModel::NonConformLoadGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::LoadModel::NonConformLoadSchedule*>(BaseClass_ptr2) != nullptr)
		{
			element->NonConformLoadSchedules.push_back(dynamic_cast<IEC61970::Base::LoadModel::NonConformLoadSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PowerCutZone_EnergyConsumers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::LoadModel::PowerCutZone* element = dynamic_cast<IEC61970::Base::LoadModel::PowerCutZone*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::EnergyConsumer*>(BaseClass_ptr2) != nullptr)
		{
			element->EnergyConsumers.push_back(dynamic_cast<IEC61970::Base::Wires::EnergyConsumer*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Season_SeasonDayTypeSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::LoadModel::Season* element = dynamic_cast<IEC61970::Base::LoadModel::Season*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::LoadModel::SeasonDayTypeSchedule*>(BaseClass_ptr2) != nullptr)
		{
			element->SeasonDayTypeSchedules.push_back(dynamic_cast<IEC61970::Base::LoadModel::SeasonDayTypeSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AccumulatorLimitSet_Limits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::AccumulatorLimitSet* element = dynamic_cast<IEC61970::Base::Meas::AccumulatorLimitSet*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::AccumulatorLimit*>(BaseClass_ptr2) != nullptr)
		{
			element->Limits.push_back(dynamic_cast<IEC61970::Base::Meas::AccumulatorLimit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Accumulator_AccumulatorValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::Accumulator* element = dynamic_cast<IEC61970::Base::Meas::Accumulator*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::AccumulatorValue*>(BaseClass_ptr2) != nullptr)
		{
			element->AccumulatorValues.push_back(dynamic_cast<IEC61970::Base::Meas::AccumulatorValue*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Accumulator_LimitSets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::Accumulator* element = dynamic_cast<IEC61970::Base::Meas::Accumulator*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::AccumulatorLimitSet*>(BaseClass_ptr2) != nullptr)
		{
			element->LimitSets.push_back(dynamic_cast<IEC61970::Base::Meas::AccumulatorLimitSet*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AnalogLimitSet_Limits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::AnalogLimitSet* element = dynamic_cast<IEC61970::Base::Meas::AnalogLimitSet*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::AnalogLimit*>(BaseClass_ptr2) != nullptr)
		{
			element->Limits.push_back(dynamic_cast<IEC61970::Base::Meas::AnalogLimit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Analog_AnalogValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::Analog* element = dynamic_cast<IEC61970::Base::Meas::Analog*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::AnalogValue*>(BaseClass_ptr2) != nullptr)
		{
			element->AnalogValues.push_back(dynamic_cast<IEC61970::Base::Meas::AnalogValue*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Analog_LimitSets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::Analog* element = dynamic_cast<IEC61970::Base::Meas::Analog*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::AnalogLimitSet*>(BaseClass_ptr2) != nullptr)
		{
			element->LimitSets.push_back(dynamic_cast<IEC61970::Base::Meas::AnalogLimitSet*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ValueAliasSet_Values(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::ValueAliasSet* element = dynamic_cast<IEC61970::Base::Meas::ValueAliasSet*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::ValueToAlias*>(BaseClass_ptr2) != nullptr)
		{
			element->Values.push_back(dynamic_cast<IEC61970::Base::Meas::ValueToAlias*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ValueAliasSet_Discretes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::ValueAliasSet* element = dynamic_cast<IEC61970::Base::Meas::ValueAliasSet*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::Discrete*>(BaseClass_ptr2) != nullptr)
		{
			element->Discretes.push_back(dynamic_cast<IEC61970::Base::Meas::Discrete*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Discrete_DiscreteValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::Discrete* element = dynamic_cast<IEC61970::Base::Meas::Discrete*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::DiscreteValue*>(BaseClass_ptr2) != nullptr)
		{
			element->DiscreteValues.push_back(dynamic_cast<IEC61970::Base::Meas::DiscreteValue*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_MeasurementValueSource_MeasurementValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Meas::MeasurementValueSource* element = dynamic_cast<IEC61970::Base::Meas::MeasurementValueSource*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::MeasurementValue*>(BaseClass_ptr2) != nullptr)
		{
			element->MeasurementValues.push_back(dynamic_cast<IEC61970::Base::Meas::MeasurementValue*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_BranchGroup_BranchGroupTerminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::OperationalLimits::BranchGroup* element = dynamic_cast<IEC61970::Base::OperationalLimits::BranchGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::OperationalLimits::BranchGroupTerminal*>(BaseClass_ptr2) != nullptr)
		{
			element->BranchGroupTerminal.push_back(dynamic_cast<IEC61970::Base::OperationalLimits::BranchGroupTerminal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OperationalLimitSet_OperationalLimitValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::OperationalLimits::OperationalLimitSet* element = dynamic_cast<IEC61970::Base::OperationalLimits::OperationalLimitSet*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::OperationalLimits::OperationalLimit*>(BaseClass_ptr2) != nullptr)
		{
			element->OperationalLimitValue.push_back(dynamic_cast<IEC61970::Base::OperationalLimits::OperationalLimit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Switch_SwitchPhase(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::Switch* element = dynamic_cast<IEC61970::Base::Wires::Switch*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::SwitchPhase*>(BaseClass_ptr2) != nullptr)
		{
			element->SwitchPhase.push_back(dynamic_cast<IEC61970::Base::Wires::SwitchPhase*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Switch_SwitchSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::Switch* element = dynamic_cast<IEC61970::Base::Wires::Switch*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::SwitchSchedule*>(BaseClass_ptr2) != nullptr)
		{
			element->SwitchSchedules.push_back(dynamic_cast<IEC61970::Base::Wires::SwitchSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ProtectedSwitch_RecloseSequences(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::ProtectedSwitch* element = dynamic_cast<IEC61970::Base::Wires::ProtectedSwitch*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Protection::RecloseSequence*>(BaseClass_ptr2) != nullptr)
		{
			element->RecloseSequences.push_back(dynamic_cast<IEC61970::Base::Protection::RecloseSequence*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ProtectionEquipment_ProtectedSwitches(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Protection::ProtectionEquipment* element = dynamic_cast<IEC61970::Base::Protection::ProtectionEquipment*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::ProtectedSwitch*>(BaseClass_ptr2) != nullptr)
		{
			element->ProtectedSwitches.push_back(dynamic_cast<IEC61970::Base::Wires::ProtectedSwitch*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ProtectionEquipment_ConductingEquipments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Protection::ProtectionEquipment* element = dynamic_cast<IEC61970::Base::Protection::ProtectionEquipment*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::ConductingEquipment*>(BaseClass_ptr2) != nullptr)
		{
			element->ConductingEquipments.push_back(dynamic_cast<IEC61970::Base::Core::ConductingEquipment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_RemoteUnit_RemotePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::SCADA::RemoteUnit* element = dynamic_cast<IEC61970::Base::SCADA::RemoteUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::SCADA::RemotePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->RemotePoints.push_back(dynamic_cast<IEC61970::Base::SCADA::RemotePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CommunicationLink_RemoteUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::SCADA::CommunicationLink* element = dynamic_cast<IEC61970::Base::SCADA::CommunicationLink*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::SCADA::RemoteUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->RemoteUnits.push_back(dynamic_cast<IEC61970::Base::SCADA::RemoteUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TopologicalNode_ConnectivityNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Topology::TopologicalNode* element = dynamic_cast<IEC61970::Base::Topology::TopologicalNode*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::ConnectivityNode*>(BaseClass_ptr2) != nullptr)
		{
			element->ConnectivityNodes.push_back(dynamic_cast<IEC61970::Base::Core::ConnectivityNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TopologicalNode_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Topology::TopologicalNode* element = dynamic_cast<IEC61970::Base::Topology::TopologicalNode*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2) != nullptr)
		{
			element->Terminal.push_back(dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ShuntCompensator_ShuntCompensatorPhase(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::ShuntCompensator* element = dynamic_cast<IEC61970::Base::Wires::ShuntCompensator*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::ShuntCompensatorPhase*>(BaseClass_ptr2) != nullptr)
		{
			element->ShuntCompensatorPhase.push_back(dynamic_cast<IEC61970::Base::Wires::ShuntCompensatorPhase*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_BusNameMarker_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Topology::BusNameMarker* element = dynamic_cast<IEC61970::Base::Topology::BusNameMarker*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::ACDCTerminal*>(BaseClass_ptr2) != nullptr)
		{
			element->Terminal.push_back(dynamic_cast<IEC61970::Base::Core::ACDCTerminal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TopologicalIsland_TopologicalNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Topology::TopologicalIsland* element = dynamic_cast<IEC61970::Base::Topology::TopologicalIsland*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Topology::TopologicalNode*>(BaseClass_ptr2) != nullptr)
		{
			element->TopologicalNodes.push_back(dynamic_cast<IEC61970::Base::Topology::TopologicalNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CompositeSwitch_Switches(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::CompositeSwitch* element = dynamic_cast<IEC61970::Base::Wires::CompositeSwitch*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::Switch*>(BaseClass_ptr2) != nullptr)
		{
			element->Switches.push_back(dynamic_cast<IEC61970::Base::Wires::Switch*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::NonlinearShuntCompensator* element = dynamic_cast<IEC61970::Base::Wires::NonlinearShuntCompensator*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::NonlinearShuntCompensatorPoint*>(BaseClass_ptr2) != nullptr)
		{
			element->NonlinearShuntCompensatorPoints.push_back(dynamic_cast<IEC61970::Base::Wires::NonlinearShuntCompensatorPoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_NonlinearShuntCompensatorPhase_NonlinearShuntCompensatorPhasePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::NonlinearShuntCompensatorPhase* element = dynamic_cast<IEC61970::Base::Wires::NonlinearShuntCompensatorPhase*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::NonlinearShuntCompensatorPhasePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->NonlinearShuntCompensatorPhasePoints.push_back(dynamic_cast<IEC61970::Base::Wires::NonlinearShuntCompensatorPhasePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PerLengthImpedance_ACLineSegments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::PerLengthImpedance* element = dynamic_cast<IEC61970::Base::Wires::PerLengthImpedance*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::ACLineSegment*>(BaseClass_ptr2) != nullptr)
		{
			element->ACLineSegments.push_back(dynamic_cast<IEC61970::Base::Wires::ACLineSegment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PerLengthPhaseImpedance_PhaseImpedanceData(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::PerLengthPhaseImpedance* element = dynamic_cast<IEC61970::Base::Wires::PerLengthPhaseImpedance*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::PhaseImpedanceData*>(BaseClass_ptr2) != nullptr)
		{
			element->PhaseImpedanceData.push_back(dynamic_cast<IEC61970::Base::Wires::PhaseImpedanceData*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PhaseTapChangerTable_PhaseTapChangerTabular(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::PhaseTapChangerTable* element = dynamic_cast<IEC61970::Base::Wires::PhaseTapChangerTable*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::PhaseTapChangerTabular*>(BaseClass_ptr2) != nullptr)
		{
			element->PhaseTapChangerTabular.push_back(dynamic_cast<IEC61970::Base::Wires::PhaseTapChangerTabular*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PowerTransformer_PowerTransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::PowerTransformer* element = dynamic_cast<IEC61970::Base::Wires::PowerTransformer*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::PowerTransformerEnd*>(BaseClass_ptr2) != nullptr)
		{
			element->PowerTransformerEnd.push_back(dynamic_cast<IEC61970::Base::Wires::PowerTransformerEnd*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ReactiveCapabilityCurve_EquivalentInjection(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::ReactiveCapabilityCurve* element = dynamic_cast<IEC61970::Base::Wires::ReactiveCapabilityCurve*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Equivalents::EquivalentInjection*>(BaseClass_ptr2) != nullptr)
		{
			element->EquivalentInjection.push_back(dynamic_cast<IEC61970::Base::Equivalents::EquivalentInjection*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::ReactiveCapabilityCurve* element = dynamic_cast<IEC61970::Base::Wires::ReactiveCapabilityCurve*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::SynchronousMachine*>(BaseClass_ptr2) != nullptr)
		{
			element->InitiallyUsedBySynchronousMachines.push_back(dynamic_cast<IEC61970::Base::Wires::SynchronousMachine*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ReactiveCapabilityCurve_SynchronousMachines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::ReactiveCapabilityCurve* element = dynamic_cast<IEC61970::Base::Wires::ReactiveCapabilityCurve*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::SynchronousMachine*>(BaseClass_ptr2) != nullptr)
		{
			element->SynchronousMachines.push_back(dynamic_cast<IEC61970::Base::Wires::SynchronousMachine*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_RegulationSchedule_VoltageControlZones(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::RegulationSchedule* element = dynamic_cast<IEC61970::Base::Wires::RegulationSchedule*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::VoltageControlZone*>(BaseClass_ptr2) != nullptr)
		{
			element->VoltageControlZones.push_back(dynamic_cast<IEC61970::Base::Wires::VoltageControlZone*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TransformerCoreAdmittance_TransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::TransformerCoreAdmittance* element = dynamic_cast<IEC61970::Base::Wires::TransformerCoreAdmittance*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::TransformerEnd*>(BaseClass_ptr2) != nullptr)
		{
			element->TransformerEnd.push_back(dynamic_cast<IEC61970::Base::Wires::TransformerEnd*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TransformerMeshImpedance_ToTransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Base::Wires::TransformerMeshImpedance* element = dynamic_cast<IEC61970::Base::Wires::TransformerMeshImpedance*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::TransformerEnd*>(BaseClass_ptr2) != nullptr)
		{
			element->ToTransformerEnd.push_back(dynamic_cast<IEC61970::Base::Wires::TransformerEnd*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics*>(BaseClass_ptr2) != nullptr)
		{
			element->TurbineGovernorDynamics.push_back(dynamic_cast<IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_LoadDynamics_EnergyConsumer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::LoadDynamics::LoadDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::LoadDynamics::LoadDynamics*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::EnergyConsumer*>(BaseClass_ptr2) != nullptr)
		{
			element->EnergyConsumer.push_back(dynamic_cast<IEC61970::Base::Wires::EnergyConsumer*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PowerSystemStabilizerDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal*>(BaseClass_ptr2) != nullptr)
		{
			element->RemoteInputSignal.push_back(dynamic_cast<IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WindPlantDynamics_WindTurbineType3or4Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantDynamics* element = dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantDynamics*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4Dynamics*>(BaseClass_ptr2) != nullptr)
		{
			element->WindTurbineType3or4Dynamics.push_back(dynamic_cast<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4Dynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WindPlantUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::WindPlantUserDefined* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::WindPlantUserDefined*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr)
		{
			element->ProprietaryParameterDynamics.push_back(dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WindType1or2UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::WindType1or2UserDefined* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::WindType1or2UserDefined*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr)
		{
			element->ProprietaryParameterDynamics.push_back(dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WindType3or4UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61970::Dynamics::UserDefinedModels::WindType3or4UserDefined* element = dynamic_cast<IEC61970::Dynamics::UserDefinedModels::WindType3or4UserDefined*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr)
		{
			element->ProprietaryParameterDynamics.push_back(dynamic_cast<IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


static std::unordered_map<std::string, bool (*)(BaseClass*, BaseClass*)> initialize()
{
	std::unordered_map<std::string, bool (*)(BaseClass*, BaseClass*)> map;

	map.insert(std::make_pair("cim:Measurement.Terminal", &assign_Measurement_Terminal));
	map.insert(std::make_pair("cim:Terminal.Measurement", &assign_Measurement_Terminal));
	map.insert(std::make_pair("cim:PowerSystemResource.PSRType", &assign_PowerSystemResource_PSRType));
	map.insert(std::make_pair("cim:PSRType.PowerSystemResource", &assign_PowerSystemResource_PSRType));
	map.insert(std::make_pair("cim:ConnectivityNode.ConnectivityNodeContainer", &assign_ConnectivityNode_ConnectivityNodeContainer));
	map.insert(std::make_pair("cim:ConnectivityNodeContainer.ConnectivityNode", &assign_ConnectivityNode_ConnectivityNodeContainer));
	map.insert(std::make_pair("cim:Terminal.ConnectivityNode", &assign_Terminal_ConnectivityNode));
	map.insert(std::make_pair("cim:ConnectivityNode.Terminal", &assign_Terminal_ConnectivityNode));
	map.insert(std::make_pair("cim:Terminal.ConductingEquipment", &assign_Terminal_ConductingEquipment));
	map.insert(std::make_pair("cim:ConductingEquipment.Terminal", &assign_Terminal_ConductingEquipment));
	map.insert(std::make_pair("cim:AuxiliaryEquipment.Terminal", &assign_AuxiliaryEquipment_Terminal));
	map.insert(std::make_pair("cim:Terminal.AuxiliaryEquipment", &assign_AuxiliaryEquipment_Terminal));
	map.insert(std::make_pair("cim:ContingencyEquipment.Equipment", &assign_ContingencyEquipment_Equipment));
	map.insert(std::make_pair("cim:Equipment.ContingencyEquipment", &assign_ContingencyEquipment_Equipment));
	map.insert(std::make_pair("cim:MeasurementValue.RemoteSource", &assign_MeasurementValue_RemoteSource));
	map.insert(std::make_pair("cim:RemoteSource.MeasurementValue", &assign_MeasurementValue_RemoteSource));
	map.insert(std::make_pair("cim:MeasurementValue.MeasurementValueQuality", &assign_MeasurementValue_MeasurementValueQuality));
	map.insert(std::make_pair("cim:MeasurementValueQuality.MeasurementValue", &assign_MeasurementValue_MeasurementValueQuality));
	map.insert(std::make_pair("cim:AnalogValue.AnalogControl", &assign_AnalogValue_AnalogControl));
	map.insert(std::make_pair("cim:AnalogControl.AnalogValue", &assign_AnalogValue_AnalogControl));
	map.insert(std::make_pair("cim:AltGeneratingUnitMeas.AnalogValue", &assign_AltGeneratingUnitMeas_AnalogValue));
	map.insert(std::make_pair("cim:AnalogValue.AltGeneratingUnitMeas", &assign_AltGeneratingUnitMeas_AnalogValue));
	map.insert(std::make_pair("cim:AltTieMeas.AnalogValue", &assign_AltTieMeas_AnalogValue));
	map.insert(std::make_pair("cim:AnalogValue.AltTieMeas", &assign_AltTieMeas_AnalogValue));
	map.insert(std::make_pair("cim:HydroPump.HydroPumpOpSchedule", &assign_HydroPump_HydroPumpOpSchedule));
	map.insert(std::make_pair("cim:HydroPumpOpSchedule.HydroPump", &assign_HydroPump_HydroPumpOpSchedule));
	map.insert(std::make_pair("cim:RegulatingCondEq.RegulatingControl", &assign_RegulatingCondEq_RegulatingControl));
	map.insert(std::make_pair("cim:RegulatingControl.RegulatingCondEq", &assign_RegulatingCondEq_RegulatingControl));
	map.insert(std::make_pair("cim:RotatingMachine.HydroPump", &assign_RotatingMachine_HydroPump));
	map.insert(std::make_pair("cim:HydroPump.RotatingMachine", &assign_RotatingMachine_HydroPump));
	map.insert(std::make_pair("cim:GeneratingUnit.GenUnitOpSchedule", &assign_GeneratingUnit_GenUnitOpSchedule));
	map.insert(std::make_pair("cim:GenUnitOpSchedule.GeneratingUnit", &assign_GeneratingUnit_GenUnitOpSchedule));
	map.insert(std::make_pair("cim:ControlAreaGeneratingUnit.GeneratingUnit", &assign_ControlAreaGeneratingUnit_GeneratingUnit));
	map.insert(std::make_pair("cim:GeneratingUnit.ControlAreaGeneratingUnit", &assign_ControlAreaGeneratingUnit_GeneratingUnit));
	map.insert(std::make_pair("cim:TieFlow.Terminal", &assign_TieFlow_Terminal));
	map.insert(std::make_pair("cim:Terminal.TieFlow", &assign_TieFlow_Terminal));
	map.insert(std::make_pair("cim:ControlArea.EnergyArea", &assign_ControlArea_EnergyArea));
	map.insert(std::make_pair("cim:EnergyArea.ControlArea", &assign_ControlArea_EnergyArea));
	map.insert(std::make_pair("cim:VoltageLevel.BaseVoltage", &assign_VoltageLevel_BaseVoltage));
	map.insert(std::make_pair("cim:BaseVoltage.VoltageLevel", &assign_VoltageLevel_BaseVoltage));
	map.insert(std::make_pair("cim:NameType.NameTypeAuthority", &assign_NameType_NameTypeAuthority));
	map.insert(std::make_pair("cim:NameTypeAuthority.NameType", &assign_NameType_NameTypeAuthority));
	map.insert(std::make_pair("cim:Name.NameType", &assign_Name_NameType));
	map.insert(std::make_pair("cim:NameType.Name", &assign_Name_NameType));
	map.insert(std::make_pair("cim:Name.IdentifiedObject", &assign_Name_IdentifiedObject));
	map.insert(std::make_pair("cim:IdentifiedObject.Name", &assign_Name_IdentifiedObject));
	map.insert(std::make_pair("cim:OperatingShare.OperatingParticipant", &assign_OperatingShare_OperatingParticipant));
	map.insert(std::make_pair("cim:OperatingParticipant.OperatingShare", &assign_OperatingShare_OperatingParticipant));
	map.insert(std::make_pair("cim:OperatingShare.PowerSystemResource", &assign_OperatingShare_PowerSystemResource));
	map.insert(std::make_pair("cim:PowerSystemResource.OperatingShare", &assign_OperatingShare_PowerSystemResource));
	map.insert(std::make_pair("cim:ACDCConverter.PccTerminal", &assign_ACDCConverter_PccTerminal));
	map.insert(std::make_pair("cim:PccTerminal.ACDCConverter", &assign_ACDCConverter_PccTerminal));
	map.insert(std::make_pair("cim:DCBaseTerminal.DCTopologicalNode", &assign_DCBaseTerminal_DCTopologicalNode));
	map.insert(std::make_pair("cim:DCTopologicalNode.DCBaseTerminal", &assign_DCBaseTerminal_DCTopologicalNode));
	map.insert(std::make_pair("cim:ACDCConverterDCTerminal.DCConductingEquipment", &assign_ACDCConverterDCTerminal_DCConductingEquipment));
	map.insert(std::make_pair("cim:DCConductingEquipment.ACDCConverterDCTerminal", &assign_ACDCConverterDCTerminal_DCConductingEquipment));
	map.insert(std::make_pair("cim:DCLine.Region", &assign_DCLine_Region));
	map.insert(std::make_pair("cim:Region.DCLine", &assign_DCLine_Region));
	map.insert(std::make_pair("cim:DCNode.DCTopologicalNode", &assign_DCNode_DCTopologicalNode));
	map.insert(std::make_pair("cim:DCTopologicalNode.DCNode", &assign_DCNode_DCTopologicalNode));
	map.insert(std::make_pair("cim:DCNode.DCEquipmentContainer", &assign_DCNode_DCEquipmentContainer));
	map.insert(std::make_pair("cim:DCEquipmentContainer.DCNode", &assign_DCNode_DCEquipmentContainer));
	map.insert(std::make_pair("cim:VsConverter.CapabilityCurve", &assign_VsConverter_CapabilityCurve));
	map.insert(std::make_pair("cim:CapabilityCurve.VsConverter", &assign_VsConverter_CapabilityCurve));
	map.insert(std::make_pair("cim:DiagramObjectPoint.DiagramObjectGluePoint", &assign_DiagramObjectPoint_DiagramObjectGluePoint));
	map.insert(std::make_pair("cim:DiagramObjectGluePoint.DiagramObjectPoint", &assign_DiagramObjectPoint_DiagramObjectGluePoint));
	map.insert(std::make_pair("cim:DiagramObject.Diagram", &assign_DiagramObject_Diagram));
	map.insert(std::make_pair("cim:Diagram.DiagramObject", &assign_DiagramObject_Diagram));
	map.insert(std::make_pair("cim:DiagramObject.DiagramObjectStyle", &assign_DiagramObject_DiagramObjectStyle));
	map.insert(std::make_pair("cim:DiagramObjectStyle.DiagramObject", &assign_DiagramObject_DiagramObjectStyle));
	map.insert(std::make_pair("cim:Fault.FaultyEquipment", &assign_Fault_FaultyEquipment));
	map.insert(std::make_pair("cim:FaultyEquipment.Fault", &assign_Fault_FaultyEquipment));
	map.insert(std::make_pair("cim:EquipmentFault.Terminal", &assign_EquipmentFault_Terminal));
	map.insert(std::make_pair("cim:Terminal.EquipmentFault", &assign_EquipmentFault_Terminal));
	map.insert(std::make_pair("cim:LineFault.ACLineSegment", &assign_LineFault_ACLineSegment));
	map.insert(std::make_pair("cim:ACLineSegment.LineFault", &assign_LineFault_ACLineSegment));
	map.insert(std::make_pair("cim:CombustionTurbine.AirCompressor", &assign_CombustionTurbine_AirCompressor));
	map.insert(std::make_pair("cim:AirCompressor.CombustionTurbine", &assign_CombustionTurbine_AirCompressor));
	map.insert(std::make_pair("cim:CombustionTurbine.CTTempActivePowerCurve", &assign_CombustionTurbine_CTTempActivePowerCurve));
	map.insert(std::make_pair("cim:CTTempActivePowerCurve.CombustionTurbine", &assign_CombustionTurbine_CTTempActivePowerCurve));
	map.insert(std::make_pair("cim:StartupModel.StartRampCurve", &assign_StartupModel_StartRampCurve));
	map.insert(std::make_pair("cim:StartRampCurve.StartupModel", &assign_StartupModel_StartRampCurve));
	map.insert(std::make_pair("cim:StartupModel.StartIgnFuelCurve", &assign_StartupModel_StartIgnFuelCurve));
	map.insert(std::make_pair("cim:StartIgnFuelCurve.StartupModel", &assign_StartupModel_StartIgnFuelCurve));
	map.insert(std::make_pair("cim:StartupModel.StartMainFuelCurve", &assign_StartupModel_StartMainFuelCurve));
	map.insert(std::make_pair("cim:StartMainFuelCurve.StartupModel", &assign_StartupModel_StartMainFuelCurve));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.HeatRateCurve", &assign_ThermalGeneratingUnit_HeatRateCurve));
	map.insert(std::make_pair("cim:HeatRateCurve.ThermalGeneratingUnit", &assign_ThermalGeneratingUnit_HeatRateCurve));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.StartupModel", &assign_ThermalGeneratingUnit_StartupModel));
	map.insert(std::make_pair("cim:StartupModel.ThermalGeneratingUnit", &assign_ThermalGeneratingUnit_StartupModel));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.ShutdownCurve", &assign_ThermalGeneratingUnit_ShutdownCurve));
	map.insert(std::make_pair("cim:ShutdownCurve.ThermalGeneratingUnit", &assign_ThermalGeneratingUnit_ShutdownCurve));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.IncrementalHeatRateCurve", &assign_ThermalGeneratingUnit_IncrementalHeatRateCurve));
	map.insert(std::make_pair("cim:IncrementalHeatRateCurve.ThermalGeneratingUnit", &assign_ThermalGeneratingUnit_IncrementalHeatRateCurve));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.HeatInputCurve", &assign_ThermalGeneratingUnit_HeatInputCurve));
	map.insert(std::make_pair("cim:HeatInputCurve.ThermalGeneratingUnit", &assign_ThermalGeneratingUnit_HeatInputCurve));
	map.insert(std::make_pair("cim:CAESPlant.ThermalGeneratingUnit", &assign_CAESPlant_ThermalGeneratingUnit));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.CAESPlant", &assign_CAESPlant_ThermalGeneratingUnit));
	map.insert(std::make_pair("cim:CAESPlant.AirCompressor", &assign_CAESPlant_AirCompressor));
	map.insert(std::make_pair("cim:AirCompressor.CAESPlant", &assign_CAESPlant_AirCompressor));
	map.insert(std::make_pair("cim:CogenerationPlant.SteamSendoutSchedule", &assign_CogenerationPlant_SteamSendoutSchedule));
	map.insert(std::make_pair("cim:SteamSendoutSchedule.CogenerationPlant", &assign_CogenerationPlant_SteamSendoutSchedule));
	map.insert(std::make_pair("cim:FossilFuel.ThermalGeneratingUnit", &assign_FossilFuel_ThermalGeneratingUnit));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.FossilFuel", &assign_FossilFuel_ThermalGeneratingUnit));
	map.insert(std::make_pair("cim:HydroGeneratingUnit.PenstockLossCurve", &assign_HydroGeneratingUnit_PenstockLossCurve));
	map.insert(std::make_pair("cim:PenstockLossCurve.HydroGeneratingUnit", &assign_HydroGeneratingUnit_PenstockLossCurve));
	map.insert(std::make_pair("cim:Reservoir.TargetLevelSchedule", &assign_Reservoir_TargetLevelSchedule));
	map.insert(std::make_pair("cim:TargetLevelSchedule.Reservoir", &assign_Reservoir_TargetLevelSchedule));
	map.insert(std::make_pair("cim:HydroPowerPlant.Reservoir", &assign_HydroPowerPlant_Reservoir));
	map.insert(std::make_pair("cim:Reservoir.HydroPowerPlant", &assign_HydroPowerPlant_Reservoir));
	map.insert(std::make_pair("cim:HydroPowerPlant.GenSourcePumpDischargeReservoir", &assign_HydroPowerPlant_GenSourcePumpDischargeReservoir));
	map.insert(std::make_pair("cim:GenSourcePumpDischargeReservoir.HydroPowerPlant", &assign_HydroPowerPlant_GenSourcePumpDischargeReservoir));
	map.insert(std::make_pair("cim:EnergyConsumer.LoadResponse", &assign_EnergyConsumer_LoadResponse));
	map.insert(std::make_pair("cim:LoadResponse.EnergyConsumer", &assign_EnergyConsumer_LoadResponse));
	map.insert(std::make_pair("cim:AccumulatorReset.AccumulatorValue", &assign_AccumulatorReset_AccumulatorValue));
	map.insert(std::make_pair("cim:AccumulatorValue.AccumulatorReset", &assign_AccumulatorReset_AccumulatorValue));
	map.insert(std::make_pair("cim:Command.ValueAliasSet", &assign_Command_ValueAliasSet));
	map.insert(std::make_pair("cim:ValueAliasSet.Command", &assign_Command_ValueAliasSet));
	map.insert(std::make_pair("cim:DiscreteValue.Command", &assign_DiscreteValue_Command));
	map.insert(std::make_pair("cim:Command.DiscreteValue", &assign_DiscreteValue_Command));
	map.insert(std::make_pair("cim:RaiseLowerCommand.ValueAliasSet", &assign_RaiseLowerCommand_ValueAliasSet));
	map.insert(std::make_pair("cim:ValueAliasSet.RaiseLowerCommand", &assign_RaiseLowerCommand_ValueAliasSet));
	map.insert(std::make_pair("cim:StringMeasurementValue.StringMeasurement", &assign_StringMeasurementValue_StringMeasurement));
	map.insert(std::make_pair("cim:StringMeasurement.StringMeasurementValue", &assign_StringMeasurementValue_StringMeasurement));
	map.insert(std::make_pair("cim:OperationalLimit.OperationalLimitType", &assign_OperationalLimit_OperationalLimitType));
	map.insert(std::make_pair("cim:OperationalLimitType.OperationalLimit", &assign_OperationalLimit_OperationalLimitType));
	map.insert(std::make_pair("cim:BranchGroupTerminal.Terminal", &assign_BranchGroupTerminal_Terminal));
	map.insert(std::make_pair("cim:Terminal.BranchGroupTerminal", &assign_BranchGroupTerminal_Terminal));
	map.insert(std::make_pair("cim:OperationalLimitSet.Equipment", &assign_OperationalLimitSet_Equipment));
	map.insert(std::make_pair("cim:Equipment.OperationalLimitSet", &assign_OperationalLimitSet_Equipment));
	map.insert(std::make_pair("cim:OperationalLimitSet.Terminal", &assign_OperationalLimitSet_Terminal));
	map.insert(std::make_pair("cim:Terminal.OperationalLimitSet", &assign_OperationalLimitSet_Terminal));
	map.insert(std::make_pair("cim:RemoteControl.Control", &assign_RemoteControl_Control));
	map.insert(std::make_pair("cim:Control.RemoteControl", &assign_RemoteControl_Control));
	map.insert(std::make_pair("cim:TopologicalNode.ReportingGroup", &assign_TopologicalNode_ReportingGroup));
	map.insert(std::make_pair("cim:ReportingGroup.TopologicalNode", &assign_TopologicalNode_ReportingGroup));
	map.insert(std::make_pair("cim:TopologicalNode.ConnectivityNodeContainer", &assign_TopologicalNode_ConnectivityNodeContainer));
	map.insert(std::make_pair("cim:ConnectivityNodeContainer.TopologicalNode", &assign_TopologicalNode_ConnectivityNodeContainer));
	map.insert(std::make_pair("cim:TopologicalNode.BaseVoltage", &assign_TopologicalNode_BaseVoltage));
	map.insert(std::make_pair("cim:BaseVoltage.TopologicalNode", &assign_TopologicalNode_BaseVoltage));
	map.insert(std::make_pair("cim:SvInjection.TopologicalNode", &assign_SvInjection_TopologicalNode));
	map.insert(std::make_pair("cim:TopologicalNode.SvInjection", &assign_SvInjection_TopologicalNode));
	map.insert(std::make_pair("cim:SvPowerFlow.Terminal", &assign_SvPowerFlow_Terminal));
	map.insert(std::make_pair("cim:Terminal.SvPowerFlow", &assign_SvPowerFlow_Terminal));
	map.insert(std::make_pair("cim:SvShuntCompensatorSections.ShuntCompensator", &assign_SvShuntCompensatorSections_ShuntCompensator));
	map.insert(std::make_pair("cim:ShuntCompensator.SvShuntCompensatorSections", &assign_SvShuntCompensatorSections_ShuntCompensator));
	map.insert(std::make_pair("cim:SvStatus.ConductingEquipment", &assign_SvStatus_ConductingEquipment));
	map.insert(std::make_pair("cim:ConductingEquipment.SvStatus", &assign_SvStatus_ConductingEquipment));
	map.insert(std::make_pair("cim:TapChanger.TapChangerControl", &assign_TapChanger_TapChangerControl));
	map.insert(std::make_pair("cim:TapChangerControl.TapChanger", &assign_TapChanger_TapChangerControl));
	map.insert(std::make_pair("cim:SvTapStep.TapChanger", &assign_SvTapStep_TapChanger));
	map.insert(std::make_pair("cim:TapChanger.SvTapStep", &assign_SvTapStep_TapChanger));
	map.insert(std::make_pair("cim:SvVoltage.TopologicalNode", &assign_SvVoltage_TopologicalNode));
	map.insert(std::make_pair("cim:TopologicalNode.SvVoltage", &assign_SvVoltage_TopologicalNode));
	map.insert(std::make_pair("cim:BusNameMarker.ReportingGroup", &assign_BusNameMarker_ReportingGroup));
	map.insert(std::make_pair("cim:ReportingGroup.BusNameMarker", &assign_BusNameMarker_ReportingGroup));
	map.insert(std::make_pair("cim:TopologicalIsland.AngleRefTopologicalNode", &assign_TopologicalIsland_AngleRefTopologicalNode));
	map.insert(std::make_pair("cim:AngleRefTopologicalNode.TopologicalIsland", &assign_TopologicalIsland_AngleRefTopologicalNode));
	map.insert(std::make_pair("cim:ACLineSegmentPhase.ACLineSegment", &assign_ACLineSegmentPhase_ACLineSegment));
	map.insert(std::make_pair("cim:ACLineSegment.ACLineSegmentPhase", &assign_ACLineSegmentPhase_ACLineSegment));
	map.insert(std::make_pair("cim:BusbarSection.VoltageControlZone", &assign_BusbarSection_VoltageControlZone));
	map.insert(std::make_pair("cim:VoltageControlZone.BusbarSection", &assign_BusbarSection_VoltageControlZone));
	map.insert(std::make_pair("cim:Cut.ACLineSegment", &assign_Cut_ACLineSegment));
	map.insert(std::make_pair("cim:ACLineSegment.Cut", &assign_Cut_ACLineSegment));
	map.insert(std::make_pair("cim:MutualCoupling.First_Terminal", &assign_MutualCoupling_First_Terminal));
	map.insert(std::make_pair("cim:First_Terminal.MutualCoupling", &assign_MutualCoupling_First_Terminal));
	map.insert(std::make_pair("cim:MutualCoupling.Second_Terminal", &assign_MutualCoupling_Second_Terminal));
	map.insert(std::make_pair("cim:Second_Terminal.MutualCoupling", &assign_MutualCoupling_Second_Terminal));
	map.insert(std::make_pair("cim:PhaseTapChangerTablePoint.PhaseTapChangerTable", &assign_PhaseTapChangerTablePoint_PhaseTapChangerTable));
	map.insert(std::make_pair("cim:PhaseTapChangerTable.PhaseTapChangerTablePoint", &assign_PhaseTapChangerTablePoint_PhaseTapChangerTable));
	map.insert(std::make_pair("cim:RatioTapChanger.RatioTapChangerTable", &assign_RatioTapChanger_RatioTapChangerTable));
	map.insert(std::make_pair("cim:RatioTapChangerTable.RatioTapChanger", &assign_RatioTapChanger_RatioTapChangerTable));
	map.insert(std::make_pair("cim:TransformerEnd.PhaseTapChanger", &assign_TransformerEnd_PhaseTapChanger));
	map.insert(std::make_pair("cim:PhaseTapChanger.TransformerEnd", &assign_TransformerEnd_PhaseTapChanger));
	map.insert(std::make_pair("cim:TransformerEnd.StarImpedance", &assign_TransformerEnd_StarImpedance));
	map.insert(std::make_pair("cim:StarImpedance.TransformerEnd", &assign_TransformerEnd_StarImpedance));
	map.insert(std::make_pair("cim:TransformerEnd.RatioTapChanger", &assign_TransformerEnd_RatioTapChanger));
	map.insert(std::make_pair("cim:RatioTapChanger.TransformerEnd", &assign_TransformerEnd_RatioTapChanger));
	map.insert(std::make_pair("cim:TransformerEnd.BaseVoltage", &assign_TransformerEnd_BaseVoltage));
	map.insert(std::make_pair("cim:BaseVoltage.TransformerEnd", &assign_TransformerEnd_BaseVoltage));
	map.insert(std::make_pair("cim:TransformerEnd.Terminal", &assign_TransformerEnd_Terminal));
	map.insert(std::make_pair("cim:Terminal.TransformerEnd", &assign_TransformerEnd_Terminal));
	map.insert(std::make_pair("cim:RatioTapChangerTablePoint.RatioTapChangerTable", &assign_RatioTapChangerTablePoint_RatioTapChangerTable));
	map.insert(std::make_pair("cim:RatioTapChangerTable.RatioTapChangerTablePoint", &assign_RatioTapChangerTablePoint_RatioTapChangerTable));
	map.insert(std::make_pair("cim:RegulationSchedule.RegulatingControl", &assign_RegulationSchedule_RegulatingControl));
	map.insert(std::make_pair("cim:RegulatingControl.RegulationSchedule", &assign_RegulationSchedule_RegulatingControl));
	map.insert(std::make_pair("cim:TapSchedule.TapChanger", &assign_TapSchedule_TapChanger));
	map.insert(std::make_pair("cim:TapChanger.TapSchedule", &assign_TapSchedule_TapChanger));
	map.insert(std::make_pair("cim:TransformerMeshImpedance.FromTransformerEnd", &assign_TransformerMeshImpedance_FromTransformerEnd));
	map.insert(std::make_pair("cim:FromTransformerEnd.TransformerMeshImpedance", &assign_TransformerMeshImpedance_FromTransformerEnd));
	map.insert(std::make_pair("cim:TransformerTank.PowerTransformer", &assign_TransformerTank_PowerTransformer));
	map.insert(std::make_pair("cim:PowerTransformer.TransformerTank", &assign_TransformerTank_PowerTransformer));
	map.insert(std::make_pair("cim:TransformerTankEnd.TransformerTank", &assign_TransformerTankEnd_TransformerTank));
	map.insert(std::make_pair("cim:TransformerTank.TransformerTankEnd", &assign_TransformerTankEnd_TransformerTank));
	map.insert(std::make_pair("cim:RemoteInputSignal.Terminal", &assign_RemoteInputSignal_Terminal));
	map.insert(std::make_pair("cim:Terminal.RemoteInputSignal", &assign_RemoteInputSignal_Terminal));
	map.insert(std::make_pair("cim:AsynchronousMachineDynamics.AsynchronousMachine", &assign_AsynchronousMachineDynamics_AsynchronousMachine));
	map.insert(std::make_pair("cim:AsynchronousMachine.AsynchronousMachineDynamics", &assign_AsynchronousMachineDynamics_AsynchronousMachine));
	map.insert(std::make_pair("cim:TurbineGovernorDynamics.AsynchronousMachineDynamics", &assign_TurbineGovernorDynamics_AsynchronousMachineDynamics));
	map.insert(std::make_pair("cim:AsynchronousMachineDynamics.TurbineGovernorDynamics", &assign_TurbineGovernorDynamics_AsynchronousMachineDynamics));
	map.insert(std::make_pair("cim:SynchronousMachineDynamics.SynchronousMachine", &assign_SynchronousMachineDynamics_SynchronousMachine));
	map.insert(std::make_pair("cim:SynchronousMachine.SynchronousMachineDynamics", &assign_SynchronousMachineDynamics_SynchronousMachine));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.SynchronousMachineDynamics", &assign_ExcitationSystemDynamics_SynchronousMachineDynamics));
	map.insert(std::make_pair("cim:SynchronousMachineDynamics.ExcitationSystemDynamics", &assign_ExcitationSystemDynamics_SynchronousMachineDynamics));
	map.insert(std::make_pair("cim:DiscontinuousExcitationControlDynamics.ExcitationSystemDynamics", &assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.DiscontinuousExcitationControlDynamics", &assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:DiscontinuousExcitationControlDynamics.RemoteInputSignal", &assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.DiscontinuousExcitationControlDynamics", &assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:LoadMotor.LoadAggregate", &assign_LoadMotor_LoadAggregate));
	map.insert(std::make_pair("cim:LoadAggregate.LoadMotor", &assign_LoadMotor_LoadAggregate));
	map.insert(std::make_pair("cim:LoadStatic.LoadAggregate", &assign_LoadStatic_LoadAggregate));
	map.insert(std::make_pair("cim:LoadAggregate.LoadStatic", &assign_LoadStatic_LoadAggregate));
	map.insert(std::make_pair("cim:MechanicalLoadDynamics.AsynchronousMachineDynamics", &assign_MechanicalLoadDynamics_AsynchronousMachineDynamics));
	map.insert(std::make_pair("cim:AsynchronousMachineDynamics.MechanicalLoadDynamics", &assign_MechanicalLoadDynamics_AsynchronousMachineDynamics));
	map.insert(std::make_pair("cim:MechanicalLoadDynamics.SynchronousMachineDynamics", &assign_MechanicalLoadDynamics_SynchronousMachineDynamics));
	map.insert(std::make_pair("cim:SynchronousMachineDynamics.MechanicalLoadDynamics", &assign_MechanicalLoadDynamics_SynchronousMachineDynamics));
	map.insert(std::make_pair("cim:OverexcitationLimiterDynamics.ExcitationSystemDynamics", &assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.OverexcitationLimiterDynamics", &assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:PFVArControllerType1Dynamics.ExcitationSystemDynamics", &assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.PFVArControllerType1Dynamics", &assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:PFVArControllerType1Dynamics.RemoteInputSignal", &assign_PFVArControllerType1Dynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.PFVArControllerType1Dynamics", &assign_PFVArControllerType1Dynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:PFVArControllerType2Dynamics.ExcitationSystemDynamics", &assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.PFVArControllerType2Dynamics", &assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics", &assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.PowerSystemStabilizerDynamics", &assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:TurbineLoadControllerDynamics.TurbineGovernorDynamics", &assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics));
	map.insert(std::make_pair("cim:TurbineGovernorDynamics.TurbineLoadControllerDynamics", &assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics));
	map.insert(std::make_pair("cim:UnderexcitationLimiterDynamics.ExcitationSystemDynamics", &assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.UnderexcitationLimiterDynamics", &assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:UnderexcitationLimiterDynamics.RemoteInputSignal", &assign_UnderexcitationLimiterDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.UnderexcitationLimiterDynamics", &assign_UnderexcitationLimiterDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:VoltageAdjusterDynamics.PFVArControllerType1Dynamics", &assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics));
	map.insert(std::make_pair("cim:PFVArControllerType1Dynamics.VoltageAdjusterDynamics", &assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics));
	map.insert(std::make_pair("cim:VoltageCompensatorDynamics.ExcitationSystemDynamics", &assign_VoltageCompensatorDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.VoltageCompensatorDynamics", &assign_VoltageCompensatorDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:VoltageCompensatorDynamics.RemoteInputSignal", &assign_VoltageCompensatorDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.VoltageCompensatorDynamics", &assign_VoltageCompensatorDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:GenICompensationForGenJ.VcompIEEEType2", &assign_GenICompensationForGenJ_VcompIEEEType2));
	map.insert(std::make_pair("cim:VcompIEEEType2.GenICompensationForGenJ", &assign_GenICompensationForGenJ_VcompIEEEType2));
	map.insert(std::make_pair("cim:GenICompensationForGenJ.SynchronousMachineDynamics", &assign_GenICompensationForGenJ_SynchronousMachineDynamics));
	map.insert(std::make_pair("cim:SynchronousMachineDynamics.GenICompensationForGenJ", &assign_GenICompensationForGenJ_SynchronousMachineDynamics));
	map.insert(std::make_pair("cim:WindTurbineType1or2Dynamics.AsynchronousMachineDynamics", &assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics));
	map.insert(std::make_pair("cim:AsynchronousMachineDynamics.WindTurbineType1or2Dynamics", &assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics));
	map.insert(std::make_pair("cim:WindTurbineType1or2Dynamics.RemoteInputSignal", &assign_WindTurbineType1or2Dynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.WindTurbineType1or2Dynamics", &assign_WindTurbineType1or2Dynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:WindAeroConstIEC.WindGenTurbineType1aIEC", &assign_WindAeroConstIEC_WindGenTurbineType1aIEC));
	map.insert(std::make_pair("cim:WindGenTurbineType1aIEC.WindAeroConstIEC", &assign_WindAeroConstIEC_WindGenTurbineType1aIEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4Dynamics.EnergySource", &assign_WindTurbineType3or4Dynamics_EnergySource));
	map.insert(std::make_pair("cim:EnergySource.WindTurbineType3or4Dynamics", &assign_WindTurbineType3or4Dynamics_EnergySource));
	map.insert(std::make_pair("cim:WindTurbineType3or4Dynamics.RemoteInputSignal", &assign_WindTurbineType3or4Dynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.WindTurbineType3or4Dynamics", &assign_WindTurbineType3or4Dynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:WindAeroOneDimIEC.WindTurbineType3IEC", &assign_WindAeroOneDimIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindTurbineType3IEC.WindAeroOneDimIEC", &assign_WindAeroOneDimIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindAeroTwoDimIEC.WindTurbineType3IEC", &assign_WindAeroTwoDimIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindTurbineType3IEC.WindAeroTwoDimIEC", &assign_WindAeroTwoDimIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindContCurrLimIEC.WindTurbineType3or4IEC", &assign_WindContCurrLimIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC.WindContCurrLimIEC", &assign_WindContCurrLimIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindContPitchAngleIEC.WindTurbineType3IEC", &assign_WindContPitchAngleIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindTurbineType3IEC.WindContPitchAngleIEC", &assign_WindContPitchAngleIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindContPType3IEC.WindTurbineType3IEC", &assign_WindContPType3IEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindTurbineType3IEC.WindContPType3IEC", &assign_WindContPType3IEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindContPType4aIEC.WindTurbineType4aIEC", &assign_WindContPType4aIEC_WindTurbineType4aIEC));
	map.insert(std::make_pair("cim:WindTurbineType4aIEC.WindContPType4aIEC", &assign_WindContPType4aIEC_WindTurbineType4aIEC));
	map.insert(std::make_pair("cim:WindContPType4bIEC.WindTurbineType4bIEC", &assign_WindContPType4bIEC_WindTurbineType4bIEC));
	map.insert(std::make_pair("cim:WindTurbineType4bIEC.WindContPType4bIEC", &assign_WindContPType4bIEC_WindTurbineType4bIEC));
	map.insert(std::make_pair("cim:WindContQIEC.WindTurbineType3or4IEC", &assign_WindContQIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC.WindContQIEC", &assign_WindContQIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindContQLimIEC.WindTurbineType3or4IEC", &assign_WindContQLimIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC.WindContQLimIEC", &assign_WindContQLimIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindContQPQULimIEC.WindTurbineType3or4IEC", &assign_WindContQPQULimIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC.WindContQPQULimIEC", &assign_WindContQPQULimIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindContRotorRIEC.WindGenTurbineType2IEC", &assign_WindContRotorRIEC_WindGenTurbineType2IEC));
	map.insert(std::make_pair("cim:WindGenTurbineType2IEC.WindContRotorRIEC", &assign_WindContRotorRIEC_WindGenTurbineType2IEC));
	map.insert(std::make_pair("cim:WindPlantDynamics.RemoteInputSignal", &assign_WindPlantDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.WindPlantDynamics", &assign_WindPlantDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:WindPlantIEC.WindPlantReactiveControlIEC", &assign_WindPlantIEC_WindPlantReactiveControlIEC));
	map.insert(std::make_pair("cim:WindPlantReactiveControlIEC.WindPlantIEC", &assign_WindPlantIEC_WindPlantReactiveControlIEC));
	map.insert(std::make_pair("cim:WindPlantFreqPcontrolIEC.WindPlantIEC", &assign_WindPlantFreqPcontrolIEC_WindPlantIEC));
	map.insert(std::make_pair("cim:WindPlantIEC.WindPlantFreqPcontrolIEC", &assign_WindPlantFreqPcontrolIEC_WindPlantIEC));
	map.insert(std::make_pair("cim:WindProtectionIEC.WindTurbineType3or4IEC", &assign_WindProtectionIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC.WindProtectionIEC", &assign_WindProtectionIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindProtectionIEC.WindTurbineType1or2IEC", &assign_WindProtectionIEC_WindTurbineType1or2IEC));
	map.insert(std::make_pair("cim:WindTurbineType1or2IEC.WindProtectionIEC", &assign_WindProtectionIEC_WindTurbineType1or2IEC));
	map.insert(std::make_pair("cim:WindPitchContPowerIEC.WindGenTurbineType2IEC", &assign_WindPitchContPowerIEC_WindGenTurbineType2IEC));
	map.insert(std::make_pair("cim:WindGenTurbineType2IEC.WindPitchContPowerIEC", &assign_WindPitchContPowerIEC_WindGenTurbineType2IEC));
	map.insert(std::make_pair("cim:WindGenType3IEC.WindTurbineType3IEC", &assign_WindGenType3IEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindTurbineType3IEC.WindGenType3IEC", &assign_WindGenType3IEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindDynamicsLookupTable.WindPlantFreqPcontrolIEC", &assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC));
	map.insert(std::make_pair("cim:WindPlantFreqPcontrolIEC.WindDynamicsLookupTable", &assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC));
	map.insert(std::make_pair("cim:WindDynamicsLookupTable.WindPlantReactiveControlIEC", &assign_WindDynamicsLookupTable_WindPlantReactiveControlIEC));
	map.insert(std::make_pair("cim:WindPlantReactiveControlIEC.WindDynamicsLookupTable", &assign_WindDynamicsLookupTable_WindPlantReactiveControlIEC));
	map.insert(std::make_pair("cim:WindDynamicsLookupTable.WindProtectionIEC", &assign_WindDynamicsLookupTable_WindProtectionIEC));
	map.insert(std::make_pair("cim:WindProtectionIEC.WindDynamicsLookupTable", &assign_WindDynamicsLookupTable_WindProtectionIEC));
	map.insert(std::make_pair("cim:WindDynamicsLookupTable.WindContQPQULimIEC", &assign_WindDynamicsLookupTable_WindContQPQULimIEC));
	map.insert(std::make_pair("cim:WindContQPQULimIEC.WindDynamicsLookupTable", &assign_WindDynamicsLookupTable_WindContQPQULimIEC));
	map.insert(std::make_pair("cim:WindDynamicsLookupTable.WindContCurrLimIEC", &assign_WindDynamicsLookupTable_WindContCurrLimIEC));
	map.insert(std::make_pair("cim:WindContCurrLimIEC.WindDynamicsLookupTable", &assign_WindDynamicsLookupTable_WindContCurrLimIEC));
	map.insert(std::make_pair("cim:WindDynamicsLookupTable.WindContPType3IEC", &assign_WindDynamicsLookupTable_WindContPType3IEC));
	map.insert(std::make_pair("cim:WindContPType3IEC.WindDynamicsLookupTable", &assign_WindDynamicsLookupTable_WindContPType3IEC));
	map.insert(std::make_pair("cim:WindDynamicsLookupTable.WindContRotorRIEC", &assign_WindDynamicsLookupTable_WindContRotorRIEC));
	map.insert(std::make_pair("cim:WindContRotorRIEC.WindDynamicsLookupTable", &assign_WindDynamicsLookupTable_WindContRotorRIEC));
	map.insert(std::make_pair("cim:WindDynamicsLookupTable.WindPitchContPowerIEC", &assign_WindDynamicsLookupTable_WindPitchContPowerIEC));
	map.insert(std::make_pair("cim:WindPitchContPowerIEC.WindDynamicsLookupTable", &assign_WindDynamicsLookupTable_WindPitchContPowerIEC));
	map.insert(std::make_pair("cim:WindDynamicsLookupTable.WindGenType3bIEC", &assign_WindDynamicsLookupTable_WindGenType3bIEC));
	map.insert(std::make_pair("cim:WindGenType3bIEC.WindDynamicsLookupTable", &assign_WindDynamicsLookupTable_WindGenType3bIEC));
	map.insert(std::make_pair("cim:WindGenTurbineType1bIEC.WindPitchContPowerIEC", &assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC));
	map.insert(std::make_pair("cim:WindPitchContPowerIEC.WindGenTurbineType1bIEC", &assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC));
	map.insert(std::make_pair("cim:WindGenType3aIEC.WindTurbineType4IEC", &assign_WindGenType3aIEC_WindTurbineType4IEC));
	map.insert(std::make_pair("cim:WindTurbineType4IEC.WindGenType3aIEC", &assign_WindGenType3aIEC_WindTurbineType4IEC));
	map.insert(std::make_pair("cim:WindGenType4IEC.WindTurbineType4bIEC", &assign_WindGenType4IEC_WindTurbineType4bIEC));
	map.insert(std::make_pair("cim:WindTurbineType4bIEC.WindGenType4IEC", &assign_WindGenType4IEC_WindTurbineType4bIEC));
	map.insert(std::make_pair("cim:WindGenType4IEC.WindTurbineType4aIEC", &assign_WindGenType4IEC_WindTurbineType4aIEC));
	map.insert(std::make_pair("cim:WindTurbineType4aIEC.WindGenType4IEC", &assign_WindGenType4IEC_WindTurbineType4aIEC));
	map.insert(std::make_pair("cim:WindMechIEC.WindTurbineType4bIEC", &assign_WindMechIEC_WindTurbineType4bIEC));
	map.insert(std::make_pair("cim:WindTurbineType4bIEC.WindMechIEC", &assign_WindMechIEC_WindTurbineType4bIEC));
	map.insert(std::make_pair("cim:WindMechIEC.WindTurbineType3IEC", &assign_WindMechIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindTurbineType3IEC.WindMechIEC", &assign_WindMechIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindMechIEC.WindTurbineType1or2IEC", &assign_WindMechIEC_WindTurbineType1or2IEC));
	map.insert(std::make_pair("cim:WindTurbineType1or2IEC.WindMechIEC", &assign_WindMechIEC_WindTurbineType1or2IEC));
	map.insert(std::make_pair("cim:WindRefFrameRotIEC.WindTurbineType3or4IEC", &assign_WindRefFrameRotIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC.WindRefFrameRotIEC", &assign_WindRefFrameRotIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.LoadUserDefined", &assign_ProprietaryParameterDynamics_LoadUserDefined));
	map.insert(std::make_pair("cim:LoadUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_LoadUserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.VoltageCompensatorUserDefined", &assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined));
	map.insert(std::make_pair("cim:VoltageCompensatorUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.PFVArControllerType2UserDefined", &assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined));
	map.insert(std::make_pair("cim:PFVArControllerType2UserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.VoltageAdjusterUserDefined", &assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined));
	map.insert(std::make_pair("cim:VoltageAdjusterUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.PFVArControllerType1UserDefined", &assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined));
	map.insert(std::make_pair("cim:PFVArControllerType1UserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.DiscontinuousExcitationControlUserDefined", &assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined));
	map.insert(std::make_pair("cim:DiscontinuousExcitationControlUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.PowerSystemStabilizerUserDefined", &assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined));
	map.insert(std::make_pair("cim:PowerSystemStabilizerUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.UnderexcitationLimiterUserDefined", &assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined));
	map.insert(std::make_pair("cim:UnderexcitationLimiterUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.OverexcitationLimiterUserDefined", &assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined));
	map.insert(std::make_pair("cim:OverexcitationLimiterUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined", &assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined));
	map.insert(std::make_pair("cim:ExcitationSystemUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.MechanicalLoadUserDefined", &assign_ProprietaryParameterDynamics_MechanicalLoadUserDefined));
	map.insert(std::make_pair("cim:MechanicalLoadUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_MechanicalLoadUserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.TurbineLoadControllerUserDefined", &assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined));
	map.insert(std::make_pair("cim:TurbineLoadControllerUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.TurbineGovernorUserDefined", &assign_ProprietaryParameterDynamics_TurbineGovernorUserDefined));
	map.insert(std::make_pair("cim:TurbineGovernorUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_TurbineGovernorUserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.AsynchronousMachineUserDefined", &assign_ProprietaryParameterDynamics_AsynchronousMachineUserDefined));
	map.insert(std::make_pair("cim:AsynchronousMachineUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_AsynchronousMachineUserDefined));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.SynchronousMachineUserDefined", &assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined));
	map.insert(std::make_pair("cim:SynchronousMachineUserDefined.ProprietaryParameterDynamics", &assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined));
	
	map.insert(std::make_pair("cim:IdentifiedObject.DiagramObjects", &assign_IdentifiedObject_DiagramObjects));
	map.insert(std::make_pair("cim:DiagramObjects.IdentifiedObject", &assign_IdentifiedObject_DiagramObjects));
	map.insert(std::make_pair("cim:PowerSystemResource.Controls", &assign_PowerSystemResource_Controls));
	map.insert(std::make_pair("cim:Controls.PowerSystemResource", &assign_PowerSystemResource_Controls));
	map.insert(std::make_pair("cim:PowerSystemResource.Measurements", &assign_PowerSystemResource_Measurements));
	map.insert(std::make_pair("cim:Measurements.PowerSystemResource", &assign_PowerSystemResource_Measurements));
	map.insert(std::make_pair("cim:Terminal.RegulatingControl", &assign_Terminal_RegulatingControl));
	map.insert(std::make_pair("cim:RegulatingControl.Terminal", &assign_Terminal_RegulatingControl));
	map.insert(std::make_pair("cim:Contingency.ContingencyElement", &assign_Contingency_ContingencyElement));
	map.insert(std::make_pair("cim:ContingencyElement.Contingency", &assign_Contingency_ContingencyElement));
	map.insert(std::make_pair("cim:RegularIntervalSchedule.TimePoints", &assign_RegularIntervalSchedule_TimePoints));
	map.insert(std::make_pair("cim:TimePoints.RegularIntervalSchedule", &assign_RegularIntervalSchedule_TimePoints));
	map.insert(std::make_pair("cim:Curve.CurveDatas", &assign_Curve_CurveDatas));
	map.insert(std::make_pair("cim:CurveDatas.Curve", &assign_Curve_CurveDatas));
	map.insert(std::make_pair("cim:GeneratingUnit.GrossToNetActivePowerCurves", &assign_GeneratingUnit_GrossToNetActivePowerCurves));
	map.insert(std::make_pair("cim:GrossToNetActivePowerCurves.GeneratingUnit", &assign_GeneratingUnit_GrossToNetActivePowerCurves));
	map.insert(std::make_pair("cim:GeneratingUnit.GenUnitOpCostCurves", &assign_GeneratingUnit_GenUnitOpCostCurves));
	map.insert(std::make_pair("cim:GenUnitOpCostCurves.GeneratingUnit", &assign_GeneratingUnit_GenUnitOpCostCurves));
	map.insert(std::make_pair("cim:GeneratingUnit.RotatingMachine", &assign_GeneratingUnit_RotatingMachine));
	map.insert(std::make_pair("cim:RotatingMachine.GeneratingUnit", &assign_GeneratingUnit_RotatingMachine));
	map.insert(std::make_pair("cim:ControlAreaGeneratingUnit.AltGeneratingUnitMeas", &assign_ControlAreaGeneratingUnit_AltGeneratingUnitMeas));
	map.insert(std::make_pair("cim:AltGeneratingUnitMeas.ControlAreaGeneratingUnit", &assign_ControlAreaGeneratingUnit_AltGeneratingUnitMeas));
	map.insert(std::make_pair("cim:TieFlow.AltTieMeas", &assign_TieFlow_AltTieMeas));
	map.insert(std::make_pair("cim:AltTieMeas.TieFlow", &assign_TieFlow_AltTieMeas));
	map.insert(std::make_pair("cim:ControlArea.ControlAreaGeneratingUnit", &assign_ControlArea_ControlAreaGeneratingUnit));
	map.insert(std::make_pair("cim:ControlAreaGeneratingUnit.ControlArea", &assign_ControlArea_ControlAreaGeneratingUnit));
	map.insert(std::make_pair("cim:ControlArea.TieFlow", &assign_ControlArea_TieFlow));
	map.insert(std::make_pair("cim:TieFlow.ControlArea", &assign_ControlArea_TieFlow));
	map.insert(std::make_pair("cim:BaseVoltage.ConductingEquipment", &assign_BaseVoltage_ConductingEquipment));
	map.insert(std::make_pair("cim:ConductingEquipment.BaseVoltage", &assign_BaseVoltage_ConductingEquipment));
	map.insert(std::make_pair("cim:EquipmentContainer.Equipments", &assign_EquipmentContainer_Equipments));
	map.insert(std::make_pair("cim:Equipments.EquipmentContainer", &assign_EquipmentContainer_Equipments));
	map.insert(std::make_pair("cim:VoltageLevel.Bays", &assign_VoltageLevel_Bays));
	map.insert(std::make_pair("cim:Bays.VoltageLevel", &assign_VoltageLevel_Bays));
	map.insert(std::make_pair("cim:DCEquipmentContainer.DCTopologicalNode", &assign_DCEquipmentContainer_DCTopologicalNode));
	map.insert(std::make_pair("cim:DCTopologicalNode.DCEquipmentContainer", &assign_DCEquipmentContainer_DCTopologicalNode));
	map.insert(std::make_pair("cim:Substation.VoltageLevels", &assign_Substation_VoltageLevels));
	map.insert(std::make_pair("cim:VoltageLevels.Substation", &assign_Substation_VoltageLevels));
	map.insert(std::make_pair("cim:Substation.Bays", &assign_Substation_Bays));
	map.insert(std::make_pair("cim:Bays.Substation", &assign_Substation_Bays));
	map.insert(std::make_pair("cim:Substation.DCConverterUnit", &assign_Substation_DCConverterUnit));
	map.insert(std::make_pair("cim:DCConverterUnit.Substation", &assign_Substation_DCConverterUnit));
	map.insert(std::make_pair("cim:SubGeographicalRegion.Lines", &assign_SubGeographicalRegion_Lines));
	map.insert(std::make_pair("cim:Lines.SubGeographicalRegion", &assign_SubGeographicalRegion_Lines));
	map.insert(std::make_pair("cim:SubGeographicalRegion.Substations", &assign_SubGeographicalRegion_Substations));
	map.insert(std::make_pair("cim:Substations.SubGeographicalRegion", &assign_SubGeographicalRegion_Substations));
	map.insert(std::make_pair("cim:GeographicalRegion.Regions", &assign_GeographicalRegion_Regions));
	map.insert(std::make_pair("cim:Regions.GeographicalRegion", &assign_GeographicalRegion_Regions));
	map.insert(std::make_pair("cim:IrregularIntervalSchedule.TimePoints", &assign_IrregularIntervalSchedule_TimePoints));
	map.insert(std::make_pair("cim:TimePoints.IrregularIntervalSchedule", &assign_IrregularIntervalSchedule_TimePoints));
	map.insert(std::make_pair("cim:ReportingGroup.PowerSystemResource", &assign_ReportingGroup_PowerSystemResource));
	map.insert(std::make_pair("cim:PowerSystemResource.ReportingGroup", &assign_ReportingGroup_PowerSystemResource));
	map.insert(std::make_pair("cim:ReportingSuperGroup.ReportingGroups", &assign_ReportingSuperGroup_ReportingGroups));
	map.insert(std::make_pair("cim:ReportingGroups.ReportingSuperGroup", &assign_ReportingSuperGroup_ReportingGroups));
	map.insert(std::make_pair("cim:DCConductingEquipment.DCTerminals", &assign_DCConductingEquipment_DCTerminals));
	map.insert(std::make_pair("cim:DCTerminals.DCConductingEquipment", &assign_DCConductingEquipment_DCTerminals));
	map.insert(std::make_pair("cim:DCNode.DCTerminals", &assign_DCNode_DCTerminals));
	map.insert(std::make_pair("cim:DCTerminals.DCNode", &assign_DCNode_DCTerminals));
	map.insert(std::make_pair("cim:DCTopologicalIsland.DCTopologicalNodes", &assign_DCTopologicalIsland_DCTopologicalNodes));
	map.insert(std::make_pair("cim:DCTopologicalNodes.DCTopologicalIsland", &assign_DCTopologicalIsland_DCTopologicalNodes));
	map.insert(std::make_pair("cim:PerLengthDCLineParameter.DCLineSegments", &assign_PerLengthDCLineParameter_DCLineSegments));
	map.insert(std::make_pair("cim:DCLineSegments.PerLengthDCLineParameter", &assign_PerLengthDCLineParameter_DCLineSegments));
	map.insert(std::make_pair("cim:DiagramObject.VisibilityLayers", &assign_DiagramObject_VisibilityLayers));
	map.insert(std::make_pair("cim:VisibilityLayers.DiagramObject", &assign_DiagramObject_VisibilityLayers));
	map.insert(std::make_pair("cim:DiagramObject.DiagramObjectPoints", &assign_DiagramObject_DiagramObjectPoints));
	map.insert(std::make_pair("cim:DiagramObjectPoints.DiagramObject", &assign_DiagramObject_DiagramObjectPoints));
	map.insert(std::make_pair("cim:DiagramStyle.Diagram", &assign_DiagramStyle_Diagram));
	map.insert(std::make_pair("cim:Diagram.DiagramStyle", &assign_DiagramStyle_Diagram));
	map.insert(std::make_pair("cim:EquivalentNetwork.EquivalentEquipments", &assign_EquivalentNetwork_EquivalentEquipments));
	map.insert(std::make_pair("cim:EquivalentEquipments.EquivalentNetwork", &assign_EquivalentNetwork_EquivalentEquipments));
	map.insert(std::make_pair("cim:Fault.FaultCauseTypes", &assign_Fault_FaultCauseTypes));
	map.insert(std::make_pair("cim:FaultCauseTypes.Fault", &assign_Fault_FaultCauseTypes));
	map.insert(std::make_pair("cim:ACLineSegment.Clamp", &assign_ACLineSegment_Clamp));
	map.insert(std::make_pair("cim:Clamp.ACLineSegment", &assign_ACLineSegment_Clamp));
	map.insert(std::make_pair("cim:PrimeMover.SynchronousMachines", &assign_PrimeMover_SynchronousMachines));
	map.insert(std::make_pair("cim:SynchronousMachines.PrimeMover", &assign_PrimeMover_SynchronousMachines));
	map.insert(std::make_pair("cim:SteamSupply.SteamTurbines", &assign_SteamSupply_SteamTurbines));
	map.insert(std::make_pair("cim:SteamTurbines.SteamSupply", &assign_SteamSupply_SteamTurbines));
	map.insert(std::make_pair("cim:HeatRecoveryBoiler.CombustionTurbines", &assign_HeatRecoveryBoiler_CombustionTurbines));
	map.insert(std::make_pair("cim:CombustionTurbines.HeatRecoveryBoiler", &assign_HeatRecoveryBoiler_CombustionTurbines));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.FuelAllocationSchedules", &assign_ThermalGeneratingUnit_FuelAllocationSchedules));
	map.insert(std::make_pair("cim:FuelAllocationSchedules.ThermalGeneratingUnit", &assign_ThermalGeneratingUnit_FuelAllocationSchedules));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.EmissionCurves", &assign_ThermalGeneratingUnit_EmissionCurves));
	map.insert(std::make_pair("cim:EmissionCurves.ThermalGeneratingUnit", &assign_ThermalGeneratingUnit_EmissionCurves));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.EmmissionAccounts", &assign_ThermalGeneratingUnit_EmmissionAccounts));
	map.insert(std::make_pair("cim:EmmissionAccounts.ThermalGeneratingUnit", &assign_ThermalGeneratingUnit_EmmissionAccounts));
	map.insert(std::make_pair("cim:CogenerationPlant.ThermalGeneratingUnits", &assign_CogenerationPlant_ThermalGeneratingUnits));
	map.insert(std::make_pair("cim:ThermalGeneratingUnits.CogenerationPlant", &assign_CogenerationPlant_ThermalGeneratingUnits));
	map.insert(std::make_pair("cim:CombinedCyclePlant.ThermalGeneratingUnits", &assign_CombinedCyclePlant_ThermalGeneratingUnits));
	map.insert(std::make_pair("cim:ThermalGeneratingUnits.CombinedCyclePlant", &assign_CombinedCyclePlant_ThermalGeneratingUnits));
	map.insert(std::make_pair("cim:FossilFuel.FuelAllocationSchedules", &assign_FossilFuel_FuelAllocationSchedules));
	map.insert(std::make_pair("cim:FuelAllocationSchedules.FossilFuel", &assign_FossilFuel_FuelAllocationSchedules));
	map.insert(std::make_pair("cim:HydroGeneratingUnit.TailbayLossCurve", &assign_HydroGeneratingUnit_TailbayLossCurve));
	map.insert(std::make_pair("cim:TailbayLossCurve.HydroGeneratingUnit", &assign_HydroGeneratingUnit_TailbayLossCurve));
	map.insert(std::make_pair("cim:HydroGeneratingUnit.HydroGeneratingEfficiencyCurves", &assign_HydroGeneratingUnit_HydroGeneratingEfficiencyCurves));
	map.insert(std::make_pair("cim:HydroGeneratingEfficiencyCurves.HydroGeneratingUnit", &assign_HydroGeneratingUnit_HydroGeneratingEfficiencyCurves));
	map.insert(std::make_pair("cim:Reservoir.SpillsIntoReservoirs", &assign_Reservoir_SpillsIntoReservoirs));
	map.insert(std::make_pair("cim:SpillsIntoReservoirs.Reservoir", &assign_Reservoir_SpillsIntoReservoirs));
	map.insert(std::make_pair("cim:Reservoir.LevelVsVolumeCurves", &assign_Reservoir_LevelVsVolumeCurves));
	map.insert(std::make_pair("cim:LevelVsVolumeCurves.Reservoir", &assign_Reservoir_LevelVsVolumeCurves));
	map.insert(std::make_pair("cim:Reservoir.InflowForecasts", &assign_Reservoir_InflowForecasts));
	map.insert(std::make_pair("cim:InflowForecasts.Reservoir", &assign_Reservoir_InflowForecasts));
	map.insert(std::make_pair("cim:HydroPowerPlant.HydroPumps", &assign_HydroPowerPlant_HydroPumps));
	map.insert(std::make_pair("cim:HydroPumps.HydroPowerPlant", &assign_HydroPowerPlant_HydroPumps));
	map.insert(std::make_pair("cim:HydroPowerPlant.HydroGeneratingUnits", &assign_HydroPowerPlant_HydroGeneratingUnits));
	map.insert(std::make_pair("cim:HydroGeneratingUnits.HydroPowerPlant", &assign_HydroPowerPlant_HydroGeneratingUnits));
	map.insert(std::make_pair("cim:EnergyConsumer.EnergyConsumerPhase", &assign_EnergyConsumer_EnergyConsumerPhase));
	map.insert(std::make_pair("cim:EnergyConsumerPhase.EnergyConsumer", &assign_EnergyConsumer_EnergyConsumerPhase));
	map.insert(std::make_pair("cim:ConformLoadGroup.EnergyConsumers", &assign_ConformLoadGroup_EnergyConsumers));
	map.insert(std::make_pair("cim:EnergyConsumers.ConformLoadGroup", &assign_ConformLoadGroup_EnergyConsumers));
	map.insert(std::make_pair("cim:ConformLoadGroup.ConformLoadSchedules", &assign_ConformLoadGroup_ConformLoadSchedules));
	map.insert(std::make_pair("cim:ConformLoadSchedules.ConformLoadGroup", &assign_ConformLoadGroup_ConformLoadSchedules));
	map.insert(std::make_pair("cim:DayType.SeasonDayTypeSchedules", &assign_DayType_SeasonDayTypeSchedules));
	map.insert(std::make_pair("cim:SeasonDayTypeSchedules.DayType", &assign_DayType_SeasonDayTypeSchedules));
	map.insert(std::make_pair("cim:SubLoadArea.LoadGroups", &assign_SubLoadArea_LoadGroups));
	map.insert(std::make_pair("cim:LoadGroups.SubLoadArea", &assign_SubLoadArea_LoadGroups));
	map.insert(std::make_pair("cim:LoadArea.SubLoadAreas", &assign_LoadArea_SubLoadAreas));
	map.insert(std::make_pair("cim:SubLoadAreas.LoadArea", &assign_LoadArea_SubLoadAreas));
	map.insert(std::make_pair("cim:NonConformLoadGroup.EnergyConsumers", &assign_NonConformLoadGroup_EnergyConsumers));
	map.insert(std::make_pair("cim:EnergyConsumers.NonConformLoadGroup", &assign_NonConformLoadGroup_EnergyConsumers));
	map.insert(std::make_pair("cim:NonConformLoadGroup.NonConformLoadSchedules", &assign_NonConformLoadGroup_NonConformLoadSchedules));
	map.insert(std::make_pair("cim:NonConformLoadSchedules.NonConformLoadGroup", &assign_NonConformLoadGroup_NonConformLoadSchedules));
	map.insert(std::make_pair("cim:PowerCutZone.EnergyConsumers", &assign_PowerCutZone_EnergyConsumers));
	map.insert(std::make_pair("cim:EnergyConsumers.PowerCutZone", &assign_PowerCutZone_EnergyConsumers));
	map.insert(std::make_pair("cim:Season.SeasonDayTypeSchedules", &assign_Season_SeasonDayTypeSchedules));
	map.insert(std::make_pair("cim:SeasonDayTypeSchedules.Season", &assign_Season_SeasonDayTypeSchedules));
	map.insert(std::make_pair("cim:AccumulatorLimitSet.Limits", &assign_AccumulatorLimitSet_Limits));
	map.insert(std::make_pair("cim:Limits.AccumulatorLimitSet", &assign_AccumulatorLimitSet_Limits));
	map.insert(std::make_pair("cim:Accumulator.AccumulatorValues", &assign_Accumulator_AccumulatorValues));
	map.insert(std::make_pair("cim:AccumulatorValues.Accumulator", &assign_Accumulator_AccumulatorValues));
	map.insert(std::make_pair("cim:Accumulator.LimitSets", &assign_Accumulator_LimitSets));
	map.insert(std::make_pair("cim:LimitSets.Accumulator", &assign_Accumulator_LimitSets));
	map.insert(std::make_pair("cim:AnalogLimitSet.Limits", &assign_AnalogLimitSet_Limits));
	map.insert(std::make_pair("cim:Limits.AnalogLimitSet", &assign_AnalogLimitSet_Limits));
	map.insert(std::make_pair("cim:Analog.AnalogValues", &assign_Analog_AnalogValues));
	map.insert(std::make_pair("cim:AnalogValues.Analog", &assign_Analog_AnalogValues));
	map.insert(std::make_pair("cim:Analog.LimitSets", &assign_Analog_LimitSets));
	map.insert(std::make_pair("cim:LimitSets.Analog", &assign_Analog_LimitSets));
	map.insert(std::make_pair("cim:ValueAliasSet.Values", &assign_ValueAliasSet_Values));
	map.insert(std::make_pair("cim:Values.ValueAliasSet", &assign_ValueAliasSet_Values));
	map.insert(std::make_pair("cim:ValueAliasSet.Discretes", &assign_ValueAliasSet_Discretes));
	map.insert(std::make_pair("cim:Discretes.ValueAliasSet", &assign_ValueAliasSet_Discretes));
	map.insert(std::make_pair("cim:Discrete.DiscreteValues", &assign_Discrete_DiscreteValues));
	map.insert(std::make_pair("cim:DiscreteValues.Discrete", &assign_Discrete_DiscreteValues));
	map.insert(std::make_pair("cim:MeasurementValueSource.MeasurementValues", &assign_MeasurementValueSource_MeasurementValues));
	map.insert(std::make_pair("cim:MeasurementValues.MeasurementValueSource", &assign_MeasurementValueSource_MeasurementValues));
	map.insert(std::make_pair("cim:BranchGroup.BranchGroupTerminal", &assign_BranchGroup_BranchGroupTerminal));
	map.insert(std::make_pair("cim:BranchGroupTerminal.BranchGroup", &assign_BranchGroup_BranchGroupTerminal));
	map.insert(std::make_pair("cim:OperationalLimitSet.OperationalLimitValue", &assign_OperationalLimitSet_OperationalLimitValue));
	map.insert(std::make_pair("cim:OperationalLimitValue.OperationalLimitSet", &assign_OperationalLimitSet_OperationalLimitValue));
	map.insert(std::make_pair("cim:Switch.SwitchPhase", &assign_Switch_SwitchPhase));
	map.insert(std::make_pair("cim:SwitchPhase.Switch", &assign_Switch_SwitchPhase));
	map.insert(std::make_pair("cim:Switch.SwitchSchedules", &assign_Switch_SwitchSchedules));
	map.insert(std::make_pair("cim:SwitchSchedules.Switch", &assign_Switch_SwitchSchedules));
	map.insert(std::make_pair("cim:ProtectedSwitch.RecloseSequences", &assign_ProtectedSwitch_RecloseSequences));
	map.insert(std::make_pair("cim:RecloseSequences.ProtectedSwitch", &assign_ProtectedSwitch_RecloseSequences));
	map.insert(std::make_pair("cim:ProtectionEquipment.ProtectedSwitches", &assign_ProtectionEquipment_ProtectedSwitches));
	map.insert(std::make_pair("cim:ProtectedSwitches.ProtectionEquipment", &assign_ProtectionEquipment_ProtectedSwitches));
	map.insert(std::make_pair("cim:ProtectionEquipment.ConductingEquipments", &assign_ProtectionEquipment_ConductingEquipments));
	map.insert(std::make_pair("cim:ConductingEquipments.ProtectionEquipment", &assign_ProtectionEquipment_ConductingEquipments));
	map.insert(std::make_pair("cim:RemoteUnit.RemotePoints", &assign_RemoteUnit_RemotePoints));
	map.insert(std::make_pair("cim:RemotePoints.RemoteUnit", &assign_RemoteUnit_RemotePoints));
	map.insert(std::make_pair("cim:CommunicationLink.RemoteUnits", &assign_CommunicationLink_RemoteUnits));
	map.insert(std::make_pair("cim:RemoteUnits.CommunicationLink", &assign_CommunicationLink_RemoteUnits));
	map.insert(std::make_pair("cim:TopologicalNode.ConnectivityNodes", &assign_TopologicalNode_ConnectivityNodes));
	map.insert(std::make_pair("cim:ConnectivityNodes.TopologicalNode", &assign_TopologicalNode_ConnectivityNodes));
	map.insert(std::make_pair("cim:TopologicalNode.Terminal", &assign_TopologicalNode_Terminal));
	map.insert(std::make_pair("cim:Terminal.TopologicalNode", &assign_TopologicalNode_Terminal));
	map.insert(std::make_pair("cim:ShuntCompensator.ShuntCompensatorPhase", &assign_ShuntCompensator_ShuntCompensatorPhase));
	map.insert(std::make_pair("cim:ShuntCompensatorPhase.ShuntCompensator", &assign_ShuntCompensator_ShuntCompensatorPhase));
	map.insert(std::make_pair("cim:BusNameMarker.Terminal", &assign_BusNameMarker_Terminal));
	map.insert(std::make_pair("cim:Terminal.BusNameMarker", &assign_BusNameMarker_Terminal));
	map.insert(std::make_pair("cim:TopologicalIsland.TopologicalNodes", &assign_TopologicalIsland_TopologicalNodes));
	map.insert(std::make_pair("cim:TopologicalNodes.TopologicalIsland", &assign_TopologicalIsland_TopologicalNodes));
	map.insert(std::make_pair("cim:CompositeSwitch.Switches", &assign_CompositeSwitch_Switches));
	map.insert(std::make_pair("cim:Switches.CompositeSwitch", &assign_CompositeSwitch_Switches));
	map.insert(std::make_pair("cim:NonlinearShuntCompensator.NonlinearShuntCompensatorPoints", &assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints));
	map.insert(std::make_pair("cim:NonlinearShuntCompensatorPoints.NonlinearShuntCompensator", &assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints));
	map.insert(std::make_pair("cim:NonlinearShuntCompensatorPhase.NonlinearShuntCompensatorPhasePoints", &assign_NonlinearShuntCompensatorPhase_NonlinearShuntCompensatorPhasePoints));
	map.insert(std::make_pair("cim:NonlinearShuntCompensatorPhasePoints.NonlinearShuntCompensatorPhase", &assign_NonlinearShuntCompensatorPhase_NonlinearShuntCompensatorPhasePoints));
	map.insert(std::make_pair("cim:PerLengthImpedance.ACLineSegments", &assign_PerLengthImpedance_ACLineSegments));
	map.insert(std::make_pair("cim:ACLineSegments.PerLengthImpedance", &assign_PerLengthImpedance_ACLineSegments));
	map.insert(std::make_pair("cim:PerLengthPhaseImpedance.PhaseImpedanceData", &assign_PerLengthPhaseImpedance_PhaseImpedanceData));
	map.insert(std::make_pair("cim:PhaseImpedanceData.PerLengthPhaseImpedance", &assign_PerLengthPhaseImpedance_PhaseImpedanceData));
	map.insert(std::make_pair("cim:PhaseTapChangerTable.PhaseTapChangerTabular", &assign_PhaseTapChangerTable_PhaseTapChangerTabular));
	map.insert(std::make_pair("cim:PhaseTapChangerTabular.PhaseTapChangerTable", &assign_PhaseTapChangerTable_PhaseTapChangerTabular));
	map.insert(std::make_pair("cim:PowerTransformer.PowerTransformerEnd", &assign_PowerTransformer_PowerTransformerEnd));
	map.insert(std::make_pair("cim:PowerTransformerEnd.PowerTransformer", &assign_PowerTransformer_PowerTransformerEnd));
	map.insert(std::make_pair("cim:ReactiveCapabilityCurve.EquivalentInjection", &assign_ReactiveCapabilityCurve_EquivalentInjection));
	map.insert(std::make_pair("cim:EquivalentInjection.ReactiveCapabilityCurve", &assign_ReactiveCapabilityCurve_EquivalentInjection));
	map.insert(std::make_pair("cim:ReactiveCapabilityCurve.InitiallyUsedBySynchronousMachines", &assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines));
	map.insert(std::make_pair("cim:InitiallyUsedBySynchronousMachines.ReactiveCapabilityCurve", &assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines));
	map.insert(std::make_pair("cim:ReactiveCapabilityCurve.SynchronousMachines", &assign_ReactiveCapabilityCurve_SynchronousMachines));
	map.insert(std::make_pair("cim:SynchronousMachines.ReactiveCapabilityCurve", &assign_ReactiveCapabilityCurve_SynchronousMachines));
	map.insert(std::make_pair("cim:RegulationSchedule.VoltageControlZones", &assign_RegulationSchedule_VoltageControlZones));
	map.insert(std::make_pair("cim:VoltageControlZones.RegulationSchedule", &assign_RegulationSchedule_VoltageControlZones));
	map.insert(std::make_pair("cim:TransformerCoreAdmittance.TransformerEnd", &assign_TransformerCoreAdmittance_TransformerEnd));
	map.insert(std::make_pair("cim:TransformerEnd.TransformerCoreAdmittance", &assign_TransformerCoreAdmittance_TransformerEnd));
	map.insert(std::make_pair("cim:TransformerMeshImpedance.ToTransformerEnd", &assign_TransformerMeshImpedance_ToTransformerEnd));
	map.insert(std::make_pair("cim:ToTransformerEnd.TransformerMeshImpedance", &assign_TransformerMeshImpedance_ToTransformerEnd));
	map.insert(std::make_pair("cim:SynchronousMachineDynamics.TurbineGovernorDynamics", &assign_SynchronousMachineDynamics_TurbineGovernorDynamics));
	map.insert(std::make_pair("cim:TurbineGovernorDynamics.SynchronousMachineDynamics", &assign_SynchronousMachineDynamics_TurbineGovernorDynamics));
	map.insert(std::make_pair("cim:LoadDynamics.EnergyConsumer", &assign_LoadDynamics_EnergyConsumer));
	map.insert(std::make_pair("cim:EnergyConsumer.LoadDynamics", &assign_LoadDynamics_EnergyConsumer));
	map.insert(std::make_pair("cim:PowerSystemStabilizerDynamics.RemoteInputSignal", &assign_PowerSystemStabilizerDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.PowerSystemStabilizerDynamics", &assign_PowerSystemStabilizerDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:WindPlantDynamics.WindTurbineType3or4Dynamics", &assign_WindPlantDynamics_WindTurbineType3or4Dynamics));
	map.insert(std::make_pair("cim:WindTurbineType3or4Dynamics.WindPlantDynamics", &assign_WindPlantDynamics_WindTurbineType3or4Dynamics));
	map.insert(std::make_pair("cim:WindPlantUserDefined.ProprietaryParameterDynamics", &assign_WindPlantUserDefined_ProprietaryParameterDynamics));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.WindPlantUserDefined", &assign_WindPlantUserDefined_ProprietaryParameterDynamics));
	map.insert(std::make_pair("cim:WindType1or2UserDefined.ProprietaryParameterDynamics", &assign_WindType1or2UserDefined_ProprietaryParameterDynamics));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.WindType1or2UserDefined", &assign_WindType1or2UserDefined_ProprietaryParameterDynamics));
	map.insert(std::make_pair("cim:WindType3or4UserDefined.ProprietaryParameterDynamics", &assign_WindType3or4UserDefined_ProprietaryParameterDynamics));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.WindType3or4UserDefined", &assign_WindType3or4UserDefined_ProprietaryParameterDynamics));
	

	// Get aliases
	std::ifstream file("task_alias.csv");
	if(file.good())
	{
		std::string line;
		std::regex expr("^([a-zA-Z0-9:.]*)[\t ,;]+([a-zA-Z0-9:.]*)$");
		std::smatch m;
		std::unordered_map<std::string, bool (*)(BaseClass*, BaseClass*)>::iterator it;
		while (std::getline(file, line))
		{
			if(std::regex_match(line, m, expr))
			{
				it = map.find(m[1]);
				if(it != map.end())
				{
					map.insert(std::make_pair(m[2], it->second));
				}
			}
		}
	}
	else
	{
		std::cerr << "task_alias.csv could not be loaded" << std::endl;
	}

	return map;
}
