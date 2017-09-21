#include "CIMFactory.hpp"
#include "Folders.hpp"

static std::unordered_map<std::string, BaseClass* (*)()> initialize();
std::unordered_map<std::string, BaseClass* (*)()> CIMFactory::factory_map = initialize();

BaseClass* CIMFactory::CreateNew(const std::string& name)
{
	std::unordered_map<std::string, BaseClass* (*)()>::iterator it = factory_map.find(name);
	if(it != factory_map.end())
		return (*it->second)();
	else
		return nullptr;
}

bool CIMFactory::IsCIMClass(const std::string& name)
{
	std::unordered_map<std::string, BaseClass* (*)()>::iterator it = factory_map.find(name);
	if(it == factory_map.end())
		return false;
	else
		return true;
}


// cim:IdentifiedObject
BaseClass* IdentifiedObject_factory()
{
	return new IEC61970::Base::Core::IdentifiedObject;
}

// cim:Control
BaseClass* Control_factory()
{
	return new IEC61970::Base::Meas::Control;
}

// cim:ACDCTerminal
BaseClass* ACDCTerminal_factory()
{
	return new IEC61970::Base::Core::ACDCTerminal;
}

// cim:Measurement
BaseClass* Measurement_factory()
{
	return new IEC61970::Base::Meas::Measurement;
}

// cim:PSRType
BaseClass* PSRType_factory()
{
	return new IEC61970::Base::Core::PSRType;
}

// cim:PowerSystemResource
BaseClass* PowerSystemResource_factory()
{
	return new IEC61970::Base::Core::PowerSystemResource;
}

// cim:Equipment
BaseClass* Equipment_factory()
{
	return new IEC61970::Base::Core::Equipment;
}

// cim:ConnectivityNodeContainer
BaseClass* ConnectivityNodeContainer_factory()
{
	return new IEC61970::Base::Core::ConnectivityNodeContainer;
}

// cim:ConnectivityNode
BaseClass* ConnectivityNode_factory()
{
	return new IEC61970::Base::Core::ConnectivityNode;
}

// cim:ConductingEquipment
BaseClass* ConductingEquipment_factory()
{
	return new IEC61970::Base::Core::ConductingEquipment;
}

// cim:RegulatingControl
BaseClass* RegulatingControl_factory()
{
	return new IEC61970::Base::Wires::RegulatingControl;
}

// cim:Terminal
BaseClass* Terminal_factory()
{
	return new IEC61970::Base::Core::Terminal;
}

// cim:AuxiliaryEquipment
BaseClass* AuxiliaryEquipment_factory()
{
	return new IEC61970::Base::AuxiliaryEquipment::AuxiliaryEquipment;
}

// cim:Sensor
BaseClass* Sensor_factory()
{
	return new IEC61970::Base::AuxiliaryEquipment::Sensor;
}

// cim:CurrentTransformer
BaseClass* CurrentTransformer_factory()
{
	return new IEC61970::Base::AuxiliaryEquipment::CurrentTransformer;
}

// cim:FaultIndicator
BaseClass* FaultIndicator_factory()
{
	return new IEC61970::Base::AuxiliaryEquipment::FaultIndicator;
}

// cim:FlowSensor
BaseClass* FlowSensor_factory()
{
	return new IEC61970::Base::AuxiliaryEquipment::FlowSensor;
}

// cim:PostLineSensor
BaseClass* PostLineSensor_factory()
{
	return new IEC61970::Base::AuxiliaryEquipment::PostLineSensor;
}

// cim:PotentialTransformer
BaseClass* PotentialTransformer_factory()
{
	return new IEC61970::Base::AuxiliaryEquipment::PotentialTransformer;
}

// cim:SurgeArrester
BaseClass* SurgeArrester_factory()
{
	return new IEC61970::Base::AuxiliaryEquipment::SurgeArrester;
}

// cim:WaveTrap
BaseClass* WaveTrap_factory()
{
	return new IEC61970::Base::AuxiliaryEquipment::WaveTrap;
}

// cim:ContingencyElement
BaseClass* ContingencyElement_factory()
{
	return new IEC61970::Base::Contingency::ContingencyElement;
}

// cim:Contingency
BaseClass* Contingency_factory()
{
	return new IEC61970::Base::Contingency::Contingency;
}

// cim:ContingencyEquipment
BaseClass* ContingencyEquipment_factory()
{
	return new IEC61970::Base::Contingency::ContingencyEquipment;
}

// cim:RemotePoint
BaseClass* RemotePoint_factory()
{
	return new IEC61970::Base::SCADA::RemotePoint;
}

// cim:RemoteSource
BaseClass* RemoteSource_factory()
{
	return new IEC61970::Base::SCADA::RemoteSource;
}

// cim:Quality61850
BaseClass* Quality61850_factory()
{
	return new IEC61970::Base::Meas::Quality61850;
}

// cim:MeasurementValueQuality
BaseClass* MeasurementValueQuality_factory()
{
	return new IEC61970::Base::Meas::MeasurementValueQuality;
}

// cim:MeasurementValue
BaseClass* MeasurementValue_factory()
{
	return new IEC61970::Base::Meas::MeasurementValue;
}

// cim:AnalogControl
BaseClass* AnalogControl_factory()
{
	return new IEC61970::Base::Meas::AnalogControl;
}

// cim:AnalogValue
BaseClass* AnalogValue_factory()
{
	return new IEC61970::Base::Meas::AnalogValue;
}

// cim:AltGeneratingUnitMeas
BaseClass* AltGeneratingUnitMeas_factory()
{
	return new IEC61970::Base::ControlArea::AltGeneratingUnitMeas;
}

// cim:AltTieMeas
BaseClass* AltTieMeas_factory()
{
	return new IEC61970::Base::ControlArea::AltTieMeas;
}

// cim:RegularTimePoint
BaseClass* RegularTimePoint_factory()
{
	return new IEC61970::Base::Core::RegularTimePoint;
}

// cim:BasicIntervalSchedule
BaseClass* BasicIntervalSchedule_factory()
{
	return new IEC61970::Base::Core::BasicIntervalSchedule;
}

// cim:RegularIntervalSchedule
BaseClass* RegularIntervalSchedule_factory()
{
	return new IEC61970::Base::Core::RegularIntervalSchedule;
}

// cim:GenUnitOpSchedule
BaseClass* GenUnitOpSchedule_factory()
{
	return new IEC61970::Base::Generation::Production::GenUnitOpSchedule;
}

// cim:CurveData
BaseClass* CurveData_factory()
{
	return new IEC61970::Base::Core::CurveData;
}

// cim:Curve
BaseClass* Curve_factory()
{
	return new IEC61970::Base::Core::Curve;
}

// cim:GrossToNetActivePowerCurve
BaseClass* GrossToNetActivePowerCurve_factory()
{
	return new IEC61970::Base::Generation::Production::GrossToNetActivePowerCurve;
}

// cim:GenUnitOpCostCurve
BaseClass* GenUnitOpCostCurve_factory()
{
	return new IEC61970::Base::Generation::Production::GenUnitOpCostCurve;
}

// cim:HydroPumpOpSchedule
BaseClass* HydroPumpOpSchedule_factory()
{
	return new IEC61970::Base::Generation::Production::HydroPumpOpSchedule;
}

// cim:HydroPump
BaseClass* HydroPump_factory()
{
	return new IEC61970::Base::Generation::Production::HydroPump;
}

// cim:RegulatingCondEq
BaseClass* RegulatingCondEq_factory()
{
	return new IEC61970::Base::Wires::RegulatingCondEq;
}

// cim:RotatingMachine
BaseClass* RotatingMachine_factory()
{
	return new IEC61970::Base::Wires::RotatingMachine;
}

// cim:GeneratingUnit
BaseClass* GeneratingUnit_factory()
{
	return new IEC61970::Base::Generation::Production::GeneratingUnit;
}

// cim:ControlAreaGeneratingUnit
BaseClass* ControlAreaGeneratingUnit_factory()
{
	return new IEC61970::Base::ControlArea::ControlAreaGeneratingUnit;
}

// cim:TieFlow
BaseClass* TieFlow_factory()
{
	return new IEC61970::Base::ControlArea::TieFlow;
}

// cim:EnergyArea
BaseClass* EnergyArea_factory()
{
	return new IEC61970::Base::LoadModel::EnergyArea;
}

// cim:ControlArea
BaseClass* ControlArea_factory()
{
	return new IEC61970::Base::ControlArea::ControlArea;
}

// cim:BaseFrequency
BaseClass* BaseFrequency_factory()
{
	return new IEC61970::Base::Core::BaseFrequency;
}

// cim:BasePower
BaseClass* BasePower_factory()
{
	return new IEC61970::Base::Core::BasePower;
}

// cim:BaseVoltage
BaseClass* BaseVoltage_factory()
{
	return new IEC61970::Base::Core::BaseVoltage;
}

// cim:EquipmentContainer
BaseClass* EquipmentContainer_factory()
{
	return new IEC61970::Base::Core::EquipmentContainer;
}

// cim:Bay
BaseClass* Bay_factory()
{
	return new IEC61970::Base::Core::Bay;
}

// cim:Line
BaseClass* Line_factory()
{
	return new IEC61970::Base::Wires::Line;
}

// cim:VoltageLevel
BaseClass* VoltageLevel_factory()
{
	return new IEC61970::Base::Core::VoltageLevel;
}

// cim:DCTopologicalNode
BaseClass* DCTopologicalNode_factory()
{
	return new IEC61970::Base::Topology::DCTopologicalNode;
}

// cim:DCEquipmentContainer
BaseClass* DCEquipmentContainer_factory()
{
	return new IEC61970::Base::DC::DCEquipmentContainer;
}

// cim:DCConverterUnit
BaseClass* DCConverterUnit_factory()
{
	return new IEC61970::Base::DC::DCConverterUnit;
}

// cim:Substation
BaseClass* Substation_factory()
{
	return new IEC61970::Base::Core::Substation;
}

// cim:SubGeographicalRegion
BaseClass* SubGeographicalRegion_factory()
{
	return new IEC61970::Base::Core::SubGeographicalRegion;
}

// cim:GeographicalRegion
BaseClass* GeographicalRegion_factory()
{
	return new IEC61970::Base::Core::GeographicalRegion;
}

// cim:IrregularTimePoint
BaseClass* IrregularTimePoint_factory()
{
	return new IEC61970::Base::Core::IrregularTimePoint;
}

// cim:IrregularIntervalSchedule
BaseClass* IrregularIntervalSchedule_factory()
{
	return new IEC61970::Base::Core::IrregularIntervalSchedule;
}

// cim:NameTypeAuthority
BaseClass* NameTypeAuthority_factory()
{
	return new IEC61970::Base::Core::NameTypeAuthority;
}

// cim:NameType
BaseClass* NameType_factory()
{
	return new IEC61970::Base::Core::NameType;
}

// cim:Name
BaseClass* Name_factory()
{
	return new IEC61970::Base::Core::Name;
}

// cim:OperatingParticipant
BaseClass* OperatingParticipant_factory()
{
	return new IEC61970::Base::Core::OperatingParticipant;
}

// cim:OperatingShare
BaseClass* OperatingShare_factory()
{
	return new IEC61970::Base::Core::OperatingShare;
}

// cim:ReportingGroup
BaseClass* ReportingGroup_factory()
{
	return new IEC61970::Base::Core::ReportingGroup;
}

// cim:ReportingSuperGroup
BaseClass* ReportingSuperGroup_factory()
{
	return new IEC61970::Base::Core::ReportingSuperGroup;
}

// cim:ACDCConverter
BaseClass* ACDCConverter_factory()
{
	return new IEC61970::Base::DC::ACDCConverter;
}

// cim:DCBaseTerminal
BaseClass* DCBaseTerminal_factory()
{
	return new IEC61970::Base::DC::DCBaseTerminal;
}

// cim:ACDCConverterDCTerminal
BaseClass* ACDCConverterDCTerminal_factory()
{
	return new IEC61970::Base::DC::ACDCConverterDCTerminal;
}

// cim:CsConverter
BaseClass* CsConverter_factory()
{
	return new IEC61970::Base::DC::CsConverter;
}

// cim:DCTerminal
BaseClass* DCTerminal_factory()
{
	return new IEC61970::Base::DC::DCTerminal;
}

// cim:DCConductingEquipment
BaseClass* DCConductingEquipment_factory()
{
	return new IEC61970::Base::DC::DCConductingEquipment;
}

// cim:DCSwitch
BaseClass* DCSwitch_factory()
{
	return new IEC61970::Base::DC::DCSwitch;
}

// cim:DCBreaker
BaseClass* DCBreaker_factory()
{
	return new IEC61970::Base::DC::DCBreaker;
}

// cim:DCBusbar
BaseClass* DCBusbar_factory()
{
	return new IEC61970::Base::DC::DCBusbar;
}

// cim:DCChopper
BaseClass* DCChopper_factory()
{
	return new IEC61970::Base::DC::DCChopper;
}

// cim:DCDisconnector
BaseClass* DCDisconnector_factory()
{
	return new IEC61970::Base::DC::DCDisconnector;
}

// cim:DCGround
BaseClass* DCGround_factory()
{
	return new IEC61970::Base::DC::DCGround;
}

// cim:DCLine
BaseClass* DCLine_factory()
{
	return new IEC61970::Base::DC::DCLine;
}

// cim:DCLineSegment
BaseClass* DCLineSegment_factory()
{
	return new IEC61970::Base::DC::DCLineSegment;
}

// cim:DCNode
BaseClass* DCNode_factory()
{
	return new IEC61970::Base::DC::DCNode;
}

// cim:DCSeriesDevice
BaseClass* DCSeriesDevice_factory()
{
	return new IEC61970::Base::DC::DCSeriesDevice;
}

// cim:DCShunt
BaseClass* DCShunt_factory()
{
	return new IEC61970::Base::DC::DCShunt;
}

// cim:DCTopologicalIsland
BaseClass* DCTopologicalIsland_factory()
{
	return new IEC61970::Base::DC::DCTopologicalIsland;
}

// cim:PerLengthLineParameter
BaseClass* PerLengthLineParameter_factory()
{
	return new IEC61970::Base::Wires::PerLengthLineParameter;
}

// cim:PerLengthDCLineParameter
BaseClass* PerLengthDCLineParameter_factory()
{
	return new IEC61970::Base::DC::PerLengthDCLineParameter;
}

// cim:VsCapabilityCurve
BaseClass* VsCapabilityCurve_factory()
{
	return new IEC61970::Base::DC::VsCapabilityCurve;
}

// cim:VsConverter
BaseClass* VsConverter_factory()
{
	return new IEC61970::Base::DC::VsConverter;
}

// cim:Diagram
BaseClass* Diagram_factory()
{
	return new IEC61970::Base::DiagramLayout::Diagram;
}

// cim:VisibilityLayer
BaseClass* VisibilityLayer_factory()
{
	return new IEC61970::Base::DiagramLayout::VisibilityLayer;
}

// cim:DiagramObjectGluePoint
BaseClass* DiagramObjectGluePoint_factory()
{
	return new IEC61970::Base::DiagramLayout::DiagramObjectGluePoint;
}

// cim:DiagramObjectPoint
BaseClass* DiagramObjectPoint_factory()
{
	return new IEC61970::Base::DiagramLayout::DiagramObjectPoint;
}

// cim:DiagramObjectStyle
BaseClass* DiagramObjectStyle_factory()
{
	return new IEC61970::Base::DiagramLayout::DiagramObjectStyle;
}

// cim:DiagramObject
BaseClass* DiagramObject_factory()
{
	return new IEC61970::Base::DiagramLayout::DiagramObject;
}

// cim:DiagramStyle
BaseClass* DiagramStyle_factory()
{
	return new IEC61970::Base::DiagramLayout::DiagramStyle;
}

// cim:TextDiagramObject
BaseClass* TextDiagramObject_factory()
{
	return new IEC61970::Base::DiagramLayout::TextDiagramObject;
}

// cim:DateInterval
BaseClass* DateInterval_factory()
{
	return new IEC61970::Base::Domain::DateInterval;
}

// cim:DateTimeInterval
BaseClass* DateTimeInterval_factory()
{
	return new IEC61970::Base::Domain::DateTimeInterval;
}

// cim:MonthDayInterval
BaseClass* MonthDayInterval_factory()
{
	return new IEC61970::Base::Domain::MonthDayInterval;
}

// cim:TimeInterval
BaseClass* TimeInterval_factory()
{
	return new IEC61970::Base::Domain::TimeInterval;
}

// cim:EquivalentEquipment
BaseClass* EquivalentEquipment_factory()
{
	return new IEC61970::Base::Equivalents::EquivalentEquipment;
}

// cim:EquivalentBranch
BaseClass* EquivalentBranch_factory()
{
	return new IEC61970::Base::Equivalents::EquivalentBranch;
}

// cim:EquivalentInjection
BaseClass* EquivalentInjection_factory()
{
	return new IEC61970::Base::Equivalents::EquivalentInjection;
}

// cim:EquivalentNetwork
BaseClass* EquivalentNetwork_factory()
{
	return new IEC61970::Base::Equivalents::EquivalentNetwork;
}

// cim:EquivalentShunt
BaseClass* EquivalentShunt_factory()
{
	return new IEC61970::Base::Equivalents::EquivalentShunt;
}

// cim:FaultImpedance
BaseClass* FaultImpedance_factory()
{
	return new IEC61970::Base::Faults::FaultImpedance;
}

// cim:FaultCauseType
BaseClass* FaultCauseType_factory()
{
	return new IEC61970::Base::Faults::FaultCauseType;
}

// cim:Fault
BaseClass* Fault_factory()
{
	return new IEC61970::Base::Faults::Fault;
}

// cim:EquipmentFault
BaseClass* EquipmentFault_factory()
{
	return new IEC61970::Base::Faults::EquipmentFault;
}

// cim:Conductor
BaseClass* Conductor_factory()
{
	return new IEC61970::Base::Wires::Conductor;
}

// cim:Clamp
BaseClass* Clamp_factory()
{
	return new IEC61970::Base::Wires::Clamp;
}

// cim:ACLineSegment
BaseClass* ACLineSegment_factory()
{
	return new IEC61970::Base::Wires::ACLineSegment;
}

// cim:LineFault
BaseClass* LineFault_factory()
{
	return new IEC61970::Base::Faults::LineFault;
}

// cim:SynchronousMachine
BaseClass* SynchronousMachine_factory()
{
	return new IEC61970::Base::Wires::SynchronousMachine;
}

// cim:PrimeMover
BaseClass* PrimeMover_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::PrimeMover;
}

// cim:SteamTurbine
BaseClass* SteamTurbine_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::SteamTurbine;
}

// cim:SteamSupply
BaseClass* SteamSupply_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::SteamSupply;
}

// cim:BWRSteamSupply
BaseClass* BWRSteamSupply_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::BWRSteamSupply;
}

// cim:AirCompressor
BaseClass* AirCompressor_factory()
{
	return new IEC61970::Base::Generation::Production::AirCompressor;
}

// cim:CTTempActivePowerCurve
BaseClass* CTTempActivePowerCurve_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::CTTempActivePowerCurve;
}

// cim:CombustionTurbine
BaseClass* CombustionTurbine_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::CombustionTurbine;
}

// cim:FossilSteamSupply
BaseClass* FossilSteamSupply_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::FossilSteamSupply;
}

// cim:DrumBoiler
BaseClass* DrumBoiler_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::DrumBoiler;
}

// cim:HeatRecoveryBoiler
BaseClass* HeatRecoveryBoiler_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::HeatRecoveryBoiler;
}

// cim:HydroTurbine
BaseClass* HydroTurbine_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::HydroTurbine;
}

// cim:PWRSteamSupply
BaseClass* PWRSteamSupply_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::PWRSteamSupply;
}

// cim:Subcritical
BaseClass* Subcritical_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::Subcritical;
}

// cim:Supercritical
BaseClass* Supercritical_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::Supercritical;
}

// cim:HeatRateCurve
BaseClass* HeatRateCurve_factory()
{
	return new IEC61970::Base::Generation::Production::HeatRateCurve;
}

// cim:FuelAllocationSchedule
BaseClass* FuelAllocationSchedule_factory()
{
	return new IEC61970::Base::Generation::Production::FuelAllocationSchedule;
}

// cim:StartRampCurve
BaseClass* StartRampCurve_factory()
{
	return new IEC61970::Base::Generation::Production::StartRampCurve;
}

// cim:StartIgnFuelCurve
BaseClass* StartIgnFuelCurve_factory()
{
	return new IEC61970::Base::Generation::Production::StartIgnFuelCurve;
}

// cim:StartMainFuelCurve
BaseClass* StartMainFuelCurve_factory()
{
	return new IEC61970::Base::Generation::Production::StartMainFuelCurve;
}

// cim:StartupModel
BaseClass* StartupModel_factory()
{
	return new IEC61970::Base::Generation::Production::StartupModel;
}

// cim:EmissionCurve
BaseClass* EmissionCurve_factory()
{
	return new IEC61970::Base::Generation::Production::EmissionCurve;
}

// cim:ShutdownCurve
BaseClass* ShutdownCurve_factory()
{
	return new IEC61970::Base::Generation::Production::ShutdownCurve;
}

// cim:IncrementalHeatRateCurve
BaseClass* IncrementalHeatRateCurve_factory()
{
	return new IEC61970::Base::Generation::Production::IncrementalHeatRateCurve;
}

// cim:EmissionAccount
BaseClass* EmissionAccount_factory()
{
	return new IEC61970::Base::Generation::Production::EmissionAccount;
}

// cim:HeatInputCurve
BaseClass* HeatInputCurve_factory()
{
	return new IEC61970::Base::Generation::Production::HeatInputCurve;
}

// cim:ThermalGeneratingUnit
BaseClass* ThermalGeneratingUnit_factory()
{
	return new IEC61970::Base::Generation::Production::ThermalGeneratingUnit;
}

// cim:CAESPlant
BaseClass* CAESPlant_factory()
{
	return new IEC61970::Base::Generation::Production::CAESPlant;
}

// cim:SteamSendoutSchedule
BaseClass* SteamSendoutSchedule_factory()
{
	return new IEC61970::Base::Generation::Production::SteamSendoutSchedule;
}

// cim:CogenerationPlant
BaseClass* CogenerationPlant_factory()
{
	return new IEC61970::Base::Generation::Production::CogenerationPlant;
}

// cim:CombinedCyclePlant
BaseClass* CombinedCyclePlant_factory()
{
	return new IEC61970::Base::Generation::Production::CombinedCyclePlant;
}

// cim:FossilFuel
BaseClass* FossilFuel_factory()
{
	return new IEC61970::Base::Generation::Production::FossilFuel;
}

// cim:HydroGeneratingEfficiencyCurve
BaseClass* HydroGeneratingEfficiencyCurve_factory()
{
	return new IEC61970::Base::Generation::Production::HydroGeneratingEfficiencyCurve;
}

// cim:TailbayLossCurve
BaseClass* TailbayLossCurve_factory()
{
	return new IEC61970::Base::Generation::Production::TailbayLossCurve;
}

// cim:PenstockLossCurve
BaseClass* PenstockLossCurve_factory()
{
	return new IEC61970::Base::Generation::Production::PenstockLossCurve;
}

// cim:HydroGeneratingUnit
BaseClass* HydroGeneratingUnit_factory()
{
	return new IEC61970::Base::Generation::Production::HydroGeneratingUnit;
}

// cim:LevelVsVolumeCurve
BaseClass* LevelVsVolumeCurve_factory()
{
	return new IEC61970::Base::Generation::Production::LevelVsVolumeCurve;
}

// cim:InflowForecast
BaseClass* InflowForecast_factory()
{
	return new IEC61970::Base::Generation::Production::InflowForecast;
}

// cim:TargetLevelSchedule
BaseClass* TargetLevelSchedule_factory()
{
	return new IEC61970::Base::Generation::Production::TargetLevelSchedule;
}

// cim:Reservoir
BaseClass* Reservoir_factory()
{
	return new IEC61970::Base::Generation::Production::Reservoir;
}

// cim:HydroPowerPlant
BaseClass* HydroPowerPlant_factory()
{
	return new IEC61970::Base::Generation::Production::HydroPowerPlant;
}

// cim:NuclearGeneratingUnit
BaseClass* NuclearGeneratingUnit_factory()
{
	return new IEC61970::Base::Generation::Production::NuclearGeneratingUnit;
}

// cim:SolarGeneratingUnit
BaseClass* SolarGeneratingUnit_factory()
{
	return new IEC61970::Base::Generation::Production::SolarGeneratingUnit;
}

// cim:WindGeneratingUnit
BaseClass* WindGeneratingUnit_factory()
{
	return new IEC61970::Base::Generation::Production::WindGeneratingUnit;
}

// cim:LoadResponseCharacteristic
BaseClass* LoadResponseCharacteristic_factory()
{
	return new IEC61970::Base::LoadModel::LoadResponseCharacteristic;
}

// cim:EnergyConsumerPhase
BaseClass* EnergyConsumerPhase_factory()
{
	return new IEC61970::Base::Wires::EnergyConsumerPhase;
}

// cim:EnergyConsumer
BaseClass* EnergyConsumer_factory()
{
	return new IEC61970::Base::Wires::EnergyConsumer;
}

// cim:ConformLoad
BaseClass* ConformLoad_factory()
{
	return new IEC61970::Base::LoadModel::ConformLoad;
}

// cim:LoadGroup
BaseClass* LoadGroup_factory()
{
	return new IEC61970::Base::LoadModel::LoadGroup;
}

// cim:SeasonDayTypeSchedule
BaseClass* SeasonDayTypeSchedule_factory()
{
	return new IEC61970::Base::LoadModel::SeasonDayTypeSchedule;
}

// cim:ConformLoadSchedule
BaseClass* ConformLoadSchedule_factory()
{
	return new IEC61970::Base::LoadModel::ConformLoadSchedule;
}

// cim:ConformLoadGroup
BaseClass* ConformLoadGroup_factory()
{
	return new IEC61970::Base::LoadModel::ConformLoadGroup;
}

// cim:DayType
BaseClass* DayType_factory()
{
	return new IEC61970::Base::LoadModel::DayType;
}

// cim:SubLoadArea
BaseClass* SubLoadArea_factory()
{
	return new IEC61970::Base::LoadModel::SubLoadArea;
}

// cim:LoadArea
BaseClass* LoadArea_factory()
{
	return new IEC61970::Base::LoadModel::LoadArea;
}

// cim:NonConformLoad
BaseClass* NonConformLoad_factory()
{
	return new IEC61970::Base::LoadModel::NonConformLoad;
}

// cim:NonConformLoadSchedule
BaseClass* NonConformLoadSchedule_factory()
{
	return new IEC61970::Base::LoadModel::NonConformLoadSchedule;
}

// cim:NonConformLoadGroup
BaseClass* NonConformLoadGroup_factory()
{
	return new IEC61970::Base::LoadModel::NonConformLoadGroup;
}

// cim:PowerCutZone
BaseClass* PowerCutZone_factory()
{
	return new IEC61970::Base::LoadModel::PowerCutZone;
}

// cim:Season
BaseClass* Season_factory()
{
	return new IEC61970::Base::LoadModel::Season;
}

// cim:StationSupply
BaseClass* StationSupply_factory()
{
	return new IEC61970::Base::LoadModel::StationSupply;
}

// cim:AccumulatorValue
BaseClass* AccumulatorValue_factory()
{
	return new IEC61970::Base::Meas::AccumulatorValue;
}

// cim:Limit
BaseClass* Limit_factory()
{
	return new IEC61970::Base::Meas::Limit;
}

// cim:AccumulatorLimit
BaseClass* AccumulatorLimit_factory()
{
	return new IEC61970::Base::Meas::AccumulatorLimit;
}

// cim:LimitSet
BaseClass* LimitSet_factory()
{
	return new IEC61970::Base::Meas::LimitSet;
}

// cim:AccumulatorLimitSet
BaseClass* AccumulatorLimitSet_factory()
{
	return new IEC61970::Base::Meas::AccumulatorLimitSet;
}

// cim:Accumulator
BaseClass* Accumulator_factory()
{
	return new IEC61970::Base::Meas::Accumulator;
}

// cim:AccumulatorReset
BaseClass* AccumulatorReset_factory()
{
	return new IEC61970::Base::Meas::AccumulatorReset;
}

// cim:AnalogLimit
BaseClass* AnalogLimit_factory()
{
	return new IEC61970::Base::Meas::AnalogLimit;
}

// cim:AnalogLimitSet
BaseClass* AnalogLimitSet_factory()
{
	return new IEC61970::Base::Meas::AnalogLimitSet;
}

// cim:Analog
BaseClass* Analog_factory()
{
	return new IEC61970::Base::Meas::Analog;
}

// cim:ValueToAlias
BaseClass* ValueToAlias_factory()
{
	return new IEC61970::Base::Meas::ValueToAlias;
}

// cim:ValueAliasSet
BaseClass* ValueAliasSet_factory()
{
	return new IEC61970::Base::Meas::ValueAliasSet;
}

// cim:Command
BaseClass* Command_factory()
{
	return new IEC61970::Base::Meas::Command;
}

// cim:DiscreteValue
BaseClass* DiscreteValue_factory()
{
	return new IEC61970::Base::Meas::DiscreteValue;
}

// cim:Discrete
BaseClass* Discrete_factory()
{
	return new IEC61970::Base::Meas::Discrete;
}

// cim:DiscreteCommand
BaseClass* DiscreteCommand_factory()
{
	return new IEC61970::Base::Meas::DiscreteCommand;
}

// cim:MeasurementValueSource
BaseClass* MeasurementValueSource_factory()
{
	return new IEC61970::Base::Meas::MeasurementValueSource;
}

// cim:RaiseLowerCommand
BaseClass* RaiseLowerCommand_factory()
{
	return new IEC61970::Base::Meas::RaiseLowerCommand;
}

// cim:SetPoint
BaseClass* SetPoint_factory()
{
	return new IEC61970::Base::Meas::SetPoint;
}

// cim:StringMeasurement
BaseClass* StringMeasurement_factory()
{
	return new IEC61970::Base::Meas::StringMeasurement;
}

// cim:StringMeasurementValue
BaseClass* StringMeasurementValue_factory()
{
	return new IEC61970::Base::Meas::StringMeasurementValue;
}

// cim:OperationalLimitType
BaseClass* OperationalLimitType_factory()
{
	return new IEC61970::Base::OperationalLimits::OperationalLimitType;
}

// cim:OperationalLimit
BaseClass* OperationalLimit_factory()
{
	return new IEC61970::Base::OperationalLimits::OperationalLimit;
}

// cim:ActivePowerLimit
BaseClass* ActivePowerLimit_factory()
{
	return new IEC61970::Base::OperationalLimits::ActivePowerLimit;
}

// cim:ApparentPowerLimit
BaseClass* ApparentPowerLimit_factory()
{
	return new IEC61970::Base::OperationalLimits::ApparentPowerLimit;
}

// cim:BranchGroupTerminal
BaseClass* BranchGroupTerminal_factory()
{
	return new IEC61970::Base::OperationalLimits::BranchGroupTerminal;
}

// cim:BranchGroup
BaseClass* BranchGroup_factory()
{
	return new IEC61970::Base::OperationalLimits::BranchGroup;
}

// cim:CurrentLimit
BaseClass* CurrentLimit_factory()
{
	return new IEC61970::Base::OperationalLimits::CurrentLimit;
}

// cim:OperationalLimitSet
BaseClass* OperationalLimitSet_factory()
{
	return new IEC61970::Base::OperationalLimits::OperationalLimitSet;
}

// cim:VoltageLimit
BaseClass* VoltageLimit_factory()
{
	return new IEC61970::Base::OperationalLimits::VoltageLimit;
}

// cim:RecloseSequence
BaseClass* RecloseSequence_factory()
{
	return new IEC61970::Base::Protection::RecloseSequence;
}

// cim:SwitchPhase
BaseClass* SwitchPhase_factory()
{
	return new IEC61970::Base::Wires::SwitchPhase;
}

// cim:SwitchSchedule
BaseClass* SwitchSchedule_factory()
{
	return new IEC61970::Base::Wires::SwitchSchedule;
}

// cim:Switch
BaseClass* Switch_factory()
{
	return new IEC61970::Base::Wires::Switch;
}

// cim:ProtectedSwitch
BaseClass* ProtectedSwitch_factory()
{
	return new IEC61970::Base::Wires::ProtectedSwitch;
}

// cim:ProtectionEquipment
BaseClass* ProtectionEquipment_factory()
{
	return new IEC61970::Base::Protection::ProtectionEquipment;
}

// cim:CurrentRelay
BaseClass* CurrentRelay_factory()
{
	return new IEC61970::Base::Protection::CurrentRelay;
}

// cim:SynchrocheckRelay
BaseClass* SynchrocheckRelay_factory()
{
	return new IEC61970::Base::Protection::SynchrocheckRelay;
}

// cim:RemoteUnit
BaseClass* RemoteUnit_factory()
{
	return new IEC61970::Base::SCADA::RemoteUnit;
}

// cim:CommunicationLink
BaseClass* CommunicationLink_factory()
{
	return new IEC61970::Base::SCADA::CommunicationLink;
}

// cim:RemoteControl
BaseClass* RemoteControl_factory()
{
	return new IEC61970::Base::SCADA::RemoteControl;
}

// cim:StateVariable
BaseClass* StateVariable_factory()
{
	return new IEC61970::Base::StateVariables::StateVariable;
}

// cim:TopologicalNode
BaseClass* TopologicalNode_factory()
{
	return new IEC61970::Base::Topology::TopologicalNode;
}

// cim:SvInjection
BaseClass* SvInjection_factory()
{
	return new IEC61970::Base::StateVariables::SvInjection;
}

// cim:SvPowerFlow
BaseClass* SvPowerFlow_factory()
{
	return new IEC61970::Base::StateVariables::SvPowerFlow;
}

// cim:ShuntCompensatorPhase
BaseClass* ShuntCompensatorPhase_factory()
{
	return new IEC61970::Base::Wires::ShuntCompensatorPhase;
}

// cim:ShuntCompensator
BaseClass* ShuntCompensator_factory()
{
	return new IEC61970::Base::Wires::ShuntCompensator;
}

// cim:SvShuntCompensatorSections
BaseClass* SvShuntCompensatorSections_factory()
{
	return new IEC61970::Base::StateVariables::SvShuntCompensatorSections;
}

// cim:SvStatus
BaseClass* SvStatus_factory()
{
	return new IEC61970::Base::StateVariables::SvStatus;
}

// cim:TapChangerControl
BaseClass* TapChangerControl_factory()
{
	return new IEC61970::Base::Wires::TapChangerControl;
}

// cim:TapChanger
BaseClass* TapChanger_factory()
{
	return new IEC61970::Base::Wires::TapChanger;
}

// cim:SvTapStep
BaseClass* SvTapStep_factory()
{
	return new IEC61970::Base::StateVariables::SvTapStep;
}

// cim:SvVoltage
BaseClass* SvVoltage_factory()
{
	return new IEC61970::Base::StateVariables::SvVoltage;
}

// cim:BusNameMarker
BaseClass* BusNameMarker_factory()
{
	return new IEC61970::Base::Topology::BusNameMarker;
}

// cim:TopologicalIsland
BaseClass* TopologicalIsland_factory()
{
	return new IEC61970::Base::Topology::TopologicalIsland;
}

// cim:ACLineSegmentPhase
BaseClass* ACLineSegmentPhase_factory()
{
	return new IEC61970::Base::Wires::ACLineSegmentPhase;
}

// cim:AsynchronousMachine
BaseClass* AsynchronousMachine_factory()
{
	return new IEC61970::Base::Wires::AsynchronousMachine;
}

// cim:Breaker
BaseClass* Breaker_factory()
{
	return new IEC61970::Base::Wires::Breaker;
}

// cim:VoltageControlZone
BaseClass* VoltageControlZone_factory()
{
	return new IEC61970::Base::Wires::VoltageControlZone;
}

// cim:Connector
BaseClass* Connector_factory()
{
	return new IEC61970::Base::Wires::Connector;
}

// cim:BusbarSection
BaseClass* BusbarSection_factory()
{
	return new IEC61970::Base::Wires::BusbarSection;
}

// cim:CompositeSwitch
BaseClass* CompositeSwitch_factory()
{
	return new IEC61970::Base::Wires::CompositeSwitch;
}

// cim:Cut
BaseClass* Cut_factory()
{
	return new IEC61970::Base::Wires::Cut;
}

// cim:Disconnector
BaseClass* Disconnector_factory()
{
	return new IEC61970::Base::Wires::Disconnector;
}

// cim:EarthFaultCompensator
BaseClass* EarthFaultCompensator_factory()
{
	return new IEC61970::Base::Wires::EarthFaultCompensator;
}

// cim:EnergySource
BaseClass* EnergySource_factory()
{
	return new IEC61970::Base::Wires::EnergySource;
}

// cim:EnergySourcePhase
BaseClass* EnergySourcePhase_factory()
{
	return new IEC61970::Base::Wires::EnergySourcePhase;
}

// cim:ExternalNetworkInjection
BaseClass* ExternalNetworkInjection_factory()
{
	return new IEC61970::Base::Wires::ExternalNetworkInjection;
}

// cim:FrequencyConverter
BaseClass* FrequencyConverter_factory()
{
	return new IEC61970::Base::Wires::FrequencyConverter;
}

// cim:Fuse
BaseClass* Fuse_factory()
{
	return new IEC61970::Base::Wires::Fuse;
}

// cim:Ground
BaseClass* Ground_factory()
{
	return new IEC61970::Base::Wires::Ground;
}

// cim:GroundDisconnector
BaseClass* GroundDisconnector_factory()
{
	return new IEC61970::Base::Wires::GroundDisconnector;
}

// cim:GroundingImpedance
BaseClass* GroundingImpedance_factory()
{
	return new IEC61970::Base::Wires::GroundingImpedance;
}

// cim:Jumper
BaseClass* Jumper_factory()
{
	return new IEC61970::Base::Wires::Jumper;
}

// cim:Junction
BaseClass* Junction_factory()
{
	return new IEC61970::Base::Wires::Junction;
}

// cim:LinearShuntCompensator
BaseClass* LinearShuntCompensator_factory()
{
	return new IEC61970::Base::Wires::LinearShuntCompensator;
}

// cim:LinearShuntCompensatorPhase
BaseClass* LinearShuntCompensatorPhase_factory()
{
	return new IEC61970::Base::Wires::LinearShuntCompensatorPhase;
}

// cim:LoadBreakSwitch
BaseClass* LoadBreakSwitch_factory()
{
	return new IEC61970::Base::Wires::LoadBreakSwitch;
}

// cim:MutualCoupling
BaseClass* MutualCoupling_factory()
{
	return new IEC61970::Base::Wires::MutualCoupling;
}

// cim:NonlinearShuntCompensatorPoint
BaseClass* NonlinearShuntCompensatorPoint_factory()
{
	return new IEC61970::Base::Wires::NonlinearShuntCompensatorPoint;
}

// cim:NonlinearShuntCompensator
BaseClass* NonlinearShuntCompensator_factory()
{
	return new IEC61970::Base::Wires::NonlinearShuntCompensator;
}

// cim:NonlinearShuntCompensatorPhasePoint
BaseClass* NonlinearShuntCompensatorPhasePoint_factory()
{
	return new IEC61970::Base::Wires::NonlinearShuntCompensatorPhasePoint;
}

// cim:NonlinearShuntCompensatorPhase
BaseClass* NonlinearShuntCompensatorPhase_factory()
{
	return new IEC61970::Base::Wires::NonlinearShuntCompensatorPhase;
}

// cim:NonRotatingEnergy
BaseClass* NonRotatingEnergy_factory()
{
	return new IEC61970::Base::Wires::NonRotatingEnergy;
}

// cim:PerLengthImpedance
BaseClass* PerLengthImpedance_factory()
{
	return new IEC61970::Base::Wires::PerLengthImpedance;
}

// cim:PhaseImpedanceData
BaseClass* PhaseImpedanceData_factory()
{
	return new IEC61970::Base::Wires::PhaseImpedanceData;
}

// cim:PerLengthPhaseImpedance
BaseClass* PerLengthPhaseImpedance_factory()
{
	return new IEC61970::Base::Wires::PerLengthPhaseImpedance;
}

// cim:PerLengthSequenceImpedance
BaseClass* PerLengthSequenceImpedance_factory()
{
	return new IEC61970::Base::Wires::PerLengthSequenceImpedance;
}

// cim:PetersenCoil
BaseClass* PetersenCoil_factory()
{
	return new IEC61970::Base::Wires::PetersenCoil;
}

// cim:PhaseTapChanger
BaseClass* PhaseTapChanger_factory()
{
	return new IEC61970::Base::Wires::PhaseTapChanger;
}

// cim:PhaseTapChangerNonLinear
BaseClass* PhaseTapChangerNonLinear_factory()
{
	return new IEC61970::Base::Wires::PhaseTapChangerNonLinear;
}

// cim:PhaseTapChangerAsymmetrical
BaseClass* PhaseTapChangerAsymmetrical_factory()
{
	return new IEC61970::Base::Wires::PhaseTapChangerAsymmetrical;
}

// cim:PhaseTapChangerLinear
BaseClass* PhaseTapChangerLinear_factory()
{
	return new IEC61970::Base::Wires::PhaseTapChangerLinear;
}

// cim:PhaseTapChangerSymmetrical
BaseClass* PhaseTapChangerSymmetrical_factory()
{
	return new IEC61970::Base::Wires::PhaseTapChangerSymmetrical;
}

// cim:PhaseTapChangerTabular
BaseClass* PhaseTapChangerTabular_factory()
{
	return new IEC61970::Base::Wires::PhaseTapChangerTabular;
}

// cim:PhaseTapChangerTable
BaseClass* PhaseTapChangerTable_factory()
{
	return new IEC61970::Base::Wires::PhaseTapChangerTable;
}

// cim:TapChangerTablePoint
BaseClass* TapChangerTablePoint_factory()
{
	return new IEC61970::Base::Wires::TapChangerTablePoint;
}

// cim:PhaseTapChangerTablePoint
BaseClass* PhaseTapChangerTablePoint_factory()
{
	return new IEC61970::Base::Wires::PhaseTapChangerTablePoint;
}

// cim:Plant
BaseClass* Plant_factory()
{
	return new IEC61970::Base::Wires::Plant;
}

// cim:TransformerStarImpedance
BaseClass* TransformerStarImpedance_factory()
{
	return new IEC61970::Base::Wires::TransformerStarImpedance;
}

// cim:RatioTapChangerTable
BaseClass* RatioTapChangerTable_factory()
{
	return new IEC61970::Base::Wires::RatioTapChangerTable;
}

// cim:RatioTapChanger
BaseClass* RatioTapChanger_factory()
{
	return new IEC61970::Base::Wires::RatioTapChanger;
}

// cim:TransformerEnd
BaseClass* TransformerEnd_factory()
{
	return new IEC61970::Base::Wires::TransformerEnd;
}

// cim:PowerTransformerEnd
BaseClass* PowerTransformerEnd_factory()
{
	return new IEC61970::Base::Wires::PowerTransformerEnd;
}

// cim:PowerTransformer
BaseClass* PowerTransformer_factory()
{
	return new IEC61970::Base::Wires::PowerTransformer;
}

// cim:RatioTapChangerTablePoint
BaseClass* RatioTapChangerTablePoint_factory()
{
	return new IEC61970::Base::Wires::RatioTapChangerTablePoint;
}

// cim:ReactiveCapabilityCurve
BaseClass* ReactiveCapabilityCurve_factory()
{
	return new IEC61970::Base::Wires::ReactiveCapabilityCurve;
}

// cim:Recloser
BaseClass* Recloser_factory()
{
	return new IEC61970::Base::Wires::Recloser;
}

// cim:RegulationSchedule
BaseClass* RegulationSchedule_factory()
{
	return new IEC61970::Base::Wires::RegulationSchedule;
}

// cim:Sectionaliser
BaseClass* Sectionaliser_factory()
{
	return new IEC61970::Base::Wires::Sectionaliser;
}

// cim:SeriesCompensator
BaseClass* SeriesCompensator_factory()
{
	return new IEC61970::Base::Wires::SeriesCompensator;
}

// cim:StaticVarCompensator
BaseClass* StaticVarCompensator_factory()
{
	return new IEC61970::Base::Wires::StaticVarCompensator;
}

// cim:TapSchedule
BaseClass* TapSchedule_factory()
{
	return new IEC61970::Base::Wires::TapSchedule;
}

// cim:TransformerCoreAdmittance
BaseClass* TransformerCoreAdmittance_factory()
{
	return new IEC61970::Base::Wires::TransformerCoreAdmittance;
}

// cim:TransformerMeshImpedance
BaseClass* TransformerMeshImpedance_factory()
{
	return new IEC61970::Base::Wires::TransformerMeshImpedance;
}

// cim:TransformerTank
BaseClass* TransformerTank_factory()
{
	return new IEC61970::Base::Wires::TransformerTank;
}

// cim:TransformerTankEnd
BaseClass* TransformerTankEnd_factory()
{
	return new IEC61970::Base::Wires::TransformerTankEnd;
}

// cim:WindTurbineType3or4
BaseClass* WindTurbineType3or4_factory()
{
	return new IEC61970::Base::Wires::WindTurbineType3or4;
}

// cim:RemoteInputSignal
BaseClass* RemoteInputSignal_factory()
{
	return new IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal;
}

// cim:DynamicsFunctionBlock
BaseClass* DynamicsFunctionBlock_factory()
{
	return new IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock;
}

// cim:RotatingMachineDynamics
BaseClass* RotatingMachineDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::RotatingMachineDynamics;
}

// cim:AsynchronousMachineDynamics
BaseClass* AsynchronousMachineDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineDynamics;
}

// cim:AsynchronousMachineEquivalentCircuit
BaseClass* AsynchronousMachineEquivalentCircuit_factory()
{
	return new IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineEquivalentCircuit;
}

// cim:AsynchronousMachineTimeConstantReactance
BaseClass* AsynchronousMachineTimeConstantReactance_factory()
{
	return new IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineTimeConstantReactance;
}

// cim:TurbineGovernorDynamics
BaseClass* TurbineGovernorDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics;
}

// cim:SynchronousMachineDynamics
BaseClass* SynchronousMachineDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics;
}

// cim:ExcitationSystemDynamics
BaseClass* ExcitationSystemDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics;
}

// cim:DiscontinuousExcitationControlDynamics
BaseClass* DiscontinuousExcitationControlDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics;
}

// cim:DiscExcContIEEEDEC1A
BaseClass* DiscExcContIEEEDEC1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscExcContIEEEDEC1A;
}

// cim:DiscExcContIEEEDEC2A
BaseClass* DiscExcContIEEEDEC2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscExcContIEEEDEC2A;
}

// cim:DiscExcContIEEEDEC3A
BaseClass* DiscExcContIEEEDEC3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscExcContIEEEDEC3A;
}

// cim:ExcAC1A
BaseClass* ExcAC1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC1A;
}

// cim:ExcAC2A
BaseClass* ExcAC2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC2A;
}

// cim:ExcAC3A
BaseClass* ExcAC3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC3A;
}

// cim:ExcAC4A
BaseClass* ExcAC4A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC4A;
}

// cim:ExcAC5A
BaseClass* ExcAC5A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC5A;
}

// cim:ExcAC6A
BaseClass* ExcAC6A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC6A;
}

// cim:ExcAC8B
BaseClass* ExcAC8B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC8B;
}

// cim:ExcANS
BaseClass* ExcANS_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcANS;
}

// cim:ExcAVR1
BaseClass* ExcAVR1_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAVR1;
}

// cim:ExcAVR2
BaseClass* ExcAVR2_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAVR2;
}

// cim:ExcAVR3
BaseClass* ExcAVR3_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAVR3;
}

// cim:ExcAVR4
BaseClass* ExcAVR4_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAVR4;
}

// cim:ExcAVR5
BaseClass* ExcAVR5_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAVR5;
}

// cim:ExcAVR7
BaseClass* ExcAVR7_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAVR7;
}

// cim:ExcBBC
BaseClass* ExcBBC_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcBBC;
}

// cim:ExcCZ
BaseClass* ExcCZ_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcCZ;
}

// cim:ExcDC1A
BaseClass* ExcDC1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcDC1A;
}

// cim:ExcDC2A
BaseClass* ExcDC2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcDC2A;
}

// cim:ExcDC3A
BaseClass* ExcDC3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcDC3A;
}

// cim:ExcDC3A1
BaseClass* ExcDC3A1_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcDC3A1;
}

// cim:ExcELIN1
BaseClass* ExcELIN1_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcELIN1;
}

// cim:ExcELIN2
BaseClass* ExcELIN2_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcELIN2;
}

// cim:ExcHU
BaseClass* ExcHU_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcHU;
}

// cim:ExcIEEEAC1A
BaseClass* ExcIEEEAC1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC1A;
}

// cim:ExcIEEEAC2A
BaseClass* ExcIEEEAC2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC2A;
}

// cim:ExcIEEEAC3A
BaseClass* ExcIEEEAC3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC3A;
}

// cim:ExcIEEEAC4A
BaseClass* ExcIEEEAC4A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC4A;
}

// cim:ExcIEEEAC5A
BaseClass* ExcIEEEAC5A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC5A;
}

// cim:ExcIEEEAC6A
BaseClass* ExcIEEEAC6A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC6A;
}

// cim:ExcIEEEAC7B
BaseClass* ExcIEEEAC7B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC7B;
}

// cim:ExcIEEEAC8B
BaseClass* ExcIEEEAC8B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC8B;
}

// cim:ExcIEEEDC1A
BaseClass* ExcIEEEDC1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEDC1A;
}

// cim:ExcIEEEDC2A
BaseClass* ExcIEEEDC2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEDC2A;
}

// cim:ExcIEEEDC3A
BaseClass* ExcIEEEDC3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEDC3A;
}

// cim:ExcIEEEDC4B
BaseClass* ExcIEEEDC4B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEDC4B;
}

// cim:ExcIEEEST1A
BaseClass* ExcIEEEST1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST1A;
}

// cim:ExcIEEEST2A
BaseClass* ExcIEEEST2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST2A;
}

// cim:ExcIEEEST3A
BaseClass* ExcIEEEST3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST3A;
}

// cim:ExcIEEEST4B
BaseClass* ExcIEEEST4B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST4B;
}

// cim:ExcIEEEST5B
BaseClass* ExcIEEEST5B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST5B;
}

// cim:ExcIEEEST6B
BaseClass* ExcIEEEST6B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST6B;
}

// cim:ExcIEEEST7B
BaseClass* ExcIEEEST7B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST7B;
}

// cim:ExcOEX3T
BaseClass* ExcOEX3T_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcOEX3T;
}

// cim:ExcPIC
BaseClass* ExcPIC_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcPIC;
}

// cim:ExcREXS
BaseClass* ExcREXS_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcREXS;
}

// cim:ExcSCRX
BaseClass* ExcSCRX_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcSCRX;
}

// cim:ExcSEXS
BaseClass* ExcSEXS_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcSEXS;
}

// cim:ExcSK
BaseClass* ExcSK_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcSK;
}

// cim:ExcST1A
BaseClass* ExcST1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST1A;
}

// cim:ExcST2A
BaseClass* ExcST2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST2A;
}

// cim:ExcST3A
BaseClass* ExcST3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST3A;
}

// cim:ExcST4B
BaseClass* ExcST4B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST4B;
}

// cim:ExcST6B
BaseClass* ExcST6B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST6B;
}

// cim:ExcST7B
BaseClass* ExcST7B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST7B;
}

// cim:LoadDynamics
BaseClass* LoadDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::LoadDynamics::LoadDynamics;
}

// cim:LoadAggregate
BaseClass* LoadAggregate_factory()
{
	return new IEC61970::Dynamics::StandardModels::LoadDynamics::LoadAggregate;
}

// cim:LoadComposite
BaseClass* LoadComposite_factory()
{
	return new IEC61970::Dynamics::StandardModels::LoadDynamics::LoadComposite;
}

// cim:LoadGenericNonLinear
BaseClass* LoadGenericNonLinear_factory()
{
	return new IEC61970::Dynamics::StandardModels::LoadDynamics::LoadGenericNonLinear;
}

// cim:LoadMotor
BaseClass* LoadMotor_factory()
{
	return new IEC61970::Dynamics::StandardModels::LoadDynamics::LoadMotor;
}

// cim:LoadStatic
BaseClass* LoadStatic_factory()
{
	return new IEC61970::Dynamics::StandardModels::LoadDynamics::LoadStatic;
}

// cim:MechanicalLoadDynamics
BaseClass* MechanicalLoadDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::MechanicalLoadDynamics::MechanicalLoadDynamics;
}

// cim:MechLoad1
BaseClass* MechLoad1_factory()
{
	return new IEC61970::Dynamics::StandardModels::MechanicalLoadDynamics::MechLoad1;
}

// cim:OverexcitationLimiterDynamics
BaseClass* OverexcitationLimiterDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcitationLimiterDynamics;
}

// cim:OverexcLim2
BaseClass* OverexcLim2_factory()
{
	return new IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcLim2;
}

// cim:OverexcLimIEEE
BaseClass* OverexcLimIEEE_factory()
{
	return new IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcLimIEEE;
}

// cim:OverexcLimX1
BaseClass* OverexcLimX1_factory()
{
	return new IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcLimX1;
}

// cim:OverexcLimX2
BaseClass* OverexcLimX2_factory()
{
	return new IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcLimX2;
}

// cim:PFVArControllerType1Dynamics
BaseClass* PFVArControllerType1Dynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArControllerType1Dynamics;
}

// cim:PFVArType1IEEEPFController
BaseClass* PFVArType1IEEEPFController_factory()
{
	return new IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArType1IEEEPFController;
}

// cim:PFVArType1IEEEVArController
BaseClass* PFVArType1IEEEVArController_factory()
{
	return new IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArType1IEEEVArController;
}

// cim:PFVArControllerType2Dynamics
BaseClass* PFVArControllerType2Dynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::PFVArControllerType2Dynamics::PFVArControllerType2Dynamics;
}

// cim:PFVArType2Common1
BaseClass* PFVArType2Common1_factory()
{
	return new IEC61970::Dynamics::StandardModels::PFVArControllerType2Dynamics::PFVArType2Common1;
}

// cim:PFVArType2IEEEPFController
BaseClass* PFVArType2IEEEPFController_factory()
{
	return new IEC61970::Dynamics::StandardModels::PFVArControllerType2Dynamics::PFVArType2IEEEPFController;
}

// cim:PFVArType2IEEEVArController
BaseClass* PFVArType2IEEEVArController_factory()
{
	return new IEC61970::Dynamics::StandardModels::PFVArControllerType2Dynamics::PFVArType2IEEEVArController;
}

// cim:PowerSystemStabilizerDynamics
BaseClass* PowerSystemStabilizerDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics;
}

// cim:Pss1
BaseClass* Pss1_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::Pss1;
}

// cim:Pss1A
BaseClass* Pss1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::Pss1A;
}

// cim:Pss2B
BaseClass* Pss2B_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::Pss2B;
}

// cim:Pss2ST
BaseClass* Pss2ST_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::Pss2ST;
}

// cim:Pss5
BaseClass* Pss5_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::Pss5;
}

// cim:PssELIN2
BaseClass* PssELIN2_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssELIN2;
}

// cim:PssIEEE1A
BaseClass* PssIEEE1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssIEEE1A;
}

// cim:PssIEEE2B
BaseClass* PssIEEE2B_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssIEEE2B;
}

// cim:PssIEEE3B
BaseClass* PssIEEE3B_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssIEEE3B;
}

// cim:PssIEEE4B
BaseClass* PssIEEE4B_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssIEEE4B;
}

// cim:PssPTIST1
BaseClass* PssPTIST1_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssPTIST1;
}

// cim:PssPTIST3
BaseClass* PssPTIST3_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssPTIST3;
}

// cim:PssSB4
BaseClass* PssSB4_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssSB4;
}

// cim:PssSH
BaseClass* PssSH_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssSH;
}

// cim:PssSK
BaseClass* PssSK_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssSK;
}

// cim:PssWECC
BaseClass* PssWECC_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssWECC;
}

// cim:SynchronousMachineDetailed
BaseClass* SynchronousMachineDetailed_factory()
{
	return new IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDetailed;
}

// cim:SynchronousMachineEquivalentCircuit
BaseClass* SynchronousMachineEquivalentCircuit_factory()
{
	return new IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineEquivalentCircuit;
}

// cim:SynchronousMachineSimplified
BaseClass* SynchronousMachineSimplified_factory()
{
	return new IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineSimplified;
}

// cim:SynchronousMachineTimeConstantReactance
BaseClass* SynchronousMachineTimeConstantReactance_factory()
{
	return new IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineTimeConstantReactance;
}

// cim:GovCT1
BaseClass* GovCT1_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovCT1;
}

// cim:GovCT2
BaseClass* GovCT2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovCT2;
}

// cim:GovGAST
BaseClass* GovGAST_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovGAST;
}

// cim:GovGAST1
BaseClass* GovGAST1_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovGAST1;
}

// cim:GovGAST2
BaseClass* GovGAST2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovGAST2;
}

// cim:GovGAST3
BaseClass* GovGAST3_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovGAST3;
}

// cim:GovGAST4
BaseClass* GovGAST4_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovGAST4;
}

// cim:GovGASTWD
BaseClass* GovGASTWD_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovGASTWD;
}

// cim:GovHydro1
BaseClass* GovHydro1_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydro1;
}

// cim:GovHydro2
BaseClass* GovHydro2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydro2;
}

// cim:GovHydro3
BaseClass* GovHydro3_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydro3;
}

// cim:GovHydro4
BaseClass* GovHydro4_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydro4;
}

// cim:GovHydroDD
BaseClass* GovHydroDD_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroDD;
}

// cim:GovHydroFrancis
BaseClass* GovHydroFrancis_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroFrancis;
}

// cim:GovHydroIEEE0
BaseClass* GovHydroIEEE0_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroIEEE0;
}

// cim:GovHydroIEEE2
BaseClass* GovHydroIEEE2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroIEEE2;
}

// cim:GovHydroPelton
BaseClass* GovHydroPelton_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroPelton;
}

// cim:GovHydroPID
BaseClass* GovHydroPID_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroPID;
}

// cim:GovHydroPID2
BaseClass* GovHydroPID2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroPID2;
}

// cim:GovHydroR
BaseClass* GovHydroR_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroR;
}

// cim:GovHydroWEH
BaseClass* GovHydroWEH_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroWEH;
}

// cim:GovHydroWPID
BaseClass* GovHydroWPID_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroWPID;
}

// cim:GovSteam0
BaseClass* GovSteam0_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteam0;
}

// cim:GovSteam1
BaseClass* GovSteam1_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteam1;
}

// cim:GovSteam2
BaseClass* GovSteam2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteam2;
}

// cim:GovSteamCC
BaseClass* GovSteamCC_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteamCC;
}

// cim:GovSteamEU
BaseClass* GovSteamEU_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteamEU;
}

// cim:GovSteamFV2
BaseClass* GovSteamFV2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteamFV2;
}

// cim:GovSteamFV3
BaseClass* GovSteamFV3_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteamFV3;
}

// cim:GovSteamFV4
BaseClass* GovSteamFV4_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteamFV4;
}

// cim:GovSteamIEEE1
BaseClass* GovSteamIEEE1_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteamIEEE1;
}

// cim:GovSteamSGO
BaseClass* GovSteamSGO_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteamSGO;
}

// cim:TurbineLoadControllerDynamics
BaseClass* TurbineLoadControllerDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineLoadControllerDynamics::TurbineLoadControllerDynamics;
}

// cim:TurbLCFB1
BaseClass* TurbLCFB1_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineLoadControllerDynamics::TurbLCFB1;
}

// cim:UnderexcitationLimiterDynamics
BaseClass* UnderexcitationLimiterDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics;
}

// cim:UnderexcLim2Simplified
BaseClass* UnderexcLim2Simplified_factory()
{
	return new IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcLim2Simplified;
}

// cim:UnderexcLimIEEE1
BaseClass* UnderexcLimIEEE1_factory()
{
	return new IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcLimIEEE1;
}

// cim:UnderexcLimIEEE2
BaseClass* UnderexcLimIEEE2_factory()
{
	return new IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcLimIEEE2;
}

// cim:UnderexcLimX1
BaseClass* UnderexcLimX1_factory()
{
	return new IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcLimX1;
}

// cim:UnderexcLimX2
BaseClass* UnderexcLimX2_factory()
{
	return new IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcLimX2;
}

// cim:VoltageAdjusterDynamics
BaseClass* VoltageAdjusterDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::VoltageAdjusterDynamics::VoltageAdjusterDynamics;
}

// cim:VAdjIEEE
BaseClass* VAdjIEEE_factory()
{
	return new IEC61970::Dynamics::StandardModels::VoltageAdjusterDynamics::VAdjIEEE;
}

// cim:VoltageCompensatorDynamics
BaseClass* VoltageCompensatorDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VoltageCompensatorDynamics;
}

// cim:VCompIEEEType2
BaseClass* VCompIEEEType2_factory()
{
	return new IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VCompIEEEType2;
}

// cim:GenICompensationForGenJ
BaseClass* GenICompensationForGenJ_factory()
{
	return new IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::GenICompensationForGenJ;
}

// cim:VCompIEEEType1
BaseClass* VCompIEEEType1_factory()
{
	return new IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VCompIEEEType1;
}

// cim:WindTurbineType1or2Dynamics
BaseClass* WindTurbineType1or2Dynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2Dynamics;
}

// cim:WindTurbineType1or2IEC
BaseClass* WindTurbineType1or2IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2IEC;
}

// cim:WindGenTurbineType1IEC
BaseClass* WindGenTurbineType1IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType1IEC;
}

// cim:WindAeroConstIEC
BaseClass* WindAeroConstIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindAeroConstIEC;
}

// cim:WindTurbineType3or4Dynamics
BaseClass* WindTurbineType3or4Dynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4Dynamics;
}

// cim:WindTurbineType3or4IEC
BaseClass* WindTurbineType3or4IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC;
}

// cim:WindGenTurbineType3IEC
BaseClass* WindGenTurbineType3IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType3IEC;
}

// cim:WindAeroLinearIEC
BaseClass* WindAeroLinearIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindAeroLinearIEC;
}

// cim:WindContCurrLimIEC
BaseClass* WindContCurrLimIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContCurrLimIEC;
}

// cim:WindContPitchAngleIEC
BaseClass* WindContPitchAngleIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContPitchAngleIEC;
}

// cim:WindContPType3IEC
BaseClass* WindContPType3IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType3IEC;
}

// cim:WindGenType4IEC
BaseClass* WindGenType4IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType4IEC;
}

// cim:WindTurbineType4aIEC
BaseClass* WindTurbineType4aIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4aIEC;
}

// cim:WindContPType4aIEC
BaseClass* WindContPType4aIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType4aIEC;
}

// cim:WindTurbineType4bIEC
BaseClass* WindTurbineType4bIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4bIEC;
}

// cim:WindContPType4bIEC
BaseClass* WindContPType4bIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType4bIEC;
}

// cim:WindContQIEC
BaseClass* WindContQIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContQIEC;
}

// cim:WindGenTurbineType2IEC
BaseClass* WindGenTurbineType2IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType2IEC;
}

// cim:WindContRotorRIEC
BaseClass* WindContRotorRIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContRotorRIEC;
}

// cim:WindPlantDynamics
BaseClass* WindPlantDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantDynamics;
}

// cim:WindPlantReactiveControlIEC
BaseClass* WindPlantReactiveControlIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantReactiveControlIEC;
}

// cim:WindPlantIEC
BaseClass* WindPlantIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantIEC;
}

// cim:WindPlantFreqPcontrolIEC
BaseClass* WindPlantFreqPcontrolIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantFreqPcontrolIEC;
}

// cim:WindDynamicsLookupTable
BaseClass* WindDynamicsLookupTable_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable;
}

// cim:WindGenTurbineType3aIEC
BaseClass* WindGenTurbineType3aIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType3aIEC;
}

// cim:WindGenTurbineType3bIEC
BaseClass* WindGenTurbineType3bIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType3bIEC;
}

// cim:WindMechIEC
BaseClass* WindMechIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindMechIEC;
}

// cim:WindPitchContEmulIEC
BaseClass* WindPitchContEmulIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindPitchContEmulIEC;
}

// cim:WindProtectionIEC
BaseClass* WindProtectionIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindProtectionIEC;
}

// cim:AsynchronousMachineUserDefined
BaseClass* AsynchronousMachineUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::AsynchronousMachineUserDefined;
}

// cim:DiscontinuousExcitationControlUserDefined
BaseClass* DiscontinuousExcitationControlUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::DiscontinuousExcitationControlUserDefined;
}

// cim:ExcitationSystemUserDefined
BaseClass* ExcitationSystemUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::ExcitationSystemUserDefined;
}

// cim:LoadUserDefined
BaseClass* LoadUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::LoadUserDefined;
}

// cim:MechanicalLoadUserDefined
BaseClass* MechanicalLoadUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::MechanicalLoadUserDefined;
}

// cim:OverexcitationLimiterUserDefined
BaseClass* OverexcitationLimiterUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::OverexcitationLimiterUserDefined;
}

// cim:PFVArControllerType1UserDefined
BaseClass* PFVArControllerType1UserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::PFVArControllerType1UserDefined;
}

// cim:PFVArControllerType2UserDefined
BaseClass* PFVArControllerType2UserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::PFVArControllerType2UserDefined;
}

// cim:PowerSystemStabilizerUserDefined
BaseClass* PowerSystemStabilizerUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::PowerSystemStabilizerUserDefined;
}

// cim:TurbineGovernorUserDefined
BaseClass* TurbineGovernorUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::TurbineGovernorUserDefined;
}

// cim:VoltageAdjusterUserDefined
BaseClass* VoltageAdjusterUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::VoltageAdjusterUserDefined;
}

// cim:UnderexcitationLimiterUserDefined
BaseClass* UnderexcitationLimiterUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::UnderexcitationLimiterUserDefined;
}

// cim:VoltageCompensatorUserDefined
BaseClass* VoltageCompensatorUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::VoltageCompensatorUserDefined;
}

// cim:SynchronousMachineUserDefined
BaseClass* SynchronousMachineUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::SynchronousMachineUserDefined;
}

// cim:TurbineLoadControllerUserDefined
BaseClass* TurbineLoadControllerUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::TurbineLoadControllerUserDefined;
}

// cim:ProprietaryParameterDynamics
BaseClass* ProprietaryParameterDynamics_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics;
}

// cim:WindPlantUserDefined
BaseClass* WindPlantUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::WindPlantUserDefined;
}

// cim:WindType1or2UserDefined
BaseClass* WindType1or2UserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::WindType1or2UserDefined;
}

// cim:WindType3or4UserDefined
BaseClass* WindType3or4UserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::WindType3or4UserDefined;
}

// cim:IEC61970CIMVersion
BaseClass* IEC61970CIMVersion_factory()
{
	return new IEC61970::IEC61970CIMVersion;
}

static std::unordered_map<std::string, BaseClass* (*)()> initialize()
{
	std::unordered_map<std::string, BaseClass* (*)()> map;

	map.insert(std::make_pair("cim:IdentifiedObject", &IdentifiedObject_factory));
	map.insert(std::make_pair("cim:Control", &Control_factory));
	map.insert(std::make_pair("cim:ACDCTerminal", &ACDCTerminal_factory));
	map.insert(std::make_pair("cim:Measurement", &Measurement_factory));
	map.insert(std::make_pair("cim:PSRType", &PSRType_factory));
	map.insert(std::make_pair("cim:PowerSystemResource", &PowerSystemResource_factory));
	map.insert(std::make_pair("cim:Equipment", &Equipment_factory));
	map.insert(std::make_pair("cim:ConnectivityNodeContainer", &ConnectivityNodeContainer_factory));
	map.insert(std::make_pair("cim:ConnectivityNode", &ConnectivityNode_factory));
	map.insert(std::make_pair("cim:ConductingEquipment", &ConductingEquipment_factory));
	map.insert(std::make_pair("cim:RegulatingControl", &RegulatingControl_factory));
	map.insert(std::make_pair("cim:Terminal", &Terminal_factory));
	map.insert(std::make_pair("cim:AuxiliaryEquipment", &AuxiliaryEquipment_factory));
	map.insert(std::make_pair("cim:Sensor", &Sensor_factory));
	map.insert(std::make_pair("cim:CurrentTransformer", &CurrentTransformer_factory));
	map.insert(std::make_pair("cim:FaultIndicator", &FaultIndicator_factory));
	map.insert(std::make_pair("cim:FlowSensor", &FlowSensor_factory));
	map.insert(std::make_pair("cim:PostLineSensor", &PostLineSensor_factory));
	map.insert(std::make_pair("cim:PotentialTransformer", &PotentialTransformer_factory));
	map.insert(std::make_pair("cim:SurgeArrester", &SurgeArrester_factory));
	map.insert(std::make_pair("cim:WaveTrap", &WaveTrap_factory));
	map.insert(std::make_pair("cim:ContingencyElement", &ContingencyElement_factory));
	map.insert(std::make_pair("cim:Contingency", &Contingency_factory));
	map.insert(std::make_pair("cim:ContingencyEquipment", &ContingencyEquipment_factory));
	map.insert(std::make_pair("cim:RemotePoint", &RemotePoint_factory));
	map.insert(std::make_pair("cim:RemoteSource", &RemoteSource_factory));
	map.insert(std::make_pair("cim:Quality61850", &Quality61850_factory));
	map.insert(std::make_pair("cim:MeasurementValueQuality", &MeasurementValueQuality_factory));
	map.insert(std::make_pair("cim:MeasurementValue", &MeasurementValue_factory));
	map.insert(std::make_pair("cim:AnalogControl", &AnalogControl_factory));
	map.insert(std::make_pair("cim:AnalogValue", &AnalogValue_factory));
	map.insert(std::make_pair("cim:AltGeneratingUnitMeas", &AltGeneratingUnitMeas_factory));
	map.insert(std::make_pair("cim:AltTieMeas", &AltTieMeas_factory));
	map.insert(std::make_pair("cim:RegularTimePoint", &RegularTimePoint_factory));
	map.insert(std::make_pair("cim:BasicIntervalSchedule", &BasicIntervalSchedule_factory));
	map.insert(std::make_pair("cim:RegularIntervalSchedule", &RegularIntervalSchedule_factory));
	map.insert(std::make_pair("cim:GenUnitOpSchedule", &GenUnitOpSchedule_factory));
	map.insert(std::make_pair("cim:CurveData", &CurveData_factory));
	map.insert(std::make_pair("cim:Curve", &Curve_factory));
	map.insert(std::make_pair("cim:GrossToNetActivePowerCurve", &GrossToNetActivePowerCurve_factory));
	map.insert(std::make_pair("cim:GenUnitOpCostCurve", &GenUnitOpCostCurve_factory));
	map.insert(std::make_pair("cim:HydroPumpOpSchedule", &HydroPumpOpSchedule_factory));
	map.insert(std::make_pair("cim:HydroPump", &HydroPump_factory));
	map.insert(std::make_pair("cim:RegulatingCondEq", &RegulatingCondEq_factory));
	map.insert(std::make_pair("cim:RotatingMachine", &RotatingMachine_factory));
	map.insert(std::make_pair("cim:GeneratingUnit", &GeneratingUnit_factory));
	map.insert(std::make_pair("cim:ControlAreaGeneratingUnit", &ControlAreaGeneratingUnit_factory));
	map.insert(std::make_pair("cim:TieFlow", &TieFlow_factory));
	map.insert(std::make_pair("cim:EnergyArea", &EnergyArea_factory));
	map.insert(std::make_pair("cim:ControlArea", &ControlArea_factory));
	map.insert(std::make_pair("cim:BaseFrequency", &BaseFrequency_factory));
	map.insert(std::make_pair("cim:BasePower", &BasePower_factory));
	map.insert(std::make_pair("cim:BaseVoltage", &BaseVoltage_factory));
	map.insert(std::make_pair("cim:EquipmentContainer", &EquipmentContainer_factory));
	map.insert(std::make_pair("cim:Bay", &Bay_factory));
	map.insert(std::make_pair("cim:Line", &Line_factory));
	map.insert(std::make_pair("cim:VoltageLevel", &VoltageLevel_factory));
	map.insert(std::make_pair("cim:DCTopologicalNode", &DCTopologicalNode_factory));
	map.insert(std::make_pair("cim:DCEquipmentContainer", &DCEquipmentContainer_factory));
	map.insert(std::make_pair("cim:DCConverterUnit", &DCConverterUnit_factory));
	map.insert(std::make_pair("cim:Substation", &Substation_factory));
	map.insert(std::make_pair("cim:SubGeographicalRegion", &SubGeographicalRegion_factory));
	map.insert(std::make_pair("cim:GeographicalRegion", &GeographicalRegion_factory));
	map.insert(std::make_pair("cim:IrregularTimePoint", &IrregularTimePoint_factory));
	map.insert(std::make_pair("cim:IrregularIntervalSchedule", &IrregularIntervalSchedule_factory));
	map.insert(std::make_pair("cim:NameTypeAuthority", &NameTypeAuthority_factory));
	map.insert(std::make_pair("cim:NameType", &NameType_factory));
	map.insert(std::make_pair("cim:Name", &Name_factory));
	map.insert(std::make_pair("cim:OperatingParticipant", &OperatingParticipant_factory));
	map.insert(std::make_pair("cim:OperatingShare", &OperatingShare_factory));
	map.insert(std::make_pair("cim:ReportingGroup", &ReportingGroup_factory));
	map.insert(std::make_pair("cim:ReportingSuperGroup", &ReportingSuperGroup_factory));
	map.insert(std::make_pair("cim:ACDCConverter", &ACDCConverter_factory));
	map.insert(std::make_pair("cim:DCBaseTerminal", &DCBaseTerminal_factory));
	map.insert(std::make_pair("cim:ACDCConverterDCTerminal", &ACDCConverterDCTerminal_factory));
	map.insert(std::make_pair("cim:CsConverter", &CsConverter_factory));
	map.insert(std::make_pair("cim:DCTerminal", &DCTerminal_factory));
	map.insert(std::make_pair("cim:DCConductingEquipment", &DCConductingEquipment_factory));
	map.insert(std::make_pair("cim:DCSwitch", &DCSwitch_factory));
	map.insert(std::make_pair("cim:DCBreaker", &DCBreaker_factory));
	map.insert(std::make_pair("cim:DCBusbar", &DCBusbar_factory));
	map.insert(std::make_pair("cim:DCChopper", &DCChopper_factory));
	map.insert(std::make_pair("cim:DCDisconnector", &DCDisconnector_factory));
	map.insert(std::make_pair("cim:DCGround", &DCGround_factory));
	map.insert(std::make_pair("cim:DCLine", &DCLine_factory));
	map.insert(std::make_pair("cim:DCLineSegment", &DCLineSegment_factory));
	map.insert(std::make_pair("cim:DCNode", &DCNode_factory));
	map.insert(std::make_pair("cim:DCSeriesDevice", &DCSeriesDevice_factory));
	map.insert(std::make_pair("cim:DCShunt", &DCShunt_factory));
	map.insert(std::make_pair("cim:DCTopologicalIsland", &DCTopologicalIsland_factory));
	map.insert(std::make_pair("cim:PerLengthLineParameter", &PerLengthLineParameter_factory));
	map.insert(std::make_pair("cim:PerLengthDCLineParameter", &PerLengthDCLineParameter_factory));
	map.insert(std::make_pair("cim:VsCapabilityCurve", &VsCapabilityCurve_factory));
	map.insert(std::make_pair("cim:VsConverter", &VsConverter_factory));
	map.insert(std::make_pair("cim:Diagram", &Diagram_factory));
	map.insert(std::make_pair("cim:VisibilityLayer", &VisibilityLayer_factory));
	map.insert(std::make_pair("cim:DiagramObjectGluePoint", &DiagramObjectGluePoint_factory));
	map.insert(std::make_pair("cim:DiagramObjectPoint", &DiagramObjectPoint_factory));
	map.insert(std::make_pair("cim:DiagramObjectStyle", &DiagramObjectStyle_factory));
	map.insert(std::make_pair("cim:DiagramObject", &DiagramObject_factory));
	map.insert(std::make_pair("cim:DiagramStyle", &DiagramStyle_factory));
	map.insert(std::make_pair("cim:TextDiagramObject", &TextDiagramObject_factory));
	map.insert(std::make_pair("cim:DateInterval", &DateInterval_factory));
	map.insert(std::make_pair("cim:DateTimeInterval", &DateTimeInterval_factory));
	map.insert(std::make_pair("cim:MonthDayInterval", &MonthDayInterval_factory));
	map.insert(std::make_pair("cim:TimeInterval", &TimeInterval_factory));
	map.insert(std::make_pair("cim:EquivalentEquipment", &EquivalentEquipment_factory));
	map.insert(std::make_pair("cim:EquivalentBranch", &EquivalentBranch_factory));
	map.insert(std::make_pair("cim:EquivalentInjection", &EquivalentInjection_factory));
	map.insert(std::make_pair("cim:EquivalentNetwork", &EquivalentNetwork_factory));
	map.insert(std::make_pair("cim:EquivalentShunt", &EquivalentShunt_factory));
	map.insert(std::make_pair("cim:FaultImpedance", &FaultImpedance_factory));
	map.insert(std::make_pair("cim:FaultCauseType", &FaultCauseType_factory));
	map.insert(std::make_pair("cim:Fault", &Fault_factory));
	map.insert(std::make_pair("cim:EquipmentFault", &EquipmentFault_factory));
	map.insert(std::make_pair("cim:Conductor", &Conductor_factory));
	map.insert(std::make_pair("cim:Clamp", &Clamp_factory));
	map.insert(std::make_pair("cim:ACLineSegment", &ACLineSegment_factory));
	map.insert(std::make_pair("cim:LineFault", &LineFault_factory));
	map.insert(std::make_pair("cim:SynchronousMachine", &SynchronousMachine_factory));
	map.insert(std::make_pair("cim:PrimeMover", &PrimeMover_factory));
	map.insert(std::make_pair("cim:SteamTurbine", &SteamTurbine_factory));
	map.insert(std::make_pair("cim:SteamSupply", &SteamSupply_factory));
	map.insert(std::make_pair("cim:BWRSteamSupply", &BWRSteamSupply_factory));
	map.insert(std::make_pair("cim:AirCompressor", &AirCompressor_factory));
	map.insert(std::make_pair("cim:CTTempActivePowerCurve", &CTTempActivePowerCurve_factory));
	map.insert(std::make_pair("cim:CombustionTurbine", &CombustionTurbine_factory));
	map.insert(std::make_pair("cim:FossilSteamSupply", &FossilSteamSupply_factory));
	map.insert(std::make_pair("cim:DrumBoiler", &DrumBoiler_factory));
	map.insert(std::make_pair("cim:HeatRecoveryBoiler", &HeatRecoveryBoiler_factory));
	map.insert(std::make_pair("cim:HydroTurbine", &HydroTurbine_factory));
	map.insert(std::make_pair("cim:PWRSteamSupply", &PWRSteamSupply_factory));
	map.insert(std::make_pair("cim:Subcritical", &Subcritical_factory));
	map.insert(std::make_pair("cim:Supercritical", &Supercritical_factory));
	map.insert(std::make_pair("cim:HeatRateCurve", &HeatRateCurve_factory));
	map.insert(std::make_pair("cim:FuelAllocationSchedule", &FuelAllocationSchedule_factory));
	map.insert(std::make_pair("cim:StartRampCurve", &StartRampCurve_factory));
	map.insert(std::make_pair("cim:StartIgnFuelCurve", &StartIgnFuelCurve_factory));
	map.insert(std::make_pair("cim:StartMainFuelCurve", &StartMainFuelCurve_factory));
	map.insert(std::make_pair("cim:StartupModel", &StartupModel_factory));
	map.insert(std::make_pair("cim:EmissionCurve", &EmissionCurve_factory));
	map.insert(std::make_pair("cim:ShutdownCurve", &ShutdownCurve_factory));
	map.insert(std::make_pair("cim:IncrementalHeatRateCurve", &IncrementalHeatRateCurve_factory));
	map.insert(std::make_pair("cim:EmissionAccount", &EmissionAccount_factory));
	map.insert(std::make_pair("cim:HeatInputCurve", &HeatInputCurve_factory));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit", &ThermalGeneratingUnit_factory));
	map.insert(std::make_pair("cim:CAESPlant", &CAESPlant_factory));
	map.insert(std::make_pair("cim:SteamSendoutSchedule", &SteamSendoutSchedule_factory));
	map.insert(std::make_pair("cim:CogenerationPlant", &CogenerationPlant_factory));
	map.insert(std::make_pair("cim:CombinedCyclePlant", &CombinedCyclePlant_factory));
	map.insert(std::make_pair("cim:FossilFuel", &FossilFuel_factory));
	map.insert(std::make_pair("cim:HydroGeneratingEfficiencyCurve", &HydroGeneratingEfficiencyCurve_factory));
	map.insert(std::make_pair("cim:TailbayLossCurve", &TailbayLossCurve_factory));
	map.insert(std::make_pair("cim:PenstockLossCurve", &PenstockLossCurve_factory));
	map.insert(std::make_pair("cim:HydroGeneratingUnit", &HydroGeneratingUnit_factory));
	map.insert(std::make_pair("cim:LevelVsVolumeCurve", &LevelVsVolumeCurve_factory));
	map.insert(std::make_pair("cim:InflowForecast", &InflowForecast_factory));
	map.insert(std::make_pair("cim:TargetLevelSchedule", &TargetLevelSchedule_factory));
	map.insert(std::make_pair("cim:Reservoir", &Reservoir_factory));
	map.insert(std::make_pair("cim:HydroPowerPlant", &HydroPowerPlant_factory));
	map.insert(std::make_pair("cim:NuclearGeneratingUnit", &NuclearGeneratingUnit_factory));
	map.insert(std::make_pair("cim:SolarGeneratingUnit", &SolarGeneratingUnit_factory));
	map.insert(std::make_pair("cim:WindGeneratingUnit", &WindGeneratingUnit_factory));
	map.insert(std::make_pair("cim:LoadResponseCharacteristic", &LoadResponseCharacteristic_factory));
	map.insert(std::make_pair("cim:EnergyConsumerPhase", &EnergyConsumerPhase_factory));
	map.insert(std::make_pair("cim:EnergyConsumer", &EnergyConsumer_factory));
	map.insert(std::make_pair("cim:ConformLoad", &ConformLoad_factory));
	map.insert(std::make_pair("cim:LoadGroup", &LoadGroup_factory));
	map.insert(std::make_pair("cim:SeasonDayTypeSchedule", &SeasonDayTypeSchedule_factory));
	map.insert(std::make_pair("cim:ConformLoadSchedule", &ConformLoadSchedule_factory));
	map.insert(std::make_pair("cim:ConformLoadGroup", &ConformLoadGroup_factory));
	map.insert(std::make_pair("cim:DayType", &DayType_factory));
	map.insert(std::make_pair("cim:SubLoadArea", &SubLoadArea_factory));
	map.insert(std::make_pair("cim:LoadArea", &LoadArea_factory));
	map.insert(std::make_pair("cim:NonConformLoad", &NonConformLoad_factory));
	map.insert(std::make_pair("cim:NonConformLoadSchedule", &NonConformLoadSchedule_factory));
	map.insert(std::make_pair("cim:NonConformLoadGroup", &NonConformLoadGroup_factory));
	map.insert(std::make_pair("cim:PowerCutZone", &PowerCutZone_factory));
	map.insert(std::make_pair("cim:Season", &Season_factory));
	map.insert(std::make_pair("cim:StationSupply", &StationSupply_factory));
	map.insert(std::make_pair("cim:AccumulatorValue", &AccumulatorValue_factory));
	map.insert(std::make_pair("cim:Limit", &Limit_factory));
	map.insert(std::make_pair("cim:AccumulatorLimit", &AccumulatorLimit_factory));
	map.insert(std::make_pair("cim:LimitSet", &LimitSet_factory));
	map.insert(std::make_pair("cim:AccumulatorLimitSet", &AccumulatorLimitSet_factory));
	map.insert(std::make_pair("cim:Accumulator", &Accumulator_factory));
	map.insert(std::make_pair("cim:AccumulatorReset", &AccumulatorReset_factory));
	map.insert(std::make_pair("cim:AnalogLimit", &AnalogLimit_factory));
	map.insert(std::make_pair("cim:AnalogLimitSet", &AnalogLimitSet_factory));
	map.insert(std::make_pair("cim:Analog", &Analog_factory));
	map.insert(std::make_pair("cim:ValueToAlias", &ValueToAlias_factory));
	map.insert(std::make_pair("cim:ValueAliasSet", &ValueAliasSet_factory));
	map.insert(std::make_pair("cim:Command", &Command_factory));
	map.insert(std::make_pair("cim:DiscreteValue", &DiscreteValue_factory));
	map.insert(std::make_pair("cim:Discrete", &Discrete_factory));
	map.insert(std::make_pair("cim:DiscreteCommand", &DiscreteCommand_factory));
	map.insert(std::make_pair("cim:MeasurementValueSource", &MeasurementValueSource_factory));
	map.insert(std::make_pair("cim:RaiseLowerCommand", &RaiseLowerCommand_factory));
	map.insert(std::make_pair("cim:SetPoint", &SetPoint_factory));
	map.insert(std::make_pair("cim:StringMeasurement", &StringMeasurement_factory));
	map.insert(std::make_pair("cim:StringMeasurementValue", &StringMeasurementValue_factory));
	map.insert(std::make_pair("cim:OperationalLimitType", &OperationalLimitType_factory));
	map.insert(std::make_pair("cim:OperationalLimit", &OperationalLimit_factory));
	map.insert(std::make_pair("cim:ActivePowerLimit", &ActivePowerLimit_factory));
	map.insert(std::make_pair("cim:ApparentPowerLimit", &ApparentPowerLimit_factory));
	map.insert(std::make_pair("cim:BranchGroupTerminal", &BranchGroupTerminal_factory));
	map.insert(std::make_pair("cim:BranchGroup", &BranchGroup_factory));
	map.insert(std::make_pair("cim:CurrentLimit", &CurrentLimit_factory));
	map.insert(std::make_pair("cim:OperationalLimitSet", &OperationalLimitSet_factory));
	map.insert(std::make_pair("cim:VoltageLimit", &VoltageLimit_factory));
	map.insert(std::make_pair("cim:RecloseSequence", &RecloseSequence_factory));
	map.insert(std::make_pair("cim:SwitchPhase", &SwitchPhase_factory));
	map.insert(std::make_pair("cim:SwitchSchedule", &SwitchSchedule_factory));
	map.insert(std::make_pair("cim:Switch", &Switch_factory));
	map.insert(std::make_pair("cim:ProtectedSwitch", &ProtectedSwitch_factory));
	map.insert(std::make_pair("cim:ProtectionEquipment", &ProtectionEquipment_factory));
	map.insert(std::make_pair("cim:CurrentRelay", &CurrentRelay_factory));
	map.insert(std::make_pair("cim:SynchrocheckRelay", &SynchrocheckRelay_factory));
	map.insert(std::make_pair("cim:RemoteUnit", &RemoteUnit_factory));
	map.insert(std::make_pair("cim:CommunicationLink", &CommunicationLink_factory));
	map.insert(std::make_pair("cim:RemoteControl", &RemoteControl_factory));
	map.insert(std::make_pair("cim:StateVariable", &StateVariable_factory));
	map.insert(std::make_pair("cim:TopologicalNode", &TopologicalNode_factory));
	map.insert(std::make_pair("cim:SvInjection", &SvInjection_factory));
	map.insert(std::make_pair("cim:SvPowerFlow", &SvPowerFlow_factory));
	map.insert(std::make_pair("cim:ShuntCompensatorPhase", &ShuntCompensatorPhase_factory));
	map.insert(std::make_pair("cim:ShuntCompensator", &ShuntCompensator_factory));
	map.insert(std::make_pair("cim:SvShuntCompensatorSections", &SvShuntCompensatorSections_factory));
	map.insert(std::make_pair("cim:SvStatus", &SvStatus_factory));
	map.insert(std::make_pair("cim:TapChangerControl", &TapChangerControl_factory));
	map.insert(std::make_pair("cim:TapChanger", &TapChanger_factory));
	map.insert(std::make_pair("cim:SvTapStep", &SvTapStep_factory));
	map.insert(std::make_pair("cim:SvVoltage", &SvVoltage_factory));
	map.insert(std::make_pair("cim:BusNameMarker", &BusNameMarker_factory));
	map.insert(std::make_pair("cim:TopologicalIsland", &TopologicalIsland_factory));
	map.insert(std::make_pair("cim:ACLineSegmentPhase", &ACLineSegmentPhase_factory));
	map.insert(std::make_pair("cim:AsynchronousMachine", &AsynchronousMachine_factory));
	map.insert(std::make_pair("cim:Breaker", &Breaker_factory));
	map.insert(std::make_pair("cim:VoltageControlZone", &VoltageControlZone_factory));
	map.insert(std::make_pair("cim:Connector", &Connector_factory));
	map.insert(std::make_pair("cim:BusbarSection", &BusbarSection_factory));
	map.insert(std::make_pair("cim:CompositeSwitch", &CompositeSwitch_factory));
	map.insert(std::make_pair("cim:Cut", &Cut_factory));
	map.insert(std::make_pair("cim:Disconnector", &Disconnector_factory));
	map.insert(std::make_pair("cim:EarthFaultCompensator", &EarthFaultCompensator_factory));
	map.insert(std::make_pair("cim:EnergySource", &EnergySource_factory));
	map.insert(std::make_pair("cim:EnergySourcePhase", &EnergySourcePhase_factory));
	map.insert(std::make_pair("cim:ExternalNetworkInjection", &ExternalNetworkInjection_factory));
	map.insert(std::make_pair("cim:FrequencyConverter", &FrequencyConverter_factory));
	map.insert(std::make_pair("cim:Fuse", &Fuse_factory));
	map.insert(std::make_pair("cim:Ground", &Ground_factory));
	map.insert(std::make_pair("cim:GroundDisconnector", &GroundDisconnector_factory));
	map.insert(std::make_pair("cim:GroundingImpedance", &GroundingImpedance_factory));
	map.insert(std::make_pair("cim:Jumper", &Jumper_factory));
	map.insert(std::make_pair("cim:Junction", &Junction_factory));
	map.insert(std::make_pair("cim:LinearShuntCompensator", &LinearShuntCompensator_factory));
	map.insert(std::make_pair("cim:LinearShuntCompensatorPhase", &LinearShuntCompensatorPhase_factory));
	map.insert(std::make_pair("cim:LoadBreakSwitch", &LoadBreakSwitch_factory));
	map.insert(std::make_pair("cim:MutualCoupling", &MutualCoupling_factory));
	map.insert(std::make_pair("cim:NonlinearShuntCompensatorPoint", &NonlinearShuntCompensatorPoint_factory));
	map.insert(std::make_pair("cim:NonlinearShuntCompensator", &NonlinearShuntCompensator_factory));
	map.insert(std::make_pair("cim:NonlinearShuntCompensatorPhasePoint", &NonlinearShuntCompensatorPhasePoint_factory));
	map.insert(std::make_pair("cim:NonlinearShuntCompensatorPhase", &NonlinearShuntCompensatorPhase_factory));
	map.insert(std::make_pair("cim:NonRotatingEnergy", &NonRotatingEnergy_factory));
	map.insert(std::make_pair("cim:PerLengthImpedance", &PerLengthImpedance_factory));
	map.insert(std::make_pair("cim:PhaseImpedanceData", &PhaseImpedanceData_factory));
	map.insert(std::make_pair("cim:PerLengthPhaseImpedance", &PerLengthPhaseImpedance_factory));
	map.insert(std::make_pair("cim:PerLengthSequenceImpedance", &PerLengthSequenceImpedance_factory));
	map.insert(std::make_pair("cim:PetersenCoil", &PetersenCoil_factory));
	map.insert(std::make_pair("cim:PhaseTapChanger", &PhaseTapChanger_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerNonLinear", &PhaseTapChangerNonLinear_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerAsymmetrical", &PhaseTapChangerAsymmetrical_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerLinear", &PhaseTapChangerLinear_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerSymmetrical", &PhaseTapChangerSymmetrical_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerTabular", &PhaseTapChangerTabular_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerTable", &PhaseTapChangerTable_factory));
	map.insert(std::make_pair("cim:TapChangerTablePoint", &TapChangerTablePoint_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerTablePoint", &PhaseTapChangerTablePoint_factory));
	map.insert(std::make_pair("cim:Plant", &Plant_factory));
	map.insert(std::make_pair("cim:TransformerStarImpedance", &TransformerStarImpedance_factory));
	map.insert(std::make_pair("cim:RatioTapChangerTable", &RatioTapChangerTable_factory));
	map.insert(std::make_pair("cim:RatioTapChanger", &RatioTapChanger_factory));
	map.insert(std::make_pair("cim:TransformerEnd", &TransformerEnd_factory));
	map.insert(std::make_pair("cim:PowerTransformerEnd", &PowerTransformerEnd_factory));
	map.insert(std::make_pair("cim:PowerTransformer", &PowerTransformer_factory));
	map.insert(std::make_pair("cim:RatioTapChangerTablePoint", &RatioTapChangerTablePoint_factory));
	map.insert(std::make_pair("cim:ReactiveCapabilityCurve", &ReactiveCapabilityCurve_factory));
	map.insert(std::make_pair("cim:Recloser", &Recloser_factory));
	map.insert(std::make_pair("cim:RegulationSchedule", &RegulationSchedule_factory));
	map.insert(std::make_pair("cim:Sectionaliser", &Sectionaliser_factory));
	map.insert(std::make_pair("cim:SeriesCompensator", &SeriesCompensator_factory));
	map.insert(std::make_pair("cim:StaticVarCompensator", &StaticVarCompensator_factory));
	map.insert(std::make_pair("cim:TapSchedule", &TapSchedule_factory));
	map.insert(std::make_pair("cim:TransformerCoreAdmittance", &TransformerCoreAdmittance_factory));
	map.insert(std::make_pair("cim:TransformerMeshImpedance", &TransformerMeshImpedance_factory));
	map.insert(std::make_pair("cim:TransformerTank", &TransformerTank_factory));
	map.insert(std::make_pair("cim:TransformerTankEnd", &TransformerTankEnd_factory));
	map.insert(std::make_pair("cim:WindTurbineType3or4", &WindTurbineType3or4_factory));
	map.insert(std::make_pair("cim:RemoteInputSignal", &RemoteInputSignal_factory));
	map.insert(std::make_pair("cim:DynamicsFunctionBlock", &DynamicsFunctionBlock_factory));
	map.insert(std::make_pair("cim:RotatingMachineDynamics", &RotatingMachineDynamics_factory));
	map.insert(std::make_pair("cim:AsynchronousMachineDynamics", &AsynchronousMachineDynamics_factory));
	map.insert(std::make_pair("cim:AsynchronousMachineEquivalentCircuit", &AsynchronousMachineEquivalentCircuit_factory));
	map.insert(std::make_pair("cim:AsynchronousMachineTimeConstantReactance", &AsynchronousMachineTimeConstantReactance_factory));
	map.insert(std::make_pair("cim:TurbineGovernorDynamics", &TurbineGovernorDynamics_factory));
	map.insert(std::make_pair("cim:SynchronousMachineDynamics", &SynchronousMachineDynamics_factory));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics", &ExcitationSystemDynamics_factory));
	map.insert(std::make_pair("cim:DiscontinuousExcitationControlDynamics", &DiscontinuousExcitationControlDynamics_factory));
	map.insert(std::make_pair("cim:DiscExcContIEEEDEC1A", &DiscExcContIEEEDEC1A_factory));
	map.insert(std::make_pair("cim:DiscExcContIEEEDEC2A", &DiscExcContIEEEDEC2A_factory));
	map.insert(std::make_pair("cim:DiscExcContIEEEDEC3A", &DiscExcContIEEEDEC3A_factory));
	map.insert(std::make_pair("cim:ExcAC1A", &ExcAC1A_factory));
	map.insert(std::make_pair("cim:ExcAC2A", &ExcAC2A_factory));
	map.insert(std::make_pair("cim:ExcAC3A", &ExcAC3A_factory));
	map.insert(std::make_pair("cim:ExcAC4A", &ExcAC4A_factory));
	map.insert(std::make_pair("cim:ExcAC5A", &ExcAC5A_factory));
	map.insert(std::make_pair("cim:ExcAC6A", &ExcAC6A_factory));
	map.insert(std::make_pair("cim:ExcAC8B", &ExcAC8B_factory));
	map.insert(std::make_pair("cim:ExcANS", &ExcANS_factory));
	map.insert(std::make_pair("cim:ExcAVR1", &ExcAVR1_factory));
	map.insert(std::make_pair("cim:ExcAVR2", &ExcAVR2_factory));
	map.insert(std::make_pair("cim:ExcAVR3", &ExcAVR3_factory));
	map.insert(std::make_pair("cim:ExcAVR4", &ExcAVR4_factory));
	map.insert(std::make_pair("cim:ExcAVR5", &ExcAVR5_factory));
	map.insert(std::make_pair("cim:ExcAVR7", &ExcAVR7_factory));
	map.insert(std::make_pair("cim:ExcBBC", &ExcBBC_factory));
	map.insert(std::make_pair("cim:ExcCZ", &ExcCZ_factory));
	map.insert(std::make_pair("cim:ExcDC1A", &ExcDC1A_factory));
	map.insert(std::make_pair("cim:ExcDC2A", &ExcDC2A_factory));
	map.insert(std::make_pair("cim:ExcDC3A", &ExcDC3A_factory));
	map.insert(std::make_pair("cim:ExcDC3A1", &ExcDC3A1_factory));
	map.insert(std::make_pair("cim:ExcELIN1", &ExcELIN1_factory));
	map.insert(std::make_pair("cim:ExcELIN2", &ExcELIN2_factory));
	map.insert(std::make_pair("cim:ExcHU", &ExcHU_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC1A", &ExcIEEEAC1A_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC2A", &ExcIEEEAC2A_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC3A", &ExcIEEEAC3A_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC4A", &ExcIEEEAC4A_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC5A", &ExcIEEEAC5A_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC6A", &ExcIEEEAC6A_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC7B", &ExcIEEEAC7B_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC8B", &ExcIEEEAC8B_factory));
	map.insert(std::make_pair("cim:ExcIEEEDC1A", &ExcIEEEDC1A_factory));
	map.insert(std::make_pair("cim:ExcIEEEDC2A", &ExcIEEEDC2A_factory));
	map.insert(std::make_pair("cim:ExcIEEEDC3A", &ExcIEEEDC3A_factory));
	map.insert(std::make_pair("cim:ExcIEEEDC4B", &ExcIEEEDC4B_factory));
	map.insert(std::make_pair("cim:ExcIEEEST1A", &ExcIEEEST1A_factory));
	map.insert(std::make_pair("cim:ExcIEEEST2A", &ExcIEEEST2A_factory));
	map.insert(std::make_pair("cim:ExcIEEEST3A", &ExcIEEEST3A_factory));
	map.insert(std::make_pair("cim:ExcIEEEST4B", &ExcIEEEST4B_factory));
	map.insert(std::make_pair("cim:ExcIEEEST5B", &ExcIEEEST5B_factory));
	map.insert(std::make_pair("cim:ExcIEEEST6B", &ExcIEEEST6B_factory));
	map.insert(std::make_pair("cim:ExcIEEEST7B", &ExcIEEEST7B_factory));
	map.insert(std::make_pair("cim:ExcOEX3T", &ExcOEX3T_factory));
	map.insert(std::make_pair("cim:ExcPIC", &ExcPIC_factory));
	map.insert(std::make_pair("cim:ExcREXS", &ExcREXS_factory));
	map.insert(std::make_pair("cim:ExcSCRX", &ExcSCRX_factory));
	map.insert(std::make_pair("cim:ExcSEXS", &ExcSEXS_factory));
	map.insert(std::make_pair("cim:ExcSK", &ExcSK_factory));
	map.insert(std::make_pair("cim:ExcST1A", &ExcST1A_factory));
	map.insert(std::make_pair("cim:ExcST2A", &ExcST2A_factory));
	map.insert(std::make_pair("cim:ExcST3A", &ExcST3A_factory));
	map.insert(std::make_pair("cim:ExcST4B", &ExcST4B_factory));
	map.insert(std::make_pair("cim:ExcST6B", &ExcST6B_factory));
	map.insert(std::make_pair("cim:ExcST7B", &ExcST7B_factory));
	map.insert(std::make_pair("cim:LoadDynamics", &LoadDynamics_factory));
	map.insert(std::make_pair("cim:LoadAggregate", &LoadAggregate_factory));
	map.insert(std::make_pair("cim:LoadComposite", &LoadComposite_factory));
	map.insert(std::make_pair("cim:LoadGenericNonLinear", &LoadGenericNonLinear_factory));
	map.insert(std::make_pair("cim:LoadMotor", &LoadMotor_factory));
	map.insert(std::make_pair("cim:LoadStatic", &LoadStatic_factory));
	map.insert(std::make_pair("cim:MechanicalLoadDynamics", &MechanicalLoadDynamics_factory));
	map.insert(std::make_pair("cim:MechLoad1", &MechLoad1_factory));
	map.insert(std::make_pair("cim:OverexcitationLimiterDynamics", &OverexcitationLimiterDynamics_factory));
	map.insert(std::make_pair("cim:OverexcLim2", &OverexcLim2_factory));
	map.insert(std::make_pair("cim:OverexcLimIEEE", &OverexcLimIEEE_factory));
	map.insert(std::make_pair("cim:OverexcLimX1", &OverexcLimX1_factory));
	map.insert(std::make_pair("cim:OverexcLimX2", &OverexcLimX2_factory));
	map.insert(std::make_pair("cim:PFVArControllerType1Dynamics", &PFVArControllerType1Dynamics_factory));
	map.insert(std::make_pair("cim:PFVArType1IEEEPFController", &PFVArType1IEEEPFController_factory));
	map.insert(std::make_pair("cim:PFVArType1IEEEVArController", &PFVArType1IEEEVArController_factory));
	map.insert(std::make_pair("cim:PFVArControllerType2Dynamics", &PFVArControllerType2Dynamics_factory));
	map.insert(std::make_pair("cim:PFVArType2Common1", &PFVArType2Common1_factory));
	map.insert(std::make_pair("cim:PFVArType2IEEEPFController", &PFVArType2IEEEPFController_factory));
	map.insert(std::make_pair("cim:PFVArType2IEEEVArController", &PFVArType2IEEEVArController_factory));
	map.insert(std::make_pair("cim:PowerSystemStabilizerDynamics", &PowerSystemStabilizerDynamics_factory));
	map.insert(std::make_pair("cim:Pss1", &Pss1_factory));
	map.insert(std::make_pair("cim:Pss1A", &Pss1A_factory));
	map.insert(std::make_pair("cim:Pss2B", &Pss2B_factory));
	map.insert(std::make_pair("cim:Pss2ST", &Pss2ST_factory));
	map.insert(std::make_pair("cim:Pss5", &Pss5_factory));
	map.insert(std::make_pair("cim:PssELIN2", &PssELIN2_factory));
	map.insert(std::make_pair("cim:PssIEEE1A", &PssIEEE1A_factory));
	map.insert(std::make_pair("cim:PssIEEE2B", &PssIEEE2B_factory));
	map.insert(std::make_pair("cim:PssIEEE3B", &PssIEEE3B_factory));
	map.insert(std::make_pair("cim:PssIEEE4B", &PssIEEE4B_factory));
	map.insert(std::make_pair("cim:PssPTIST1", &PssPTIST1_factory));
	map.insert(std::make_pair("cim:PssPTIST3", &PssPTIST3_factory));
	map.insert(std::make_pair("cim:PssSB4", &PssSB4_factory));
	map.insert(std::make_pair("cim:PssSH", &PssSH_factory));
	map.insert(std::make_pair("cim:PssSK", &PssSK_factory));
	map.insert(std::make_pair("cim:PssWECC", &PssWECC_factory));
	map.insert(std::make_pair("cim:SynchronousMachineDetailed", &SynchronousMachineDetailed_factory));
	map.insert(std::make_pair("cim:SynchronousMachineEquivalentCircuit", &SynchronousMachineEquivalentCircuit_factory));
	map.insert(std::make_pair("cim:SynchronousMachineSimplified", &SynchronousMachineSimplified_factory));
	map.insert(std::make_pair("cim:SynchronousMachineTimeConstantReactance", &SynchronousMachineTimeConstantReactance_factory));
	map.insert(std::make_pair("cim:GovCT1", &GovCT1_factory));
	map.insert(std::make_pair("cim:GovCT2", &GovCT2_factory));
	map.insert(std::make_pair("cim:GovGAST", &GovGAST_factory));
	map.insert(std::make_pair("cim:GovGAST1", &GovGAST1_factory));
	map.insert(std::make_pair("cim:GovGAST2", &GovGAST2_factory));
	map.insert(std::make_pair("cim:GovGAST3", &GovGAST3_factory));
	map.insert(std::make_pair("cim:GovGAST4", &GovGAST4_factory));
	map.insert(std::make_pair("cim:GovGASTWD", &GovGASTWD_factory));
	map.insert(std::make_pair("cim:GovHydro1", &GovHydro1_factory));
	map.insert(std::make_pair("cim:GovHydro2", &GovHydro2_factory));
	map.insert(std::make_pair("cim:GovHydro3", &GovHydro3_factory));
	map.insert(std::make_pair("cim:GovHydro4", &GovHydro4_factory));
	map.insert(std::make_pair("cim:GovHydroDD", &GovHydroDD_factory));
	map.insert(std::make_pair("cim:GovHydroFrancis", &GovHydroFrancis_factory));
	map.insert(std::make_pair("cim:GovHydroIEEE0", &GovHydroIEEE0_factory));
	map.insert(std::make_pair("cim:GovHydroIEEE2", &GovHydroIEEE2_factory));
	map.insert(std::make_pair("cim:GovHydroPelton", &GovHydroPelton_factory));
	map.insert(std::make_pair("cim:GovHydroPID", &GovHydroPID_factory));
	map.insert(std::make_pair("cim:GovHydroPID2", &GovHydroPID2_factory));
	map.insert(std::make_pair("cim:GovHydroR", &GovHydroR_factory));
	map.insert(std::make_pair("cim:GovHydroWEH", &GovHydroWEH_factory));
	map.insert(std::make_pair("cim:GovHydroWPID", &GovHydroWPID_factory));
	map.insert(std::make_pair("cim:GovSteam0", &GovSteam0_factory));
	map.insert(std::make_pair("cim:GovSteam1", &GovSteam1_factory));
	map.insert(std::make_pair("cim:GovSteam2", &GovSteam2_factory));
	map.insert(std::make_pair("cim:GovSteamCC", &GovSteamCC_factory));
	map.insert(std::make_pair("cim:GovSteamEU", &GovSteamEU_factory));
	map.insert(std::make_pair("cim:GovSteamFV2", &GovSteamFV2_factory));
	map.insert(std::make_pair("cim:GovSteamFV3", &GovSteamFV3_factory));
	map.insert(std::make_pair("cim:GovSteamFV4", &GovSteamFV4_factory));
	map.insert(std::make_pair("cim:GovSteamIEEE1", &GovSteamIEEE1_factory));
	map.insert(std::make_pair("cim:GovSteamSGO", &GovSteamSGO_factory));
	map.insert(std::make_pair("cim:TurbineLoadControllerDynamics", &TurbineLoadControllerDynamics_factory));
	map.insert(std::make_pair("cim:TurbLCFB1", &TurbLCFB1_factory));
	map.insert(std::make_pair("cim:UnderexcitationLimiterDynamics", &UnderexcitationLimiterDynamics_factory));
	map.insert(std::make_pair("cim:UnderexcLim2Simplified", &UnderexcLim2Simplified_factory));
	map.insert(std::make_pair("cim:UnderexcLimIEEE1", &UnderexcLimIEEE1_factory));
	map.insert(std::make_pair("cim:UnderexcLimIEEE2", &UnderexcLimIEEE2_factory));
	map.insert(std::make_pair("cim:UnderexcLimX1", &UnderexcLimX1_factory));
	map.insert(std::make_pair("cim:UnderexcLimX2", &UnderexcLimX2_factory));
	map.insert(std::make_pair("cim:VoltageAdjusterDynamics", &VoltageAdjusterDynamics_factory));
	map.insert(std::make_pair("cim:VAdjIEEE", &VAdjIEEE_factory));
	map.insert(std::make_pair("cim:VoltageCompensatorDynamics", &VoltageCompensatorDynamics_factory));
	map.insert(std::make_pair("cim:VCompIEEEType2", &VCompIEEEType2_factory));
	map.insert(std::make_pair("cim:GenICompensationForGenJ", &GenICompensationForGenJ_factory));
	map.insert(std::make_pair("cim:VCompIEEEType1", &VCompIEEEType1_factory));
	map.insert(std::make_pair("cim:WindTurbineType1or2Dynamics", &WindTurbineType1or2Dynamics_factory));
	map.insert(std::make_pair("cim:WindTurbineType1or2IEC", &WindTurbineType1or2IEC_factory));
	map.insert(std::make_pair("cim:WindGenTurbineType1IEC", &WindGenTurbineType1IEC_factory));
	map.insert(std::make_pair("cim:WindAeroConstIEC", &WindAeroConstIEC_factory));
	map.insert(std::make_pair("cim:WindTurbineType3or4Dynamics", &WindTurbineType3or4Dynamics_factory));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC", &WindTurbineType3or4IEC_factory));
	map.insert(std::make_pair("cim:WindGenTurbineType3IEC", &WindGenTurbineType3IEC_factory));
	map.insert(std::make_pair("cim:WindAeroLinearIEC", &WindAeroLinearIEC_factory));
	map.insert(std::make_pair("cim:WindContCurrLimIEC", &WindContCurrLimIEC_factory));
	map.insert(std::make_pair("cim:WindContPitchAngleIEC", &WindContPitchAngleIEC_factory));
	map.insert(std::make_pair("cim:WindContPType3IEC", &WindContPType3IEC_factory));
	map.insert(std::make_pair("cim:WindGenType4IEC", &WindGenType4IEC_factory));
	map.insert(std::make_pair("cim:WindTurbineType4aIEC", &WindTurbineType4aIEC_factory));
	map.insert(std::make_pair("cim:WindContPType4aIEC", &WindContPType4aIEC_factory));
	map.insert(std::make_pair("cim:WindTurbineType4bIEC", &WindTurbineType4bIEC_factory));
	map.insert(std::make_pair("cim:WindContPType4bIEC", &WindContPType4bIEC_factory));
	map.insert(std::make_pair("cim:WindContQIEC", &WindContQIEC_factory));
	map.insert(std::make_pair("cim:WindGenTurbineType2IEC", &WindGenTurbineType2IEC_factory));
	map.insert(std::make_pair("cim:WindContRotorRIEC", &WindContRotorRIEC_factory));
	map.insert(std::make_pair("cim:WindPlantDynamics", &WindPlantDynamics_factory));
	map.insert(std::make_pair("cim:WindPlantReactiveControlIEC", &WindPlantReactiveControlIEC_factory));
	map.insert(std::make_pair("cim:WindPlantIEC", &WindPlantIEC_factory));
	map.insert(std::make_pair("cim:WindPlantFreqPcontrolIEC", &WindPlantFreqPcontrolIEC_factory));
	map.insert(std::make_pair("cim:WindDynamicsLookupTable", &WindDynamicsLookupTable_factory));
	map.insert(std::make_pair("cim:WindGenTurbineType3aIEC", &WindGenTurbineType3aIEC_factory));
	map.insert(std::make_pair("cim:WindGenTurbineType3bIEC", &WindGenTurbineType3bIEC_factory));
	map.insert(std::make_pair("cim:WindMechIEC", &WindMechIEC_factory));
	map.insert(std::make_pair("cim:WindPitchContEmulIEC", &WindPitchContEmulIEC_factory));
	map.insert(std::make_pair("cim:WindProtectionIEC", &WindProtectionIEC_factory));
	map.insert(std::make_pair("cim:AsynchronousMachineUserDefined", &AsynchronousMachineUserDefined_factory));
	map.insert(std::make_pair("cim:DiscontinuousExcitationControlUserDefined", &DiscontinuousExcitationControlUserDefined_factory));
	map.insert(std::make_pair("cim:ExcitationSystemUserDefined", &ExcitationSystemUserDefined_factory));
	map.insert(std::make_pair("cim:LoadUserDefined", &LoadUserDefined_factory));
	map.insert(std::make_pair("cim:MechanicalLoadUserDefined", &MechanicalLoadUserDefined_factory));
	map.insert(std::make_pair("cim:OverexcitationLimiterUserDefined", &OverexcitationLimiterUserDefined_factory));
	map.insert(std::make_pair("cim:PFVArControllerType1UserDefined", &PFVArControllerType1UserDefined_factory));
	map.insert(std::make_pair("cim:PFVArControllerType2UserDefined", &PFVArControllerType2UserDefined_factory));
	map.insert(std::make_pair("cim:PowerSystemStabilizerUserDefined", &PowerSystemStabilizerUserDefined_factory));
	map.insert(std::make_pair("cim:TurbineGovernorUserDefined", &TurbineGovernorUserDefined_factory));
	map.insert(std::make_pair("cim:VoltageAdjusterUserDefined", &VoltageAdjusterUserDefined_factory));
	map.insert(std::make_pair("cim:UnderexcitationLimiterUserDefined", &UnderexcitationLimiterUserDefined_factory));
	map.insert(std::make_pair("cim:VoltageCompensatorUserDefined", &VoltageCompensatorUserDefined_factory));
	map.insert(std::make_pair("cim:SynchronousMachineUserDefined", &SynchronousMachineUserDefined_factory));
	map.insert(std::make_pair("cim:TurbineLoadControllerUserDefined", &TurbineLoadControllerUserDefined_factory));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics", &ProprietaryParameterDynamics_factory));
	map.insert(std::make_pair("cim:WindPlantUserDefined", &WindPlantUserDefined_factory));
	map.insert(std::make_pair("cim:WindType1or2UserDefined", &WindType1or2UserDefined_factory));
	map.insert(std::make_pair("cim:WindType3or4UserDefined", &WindType3or4UserDefined_factory));
	map.insert(std::make_pair("cim:IEC61970CIMVersion", &IEC61970CIMVersion_factory));
	
	return map;
}
