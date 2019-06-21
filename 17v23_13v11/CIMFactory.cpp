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


// cim:UncefactUnitCode
BaseClass* UncefactUnitCode_factory()
{
	return new IEC61970::Base::Domain::UncefactUnitCode;
}

// cim:IdentifiedObject
BaseClass* IdentifiedObject_factory()
{
	return new IEC61970::Base::Core::IdentifiedObject;
}

// cim:BilateralExchangeActor
BaseClass* BilateralExchangeActor_factory()
{
	return new IEC61970::Base::ICCPConfiguration::BilateralExchangeActor;
}

// cim:ProvidedBilateralPoint
BaseClass* ProvidedBilateralPoint_factory()
{
	return new IEC61970::Base::ICCPConfiguration::ProvidedBilateralPoint;
}

// cim:IOPoint
BaseClass* IOPoint_factory()
{
	return new IEC61970::Base::Meas::IOPoint;
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

// cim:FaultCauseType
BaseClass* FaultCauseType_factory()
{
	return new IEC61970::Base::Faults::FaultCauseType;
}

// cim:Status
BaseClass* Status_factory()
{
	return new IEC61968::Common::Status;
}

// cim:ActivityRecord
BaseClass* ActivityRecord_factory()
{
	return new IEC61968::Common::ActivityRecord;
}

// cim:ConfigurationEvent
BaseClass* ConfigurationEvent_factory()
{
	return new IEC61968::Common::ConfigurationEvent;
}

// cim:PowerSystemResource
BaseClass* PowerSystemResource_factory()
{
	return new IEC61970::Base::Core::PowerSystemResource;
}

// cim:AssetInfo
BaseClass* AssetInfo_factory()
{
	return new IEC61968::Assets::AssetInfo;
}

// cim:Mass
BaseClass* Mass_factory()
{
	return new IEC61970::Base::Domain::Mass;
}

// cim:SwitchInfo
BaseClass* SwitchInfo_factory()
{
	return new IEC61968::AssetInfo::SwitchInfo;
}

// cim:RegulatingControl
BaseClass* RegulatingControl_factory()
{
	return new IEC61970::Base::Wires::RegulatingControl;
}

// cim:ShuntCompensatorControl
BaseClass* ShuntCompensatorControl_factory()
{
	return new IEC61968::InfIEC61968::InfWiresExt::ShuntCompensatorControl;
}

// cim:ShuntCompensatorInfo
BaseClass* ShuntCompensatorInfo_factory()
{
	return new IEC61968::AssetInfo::ShuntCompensatorInfo;
}

// cim:PerLengthLineParameter
BaseClass* PerLengthLineParameter_factory()
{
	return new IEC61970::Base::Wires::PerLengthLineParameter;
}

// cim:WireAssemblyInfo
BaseClass* WireAssemblyInfo_factory()
{
	return new IEC61968::AssetInfo::WireAssemblyInfo;
}

// cim:WirePhaseInfo
BaseClass* WirePhaseInfo_factory()
{
	return new IEC61968::AssetInfo::WirePhaseInfo;
}

// cim:WireInfo
BaseClass* WireInfo_factory()
{
	return new IEC61968::AssetInfo::WireInfo;
}

// cim:CableInfo
BaseClass* CableInfo_factory()
{
	return new IEC61968::AssetInfo::CableInfo;
}

// cim:TapeShieldCableInfo
BaseClass* TapeShieldCableInfo_factory()
{
	return new IEC61968::AssetInfo::TapeShieldCableInfo;
}

// cim:OverheadWireInfo
BaseClass* OverheadWireInfo_factory()
{
	return new IEC61968::AssetInfo::OverheadWireInfo;
}

// cim:ConcentricNeutralCableInfo
BaseClass* ConcentricNeutralCableInfo_factory()
{
	return new IEC61968::AssetInfo::ConcentricNeutralCableInfo;
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

// cim:PhaseTapChanger
BaseClass* PhaseTapChanger_factory()
{
	return new IEC61970::Base::Wires::PhaseTapChanger;
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

// cim:Equipment
BaseClass* Equipment_factory()
{
	return new IEC61970::Base::Core::Equipment;
}

// cim:ConductingEquipment
BaseClass* ConductingEquipment_factory()
{
	return new IEC61970::Base::Core::ConductingEquipment;
}

// cim:BaseVoltage
BaseClass* BaseVoltage_factory()
{
	return new IEC61970::Base::Core::BaseVoltage;
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

// cim:Terminal
BaseClass* Terminal_factory()
{
	return new IEC61970::Base::Core::Terminal;
}

// cim:TransformerEnd
BaseClass* TransformerEnd_factory()
{
	return new IEC61970::Base::Wires::TransformerEnd;
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

// cim:TransformerEndInfo
BaseClass* TransformerEndInfo_factory()
{
	return new IEC61968::AssetInfo::TransformerEndInfo;
}

// cim:TransformerTest
BaseClass* TransformerTest_factory()
{
	return new IEC61968::AssetInfo::TransformerTest;
}

// cim:OpenCircuitTest
BaseClass* OpenCircuitTest_factory()
{
	return new IEC61968::AssetInfo::OpenCircuitTest;
}

// cim:NoLoadTest
BaseClass* NoLoadTest_factory()
{
	return new IEC61968::AssetInfo::NoLoadTest;
}

// cim:PowerTransformerInfo
BaseClass* PowerTransformerInfo_factory()
{
	return new IEC61968::AssetInfo::PowerTransformerInfo;
}

// cim:ShortCircuitTest
BaseClass* ShortCircuitTest_factory()
{
	return new IEC61968::AssetInfo::ShortCircuitTest;
}

// cim:TapChangerInfo
BaseClass* TapChangerInfo_factory()
{
	return new IEC61968::AssetInfo::TapChangerInfo;
}

// cim:TransformerTankInfo
BaseClass* TransformerTankInfo_factory()
{
	return new IEC61968::AssetInfo::TransformerTankInfo;
}

// cim:OperatingMechanismInfo
BaseClass* OperatingMechanismInfo_factory()
{
	return new IEC61968::AssetInfo::OperatingMechanismInfo;
}

// cim:InterrupterUnitInfo
BaseClass* InterrupterUnitInfo_factory()
{
	return new IEC61968::AssetInfo::InterrupterUnitInfo;
}

// cim:WirePosition
BaseClass* WirePosition_factory()
{
	return new IEC61968::AssetInfo::WirePosition;
}

// cim:Seal
BaseClass* Seal_factory()
{
	return new IEC61968::Assets::Seal;
}

// cim:AcceptanceTest
BaseClass* AcceptanceTest_factory()
{
	return new IEC61968::Assets::AcceptanceTest;
}

// cim:ElectronicAddress
BaseClass* ElectronicAddress_factory()
{
	return new IEC61968::Common::ElectronicAddress;
}

// cim:InUseDate
BaseClass* InUseDate_factory()
{
	return new IEC61968::Assets::InUseDate;
}

// cim:LifecycleDate
BaseClass* LifecycleDate_factory()
{
	return new IEC61968::Assets::LifecycleDate;
}

// cim:ErpIdentifiedObject
BaseClass* ErpIdentifiedObject_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject;
}

// cim:ErpInventory
BaseClass* ErpInventory_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpInventory;
}

// cim:TelephoneNumber
BaseClass* TelephoneNumber_factory()
{
	return new IEC61968::Common::TelephoneNumber;
}

// cim:StreetDetail
BaseClass* StreetDetail_factory()
{
	return new IEC61968::Common::StreetDetail;
}

// cim:TownDetail
BaseClass* TownDetail_factory()
{
	return new IEC61968::Common::TownDetail;
}

// cim:StreetAddress
BaseClass* StreetAddress_factory()
{
	return new IEC61968::Common::StreetAddress;
}

// cim:Organisation
BaseClass* Organisation_factory()
{
	return new IEC61968::Common::Organisation;
}

// cim:OrganisationRole
BaseClass* OrganisationRole_factory()
{
	return new IEC61968::Common::OrganisationRole;
}

// cim:AssetOrganisationRole
BaseClass* AssetOrganisationRole_factory()
{
	return new IEC61968::Assets::AssetOrganisationRole;
}

// cim:AssetFunction
BaseClass* AssetFunction_factory()
{
	return new IEC61968::Assets::AssetFunction;
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

// cim:AssetPropertyCurve
BaseClass* AssetPropertyCurve_factory()
{
	return new IEC61968::InfIEC61968::InfAssets::AssetPropertyCurve;
}

// cim:Document
BaseClass* Document_factory()
{
	return new IEC61968::Common::Document;
}

// cim:ErpDocument
BaseClass* ErpDocument_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpDocument;
}

// cim:ErpReceiveDelivery
BaseClass* ErpReceiveDelivery_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpReceiveDelivery;
}

// cim:ErpPurchaseOrder
BaseClass* ErpPurchaseOrder_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpPurchaseOrder;
}

// cim:ErpPOLineItem
BaseClass* ErpPOLineItem_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpPOLineItem;
}

// cim:ErpRecDelvLineItem
BaseClass* ErpRecDelvLineItem_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpRecDelvLineItem;
}

// cim:DeploymentDate
BaseClass* DeploymentDate_factory()
{
	return new IEC61968::Assets::DeploymentDate;
}

// cim:AssetDeployment
BaseClass* AssetDeployment_factory()
{
	return new IEC61968::Assets::AssetDeployment;
}

// cim:WindingInsulation
BaseClass* WindingInsulation_factory()
{
	return new IEC61968::InfIEC61968::InfAssets::WindingInsulation;
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

// cim:TransformerTank
BaseClass* TransformerTank_factory()
{
	return new IEC61970::Base::Wires::TransformerTank;
}

// cim:TransformerObservation
BaseClass* TransformerObservation_factory()
{
	return new IEC61968::InfIEC61968::InfAssets::TransformerObservation;
}

// cim:Reconditioning
BaseClass* Reconditioning_factory()
{
	return new IEC61968::InfIEC61968::InfAssets::Reconditioning;
}

// cim:Manufacturer
BaseClass* Manufacturer_factory()
{
	return new IEC61968::Assets::Manufacturer;
}

// cim:ErpRequisition
BaseClass* ErpRequisition_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpRequisition;
}

// cim:ErpReqLineItem
BaseClass* ErpReqLineItem_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem;
}

// cim:ErpQuote
BaseClass* ErpQuote_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpQuote;
}

// cim:WorkDocument
BaseClass* WorkDocument_factory()
{
	return new IEC61968::InfIEC61968::InfWork::WorkDocument;
}

// cim:Project
BaseClass* Project_factory()
{
	return new IEC61968::InfIEC61968::InfWork::Project;
}

// cim:ErpProjectAccounting
BaseClass* ErpProjectAccounting_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpProjectAccounting;
}

// cim:ErpPayable
BaseClass* ErpPayable_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpPayable;
}

// cim:WorkIdentifiedObject
BaseClass* WorkIdentifiedObject_factory()
{
	return new IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject;
}

// cim:ContractorItem
BaseClass* ContractorItem_factory()
{
	return new IEC61968::InfIEC61968::InfWork::ContractorItem;
}

// cim:WorkCostSummary
BaseClass* WorkCostSummary_factory()
{
	return new IEC61968::InfIEC61968::InfWork::WorkCostSummary;
}

// cim:MaterialItem
BaseClass* MaterialItem_factory()
{
	return new IEC61968::Work::MaterialItem;
}

// cim:TypeMaterial
BaseClass* TypeMaterial_factory()
{
	return new IEC61968::InfIEC61968::InfWork::TypeMaterial;
}

// cim:CUMaterialItem
BaseClass* CUMaterialItem_factory()
{
	return new IEC61968::InfIEC61968::InfWork::CUMaterialItem;
}

// cim:PropertyUnit
BaseClass* PropertyUnit_factory()
{
	return new IEC61968::InfIEC61968::InfWork::PropertyUnit;
}

// cim:Priority
BaseClass* Priority_factory()
{
	return new IEC61968::Common::Priority;
}

// cim:WorkActivityRecord
BaseClass* WorkActivityRecord_factory()
{
	return new IEC61968::Work::WorkActivityRecord;
}

// cim:OneCallRequest
BaseClass* OneCallRequest_factory()
{
	return new IEC61968::InfIEC61968::InfWork::OneCallRequest;
}

// cim:CoordinateSystem
BaseClass* CoordinateSystem_factory()
{
	return new IEC61968::Common::CoordinateSystem;
}

// cim:CrewType
BaseClass* CrewType_factory()
{
	return new IEC61968::Common::CrewType;
}

// cim:DateTimeInterval
BaseClass* DateTimeInterval_factory()
{
	return new IEC61970::Base::Domain::DateTimeInterval;
}

// cim:Appointment
BaseClass* Appointment_factory()
{
	return new IEC61968::Common::Appointment;
}

// cim:PersonRole
BaseClass* PersonRole_factory()
{
	return new IEC61968::Common::PersonRole;
}

// cim:OperationPersonRole
BaseClass* OperationPersonRole_factory()
{
	return new IEC61968::Common::OperationPersonRole;
}

// cim:CrewMember
BaseClass* CrewMember_factory()
{
	return new IEC61968::Common::CrewMember;
}

// cim:Crew
BaseClass* Crew_factory()
{
	return new IEC61968::Common::Crew;
}

// cim:ServicePointOutageSummary
BaseClass* ServicePointOutageSummary_factory()
{
	return new IEC61968::Operations::ServicePointOutageSummary;
}

// cim:FaultImpedance
BaseClass* FaultImpedance_factory()
{
	return new IEC61970::Base::Faults::FaultImpedance;
}

// cim:Fault
BaseClass* Fault_factory()
{
	return new IEC61970::Base::Faults::Fault;
}

// cim:ServiceMultiplier
BaseClass* ServiceMultiplier_factory()
{
	return new IEC61968::Metering::ServiceMultiplier;
}

// cim:AccountingUnit
BaseClass* AccountingUnit_factory()
{
	return new IEC61968::PaymentMetering::AccountingUnit;
}

// cim:Charge
BaseClass* Charge_factory()
{
	return new IEC61968::PaymentMetering::Charge;
}

// cim:TimeTariffInterval
BaseClass* TimeTariffInterval_factory()
{
	return new IEC61968::PaymentMetering::TimeTariffInterval;
}

// cim:RationalNumber
BaseClass* RationalNumber_factory()
{
	return new IEC61968::Metering::RationalNumber;
}

// cim:ReadingInterharmonic
BaseClass* ReadingInterharmonic_factory()
{
	return new IEC61968::Metering::ReadingInterharmonic;
}

// cim:Channel
BaseClass* Channel_factory()
{
	return new IEC61968::Metering::Channel;
}

// cim:ReadingType
BaseClass* ReadingType_factory()
{
	return new IEC61968::Metering::ReadingType;
}

// cim:ConsumptionTariffInterval
BaseClass* ConsumptionTariffInterval_factory()
{
	return new IEC61968::PaymentMetering::ConsumptionTariffInterval;
}

// cim:TariffProfile
BaseClass* TariffProfile_factory()
{
	return new IEC61968::PaymentMetering::TariffProfile;
}

// cim:Tariff
BaseClass* Tariff_factory()
{
	return new IEC61968::Customers::Tariff;
}

// cim:PricingStructure
BaseClass* PricingStructure_factory()
{
	return new IEC61968::Customers::PricingStructure;
}

// cim:ServiceCategory
BaseClass* ServiceCategory_factory()
{
	return new IEC61968::Customers::ServiceCategory;
}

// cim:UsagePoint
BaseClass* UsagePoint_factory()
{
	return new IEC61968::Metering::UsagePoint;
}

// cim:SwitchPhase
BaseClass* SwitchPhase_factory()
{
	return new IEC61970::Base::Wires::SwitchPhase;
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

// cim:SeasonDayTypeSchedule
BaseClass* SeasonDayTypeSchedule_factory()
{
	return new IEC61970::Base::LoadModel::SeasonDayTypeSchedule;
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

// cim:Operator
BaseClass* Operator_factory()
{
	return new IEC61968::Common::Operator;
}

// cim:SwitchingAction
BaseClass* SwitchingAction_factory()
{
	return new IEC61968::Operations::SwitchingAction;
}

// cim:SwitchAction
BaseClass* SwitchAction_factory()
{
	return new IEC61968::Operations::SwitchAction;
}

// cim:Outage
BaseClass* Outage_factory()
{
	return new IEC61968::Operations::Outage;
}

// cim:SwitchingStepGroup
BaseClass* SwitchingStepGroup_factory()
{
	return new IEC61968::Operations::SwitchingStepGroup;
}

// cim:SafetyDocument
BaseClass* SafetyDocument_factory()
{
	return new IEC61968::Operations::SafetyDocument;
}

// cim:SwitchingPlan
BaseClass* SwitchingPlan_factory()
{
	return new IEC61968::Operations::SwitchingPlan;
}

// cim:SwitchingOrder
BaseClass* SwitchingOrder_factory()
{
	return new IEC61968::Operations::SwitchingOrder;
}

// cim:PositionPoint
BaseClass* PositionPoint_factory()
{
	return new IEC61968::Common::PositionPoint;
}

// cim:Location
BaseClass* Location_factory()
{
	return new IEC61968::Common::Location;
}

// cim:WorkLocation
BaseClass* WorkLocation_factory()
{
	return new IEC61968::Work::WorkLocation;
}

// cim:TimePoint
BaseClass* TimePoint_factory()
{
	return new IEC61968::Common::TimePoint;
}

// cim:TimeSchedule
BaseClass* TimeSchedule_factory()
{
	return new IEC61968::Common::TimeSchedule;
}

// cim:WorkTimeSchedule
BaseClass* WorkTimeSchedule_factory()
{
	return new IEC61968::Work::WorkTimeSchedule;
}

// cim:BaseWork
BaseClass* BaseWork_factory()
{
	return new IEC61968::Work::BaseWork;
}

// cim:WorkTask
BaseClass* WorkTask_factory()
{
	return new IEC61968::Work::WorkTask;
}

// cim:Work
BaseClass* Work_factory()
{
	return new IEC61968::Work::Work;
}

// cim:WorkCostDetail
BaseClass* WorkCostDetail_factory()
{
	return new IEC61968::InfIEC61968::InfWork::WorkCostDetail;
}

// cim:ErpBOM
BaseClass* ErpBOM_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpBOM;
}

// cim:LaborItem
BaseClass* LaborItem_factory()
{
	return new IEC61968::InfIEC61968::InfWork::LaborItem;
}

// cim:OverheadCost
BaseClass* OverheadCost_factory()
{
	return new IEC61968::InfIEC61968::InfWork::OverheadCost;
}

// cim:Medium
BaseClass* Medium_factory()
{
	return new IEC61968::Assets::Medium;
}

// cim:Specification
BaseClass* Specification_factory()
{
	return new IEC61968::InfIEC61968::InfAssets::Specification;
}

// cim:QualificationRequirement
BaseClass* QualificationRequirement_factory()
{
	return new IEC61968::InfIEC61968::InfWork::QualificationRequirement;
}

// cim:Usage
BaseClass* Usage_factory()
{
	return new IEC61968::InfIEC61968::InfWork::Usage;
}

// cim:OldWorkTask
BaseClass* OldWorkTask_factory()
{
	return new IEC61968::InfIEC61968::InfWork::OldWorkTask;
}

// cim:ConditionFactor
BaseClass* ConditionFactor_factory()
{
	return new IEC61968::InfIEC61968::InfWork::ConditionFactor;
}

// cim:Design
BaseClass* Design_factory()
{
	return new IEC61968::InfIEC61968::InfWork::Design;
}

// cim:ErpQuoteLineItem
BaseClass* ErpQuoteLineItem_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem;
}

// cim:AssetModelCatalogue
BaseClass* AssetModelCatalogue_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogue;
}

// cim:AssetModelCatalogueItem
BaseClass* AssetModelCatalogueItem_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogueItem;
}

// cim:TypeAssetCatalogue
BaseClass* TypeAssetCatalogue_factory()
{
	return new IEC61968::InfIEC61968::InfTypeAsset::TypeAssetCatalogue;
}

// cim:MiscCostItem
BaseClass* MiscCostItem_factory()
{
	return new IEC61968::InfIEC61968::InfWork::MiscCostItem;
}

// cim:CUGroup
BaseClass* CUGroup_factory()
{
	return new IEC61968::InfIEC61968::InfWork::CUGroup;
}

// cim:DesignLocationCU
BaseClass* DesignLocationCU_factory()
{
	return new IEC61968::InfIEC61968::InfWork::DesignLocationCU;
}

// cim:DesignLocation
BaseClass* DesignLocation_factory()
{
	return new IEC61968::InfIEC61968::InfWork::DesignLocation;
}

// cim:ErpBomItemData
BaseClass* ErpBomItemData_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpBomItemData;
}

// cim:CatalogAssetType
BaseClass* CatalogAssetType_factory()
{
	return new IEC61968::Assets::CatalogAssetType;
}

// cim:ProductAssetModel
BaseClass* ProductAssetModel_factory()
{
	return new IEC61968::Assets::ProductAssetModel;
}

// cim:Asset
BaseClass* Asset_factory()
{
	return new IEC61968::Assets::Asset;
}

// cim:AssetContainer
BaseClass* AssetContainer_factory()
{
	return new IEC61968::Assets::AssetContainer;
}

// cim:StructureSupport
BaseClass* StructureSupport_factory()
{
	return new IEC61968::Assets::StructureSupport;
}

// cim:Structure
BaseClass* Structure_factory()
{
	return new IEC61968::Assets::Structure;
}

// cim:DuctBank
BaseClass* DuctBank_factory()
{
	return new IEC61968::Assets::DuctBank;
}

// cim:WireSpacing
BaseClass* WireSpacing_factory()
{
	return new IEC61968::AssetInfo::WireSpacing;
}

// cim:BusbarSectionInfo
BaseClass* BusbarSectionInfo_factory()
{
	return new IEC61968::AssetInfo::BusbarSectionInfo;
}

// cim:BushingInfo
BaseClass* BushingInfo_factory()
{
	return new IEC61968::AssetInfo::BushingInfo;
}

// cim:RepairWorkTask
BaseClass* RepairWorkTask_factory()
{
	return new IEC61968::Work::RepairWorkTask;
}

// cim:RepairItem
BaseClass* RepairItem_factory()
{
	return new IEC61968::Work::RepairItem;
}

// cim:WorkAsset
BaseClass* WorkAsset_factory()
{
	return new IEC61968::Work::WorkAsset;
}

// cim:Tool
BaseClass* Tool_factory()
{
	return new IEC61968::Work::Tool;
}

// cim:MaintenanceWorkTask
BaseClass* MaintenanceWorkTask_factory()
{
	return new IEC61968::Work::MaintenanceWorkTask;
}

// cim:Vehicle
BaseClass* Vehicle_factory()
{
	return new IEC61968::Work::Vehicle;
}

// cim:MaintenanceLocation
BaseClass* MaintenanceLocation_factory()
{
	return new IEC61968::Work::MaintenanceLocation;
}

// cim:InternalLocation
BaseClass* InternalLocation_factory()
{
	return new IEC61968::Work::InternalLocation;
}

// cim:Version
BaseClass* Version_factory()
{
	return new IEC61968::Common::Version;
}

// cim:EndDeviceCapability
BaseClass* EndDeviceCapability_factory()
{
	return new IEC61968::Metering::EndDeviceCapability;
}

// cim:EndDeviceInfo
BaseClass* EndDeviceInfo_factory()
{
	return new IEC61968::Metering::EndDeviceInfo;
}

// cim:EndDeviceFunction
BaseClass* EndDeviceFunction_factory()
{
	return new IEC61968::Metering::EndDeviceFunction;
}

// cim:DispatchablePowerCapability
BaseClass* DispatchablePowerCapability_factory()
{
	return new IEC61968::DER::DispatchablePowerCapability;
}

// cim:EndDevice
BaseClass* EndDevice_factory()
{
	return new IEC61968::Metering::EndDevice;
}

// cim:EndDeviceTiming
BaseClass* EndDeviceTiming_factory()
{
	return new IEC61968::Metering::EndDeviceTiming;
}

// cim:UsagePointGroup
BaseClass* UsagePointGroup_factory()
{
	return new IEC61968::Metering::UsagePointGroup;
}

// cim:EndDeviceAction
BaseClass* EndDeviceAction_factory()
{
	return new IEC61968::Metering::EndDeviceAction;
}

// cim:EndDeviceControlType
BaseClass* EndDeviceControlType_factory()
{
	return new IEC61968::Metering::EndDeviceControlType;
}

// cim:EndDeviceControl
BaseClass* EndDeviceControl_factory()
{
	return new IEC61968::Metering::EndDeviceControl;
}

// cim:DERGroupDispatch
BaseClass* DERGroupDispatch_factory()
{
	return new IEC61968::DER::DERGroupDispatch;
}

// cim:DERMonitorableParameter
BaseClass* DERMonitorableParameter_factory()
{
	return new IEC61968::DER::DERMonitorableParameter;
}

// cim:EndDeviceGroup
BaseClass* EndDeviceGroup_factory()
{
	return new IEC61968::Metering::EndDeviceGroup;
}

// cim:DERGroupForecast
BaseClass* DERGroupForecast_factory()
{
	return new IEC61968::DER::DERGroupForecast;
}

// cim:DispatchSchedule
BaseClass* DispatchSchedule_factory()
{
	return new IEC61968::DER::DispatchSchedule;
}

// cim:DERFunction
BaseClass* DERFunction_factory()
{
	return new IEC61968::DER::DERFunction;
}

// cim:DERCurveData
BaseClass* DERCurveData_factory()
{
	return new IEC61968::DER::DERCurveData;
}

// cim:LineDetail
BaseClass* LineDetail_factory()
{
	return new IEC61968::PaymentMetering::LineDetail;
}

// cim:MeterMultiplier
BaseClass* MeterMultiplier_factory()
{
	return new IEC61968::Metering::MeterMultiplier;
}

// cim:EndDeviceEventType
BaseClass* EndDeviceEventType_factory()
{
	return new IEC61968::Metering::EndDeviceEventType;
}

// cim:EndDeviceEventDetail
BaseClass* EndDeviceEventDetail_factory()
{
	return new IEC61968::Metering::EndDeviceEventDetail;
}

// cim:EndDeviceEvent
BaseClass* EndDeviceEvent_factory()
{
	return new IEC61968::Metering::EndDeviceEvent;
}

// cim:MeterReading
BaseClass* MeterReading_factory()
{
	return new IEC61968::Metering::MeterReading;
}

// cim:Meter
BaseClass* Meter_factory()
{
	return new IEC61968::Metering::Meter;
}

// cim:Transaction
BaseClass* Transaction_factory()
{
	return new IEC61968::PaymentMetering::Transaction;
}

// cim:Receipt
BaseClass* Receipt_factory()
{
	return new IEC61968::PaymentMetering::Receipt;
}

// cim:PointOfSale
BaseClass* PointOfSale_factory()
{
	return new IEC61968::PaymentMetering::PointOfSale;
}

// cim:Shift
BaseClass* Shift_factory()
{
	return new IEC61968::PaymentMetering::Shift;
}

// cim:CashierShift
BaseClass* CashierShift_factory()
{
	return new IEC61968::PaymentMetering::CashierShift;
}

// cim:Due
BaseClass* Due_factory()
{
	return new IEC61968::PaymentMetering::Due;
}

// cim:BankAccountDetail
BaseClass* BankAccountDetail_factory()
{
	return new IEC61968::PaymentMetering::BankAccountDetail;
}

// cim:Tender
BaseClass* Tender_factory()
{
	return new IEC61968::PaymentMetering::Tender;
}

// cim:Cheque
BaseClass* Cheque_factory()
{
	return new IEC61968::PaymentMetering::Cheque;
}

// cim:Transactor
BaseClass* Transactor_factory()
{
	return new IEC61968::PaymentMetering::Transactor;
}

// cim:VendorShift
BaseClass* VendorShift_factory()
{
	return new IEC61968::PaymentMetering::VendorShift;
}

// cim:MerchantAccount
BaseClass* MerchantAccount_factory()
{
	return new IEC61968::PaymentMetering::MerchantAccount;
}

// cim:Agreement
BaseClass* Agreement_factory()
{
	return new IEC61968::Common::Agreement;
}

// cim:AuxiliaryAgreement
BaseClass* AuxiliaryAgreement_factory()
{
	return new IEC61968::PaymentMetering::AuxiliaryAgreement;
}

// cim:Card
BaseClass* Card_factory()
{
	return new IEC61968::PaymentMetering::Card;
}

// cim:AccountMovement
BaseClass* AccountMovement_factory()
{
	return new IEC61968::PaymentMetering::AccountMovement;
}

// cim:Cashier
BaseClass* Cashier_factory()
{
	return new IEC61968::PaymentMetering::Cashier;
}

// cim:AuxiliaryAccount
BaseClass* AuxiliaryAccount_factory()
{
	return new IEC61968::PaymentMetering::AuxiliaryAccount;
}

// cim:Bank
BaseClass* Bank_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::Bank;
}

// cim:BankAccount
BaseClass* BankAccount_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::BankAccount;
}

// cim:Hazard
BaseClass* Hazard_factory()
{
	return new IEC61968::Common::Hazard;
}

// cim:IncidentHazard
BaseClass* IncidentHazard_factory()
{
	return new IEC61968::Customers::IncidentHazard;
}

// cim:CustomerNotification
BaseClass* CustomerNotification_factory()
{
	return new IEC61968::Customers::CustomerNotification;
}

// cim:Incident
BaseClass* Incident_factory()
{
	return new IEC61968::Operations::Incident;
}

// cim:TroubleTicket
BaseClass* TroubleTicket_factory()
{
	return new IEC61968::Customers::TroubleTicket;
}

// cim:ServiceLocation
BaseClass* ServiceLocation_factory()
{
	return new IEC61968::Customers::ServiceLocation;
}

// cim:StandardIndustryCode
BaseClass* StandardIndustryCode_factory()
{
	return new IEC61968::InfIEC61968::InfCustomers::StandardIndustryCode;
}

// cim:CustomerAgreement
BaseClass* CustomerAgreement_factory()
{
	return new IEC61968::Customers::CustomerAgreement;
}

// cim:ServiceSupplier
BaseClass* ServiceSupplier_factory()
{
	return new IEC61968::PaymentMetering::ServiceSupplier;
}

// cim:Vendor
BaseClass* Vendor_factory()
{
	return new IEC61968::PaymentMetering::Vendor;
}

// cim:MerchantAgreement
BaseClass* MerchantAgreement_factory()
{
	return new IEC61968::PaymentMetering::MerchantAgreement;
}

// cim:PendingCalculation
BaseClass* PendingCalculation_factory()
{
	return new IEC61968::Metering::PendingCalculation;
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

// cim:BaseReading
BaseClass* BaseReading_factory()
{
	return new IEC61968::Metering::BaseReading;
}

// cim:IntervalReading
BaseClass* IntervalReading_factory()
{
	return new IEC61968::Metering::IntervalReading;
}

// cim:IntervalBlock
BaseClass* IntervalBlock_factory()
{
	return new IEC61968::Metering::IntervalBlock;
}

// cim:PanDisplay
BaseClass* PanDisplay_factory()
{
	return new IEC61968::Metering::PanDisplay;
}

// cim:DemandResponseProgram
BaseClass* DemandResponseProgram_factory()
{
	return new IEC61968::Metering::DemandResponseProgram;
}

// cim:ComFunction
BaseClass* ComFunction_factory()
{
	return new IEC61968::Metering::ComFunction;
}

// cim:ComModule
BaseClass* ComModule_factory()
{
	return new IEC61968::Metering::ComModule;
}

// cim:PanPricingDetail
BaseClass* PanPricingDetail_factory()
{
	return new IEC61968::Metering::PanPricingDetail;
}

// cim:PanPricing
BaseClass* PanPricing_factory()
{
	return new IEC61968::Metering::PanPricing;
}

// cim:UsagePointLocation
BaseClass* UsagePointLocation_factory()
{
	return new IEC61968::Metering::UsagePointLocation;
}

// cim:ReadingQualityType
BaseClass* ReadingQualityType_factory()
{
	return new IEC61968::Metering::ReadingQualityType;
}

// cim:ControlledAppliance
BaseClass* ControlledAppliance_factory()
{
	return new IEC61968::Metering::ControlledAppliance;
}

// cim:PanDemandResponse
BaseClass* PanDemandResponse_factory()
{
	return new IEC61968::Metering::PanDemandResponse;
}

// cim:TimeInterval
BaseClass* TimeInterval_factory()
{
	return new IEC61970::Base::Domain::TimeInterval;
}

// cim:Register
BaseClass* Register_factory()
{
	return new IEC61968::Metering::Register;
}

// cim:MeterWorkTask
BaseClass* MeterWorkTask_factory()
{
	return new IEC61968::Metering::MeterWorkTask;
}

// cim:ReadingQuality
BaseClass* ReadingQuality_factory()
{
	return new IEC61968::Metering::ReadingQuality;
}

// cim:Reading
BaseClass* Reading_factory()
{
	return new IEC61968::Metering::Reading;
}

// cim:SimpleEndDeviceFunction
BaseClass* SimpleEndDeviceFunction_factory()
{
	return new IEC61968::Metering::SimpleEndDeviceFunction;
}

// cim:MetrologyRequirement
BaseClass* MetrologyRequirement_factory()
{
	return new IEC61968::Metering::MetrologyRequirement;
}

// cim:ErpInvoice
BaseClass* ErpInvoice_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpInvoice;
}

// cim:ErpJournalEntry
BaseClass* ErpJournalEntry_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry;
}

// cim:ErpReceivable
BaseClass* ErpReceivable_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpReceivable;
}

// cim:ErpPayment
BaseClass* ErpPayment_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpPayment;
}

// cim:ErpRecLineItem
BaseClass* ErpRecLineItem_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpRecLineItem;
}

// cim:ErpPayableLineItem
BaseClass* ErpPayableLineItem_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpPayableLineItem;
}

// cim:ProcedureDataSet
BaseClass* ProcedureDataSet_factory()
{
	return new IEC61968::Assets::ProcedureDataSet;
}

// cim:UserAttribute
BaseClass* UserAttribute_factory()
{
	return new IEC61968::Common::UserAttribute;
}

// cim:ErpInvoiceLineItem
BaseClass* ErpInvoiceLineItem_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem;
}

// cim:WorkBillingInfo
BaseClass* WorkBillingInfo_factory()
{
	return new IEC61968::InfIEC61968::InfCustomers::WorkBillingInfo;
}

// cim:AccountNotification
BaseClass* AccountNotification_factory()
{
	return new IEC61968::Customers::AccountNotification;
}

// cim:CustomerAccount
BaseClass* CustomerAccount_factory()
{
	return new IEC61968::Customers::CustomerAccount;
}

// cim:ErpCompetency
BaseClass* ErpCompetency_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpCompetency;
}

// cim:ErpPersonnel
BaseClass* ErpPersonnel_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpPersonnel;
}

// cim:Craft
BaseClass* Craft_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::Craft;
}

// cim:Skill
BaseClass* Skill_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::Skill;
}

// cim:PersonOrganisationRole
BaseClass* PersonOrganisationRole_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::PersonOrganisationRole;
}

// cim:Role
BaseClass* Role_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::Role;
}

// cim:PersonPropertyRole
BaseClass* PersonPropertyRole_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::PersonPropertyRole;
}

// cim:Person
BaseClass* Person_factory()
{
	return new IEC61968::Common::Person;
}

// cim:OldPerson
BaseClass* OldPerson_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::OldPerson;
}

// cim:OutageOrder
BaseClass* OutageOrder_factory()
{
	return new IEC61968::Operations::OutageOrder;
}

// cim:OutagePlan
BaseClass* OutagePlan_factory()
{
	return new IEC61968::Operations::OutagePlan;
}

// cim:Customer
BaseClass* Customer_factory()
{
	return new IEC61968::Customers::Customer;
}

// cim:ComMedia
BaseClass* ComMedia_factory()
{
	return new IEC61968::Assets::ComMedia;
}

// cim:AnalyticScore
BaseClass* AnalyticScore_factory()
{
	return new IEC61968::Assets::AnalyticScore;
}

// cim:BushingInsulationPF
BaseClass* BushingInsulationPF_factory()
{
	return new IEC61968::InfIEC61968::InfAssets::BushingInsulationPF;
}

// cim:Bushing
BaseClass* Bushing_factory()
{
	return new IEC61968::Assets::Bushing;
}

// cim:InterrupterUnit
BaseClass* InterrupterUnit_factory()
{
	return new IEC61968::Assets::InterrupterUnit;
}

// cim:AggregateScore
BaseClass* AggregateScore_factory()
{
	return new IEC61968::Assets::AggregateScore;
}

// cim:RiskScore
BaseClass* RiskScore_factory()
{
	return new IEC61968::Assets::RiskScore;
}

// cim:AssetTestSampleTaker
BaseClass* AssetTestSampleTaker_factory()
{
	return new IEC61968::Assets::AssetTestSampleTaker;
}

// cim:Specimen
BaseClass* Specimen_factory()
{
	return new IEC61968::Assets::Specimen;
}

// cim:AssetTestLab
BaseClass* AssetTestLab_factory()
{
	return new IEC61968::Assets::AssetTestLab;
}

// cim:LabTestDataSet
BaseClass* LabTestDataSet_factory()
{
	return new IEC61968::Assets::LabTestDataSet;
}

// cim:MaintenanceDataSet
BaseClass* MaintenanceDataSet_factory()
{
	return new IEC61968::Assets::MaintenanceDataSet;
}

// cim:ASTMStandard
BaseClass* ASTMStandard_factory()
{
	return new IEC61968::Assets::ASTMStandard;
}

// cim:CIGREStandard
BaseClass* CIGREStandard_factory()
{
	return new IEC61968::Assets::CIGREStandard;
}

// cim:DINStandard
BaseClass* DINStandard_factory()
{
	return new IEC61968::Assets::DINStandard;
}

// cim:DobleStandard
BaseClass* DobleStandard_factory()
{
	return new IEC61968::Assets::DobleStandard;
}

// cim:EPAStandard
BaseClass* EPAStandard_factory()
{
	return new IEC61968::Assets::EPAStandard;
}

// cim:IECStandard
BaseClass* IECStandard_factory()
{
	return new IEC61968::Assets::IECStandard;
}

// cim:IEEEStandard
BaseClass* IEEEStandard_factory()
{
	return new IEC61968::Assets::IEEEStandard;
}

// cim:ISOStandard
BaseClass* ISOStandard_factory()
{
	return new IEC61968::Assets::ISOStandard;
}

// cim:LaborelecStandard
BaseClass* LaborelecStandard_factory()
{
	return new IEC61968::Assets::LaborelecStandard;
}

// cim:TAPPIStandard
BaseClass* TAPPIStandard_factory()
{
	return new IEC61968::Assets::TAPPIStandard;
}

// cim:UKMinistryOfDefenceStandard
BaseClass* UKMinistryOfDefenceStandard_factory()
{
	return new IEC61968::Assets::UKMinistryOfDefenceStandard;
}

// cim:WEPStandard
BaseClass* WEPStandard_factory()
{
	return new IEC61968::Assets::WEPStandard;
}

// cim:TestStandard
BaseClass* TestStandard_factory()
{
	return new IEC61968::Assets::TestStandard;
}

// cim:OperatingMechanism
BaseClass* OperatingMechanism_factory()
{
	return new IEC61968::Assets::OperatingMechanism;
}

// cim:InspectionDataSet
BaseClass* InspectionDataSet_factory()
{
	return new IEC61968::Assets::InspectionDataSet;
}

// cim:OilSpecimen
BaseClass* OilSpecimen_factory()
{
	return new IEC61968::Assets::OilSpecimen;
}

// cim:FailureEvent
BaseClass* FailureEvent_factory()
{
	return new IEC61968::Assets::FailureEvent;
}

// cim:AssetOwner
BaseClass* AssetOwner_factory()
{
	return new IEC61968::Assets::AssetOwner;
}

// cim:AssetLocationHazard
BaseClass* AssetLocationHazard_factory()
{
	return new IEC61968::Assets::AssetLocationHazard;
}

// cim:Streetlight
BaseClass* Streetlight_factory()
{
	return new IEC61968::Assets::Streetlight;
}

// cim:AssetUser
BaseClass* AssetUser_factory()
{
	return new IEC61968::Assets::AssetUser;
}

// cim:Maintainer
BaseClass* Maintainer_factory()
{
	return new IEC61968::Assets::Maintainer;
}

// cim:Joint
BaseClass* Joint_factory()
{
	return new IEC61968::Assets::Joint;
}

// cim:AssetHealthEvent
BaseClass* AssetHealthEvent_factory()
{
	return new IEC61968::Assets::AssetHealthEvent;
}

// cim:Facility
BaseClass* Facility_factory()
{
	return new IEC61968::Assets::Facility;
}

// cim:Cabinet
BaseClass* Cabinet_factory()
{
	return new IEC61968::Assets::Cabinet;
}

// cim:HealthScore
BaseClass* HealthScore_factory()
{
	return new IEC61968::Assets::HealthScore;
}

// cim:Limit
BaseClass* Limit_factory()
{
	return new IEC61970::Base::Meas::Limit;
}

// cim:Procedure
BaseClass* Procedure_factory()
{
	return new IEC61968::Assets::Procedure;
}

// cim:TestDataSet
BaseClass* TestDataSet_factory()
{
	return new IEC61968::Assets::TestDataSet;
}

// cim:FinancialInfo
BaseClass* FinancialInfo_factory()
{
	return new IEC61968::Assets::FinancialInfo;
}

// cim:AssetGroup
BaseClass* AssetGroup_factory()
{
	return new IEC61968::Assets::AssetGroup;
}

// cim:FACTSDevice
BaseClass* FACTSDevice_factory()
{
	return new IEC61968::Assets::FACTSDevice;
}

// cim:DiagnosisDataSet
BaseClass* DiagnosisDataSet_factory()
{
	return new IEC61968::Assets::DiagnosisDataSet;
}

// cim:SwitchOperationSummary
BaseClass* SwitchOperationSummary_factory()
{
	return new IEC61968::Assets::SwitchOperationSummary;
}

// cim:Analytic
BaseClass* Analytic_factory()
{
	return new IEC61968::Assets::Analytic;
}

// cim:ExtensionItem
BaseClass* ExtensionItem_factory()
{
	return new IEC61968::Common::ExtensionItem;
}

// cim:ParentOrganization
BaseClass* ParentOrganization_factory()
{
	return new IEC61968::Common::ParentOrganization;
}

// cim:DocumentPersonRole
BaseClass* DocumentPersonRole_factory()
{
	return new IEC61968::Common::DocumentPersonRole;
}

// cim:Editor
BaseClass* Editor_factory()
{
	return new IEC61968::Common::Editor;
}

// cim:ExtensionsList
BaseClass* ExtensionsList_factory()
{
	return new IEC61968::Common::ExtensionsList;
}

// cim:Approver
BaseClass* Approver_factory()
{
	return new IEC61968::Common::Approver;
}

// cim:Issuer
BaseClass* Issuer_factory()
{
	return new IEC61968::Common::Issuer;
}

// cim:FieldDispatchStep
BaseClass* FieldDispatchStep_factory()
{
	return new IEC61968::Common::FieldDispatchStep;
}

// cim:Ownership
BaseClass* Ownership_factory()
{
	return new IEC61968::Common::Ownership;
}

// cim:ScheduledEvent
BaseClass* ScheduledEvent_factory()
{
	return new IEC61968::Common::ScheduledEvent;
}

// cim:ScheduledEventData
BaseClass* ScheduledEventData_factory()
{
	return new IEC61968::Common::ScheduledEventData;
}

// cim:UnplannedOutage
BaseClass* UnplannedOutage_factory()
{
	return new IEC61968::Operations::UnplannedOutage;
}

// cim:PlannedOutage
BaseClass* PlannedOutage_factory()
{
	return new IEC61968::Operations::PlannedOutage;
}

// cim:FieldDispatchHistory
BaseClass* FieldDispatchHistory_factory()
{
	return new IEC61968::Common::FieldDispatchHistory;
}

// cim:Author
BaseClass* Author_factory()
{
	return new IEC61968::Common::Author;
}

// cim:IEC61968CIMVersion
BaseClass* IEC61968CIMVersion_factory()
{
	return new IEC61968::IEC61968CIMVersion;
}

// cim:FieldSafetySupervisor
BaseClass* FieldSafetySupervisor_factory()
{
	return new IEC61968::Operations::FieldSafetySupervisor;
}

// cim:Ground
BaseClass* Ground_factory()
{
	return new IEC61970::Base::Wires::Ground;
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

// cim:GroundAction
BaseClass* GroundAction_factory()
{
	return new IEC61968::Operations::GroundAction;
}

// cim:OperationalRestriction
BaseClass* OperationalRestriction_factory()
{
	return new IEC61968::Operations::OperationalRestriction;
}

// cim:EstimatedRestorationTime
BaseClass* EstimatedRestorationTime_factory()
{
	return new IEC61968::Operations::EstimatedRestorationTime;
}

// cim:PSREvent
BaseClass* PSREvent_factory()
{
	return new IEC61968::Operations::PSREvent;
}

// cim:Cut
BaseClass* Cut_factory()
{
	return new IEC61970::Base::Wires::Cut;
}

// cim:CutAction
BaseClass* CutAction_factory()
{
	return new IEC61968::Operations::CutAction;
}

// cim:TroubleOrder
BaseClass* TroubleOrder_factory()
{
	return new IEC61968::Operations::TroubleOrder;
}

// cim:OperationsSafetySupervisor
BaseClass* OperationsSafetySupervisor_factory()
{
	return new IEC61968::Operations::OperationsSafetySupervisor;
}

// cim:OperationalTag
BaseClass* OperationalTag_factory()
{
	return new IEC61968::Operations::OperationalTag;
}

// cim:ClearanceDocument
BaseClass* ClearanceDocument_factory()
{
	return new IEC61968::Operations::ClearanceDocument;
}

// cim:ClearanceAction
BaseClass* ClearanceAction_factory()
{
	return new IEC61968::Operations::ClearanceAction;
}

// cim:MeasurementAction
BaseClass* MeasurementAction_factory()
{
	return new IEC61968::Operations::MeasurementAction;
}

// cim:GenericAction
BaseClass* GenericAction_factory()
{
	return new IEC61968::Operations::GenericAction;
}

// cim:Jumper
BaseClass* Jumper_factory()
{
	return new IEC61970::Base::Wires::Jumper;
}

// cim:JumperAction
BaseClass* JumperAction_factory()
{
	return new IEC61968::Operations::JumperAction;
}

// cim:OperationalUpdatedRating
BaseClass* OperationalUpdatedRating_factory()
{
	return new IEC61968::Operations::OperationalUpdatedRating;
}

// cim:OutageArea
BaseClass* OutageArea_factory()
{
	return new IEC61968::Operations::OutageArea;
}

// cim:VerificationAction
BaseClass* VerificationAction_factory()
{
	return new IEC61968::Operations::VerificationAction;
}

// cim:TagAction
BaseClass* TagAction_factory()
{
	return new IEC61968::Operations::TagAction;
}

// cim:SwitchingStep
BaseClass* SwitchingStep_factory()
{
	return new IEC61968::Operations::SwitchingStep;
}

// cim:ControlAction
BaseClass* ControlAction_factory()
{
	return new IEC61968::Operations::ControlAction;
}

// cim:EnergyConnection
BaseClass* EnergyConnection_factory()
{
	return new IEC61970::Base::Wires::EnergyConnection;
}

// cim:EnergySource
BaseClass* EnergySource_factory()
{
	return new IEC61970::Base::Wires::EnergySource;
}

// cim:EnergySourceAction
BaseClass* EnergySourceAction_factory()
{
	return new IEC61968::Operations::EnergySourceAction;
}

// cim:RemoteConnectDisconnectInfo
BaseClass* RemoteConnectDisconnectInfo_factory()
{
	return new IEC61968::LoadControl::RemoteConnectDisconnectInfo;
}

// cim:ConnectDisconnectFunction
BaseClass* ConnectDisconnectFunction_factory()
{
	return new IEC61968::LoadControl::ConnectDisconnectFunction;
}

// cim:UndergroundStructure
BaseClass* UndergroundStructure_factory()
{
	return new IEC61968::InfIEC61968::InfAssets::UndergroundStructure;
}

// cim:ReliabilityInfo
BaseClass* ReliabilityInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssets::ReliabilityInfo;
}

// cim:DimensionsInfo
BaseClass* DimensionsInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssets::DimensionsInfo;
}

// cim:Pole
BaseClass* Pole_factory()
{
	return new IEC61968::InfIEC61968::InfAssets::Pole;
}

// cim:CoolingPowerRating
BaseClass* CoolingPowerRating_factory()
{
	return new IEC61968::InfIEC61968::InfAssets::CoolingPowerRating;
}

// cim:Tower
BaseClass* Tower_factory()
{
	return new IEC61968::InfIEC61968::InfAssets::Tower;
}

// cim:CompatibleUnit
BaseClass* CompatibleUnit_factory()
{
	return new IEC61968::InfIEC61968::InfWork::CompatibleUnit;
}

// cim:CostType
BaseClass* CostType_factory()
{
	return new IEC61968::InfIEC61968::InfWork::CostType;
}

// cim:Assignment
BaseClass* Assignment_factory()
{
	return new IEC61968::InfIEC61968::InfWork::Assignment;
}

// cim:WorkFlowStep
BaseClass* WorkFlowStep_factory()
{
	return new IEC61968::InfIEC61968::InfWork::WorkFlowStep;
}

// cim:CUContractorItem
BaseClass* CUContractorItem_factory()
{
	return new IEC61968::InfIEC61968::InfWork::CUContractorItem;
}

// cim:InfoQuestion
BaseClass* InfoQuestion_factory()
{
	return new IEC61968::InfIEC61968::InfWork::InfoQuestion;
}

// cim:Route
BaseClass* Route_factory()
{
	return new IEC61968::InfIEC61968::InfLocations::Route;
}

// cim:ShiftPattern
BaseClass* ShiftPattern_factory()
{
	return new IEC61968::InfIEC61968::InfWork::ShiftPattern;
}

// cim:OldCrew
BaseClass* OldCrew_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::OldCrew;
}

// cim:Capability
BaseClass* Capability_factory()
{
	return new IEC61968::InfIEC61968::InfWork::Capability;
}

// cim:CUWorkEquipmentItem
BaseClass* CUWorkEquipmentItem_factory()
{
	return new IEC61968::InfIEC61968::InfWork::CUWorkEquipmentItem;
}

// cim:BusinessCase
BaseClass* BusinessCase_factory()
{
	return new IEC61968::InfIEC61968::InfWork::BusinessCase;
}

// cim:CULaborCode
BaseClass* CULaborCode_factory()
{
	return new IEC61968::InfIEC61968::InfWork::CULaborCode;
}

// cim:CULaborItem
BaseClass* CULaborItem_factory()
{
	return new IEC61968::InfIEC61968::InfWork::CULaborItem;
}

// cim:NonStandardItem
BaseClass* NonStandardItem_factory()
{
	return new IEC61968::InfIEC61968::InfWork::NonStandardItem;
}

// cim:AccessPermit
BaseClass* AccessPermit_factory()
{
	return new IEC61968::InfIEC61968::InfWork::AccessPermit;
}

// cim:CUAllowableAction
BaseClass* CUAllowableAction_factory()
{
	return new IEC61968::InfIEC61968::InfWork::CUAllowableAction;
}

// cim:Regulation
BaseClass* Regulation_factory()
{
	return new IEC61968::InfIEC61968::InfWork::Regulation;
}

// cim:CompositeSwitchInfo
BaseClass* CompositeSwitchInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::CompositeSwitchInfo;
}

// cim:OldTransformerEndInfo
BaseClass* OldTransformerEndInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::OldTransformerEndInfo;
}

// cim:Ratio
BaseClass* Ratio_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::Ratio;
}

// cim:CurrentTransformerInfo
BaseClass* CurrentTransformerInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::CurrentTransformerInfo;
}

// cim:OldSwitchInfo
BaseClass* OldSwitchInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::OldSwitchInfo;
}

// cim:RecloserInfo
BaseClass* RecloserInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::RecloserInfo;
}

// cim:ProtectionEquipmentInfo
BaseClass* ProtectionEquipmentInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::ProtectionEquipmentInfo;
}

// cim:OldTransformerTankInfo
BaseClass* OldTransformerTankInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::OldTransformerTankInfo;
}

// cim:SurgeArresterInfo
BaseClass* SurgeArresterInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::SurgeArresterInfo;
}

// cim:BreakerInfo
BaseClass* BreakerInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::BreakerInfo;
}

// cim:PotentialTransformerInfo
BaseClass* PotentialTransformerInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::PotentialTransformerInfo;
}

// cim:FaultIndicatorInfo
BaseClass* FaultIndicatorInfo_factory()
{
	return new IEC61968::InfIEC61968::InfAssetInfo::FaultIndicatorInfo;
}

// cim:PropertyOrganisationRole
BaseClass* PropertyOrganisationRole_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::PropertyOrganisationRole;
}

// cim:DocumentOrganisationRole
BaseClass* DocumentOrganisationRole_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::DocumentOrganisationRole;
}

// cim:OrgOrgRole
BaseClass* OrgOrgRole_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::OrgOrgRole;
}

// cim:BusinessRole
BaseClass* BusinessRole_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::BusinessRole;
}

// cim:BusinessPlan
BaseClass* BusinessPlan_factory()
{
	return new IEC61968::InfIEC61968::InfCommon::BusinessPlan;
}

// cim:ErpTimeEntry
BaseClass* ErpTimeEntry_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpTimeEntry;
}

// cim:ErpTimeSheet
BaseClass* ErpTimeSheet_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpTimeSheet;
}

// cim:ErpBankAccount
BaseClass* ErpBankAccount_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpBankAccount;
}

// cim:ErpLedgerBudget
BaseClass* ErpLedgerBudget_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpLedgerBudget;
}

// cim:ErpLedBudLineItem
BaseClass* ErpLedBudLineItem_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpLedBudLineItem;
}

// cim:ErpLedgerEntry
BaseClass* ErpLedgerEntry_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpLedgerEntry;
}

// cim:ErpLedger
BaseClass* ErpLedger_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpLedger;
}

// cim:ErpItemMaster
BaseClass* ErpItemMaster_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpItemMaster;
}

// cim:ErpJournal
BaseClass* ErpJournal_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpJournal;
}

// cim:ErpInventoryCount
BaseClass* ErpInventoryCount_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpInventoryCount;
}

// cim:ErpSalesOrder
BaseClass* ErpSalesOrder_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpSalesOrder;
}

// cim:ErpChartOfAccounts
BaseClass* ErpChartOfAccounts_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpChartOfAccounts;
}

// cim:ErpEngChangeOrder
BaseClass* ErpEngChangeOrder_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpEngChangeOrder;
}

// cim:ErpIssueInventory
BaseClass* ErpIssueInventory_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpIssueInventory;
}

// cim:ErpSiteLevelData
BaseClass* ErpSiteLevelData_factory()
{
	return new IEC61968::InfIEC61968::InfERPSupport::ErpSiteLevelData;
}

// cim:GeneratorTypeAsset
BaseClass* GeneratorTypeAsset_factory()
{
	return new IEC61968::InfIEC61968::InfTypeAsset::GeneratorTypeAsset;
}

// cim:RegulatingCondEq
BaseClass* RegulatingCondEq_factory()
{
	return new IEC61970::Base::Wires::RegulatingCondEq;
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

// cim:SVC
BaseClass* SVC_factory()
{
	return new IEC61968::InfIEC61968::InfWiresExt::SVC;
}

// cim:Zone
BaseClass* Zone_factory()
{
	return new IEC61968::InfIEC61968::InfLocations::Zone;
}

// cim:LocationGrant
BaseClass* LocationGrant_factory()
{
	return new IEC61968::InfIEC61968::InfLocations::LocationGrant;
}

// cim:LandProperty
BaseClass* LandProperty_factory()
{
	return new IEC61968::InfIEC61968::InfLocations::LandProperty;
}

// cim:RightOfWay
BaseClass* RightOfWay_factory()
{
	return new IEC61968::InfIEC61968::InfLocations::RightOfWay;
}

// cim:RedLine
BaseClass* RedLine_factory()
{
	return new IEC61968::InfIEC61968::InfLocations::RedLine;
}

// cim:ServiceGuarantee
BaseClass* ServiceGuarantee_factory()
{
	return new IEC61968::InfIEC61968::InfCustomers::ServiceGuarantee;
}

// cim:SubscribePowerCurve
BaseClass* SubscribePowerCurve_factory()
{
	return new IEC61968::InfIEC61968::InfCustomers::SubscribePowerCurve;
}

// cim:PowerQualityPricing
BaseClass* PowerQualityPricing_factory()
{
	return new IEC61968::InfIEC61968::InfCustomers::PowerQualityPricing;
}

// cim:ExternalCustomerAgreement
BaseClass* ExternalCustomerAgreement_factory()
{
	return new IEC61968::InfIEC61968::InfCustomers::ExternalCustomerAgreement;
}

// cim:CustomerBillingInfo
BaseClass* CustomerBillingInfo_factory()
{
	return new IEC61968::InfIEC61968::InfCustomers::CustomerBillingInfo;
}

// cim:ComplianceEvent
BaseClass* ComplianceEvent_factory()
{
	return new IEC61968::InfIEC61968::InfCustomers::ComplianceEvent;
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

// cim:AssetDiscrete
BaseClass* AssetDiscrete_factory()
{
	return new IEC61968::AssetMeas::AssetDiscrete;
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

// cim:LimitSet
BaseClass* LimitSet_factory()
{
	return new IEC61970::Base::Meas::LimitSet;
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

// cim:AssetAnalog
BaseClass* AssetAnalog_factory()
{
	return new IEC61968::AssetMeas::AssetAnalog;
}

// cim:OilAnalysisMoistureAnalog
BaseClass* OilAnalysisMoistureAnalog_factory()
{
	return new IEC61968::AssetMeas::OilAnalysisMoistureAnalog;
}

// cim:InspectionDiscrete
BaseClass* InspectionDiscrete_factory()
{
	return new IEC61968::AssetMeas::InspectionDiscrete;
}

// cim:CalculationMethodHierarchy
BaseClass* CalculationMethodHierarchy_factory()
{
	return new IEC61968::AssetMeas::CalculationMethodHierarchy;
}

// cim:OilAnalysisFluidAnalog
BaseClass* OilAnalysisFluidAnalog_factory()
{
	return new IEC61968::AssetMeas::OilAnalysisFluidAnalog;
}

// cim:OilAnalysisParticleDiscrete
BaseClass* OilAnalysisParticleDiscrete_factory()
{
	return new IEC61968::AssetMeas::OilAnalysisParticleDiscrete;
}

// cim:CalculationMethodOrder
BaseClass* CalculationMethodOrder_factory()
{
	return new IEC61968::AssetMeas::CalculationMethodOrder;
}

// cim:StatisticalCalculation
BaseClass* StatisticalCalculation_factory()
{
	return new IEC61968::AssetMeas::StatisticalCalculation;
}

// cim:PeriodicStatisticalCalculation
BaseClass* PeriodicStatisticalCalculation_factory()
{
	return new IEC61968::AssetMeas::PeriodicStatisticalCalculation;
}

// cim:OilAnalysisGasAnalog
BaseClass* OilAnalysisGasAnalog_factory()
{
	return new IEC61968::AssetMeas::OilAnalysisGasAnalog;
}

// cim:OilAnalysisFluidDiscrete
BaseClass* OilAnalysisFluidDiscrete_factory()
{
	return new IEC61968::AssetMeas::OilAnalysisFluidDiscrete;
}

// cim:OilAnalysisPCBAnalog
BaseClass* OilAnalysisPCBAnalog_factory()
{
	return new IEC61968::AssetMeas::OilAnalysisPCBAnalog;
}

// cim:OilAnalysisPCBDiscrete
BaseClass* OilAnalysisPCBDiscrete_factory()
{
	return new IEC61968::AssetMeas::OilAnalysisPCBDiscrete;
}

// cim:OilAnalysisPaperAnalog
BaseClass* OilAnalysisPaperAnalog_factory()
{
	return new IEC61968::AssetMeas::OilAnalysisPaperAnalog;
}

// cim:InspectionAnalog
BaseClass* InspectionAnalog_factory()
{
	return new IEC61968::AssetMeas::InspectionAnalog;
}

// cim:StringMeasurement
BaseClass* StringMeasurement_factory()
{
	return new IEC61970::Base::Meas::StringMeasurement;
}

// cim:AssetStringMeasurement
BaseClass* AssetStringMeasurement_factory()
{
	return new IEC61968::AssetMeas::AssetStringMeasurement;
}

// cim:OilAnalysisMetalsAnalog
BaseClass* OilAnalysisMetalsAnalog_factory()
{
	return new IEC61968::AssetMeas::OilAnalysisMetalsAnalog;
}

// cim:AssetTemperaturePressureAnalog
BaseClass* AssetTemperaturePressureAnalog_factory()
{
	return new IEC61968::AssetMeas::AssetTemperaturePressureAnalog;
}

// cim:OilAnalysisParticleAnalog
BaseClass* OilAnalysisParticleAnalog_factory()
{
	return new IEC61968::AssetMeas::OilAnalysisParticleAnalog;
}

// cim:IEC61970CIMVersion
BaseClass* IEC61970CIMVersion_factory()
{
	return new IEC61970::IEC61970CIMVersion;
}

// cim:ReportingGroup
BaseClass* ReportingGroup_factory()
{
	return new IEC61970::Base::Core::ReportingGroup;
}

// cim:TopologicalNode
BaseClass* TopologicalNode_factory()
{
	return new IEC61970::Base::Topology::TopologicalNode;
}

// cim:TopologicalIsland
BaseClass* TopologicalIsland_factory()
{
	return new IEC61970::Base::Topology::TopologicalIsland;
}

// cim:BusNameMarker
BaseClass* BusNameMarker_factory()
{
	return new IEC61970::Base::Topology::BusNameMarker;
}

// cim:EquipmentFault
BaseClass* EquipmentFault_factory()
{
	return new IEC61970::Base::Faults::EquipmentFault;
}

// cim:LineFault
BaseClass* LineFault_factory()
{
	return new IEC61970::Base::Faults::LineFault;
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

// cim:PostLineSensor
BaseClass* PostLineSensor_factory()
{
	return new IEC61970::Base::AuxiliaryEquipment::PostLineSensor;
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

// cim:CurrentTransformer
BaseClass* CurrentTransformer_factory()
{
	return new IEC61970::Base::AuxiliaryEquipment::CurrentTransformer;
}

// cim:PotentialTransformer
BaseClass* PotentialTransformer_factory()
{
	return new IEC61970::Base::AuxiliaryEquipment::PotentialTransformer;
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

// cim:EmissionCurve
BaseClass* EmissionCurve_factory()
{
	return new IEC61970::Base::Generation::Production::EmissionCurve;
}

// cim:PowerElectronicsUnit
BaseClass* PowerElectronicsUnit_factory()
{
	return new IEC61970::Base::Generation::Production::PowerElectronicsUnit;
}

// cim:BatteryUnit
BaseClass* BatteryUnit_factory()
{
	return new IEC61970::Base::Generation::Production::BatteryUnit;
}

// cim:GrossToNetActivePowerCurve
BaseClass* GrossToNetActivePowerCurve_factory()
{
	return new IEC61970::Base::Generation::Production::GrossToNetActivePowerCurve;
}

// cim:GenUnitOpSchedule
BaseClass* GenUnitOpSchedule_factory()
{
	return new IEC61970::Base::Generation::Production::GenUnitOpSchedule;
}

// cim:HeatRateCurve
BaseClass* HeatRateCurve_factory()
{
	return new IEC61970::Base::Generation::Production::HeatRateCurve;
}

// cim:AirCompressor
BaseClass* AirCompressor_factory()
{
	return new IEC61970::Base::Generation::Production::AirCompressor;
}

// cim:PowerElectronicsWindUnit
BaseClass* PowerElectronicsWindUnit_factory()
{
	return new IEC61970::Base::Generation::Production::PowerElectronicsWindUnit;
}

// cim:GenUnitOpCostCurve
BaseClass* GenUnitOpCostCurve_factory()
{
	return new IEC61970::Base::Generation::Production::GenUnitOpCostCurve;
}

// cim:FuelAllocationSchedule
BaseClass* FuelAllocationSchedule_factory()
{
	return new IEC61970::Base::Generation::Production::FuelAllocationSchedule;
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

// cim:CombinedCyclePlant
BaseClass* CombinedCyclePlant_factory()
{
	return new IEC61970::Base::Generation::Production::CombinedCyclePlant;
}

// cim:SteamSendoutSchedule
BaseClass* SteamSendoutSchedule_factory()
{
	return new IEC61970::Base::Generation::Production::SteamSendoutSchedule;
}

// cim:TailbayLossCurve
BaseClass* TailbayLossCurve_factory()
{
	return new IEC61970::Base::Generation::Production::TailbayLossCurve;
}

// cim:HydroGeneratingEfficiencyCurve
BaseClass* HydroGeneratingEfficiencyCurve_factory()
{
	return new IEC61970::Base::Generation::Production::HydroGeneratingEfficiencyCurve;
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

// cim:HydroPowerPlant
BaseClass* HydroPowerPlant_factory()
{
	return new IEC61970::Base::Generation::Production::HydroPowerPlant;
}

// cim:CAESPlant
BaseClass* CAESPlant_factory()
{
	return new IEC61970::Base::Generation::Production::CAESPlant;
}

// cim:WindGeneratingUnit
BaseClass* WindGeneratingUnit_factory()
{
	return new IEC61970::Base::Generation::Production::WindGeneratingUnit;
}

// cim:FossilFuel
BaseClass* FossilFuel_factory()
{
	return new IEC61970::Base::Generation::Production::FossilFuel;
}

// cim:PhotoVoltaicUnit
BaseClass* PhotoVoltaicUnit_factory()
{
	return new IEC61970::Base::Generation::Production::PhotoVoltaicUnit;
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

// cim:CogenerationPlant
BaseClass* CogenerationPlant_factory()
{
	return new IEC61970::Base::Generation::Production::CogenerationPlant;
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

// cim:FossilSteamSupply
BaseClass* FossilSteamSupply_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::FossilSteamSupply;
}

// cim:Subcritical
BaseClass* Subcritical_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::Subcritical;
}

// cim:BWRSteamSupply
BaseClass* BWRSteamSupply_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::BWRSteamSupply;
}

// cim:HydroTurbine
BaseClass* HydroTurbine_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::HydroTurbine;
}

// cim:Supercritical
BaseClass* Supercritical_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::Supercritical;
}

// cim:DrumBoiler
BaseClass* DrumBoiler_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::DrumBoiler;
}

// cim:PWRSteamSupply
BaseClass* PWRSteamSupply_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::PWRSteamSupply;
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

// cim:HeatRecoveryBoiler
BaseClass* HeatRecoveryBoiler_factory()
{
	return new IEC61970::Base::Generation::GenerationTrainingSimulation::HeatRecoveryBoiler;
}

// cim:MeasurementValueSource
BaseClass* MeasurementValueSource_factory()
{
	return new IEC61970::Base::Meas::MeasurementValueSource;
}

// cim:AccumulatorValue
BaseClass* AccumulatorValue_factory()
{
	return new IEC61970::Base::Meas::AccumulatorValue;
}

// cim:StringMeasurementValue
BaseClass* StringMeasurementValue_factory()
{
	return new IEC61970::Base::Meas::StringMeasurementValue;
}

// cim:DiscreteCommand
BaseClass* DiscreteCommand_factory()
{
	return new IEC61970::Base::Meas::DiscreteCommand;
}

// cim:AccumulatorLimit
BaseClass* AccumulatorLimit_factory()
{
	return new IEC61970::Base::Meas::AccumulatorLimit;
}

// cim:AccumulatorLimitSet
BaseClass* AccumulatorLimitSet_factory()
{
	return new IEC61970::Base::Meas::AccumulatorLimitSet;
}

// cim:SetPoint
BaseClass* SetPoint_factory()
{
	return new IEC61970::Base::Meas::SetPoint;
}

// cim:AccumulatorReset
BaseClass* AccumulatorReset_factory()
{
	return new IEC61970::Base::Meas::AccumulatorReset;
}

// cim:RaiseLowerCommand
BaseClass* RaiseLowerCommand_factory()
{
	return new IEC61970::Base::Meas::RaiseLowerCommand;
}

// cim:Accumulator
BaseClass* Accumulator_factory()
{
	return new IEC61970::Base::Meas::Accumulator;
}

// cim:StateVariable
BaseClass* StateVariable_factory()
{
	return new IEC61970::Base::StateVariables::StateVariable;
}

// cim:SvVoltage
BaseClass* SvVoltage_factory()
{
	return new IEC61970::Base::StateVariables::SvVoltage;
}

// cim:SvStatus
BaseClass* SvStatus_factory()
{
	return new IEC61970::Base::StateVariables::SvStatus;
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

// cim:SvTapStep
BaseClass* SvTapStep_factory()
{
	return new IEC61970::Base::StateVariables::SvTapStep;
}

// cim:SvShuntCompensatorSections
BaseClass* SvShuntCompensatorSections_factory()
{
	return new IEC61970::Base::StateVariables::SvShuntCompensatorSections;
}

// cim:LoadGroup
BaseClass* LoadGroup_factory()
{
	return new IEC61970::Base::LoadModel::LoadGroup;
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

// cim:NonConformLoadSchedule
BaseClass* NonConformLoadSchedule_factory()
{
	return new IEC61970::Base::LoadModel::NonConformLoadSchedule;
}

// cim:ConformLoadSchedule
BaseClass* ConformLoadSchedule_factory()
{
	return new IEC61970::Base::LoadModel::ConformLoadSchedule;
}

// cim:EnergyArea
BaseClass* EnergyArea_factory()
{
	return new IEC61970::Base::LoadModel::EnergyArea;
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

// cim:DayType
BaseClass* DayType_factory()
{
	return new IEC61970::Base::LoadModel::DayType;
}

// cim:PowerCutZone
BaseClass* PowerCutZone_factory()
{
	return new IEC61970::Base::LoadModel::PowerCutZone;
}

// cim:ConformLoadGroup
BaseClass* ConformLoadGroup_factory()
{
	return new IEC61970::Base::LoadModel::ConformLoadGroup;
}

// cim:NonConformLoad
BaseClass* NonConformLoad_factory()
{
	return new IEC61970::Base::LoadModel::NonConformLoad;
}

// cim:NonConformLoadGroup
BaseClass* NonConformLoadGroup_factory()
{
	return new IEC61970::Base::LoadModel::NonConformLoadGroup;
}

// cim:EquivalentEquipment
BaseClass* EquivalentEquipment_factory()
{
	return new IEC61970::Base::Equivalents::EquivalentEquipment;
}

// cim:EquivalentNetwork
BaseClass* EquivalentNetwork_factory()
{
	return new IEC61970::Base::Equivalents::EquivalentNetwork;
}

// cim:EquivalentBranch
BaseClass* EquivalentBranch_factory()
{
	return new IEC61970::Base::Equivalents::EquivalentBranch;
}

// cim:EquivalentShunt
BaseClass* EquivalentShunt_factory()
{
	return new IEC61970::Base::Equivalents::EquivalentShunt;
}

// cim:EquivalentInjection
BaseClass* EquivalentInjection_factory()
{
	return new IEC61970::Base::Equivalents::EquivalentInjection;
}

// cim:DCTopologicalNode
BaseClass* DCTopologicalNode_factory()
{
	return new IEC61970::Base::DC::DCTopologicalNode;
}

// cim:EquipmentContainer
BaseClass* EquipmentContainer_factory()
{
	return new IEC61970::Base::Core::EquipmentContainer;
}

// cim:DCEquipmentContainer
BaseClass* DCEquipmentContainer_factory()
{
	return new IEC61970::Base::DC::DCEquipmentContainer;
}

// cim:VsCapabilityCurve
BaseClass* VsCapabilityCurve_factory()
{
	return new IEC61970::Base::DC::VsCapabilityCurve;
}

// cim:ACDCConverter
BaseClass* ACDCConverter_factory()
{
	return new IEC61970::Base::DC::ACDCConverter;
}

// cim:CsConverter
BaseClass* CsConverter_factory()
{
	return new IEC61970::Base::DC::CsConverter;
}

// cim:DCBaseTerminal
BaseClass* DCBaseTerminal_factory()
{
	return new IEC61970::Base::DC::DCBaseTerminal;
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

// cim:DCTopologicalIsland
BaseClass* DCTopologicalIsland_factory()
{
	return new IEC61970::Base::DC::DCTopologicalIsland;
}

// cim:Line
BaseClass* Line_factory()
{
	return new IEC61970::Base::Wires::Line;
}

// cim:Bay
BaseClass* Bay_factory()
{
	return new IEC61970::Base::Core::Bay;
}

// cim:VoltageLevel
BaseClass* VoltageLevel_factory()
{
	return new IEC61970::Base::Core::VoltageLevel;
}

// cim:DCConverterUnit
BaseClass* DCConverterUnit_factory()
{
	return new IEC61970::Base::DC::DCConverterUnit;
}

// cim:Feeder
BaseClass* Feeder_factory()
{
	return new IEC61970::Base::Core::Feeder;
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

// cim:DCLine
BaseClass* DCLine_factory()
{
	return new IEC61970::Base::DC::DCLine;
}

// cim:DCBusbar
BaseClass* DCBusbar_factory()
{
	return new IEC61970::Base::DC::DCBusbar;
}

// cim:ACDCConverterDCTerminal
BaseClass* ACDCConverterDCTerminal_factory()
{
	return new IEC61970::Base::DC::ACDCConverterDCTerminal;
}

// cim:DCLineSegment
BaseClass* DCLineSegment_factory()
{
	return new IEC61970::Base::DC::DCLineSegment;
}

// cim:PerLengthDCLineParameter
BaseClass* PerLengthDCLineParameter_factory()
{
	return new IEC61970::Base::DC::PerLengthDCLineParameter;
}

// cim:DCNode
BaseClass* DCNode_factory()
{
	return new IEC61970::Base::DC::DCNode;
}

// cim:DCGround
BaseClass* DCGround_factory()
{
	return new IEC61970::Base::DC::DCGround;
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

// cim:VsConverter
BaseClass* VsConverter_factory()
{
	return new IEC61970::Base::DC::VsConverter;
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

// cim:TextDiagramObject
BaseClass* TextDiagramObject_factory()
{
	return new IEC61970::Base::DiagramLayout::TextDiagramObject;
}

// cim:DiagramStyle
BaseClass* DiagramStyle_factory()
{
	return new IEC61970::Base::DiagramLayout::DiagramStyle;
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

// cim:Fuse
BaseClass* Fuse_factory()
{
	return new IEC61970::Base::Wires::Fuse;
}

// cim:PhaseImpedanceData
BaseClass* PhaseImpedanceData_factory()
{
	return new IEC61970::Base::Wires::PhaseImpedanceData;
}

// cim:EarthFaultCompensator
BaseClass* EarthFaultCompensator_factory()
{
	return new IEC61970::Base::Wires::EarthFaultCompensator;
}

// cim:GroundingImpedance
BaseClass* GroundingImpedance_factory()
{
	return new IEC61970::Base::Wires::GroundingImpedance;
}

// cim:SeriesCompensator
BaseClass* SeriesCompensator_factory()
{
	return new IEC61970::Base::Wires::SeriesCompensator;
}

// cim:PhaseTapChangerNonLinear
BaseClass* PhaseTapChangerNonLinear_factory()
{
	return new IEC61970::Base::Wires::PhaseTapChangerNonLinear;
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

// cim:RecloseSequence
BaseClass* RecloseSequence_factory()
{
	return new IEC61970::Base::Protection::RecloseSequence;
}

// cim:ProtectedSwitch
BaseClass* ProtectedSwitch_factory()
{
	return new IEC61970::Base::Wires::ProtectedSwitch;
}

// cim:Breaker
BaseClass* Breaker_factory()
{
	return new IEC61970::Base::Wires::Breaker;
}

// cim:NonlinearShuntCompensatorPhasePoint
BaseClass* NonlinearShuntCompensatorPhasePoint_factory()
{
	return new IEC61970::Base::Wires::NonlinearShuntCompensatorPhasePoint;
}

// cim:TapChangerTablePoint
BaseClass* TapChangerTablePoint_factory()
{
	return new IEC61970::Base::Wires::TapChangerTablePoint;
}

// cim:RatioTapChangerTablePoint
BaseClass* RatioTapChangerTablePoint_factory()
{
	return new IEC61970::Base::Wires::RatioTapChangerTablePoint;
}

// cim:EnergySourcePhase
BaseClass* EnergySourcePhase_factory()
{
	return new IEC61970::Base::Wires::EnergySourcePhase;
}

// cim:LinearShuntCompensator
BaseClass* LinearShuntCompensator_factory()
{
	return new IEC61970::Base::Wires::LinearShuntCompensator;
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

// cim:TapSchedule
BaseClass* TapSchedule_factory()
{
	return new IEC61970::Base::Wires::TapSchedule;
}

// cim:NonlinearShuntCompensatorPhase
BaseClass* NonlinearShuntCompensatorPhase_factory()
{
	return new IEC61970::Base::Wires::NonlinearShuntCompensatorPhase;
}

// cim:PerLengthImpedance
BaseClass* PerLengthImpedance_factory()
{
	return new IEC61970::Base::Wires::PerLengthImpedance;
}

// cim:PerLengthSequenceImpedance
BaseClass* PerLengthSequenceImpedance_factory()
{
	return new IEC61970::Base::Wires::PerLengthSequenceImpedance;
}

// cim:ReactiveCapabilityCurve
BaseClass* ReactiveCapabilityCurve_factory()
{
	return new IEC61970::Base::Wires::ReactiveCapabilityCurve;
}

// cim:LoadBreakSwitch
BaseClass* LoadBreakSwitch_factory()
{
	return new IEC61970::Base::Wires::LoadBreakSwitch;
}

// cim:Disconnector
BaseClass* Disconnector_factory()
{
	return new IEC61970::Base::Wires::Disconnector;
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

// cim:RegulationSchedule
BaseClass* RegulationSchedule_factory()
{
	return new IEC61970::Base::Wires::RegulationSchedule;
}

// cim:Plant
BaseClass* Plant_factory()
{
	return new IEC61970::Base::Wires::Plant;
}

// cim:PerLengthPhaseImpedance
BaseClass* PerLengthPhaseImpedance_factory()
{
	return new IEC61970::Base::Wires::PerLengthPhaseImpedance;
}

// cim:StaticVarCompensator
BaseClass* StaticVarCompensator_factory()
{
	return new IEC61970::Base::Wires::StaticVarCompensator;
}

// cim:ExternalNetworkInjection
BaseClass* ExternalNetworkInjection_factory()
{
	return new IEC61970::Base::Wires::ExternalNetworkInjection;
}

// cim:Junction
BaseClass* Junction_factory()
{
	return new IEC61970::Base::Wires::Junction;
}

// cim:PhaseTapChangerAsymmetrical
BaseClass* PhaseTapChangerAsymmetrical_factory()
{
	return new IEC61970::Base::Wires::PhaseTapChangerAsymmetrical;
}

// cim:AsynchronousMachine
BaseClass* AsynchronousMachine_factory()
{
	return new IEC61970::Base::Wires::AsynchronousMachine;
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

// cim:TransformerTankEnd
BaseClass* TransformerTankEnd_factory()
{
	return new IEC61970::Base::Wires::TransformerTankEnd;
}

// cim:CompositeSwitch
BaseClass* CompositeSwitch_factory()
{
	return new IEC61970::Base::Wires::CompositeSwitch;
}

// cim:Sectionaliser
BaseClass* Sectionaliser_factory()
{
	return new IEC61970::Base::Wires::Sectionaliser;
}

// cim:PowerElectronicsConnection
BaseClass* PowerElectronicsConnection_factory()
{
	return new IEC61970::Base::Wires::PowerElectronicsConnection;
}

// cim:PhaseTapChangerTablePoint
BaseClass* PhaseTapChangerTablePoint_factory()
{
	return new IEC61970::Base::Wires::PhaseTapChangerTablePoint;
}

// cim:PetersenCoil
BaseClass* PetersenCoil_factory()
{
	return new IEC61970::Base::Wires::PetersenCoil;
}

// cim:Recloser
BaseClass* Recloser_factory()
{
	return new IEC61970::Base::Wires::Recloser;
}

// cim:GroundDisconnector
BaseClass* GroundDisconnector_factory()
{
	return new IEC61970::Base::Wires::GroundDisconnector;
}

// cim:LinearShuntCompensatorPhase
BaseClass* LinearShuntCompensatorPhase_factory()
{
	return new IEC61970::Base::Wires::LinearShuntCompensatorPhase;
}

// cim:MutualCoupling
BaseClass* MutualCoupling_factory()
{
	return new IEC61970::Base::Wires::MutualCoupling;
}

// cim:FrequencyConverter
BaseClass* FrequencyConverter_factory()
{
	return new IEC61970::Base::Wires::FrequencyConverter;
}

// cim:ACLineSegmentPhase
BaseClass* ACLineSegmentPhase_factory()
{
	return new IEC61970::Base::Wires::ACLineSegmentPhase;
}

// cim:ProtectionEquipment
BaseClass* ProtectionEquipment_factory()
{
	return new IEC61970::Base::Protection::ProtectionEquipment;
}

// cim:SynchrocheckRelay
BaseClass* SynchrocheckRelay_factory()
{
	return new IEC61970::Base::Protection::SynchrocheckRelay;
}

// cim:CurrentRelay
BaseClass* CurrentRelay_factory()
{
	return new IEC61970::Base::Protection::CurrentRelay;
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

// cim:AltGeneratingUnitMeas
BaseClass* AltGeneratingUnitMeas_factory()
{
	return new IEC61970::Base::ControlArea::AltGeneratingUnitMeas;
}

// cim:ControlAreaGeneratingUnit
BaseClass* ControlAreaGeneratingUnit_factory()
{
	return new IEC61970::Base::ControlArea::ControlAreaGeneratingUnit;
}

// cim:AltTieMeas
BaseClass* AltTieMeas_factory()
{
	return new IEC61970::Base::ControlArea::AltTieMeas;
}

// cim:TieFlow
BaseClass* TieFlow_factory()
{
	return new IEC61970::Base::ControlArea::TieFlow;
}

// cim:ControlArea
BaseClass* ControlArea_factory()
{
	return new IEC61970::Base::ControlArea::ControlArea;
}

// cim:SourcingActor
BaseClass* SourcingActor_factory()
{
	return new IEC61970::Base::ICCPConfiguration::SourcingActor;
}

// cim:BilateralExchangeAgreement
BaseClass* BilateralExchangeAgreement_factory()
{
	return new IEC61970::Base::ICCPConfiguration::BilateralExchangeAgreement;
}

// cim:TASE2BilateralTable
BaseClass* TASE2BilateralTable_factory()
{
	return new IEC61970::Base::ICCPConfiguration::TASE2BilateralTable;
}

// cim:ICCPVirtualControlCenter
BaseClass* ICCPVirtualControlCenter_factory()
{
	return new IEC61970::Base::ICCPConfiguration::ICCPVirtualControlCenter;
}

// cim:IPAccessPoint
BaseClass* IPAccessPoint_factory()
{
	return new IEC61970::Base::ICCPConfiguration::IPAccessPoint;
}

// cim:TCPAccessPoint
BaseClass* TCPAccessPoint_factory()
{
	return new IEC61970::Base::ICCPConfiguration::TCPAccessPoint;
}

// cim:ISOUpperLayer
BaseClass* ISOUpperLayer_factory()
{
	return new IEC61970::Base::ICCPConfiguration::ISOUpperLayer;
}

// cim:ICCPInformationMessage
BaseClass* ICCPInformationMessage_factory()
{
	return new IEC61970::Base::ICCPConfiguration::ICCPInformationMessage;
}

// cim:ICCPVCC
BaseClass* ICCPVCC_factory()
{
	return new IEC61970::Base::ICCPConfiguration::ICCPVCC;
}

// cim:IOPointSource
BaseClass* IOPointSource_factory()
{
	return new IEC61970::Base::ICCPConfiguration::IOPointSource;
}

// cim:PublicX509Certificate
BaseClass* PublicX509Certificate_factory()
{
	return new IEC61970::Base::ICCPConfiguration::PublicX509Certificate;
}

// cim:ISOAPAddressing
BaseClass* ISOAPAddressing_factory()
{
	return new IEC61970::Base::ICCPConfiguration::ISOAPAddressing;
}

// cim:ICCPProvidedPoint
BaseClass* ICCPProvidedPoint_factory()
{
	return new IEC61970::Base::ICCPConfiguration::ICCPProvidedPoint;
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

// cim:OperationalLimitSet
BaseClass* OperationalLimitSet_factory()
{
	return new IEC61970::Base::OperationalLimits::OperationalLimitSet;
}

// cim:BranchGroupTerminal
BaseClass* BranchGroupTerminal_factory()
{
	return new IEC61970::Base::OperationalLimits::BranchGroupTerminal;
}

// cim:VoltageLimit
BaseClass* VoltageLimit_factory()
{
	return new IEC61970::Base::OperationalLimits::VoltageLimit;
}

// cim:CurrentLimit
BaseClass* CurrentLimit_factory()
{
	return new IEC61970::Base::OperationalLimits::CurrentLimit;
}

// cim:BranchGroup
BaseClass* BranchGroup_factory()
{
	return new IEC61970::Base::OperationalLimits::BranchGroup;
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

// cim:BasePower
BaseClass* BasePower_factory()
{
	return new IEC61970::Base::Core::BasePower;
}

// cim:ReportingSuperGroup
BaseClass* ReportingSuperGroup_factory()
{
	return new IEC61970::Base::Core::ReportingSuperGroup;
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

// cim:BaseFrequency
BaseClass* BaseFrequency_factory()
{
	return new IEC61970::Base::Core::BaseFrequency;
}

// cim:Name
BaseClass* Name_factory()
{
	return new IEC61970::Base::Core::Name;
}

// cim:GeographicalRegion
BaseClass* GeographicalRegion_factory()
{
	return new IEC61970::Base::Core::GeographicalRegion;
}

// cim:DateInterval
BaseClass* DateInterval_factory()
{
	return new IEC61970::Base::Domain::DateInterval;
}

// cim:MonthDayInterval
BaseClass* MonthDayInterval_factory()
{
	return new IEC61970::Base::Domain::MonthDayInterval;
}

// cim:URI
BaseClass* URI_factory()
{
	return new IEC61970::Part552Header::URI;
}

// cim:Model
BaseClass* Model_factory()
{
	return new IEC61970::Part552Header::ModelDescription::Model;
}

// cim:FullModel
BaseClass* FullModel_factory()
{
	return new IEC61970::Part552Header::ModelDescription::FullModel;
}

// cim:Statements
BaseClass* Statements_factory()
{
	return new IEC61970::Part552Header::Statements;
}

// cim:DifferenceModel
BaseClass* DifferenceModel_factory()
{
	return new IEC61970::Part552Header::DifferenceModel::DifferenceModel;
}

// cim:Profile
BaseClass* Profile_factory()
{
	return new IEC61970::Part303::GenericDataset::Profile;
}

// cim:DataSet
BaseClass* DataSet_factory()
{
	return new IEC61970::Part303::GenericDataset::DataSet;
}

// cim:InstanceSet
BaseClass* InstanceSet_factory()
{
	return new IEC61970::Part303::GenericDataset::InstanceSet;
}

// cim:ChangeSet
BaseClass* ChangeSet_factory()
{
	return new IEC61970::Part303::GenericDataset::ChangeSet;
}

// cim:DataSetMember
BaseClass* DataSetMember_factory()
{
	return new IEC61970::Part303::GenericDataset::DataSetMember;
}

// cim:ChangeSetMember
BaseClass* ChangeSetMember_factory()
{
	return new IEC61970::Part303::GenericDataset::ChangeSetMember;
}

// cim:ObjectDeletion
BaseClass* ObjectDeletion_factory()
{
	return new IEC61970::Part303::GenericDataset::ObjectDeletion;
}

// cim:ObjectModification
BaseClass* ObjectModification_factory()
{
	return new IEC61970::Part303::GenericDataset::ObjectModification;
}

// cim:ObjectReverseModification
BaseClass* ObjectReverseModification_factory()
{
	return new IEC61970::Part303::GenericDataset::ObjectReverseModification;
}

// cim:ObjectCreation
BaseClass* ObjectCreation_factory()
{
	return new IEC61970::Part303::GenericDataset::ObjectCreation;
}

// cim:InstanceSetMember
BaseClass* InstanceSetMember_factory()
{
	return new IEC61970::Part303::GenericDataset::InstanceSetMember;
}

// cim:GenericDataSetVersion
BaseClass* GenericDataSetVersion_factory()
{
	return new IEC61970::Part303::GenericDataset::GenericDataSetVersion;
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

// cim:MechanicalLoadDynamics
BaseClass* MechanicalLoadDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::MechanicalLoadDynamics::MechanicalLoadDynamics;
}

// cim:MechanicalLoadUserDefined
BaseClass* MechanicalLoadUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::MechanicalLoadUserDefined;
}

// cim:ExcitationSystemDynamics
BaseClass* ExcitationSystemDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics;
}

// cim:PFVArControllerType1Dynamics
BaseClass* PFVArControllerType1Dynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArControllerType1Dynamics;
}

// cim:PFVArControllerType1UserDefined
BaseClass* PFVArControllerType1UserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::PFVArControllerType1UserDefined;
}

// cim:OverexcitationLimiterDynamics
BaseClass* OverexcitationLimiterDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcitationLimiterDynamics;
}

// cim:OverexcitationLimiterUserDefined
BaseClass* OverexcitationLimiterUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::OverexcitationLimiterUserDefined;
}

// cim:LoadDynamics
BaseClass* LoadDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::LoadDynamics::LoadDynamics;
}

// cim:LoadUserDefined
BaseClass* LoadUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::LoadUserDefined;
}

// cim:VoltageCompensatorDynamics
BaseClass* VoltageCompensatorDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VoltageCompensatorDynamics;
}

// cim:VoltageCompensatorUserDefined
BaseClass* VoltageCompensatorUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::VoltageCompensatorUserDefined;
}

// cim:PFVArControllerType2Dynamics
BaseClass* PFVArControllerType2Dynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::PFVArControllerType2Dynamics::PFVArControllerType2Dynamics;
}

// cim:PFVArControllerType2UserDefined
BaseClass* PFVArControllerType2UserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::PFVArControllerType2UserDefined;
}

// cim:VoltageAdjusterDynamics
BaseClass* VoltageAdjusterDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::VoltageAdjusterDynamics::VoltageAdjusterDynamics;
}

// cim:VoltageAdjusterUserDefined
BaseClass* VoltageAdjusterUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::VoltageAdjusterUserDefined;
}

// cim:DiscontinuousExcitationControlDynamics
BaseClass* DiscontinuousExcitationControlDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics;
}

// cim:DiscontinuousExcitationControlUserDefined
BaseClass* DiscontinuousExcitationControlUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::DiscontinuousExcitationControlUserDefined;
}

// cim:PowerSystemStabilizerDynamics
BaseClass* PowerSystemStabilizerDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics;
}

// cim:PowerSystemStabilizerUserDefined
BaseClass* PowerSystemStabilizerUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::PowerSystemStabilizerUserDefined;
}

// cim:UnderexcitationLimiterDynamics
BaseClass* UnderexcitationLimiterDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics;
}

// cim:UnderexcitationLimiterUserDefined
BaseClass* UnderexcitationLimiterUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::UnderexcitationLimiterUserDefined;
}

// cim:ExcitationSystemUserDefined
BaseClass* ExcitationSystemUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::ExcitationSystemUserDefined;
}

// cim:TurbineLoadControllerDynamics
BaseClass* TurbineLoadControllerDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineLoadControllerDynamics::TurbineLoadControllerDynamics;
}

// cim:TurbineLoadControllerUserDefined
BaseClass* TurbineLoadControllerUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::TurbineLoadControllerUserDefined;
}

// cim:TurbineGovernorUserDefined
BaseClass* TurbineGovernorUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::TurbineGovernorUserDefined;
}

// cim:AsynchronousMachineUserDefined
BaseClass* AsynchronousMachineUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::AsynchronousMachineUserDefined;
}

// cim:SynchronousMachineUserDefined
BaseClass* SynchronousMachineUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::SynchronousMachineUserDefined;
}

// cim:ProprietaryParameterDynamics
BaseClass* ProprietaryParameterDynamics_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics;
}

// cim:WindTurbineType1or2Dynamics
BaseClass* WindTurbineType1or2Dynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2Dynamics;
}

// cim:WindType1or2UserDefined
BaseClass* WindType1or2UserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::WindType1or2UserDefined;
}

// cim:WindTurbineType3or4Dynamics
BaseClass* WindTurbineType3or4Dynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4Dynamics;
}

// cim:WindPlantDynamics
BaseClass* WindPlantDynamics_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantDynamics;
}

// cim:WindPlantUserDefined
BaseClass* WindPlantUserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::WindPlantUserDefined;
}

// cim:WindType3or4UserDefined
BaseClass* WindType3or4UserDefined_factory()
{
	return new IEC61970::Dynamics::UserDefinedModels::WindType3or4UserDefined;
}

// cim:GovHydroWEH
BaseClass* GovHydroWEH_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroWEH;
}

// cim:GovSteam0
BaseClass* GovSteam0_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteam0;
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

// cim:GovCT1
BaseClass* GovCT1_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovCT1;
}

// cim:GovSteamFV3
BaseClass* GovSteamFV3_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteamFV3;
}

// cim:GovHydroPID2
BaseClass* GovHydroPID2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroPID2;
}

// cim:GovSteam1
BaseClass* GovSteam1_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteam1;
}

// cim:GovSteamCC
BaseClass* GovSteamCC_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteamCC;
}

// cim:GovSteamSGO
BaseClass* GovSteamSGO_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteamSGO;
}

// cim:GovHydroDD
BaseClass* GovHydroDD_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroDD;
}

// cim:GovHydroIEEE2
BaseClass* GovHydroIEEE2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroIEEE2;
}

// cim:GovHydroIEEE0
BaseClass* GovHydroIEEE0_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroIEEE0;
}

// cim:GovGAST3
BaseClass* GovGAST3_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovGAST3;
}

// cim:GovCT2
BaseClass* GovCT2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovCT2;
}

// cim:GovGAST1
BaseClass* GovGAST1_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovGAST1;
}

// cim:GovHydroWPID
BaseClass* GovHydroWPID_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroWPID;
}

// cim:GovGAST2
BaseClass* GovGAST2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovGAST2;
}

// cim:GovSteamIEEE1
BaseClass* GovSteamIEEE1_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteamIEEE1;
}

// cim:GovHydroR
BaseClass* GovHydroR_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroR;
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

// cim:GovHydroFrancis
BaseClass* GovHydroFrancis_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroFrancis;
}

// cim:GovHydro2
BaseClass* GovHydro2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydro2;
}

// cim:GovGAST
BaseClass* GovGAST_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovGAST;
}

// cim:GovHydroPID
BaseClass* GovHydroPID_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroPID;
}

// cim:GovSteam2
BaseClass* GovSteam2_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteam2;
}

// cim:GovSteamFV4
BaseClass* GovSteamFV4_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovSteamFV4;
}

// cim:GovHydro4
BaseClass* GovHydro4_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydro4;
}

// cim:GovHydroPelton
BaseClass* GovHydroPelton_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydroPelton;
}

// cim:GovGAST4
BaseClass* GovGAST4_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovGAST4;
}

// cim:GovHydro3
BaseClass* GovHydro3_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::GovHydro3;
}

// cim:SynchronousMachineSimplified
BaseClass* SynchronousMachineSimplified_factory()
{
	return new IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineSimplified;
}

// cim:SynchronousMachineDetailed
BaseClass* SynchronousMachineDetailed_factory()
{
	return new IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDetailed;
}

// cim:SynchronousMachineTimeConstantReactance
BaseClass* SynchronousMachineTimeConstantReactance_factory()
{
	return new IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineTimeConstantReactance;
}

// cim:SynchronousMachineEquivalentCircuit
BaseClass* SynchronousMachineEquivalentCircuit_factory()
{
	return new IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineEquivalentCircuit;
}

// cim:WindTurbineType3or4IEC
BaseClass* WindTurbineType3or4IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC;
}

// cim:WindTurbineType3IEC
BaseClass* WindTurbineType3IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3IEC;
}

// cim:WindGenType3IEC
BaseClass* WindGenType3IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType3IEC;
}

// cim:WindAeroOneDimIEC
BaseClass* WindAeroOneDimIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindAeroOneDimIEC;
}

// cim:WindTurbineType1or2IEC
BaseClass* WindTurbineType1or2IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2IEC;
}

// cim:WindGenTurbineType2IEC
BaseClass* WindGenTurbineType2IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType2IEC;
}

// cim:WindPitchContPowerIEC
BaseClass* WindPitchContPowerIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindPitchContPowerIEC;
}

// cim:WindGenTurbineType1bIEC
BaseClass* WindGenTurbineType1bIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType1bIEC;
}

// cim:WindTurbineType4IEC
BaseClass* WindTurbineType4IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4IEC;
}

// cim:WindTurbineType4bIEC
BaseClass* WindTurbineType4bIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4bIEC;
}

// cim:WindRefFrameRotIEC
BaseClass* WindRefFrameRotIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindRefFrameRotIEC;
}

// cim:WindPlantReactiveControlIEC
BaseClass* WindPlantReactiveControlIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantReactiveControlIEC;
}

// cim:WindGenTurbineType1aIEC
BaseClass* WindGenTurbineType1aIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType1aIEC;
}

// cim:WindAeroConstIEC
BaseClass* WindAeroConstIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindAeroConstIEC;
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

// cim:WindProtectionIEC
BaseClass* WindProtectionIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindProtectionIEC;
}

// cim:WindContQPQULimIEC
BaseClass* WindContQPQULimIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContQPQULimIEC;
}

// cim:WindContCurrLimIEC
BaseClass* WindContCurrLimIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContCurrLimIEC;
}

// cim:WindContPType3IEC
BaseClass* WindContPType3IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType3IEC;
}

// cim:WindContRotorRIEC
BaseClass* WindContRotorRIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContRotorRIEC;
}

// cim:WindGenType3bIEC
BaseClass* WindGenType3bIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType3bIEC;
}

// cim:WindDynamicsLookupTable
BaseClass* WindDynamicsLookupTable_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable;
}

// cim:WindTurbineType4aIEC
BaseClass* WindTurbineType4aIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType4aIEC;
}

// cim:WindGenType4IEC
BaseClass* WindGenType4IEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType4IEC;
}

// cim:WindGenType3aIEC
BaseClass* WindGenType3aIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType3aIEC;
}

// cim:WindContQIEC
BaseClass* WindContQIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContQIEC;
}

// cim:WindContPType4aIEC
BaseClass* WindContPType4aIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType4aIEC;
}

// cim:WindContPitchAngleIEC
BaseClass* WindContPitchAngleIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContPitchAngleIEC;
}

// cim:WindContQLimIEC
BaseClass* WindContQLimIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContQLimIEC;
}

// cim:WindMechIEC
BaseClass* WindMechIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindMechIEC;
}

// cim:WindContPType4bIEC
BaseClass* WindContPType4bIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindContPType4bIEC;
}

// cim:WindAeroTwoDimIEC
BaseClass* WindAeroTwoDimIEC_factory()
{
	return new IEC61970::Dynamics::StandardModels::WindDynamics::WindAeroTwoDimIEC;
}

// cim:TurbLCFB1
BaseClass* TurbLCFB1_factory()
{
	return new IEC61970::Dynamics::StandardModels::TurbineLoadControllerDynamics::TurbLCFB1;
}

// cim:PFVArType1IEEEVArController
BaseClass* PFVArType1IEEEVArController_factory()
{
	return new IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArType1IEEEVArController;
}

// cim:PFVArType1IEEEPFController
BaseClass* PFVArType1IEEEPFController_factory()
{
	return new IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArType1IEEEPFController;
}

// cim:MechLoad1
BaseClass* MechLoad1_factory()
{
	return new IEC61970::Dynamics::StandardModels::MechanicalLoadDynamics::MechLoad1;
}

// cim:PFVArType2IEEEVArController
BaseClass* PFVArType2IEEEVArController_factory()
{
	return new IEC61970::Dynamics::StandardModels::PFVArControllerType2Dynamics::PFVArType2IEEEVArController;
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

// cim:OverexcLimIEEE
BaseClass* OverexcLimIEEE_factory()
{
	return new IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcLimIEEE;
}

// cim:OverexcLim2
BaseClass* OverexcLim2_factory()
{
	return new IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcLim2;
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

// cim:LoadAggregate
BaseClass* LoadAggregate_factory()
{
	return new IEC61970::Dynamics::StandardModels::LoadDynamics::LoadAggregate;
}

// cim:LoadStatic
BaseClass* LoadStatic_factory()
{
	return new IEC61970::Dynamics::StandardModels::LoadDynamics::LoadStatic;
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

// cim:LoadComposite
BaseClass* LoadComposite_factory()
{
	return new IEC61970::Dynamics::StandardModels::LoadDynamics::LoadComposite;
}

// cim:PssSH
BaseClass* PssSH_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssSH;
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

// cim:Pss1A
BaseClass* Pss1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::Pss1A;
}

// cim:PssELIN2
BaseClass* PssELIN2_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssELIN2;
}

// cim:Pss2B
BaseClass* Pss2B_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::Pss2B;
}

// cim:PssIEEE4B
BaseClass* PssIEEE4B_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssIEEE4B;
}

// cim:PssPTIST3
BaseClass* PssPTIST3_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssPTIST3;
}

// cim:PssPTIST1
BaseClass* PssPTIST1_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssPTIST1;
}

// cim:PssIEEE3B
BaseClass* PssIEEE3B_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssIEEE3B;
}

// cim:PssSK
BaseClass* PssSK_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssSK;
}

// cim:PssSB4
BaseClass* PssSB4_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssSB4;
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

// cim:Pss1
BaseClass* Pss1_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::Pss1;
}

// cim:PssWECC
BaseClass* PssWECC_factory()
{
	return new IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PssWECC;
}

// cim:UnderexcLimIEEE2
BaseClass* UnderexcLimIEEE2_factory()
{
	return new IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcLimIEEE2;
}

// cim:UnderexcLimIEEE1
BaseClass* UnderexcLimIEEE1_factory()
{
	return new IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcLimIEEE1;
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

// cim:UnderexcLim2Simplified
BaseClass* UnderexcLim2Simplified_factory()
{
	return new IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcLim2Simplified;
}

// cim:VAdjIEEE
BaseClass* VAdjIEEE_factory()
{
	return new IEC61970::Dynamics::StandardModels::VoltageAdjusterDynamics::VAdjIEEE;
}

// cim:ExcAVR7
BaseClass* ExcAVR7_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAVR7;
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

// cim:ExcIEEEAC8B
BaseClass* ExcIEEEAC8B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC8B;
}

// cim:ExcIEEEDC4B
BaseClass* ExcIEEEDC4B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEDC4B;
}

// cim:ExcAC3A
BaseClass* ExcAC3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC3A;
}

// cim:ExcST2A
BaseClass* ExcST2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST2A;
}

// cim:ExcDC3A
BaseClass* ExcDC3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcDC3A;
}

// cim:ExcAVR4
BaseClass* ExcAVR4_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAVR4;
}

// cim:ExcIEEEST2A
BaseClass* ExcIEEEST2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST2A;
}

// cim:ExcIEEEDC3A
BaseClass* ExcIEEEDC3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEDC3A;
}

// cim:ExcST1A
BaseClass* ExcST1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST1A;
}

// cim:ExcDC1A
BaseClass* ExcDC1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcDC1A;
}

// cim:ExcIEEEAC2A
BaseClass* ExcIEEEAC2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC2A;
}

// cim:ExcST3A
BaseClass* ExcST3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST3A;
}

// cim:ExcIEEEDC1A
BaseClass* ExcIEEEDC1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEDC1A;
}

// cim:ExcDC3A1
BaseClass* ExcDC3A1_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcDC3A1;
}

// cim:ExcIEEEST6B
BaseClass* ExcIEEEST6B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST6B;
}

// cim:ExcOEX3T
BaseClass* ExcOEX3T_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcOEX3T;
}

// cim:ExcHU
BaseClass* ExcHU_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcHU;
}

// cim:ExcAC4A
BaseClass* ExcAC4A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC4A;
}

// cim:ExcSCRX
BaseClass* ExcSCRX_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcSCRX;
}

// cim:ExcSK
BaseClass* ExcSK_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcSK;
}

// cim:ExcANS
BaseClass* ExcANS_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcANS;
}

// cim:ExcDC2A
BaseClass* ExcDC2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcDC2A;
}

// cim:ExcAVR1
BaseClass* ExcAVR1_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAVR1;
}

// cim:ExcST7B
BaseClass* ExcST7B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST7B;
}

// cim:ExcAC5A
BaseClass* ExcAC5A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC5A;
}

// cim:ExcIEEEAC3A
BaseClass* ExcIEEEAC3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC3A;
}

// cim:ExcAVR5
BaseClass* ExcAVR5_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAVR5;
}

// cim:ExcST4B
BaseClass* ExcST4B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST4B;
}

// cim:ExcIEEEDC2A
BaseClass* ExcIEEEDC2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEDC2A;
}

// cim:ExcIEEEST4B
BaseClass* ExcIEEEST4B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST4B;
}

// cim:ExcAC2A
BaseClass* ExcAC2A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC2A;
}

// cim:ExcIEEEST3A
BaseClass* ExcIEEEST3A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST3A;
}

// cim:ExcAC6A
BaseClass* ExcAC6A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC6A;
}

// cim:ExcIEEEAC1A
BaseClass* ExcIEEEAC1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC1A;
}

// cim:ExcIEEEST7B
BaseClass* ExcIEEEST7B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST7B;
}

// cim:ExcIEEEAC6A
BaseClass* ExcIEEEAC6A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC6A;
}

// cim:ExcIEEEAC4A
BaseClass* ExcIEEEAC4A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC4A;
}

// cim:ExcAC1A
BaseClass* ExcAC1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC1A;
}

// cim:ExcST6B
BaseClass* ExcST6B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST6B;
}

// cim:ExcAVR3
BaseClass* ExcAVR3_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAVR3;
}

// cim:ExcAC8B
BaseClass* ExcAC8B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAC8B;
}

// cim:ExcAVR2
BaseClass* ExcAVR2_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcAVR2;
}

// cim:ExcELIN1
BaseClass* ExcELIN1_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcELIN1;
}

// cim:ExcCZ
BaseClass* ExcCZ_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcCZ;
}

// cim:ExcIEEEAC7B
BaseClass* ExcIEEEAC7B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC7B;
}

// cim:ExcELIN2
BaseClass* ExcELIN2_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcELIN2;
}

// cim:ExcBBC
BaseClass* ExcBBC_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcBBC;
}

// cim:ExcIEEEST1A
BaseClass* ExcIEEEST1A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST1A;
}

// cim:ExcIEEEAC5A
BaseClass* ExcIEEEAC5A_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEAC5A;
}

// cim:ExcSEXS
BaseClass* ExcSEXS_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcSEXS;
}

// cim:ExcIEEEST5B
BaseClass* ExcIEEEST5B_factory()
{
	return new IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcIEEEST5B;
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

static std::unordered_map<std::string, BaseClass* (*)()> initialize()
{
	std::unordered_map<std::string, BaseClass* (*)()> map;

	map.insert(std::make_pair("cim:UncefactUnitCode", &UncefactUnitCode_factory));
	map.insert(std::make_pair("cim:IdentifiedObject", &IdentifiedObject_factory));
	map.insert(std::make_pair("cim:BilateralExchangeActor", &BilateralExchangeActor_factory));
	map.insert(std::make_pair("cim:ProvidedBilateralPoint", &ProvidedBilateralPoint_factory));
	map.insert(std::make_pair("cim:IOPoint", &IOPoint_factory));
	map.insert(std::make_pair("cim:Control", &Control_factory));
	map.insert(std::make_pair("cim:ACDCTerminal", &ACDCTerminal_factory));
	map.insert(std::make_pair("cim:Measurement", &Measurement_factory));
	map.insert(std::make_pair("cim:PSRType", &PSRType_factory));
	map.insert(std::make_pair("cim:FaultCauseType", &FaultCauseType_factory));
	map.insert(std::make_pair("cim:Status", &Status_factory));
	map.insert(std::make_pair("cim:ActivityRecord", &ActivityRecord_factory));
	map.insert(std::make_pair("cim:ConfigurationEvent", &ConfigurationEvent_factory));
	map.insert(std::make_pair("cim:PowerSystemResource", &PowerSystemResource_factory));
	map.insert(std::make_pair("cim:AssetInfo", &AssetInfo_factory));
	map.insert(std::make_pair("cim:Mass", &Mass_factory));
	map.insert(std::make_pair("cim:SwitchInfo", &SwitchInfo_factory));
	map.insert(std::make_pair("cim:RegulatingControl", &RegulatingControl_factory));
	map.insert(std::make_pair("cim:ShuntCompensatorControl", &ShuntCompensatorControl_factory));
	map.insert(std::make_pair("cim:ShuntCompensatorInfo", &ShuntCompensatorInfo_factory));
	map.insert(std::make_pair("cim:PerLengthLineParameter", &PerLengthLineParameter_factory));
	map.insert(std::make_pair("cim:WireAssemblyInfo", &WireAssemblyInfo_factory));
	map.insert(std::make_pair("cim:WirePhaseInfo", &WirePhaseInfo_factory));
	map.insert(std::make_pair("cim:WireInfo", &WireInfo_factory));
	map.insert(std::make_pair("cim:CableInfo", &CableInfo_factory));
	map.insert(std::make_pair("cim:TapeShieldCableInfo", &TapeShieldCableInfo_factory));
	map.insert(std::make_pair("cim:OverheadWireInfo", &OverheadWireInfo_factory));
	map.insert(std::make_pair("cim:ConcentricNeutralCableInfo", &ConcentricNeutralCableInfo_factory));
	map.insert(std::make_pair("cim:TapChangerControl", &TapChangerControl_factory));
	map.insert(std::make_pair("cim:TapChanger", &TapChanger_factory));
	map.insert(std::make_pair("cim:PhaseTapChanger", &PhaseTapChanger_factory));
	map.insert(std::make_pair("cim:TransformerStarImpedance", &TransformerStarImpedance_factory));
	map.insert(std::make_pair("cim:RatioTapChangerTable", &RatioTapChangerTable_factory));
	map.insert(std::make_pair("cim:RatioTapChanger", &RatioTapChanger_factory));
	map.insert(std::make_pair("cim:Equipment", &Equipment_factory));
	map.insert(std::make_pair("cim:ConductingEquipment", &ConductingEquipment_factory));
	map.insert(std::make_pair("cim:BaseVoltage", &BaseVoltage_factory));
	map.insert(std::make_pair("cim:ConnectivityNodeContainer", &ConnectivityNodeContainer_factory));
	map.insert(std::make_pair("cim:ConnectivityNode", &ConnectivityNode_factory));
	map.insert(std::make_pair("cim:Terminal", &Terminal_factory));
	map.insert(std::make_pair("cim:TransformerEnd", &TransformerEnd_factory));
	map.insert(std::make_pair("cim:TransformerCoreAdmittance", &TransformerCoreAdmittance_factory));
	map.insert(std::make_pair("cim:TransformerMeshImpedance", &TransformerMeshImpedance_factory));
	map.insert(std::make_pair("cim:TransformerEndInfo", &TransformerEndInfo_factory));
	map.insert(std::make_pair("cim:TransformerTest", &TransformerTest_factory));
	map.insert(std::make_pair("cim:OpenCircuitTest", &OpenCircuitTest_factory));
	map.insert(std::make_pair("cim:NoLoadTest", &NoLoadTest_factory));
	map.insert(std::make_pair("cim:PowerTransformerInfo", &PowerTransformerInfo_factory));
	map.insert(std::make_pair("cim:ShortCircuitTest", &ShortCircuitTest_factory));
	map.insert(std::make_pair("cim:TapChangerInfo", &TapChangerInfo_factory));
	map.insert(std::make_pair("cim:TransformerTankInfo", &TransformerTankInfo_factory));
	map.insert(std::make_pair("cim:OperatingMechanismInfo", &OperatingMechanismInfo_factory));
	map.insert(std::make_pair("cim:InterrupterUnitInfo", &InterrupterUnitInfo_factory));
	map.insert(std::make_pair("cim:WirePosition", &WirePosition_factory));
	map.insert(std::make_pair("cim:Seal", &Seal_factory));
	map.insert(std::make_pair("cim:AcceptanceTest", &AcceptanceTest_factory));
	map.insert(std::make_pair("cim:ElectronicAddress", &ElectronicAddress_factory));
	map.insert(std::make_pair("cim:InUseDate", &InUseDate_factory));
	map.insert(std::make_pair("cim:LifecycleDate", &LifecycleDate_factory));
	map.insert(std::make_pair("cim:ErpIdentifiedObject", &ErpIdentifiedObject_factory));
	map.insert(std::make_pair("cim:ErpInventory", &ErpInventory_factory));
	map.insert(std::make_pair("cim:TelephoneNumber", &TelephoneNumber_factory));
	map.insert(std::make_pair("cim:StreetDetail", &StreetDetail_factory));
	map.insert(std::make_pair("cim:TownDetail", &TownDetail_factory));
	map.insert(std::make_pair("cim:StreetAddress", &StreetAddress_factory));
	map.insert(std::make_pair("cim:Organisation", &Organisation_factory));
	map.insert(std::make_pair("cim:OrganisationRole", &OrganisationRole_factory));
	map.insert(std::make_pair("cim:AssetOrganisationRole", &AssetOrganisationRole_factory));
	map.insert(std::make_pair("cim:AssetFunction", &AssetFunction_factory));
	map.insert(std::make_pair("cim:CurveData", &CurveData_factory));
	map.insert(std::make_pair("cim:Curve", &Curve_factory));
	map.insert(std::make_pair("cim:AssetPropertyCurve", &AssetPropertyCurve_factory));
	map.insert(std::make_pair("cim:Document", &Document_factory));
	map.insert(std::make_pair("cim:ErpDocument", &ErpDocument_factory));
	map.insert(std::make_pair("cim:ErpReceiveDelivery", &ErpReceiveDelivery_factory));
	map.insert(std::make_pair("cim:ErpPurchaseOrder", &ErpPurchaseOrder_factory));
	map.insert(std::make_pair("cim:ErpPOLineItem", &ErpPOLineItem_factory));
	map.insert(std::make_pair("cim:ErpRecDelvLineItem", &ErpRecDelvLineItem_factory));
	map.insert(std::make_pair("cim:DeploymentDate", &DeploymentDate_factory));
	map.insert(std::make_pair("cim:AssetDeployment", &AssetDeployment_factory));
	map.insert(std::make_pair("cim:WindingInsulation", &WindingInsulation_factory));
	map.insert(std::make_pair("cim:PowerTransformerEnd", &PowerTransformerEnd_factory));
	map.insert(std::make_pair("cim:PowerTransformer", &PowerTransformer_factory));
	map.insert(std::make_pair("cim:TransformerTank", &TransformerTank_factory));
	map.insert(std::make_pair("cim:TransformerObservation", &TransformerObservation_factory));
	map.insert(std::make_pair("cim:Reconditioning", &Reconditioning_factory));
	map.insert(std::make_pair("cim:Manufacturer", &Manufacturer_factory));
	map.insert(std::make_pair("cim:ErpRequisition", &ErpRequisition_factory));
	map.insert(std::make_pair("cim:ErpReqLineItem", &ErpReqLineItem_factory));
	map.insert(std::make_pair("cim:ErpQuote", &ErpQuote_factory));
	map.insert(std::make_pair("cim:WorkDocument", &WorkDocument_factory));
	map.insert(std::make_pair("cim:Project", &Project_factory));
	map.insert(std::make_pair("cim:ErpProjectAccounting", &ErpProjectAccounting_factory));
	map.insert(std::make_pair("cim:ErpPayable", &ErpPayable_factory));
	map.insert(std::make_pair("cim:WorkIdentifiedObject", &WorkIdentifiedObject_factory));
	map.insert(std::make_pair("cim:ContractorItem", &ContractorItem_factory));
	map.insert(std::make_pair("cim:WorkCostSummary", &WorkCostSummary_factory));
	map.insert(std::make_pair("cim:MaterialItem", &MaterialItem_factory));
	map.insert(std::make_pair("cim:TypeMaterial", &TypeMaterial_factory));
	map.insert(std::make_pair("cim:CUMaterialItem", &CUMaterialItem_factory));
	map.insert(std::make_pair("cim:PropertyUnit", &PropertyUnit_factory));
	map.insert(std::make_pair("cim:Priority", &Priority_factory));
	map.insert(std::make_pair("cim:WorkActivityRecord", &WorkActivityRecord_factory));
	map.insert(std::make_pair("cim:OneCallRequest", &OneCallRequest_factory));
	map.insert(std::make_pair("cim:CoordinateSystem", &CoordinateSystem_factory));
	map.insert(std::make_pair("cim:CrewType", &CrewType_factory));
	map.insert(std::make_pair("cim:DateTimeInterval", &DateTimeInterval_factory));
	map.insert(std::make_pair("cim:Appointment", &Appointment_factory));
	map.insert(std::make_pair("cim:PersonRole", &PersonRole_factory));
	map.insert(std::make_pair("cim:OperationPersonRole", &OperationPersonRole_factory));
	map.insert(std::make_pair("cim:CrewMember", &CrewMember_factory));
	map.insert(std::make_pair("cim:Crew", &Crew_factory));
	map.insert(std::make_pair("cim:ServicePointOutageSummary", &ServicePointOutageSummary_factory));
	map.insert(std::make_pair("cim:FaultImpedance", &FaultImpedance_factory));
	map.insert(std::make_pair("cim:Fault", &Fault_factory));
	map.insert(std::make_pair("cim:ServiceMultiplier", &ServiceMultiplier_factory));
	map.insert(std::make_pair("cim:AccountingUnit", &AccountingUnit_factory));
	map.insert(std::make_pair("cim:Charge", &Charge_factory));
	map.insert(std::make_pair("cim:TimeTariffInterval", &TimeTariffInterval_factory));
	map.insert(std::make_pair("cim:RationalNumber", &RationalNumber_factory));
	map.insert(std::make_pair("cim:ReadingInterharmonic", &ReadingInterharmonic_factory));
	map.insert(std::make_pair("cim:Channel", &Channel_factory));
	map.insert(std::make_pair("cim:ReadingType", &ReadingType_factory));
	map.insert(std::make_pair("cim:ConsumptionTariffInterval", &ConsumptionTariffInterval_factory));
	map.insert(std::make_pair("cim:TariffProfile", &TariffProfile_factory));
	map.insert(std::make_pair("cim:Tariff", &Tariff_factory));
	map.insert(std::make_pair("cim:PricingStructure", &PricingStructure_factory));
	map.insert(std::make_pair("cim:ServiceCategory", &ServiceCategory_factory));
	map.insert(std::make_pair("cim:UsagePoint", &UsagePoint_factory));
	map.insert(std::make_pair("cim:SwitchPhase", &SwitchPhase_factory));
	map.insert(std::make_pair("cim:RegularTimePoint", &RegularTimePoint_factory));
	map.insert(std::make_pair("cim:BasicIntervalSchedule", &BasicIntervalSchedule_factory));
	map.insert(std::make_pair("cim:RegularIntervalSchedule", &RegularIntervalSchedule_factory));
	map.insert(std::make_pair("cim:SeasonDayTypeSchedule", &SeasonDayTypeSchedule_factory));
	map.insert(std::make_pair("cim:SwitchSchedule", &SwitchSchedule_factory));
	map.insert(std::make_pair("cim:Switch", &Switch_factory));
	map.insert(std::make_pair("cim:Operator", &Operator_factory));
	map.insert(std::make_pair("cim:SwitchingAction", &SwitchingAction_factory));
	map.insert(std::make_pair("cim:SwitchAction", &SwitchAction_factory));
	map.insert(std::make_pair("cim:Outage", &Outage_factory));
	map.insert(std::make_pair("cim:SwitchingStepGroup", &SwitchingStepGroup_factory));
	map.insert(std::make_pair("cim:SafetyDocument", &SafetyDocument_factory));
	map.insert(std::make_pair("cim:SwitchingPlan", &SwitchingPlan_factory));
	map.insert(std::make_pair("cim:SwitchingOrder", &SwitchingOrder_factory));
	map.insert(std::make_pair("cim:PositionPoint", &PositionPoint_factory));
	map.insert(std::make_pair("cim:Location", &Location_factory));
	map.insert(std::make_pair("cim:WorkLocation", &WorkLocation_factory));
	map.insert(std::make_pair("cim:TimePoint", &TimePoint_factory));
	map.insert(std::make_pair("cim:TimeSchedule", &TimeSchedule_factory));
	map.insert(std::make_pair("cim:WorkTimeSchedule", &WorkTimeSchedule_factory));
	map.insert(std::make_pair("cim:BaseWork", &BaseWork_factory));
	map.insert(std::make_pair("cim:WorkTask", &WorkTask_factory));
	map.insert(std::make_pair("cim:Work", &Work_factory));
	map.insert(std::make_pair("cim:WorkCostDetail", &WorkCostDetail_factory));
	map.insert(std::make_pair("cim:ErpBOM", &ErpBOM_factory));
	map.insert(std::make_pair("cim:LaborItem", &LaborItem_factory));
	map.insert(std::make_pair("cim:OverheadCost", &OverheadCost_factory));
	map.insert(std::make_pair("cim:Medium", &Medium_factory));
	map.insert(std::make_pair("cim:Specification", &Specification_factory));
	map.insert(std::make_pair("cim:QualificationRequirement", &QualificationRequirement_factory));
	map.insert(std::make_pair("cim:Usage", &Usage_factory));
	map.insert(std::make_pair("cim:OldWorkTask", &OldWorkTask_factory));
	map.insert(std::make_pair("cim:ConditionFactor", &ConditionFactor_factory));
	map.insert(std::make_pair("cim:Design", &Design_factory));
	map.insert(std::make_pair("cim:ErpQuoteLineItem", &ErpQuoteLineItem_factory));
	map.insert(std::make_pair("cim:AssetModelCatalogue", &AssetModelCatalogue_factory));
	map.insert(std::make_pair("cim:AssetModelCatalogueItem", &AssetModelCatalogueItem_factory));
	map.insert(std::make_pair("cim:TypeAssetCatalogue", &TypeAssetCatalogue_factory));
	map.insert(std::make_pair("cim:MiscCostItem", &MiscCostItem_factory));
	map.insert(std::make_pair("cim:CUGroup", &CUGroup_factory));
	map.insert(std::make_pair("cim:DesignLocationCU", &DesignLocationCU_factory));
	map.insert(std::make_pair("cim:DesignLocation", &DesignLocation_factory));
	map.insert(std::make_pair("cim:ErpBomItemData", &ErpBomItemData_factory));
	map.insert(std::make_pair("cim:CatalogAssetType", &CatalogAssetType_factory));
	map.insert(std::make_pair("cim:ProductAssetModel", &ProductAssetModel_factory));
	map.insert(std::make_pair("cim:Asset", &Asset_factory));
	map.insert(std::make_pair("cim:AssetContainer", &AssetContainer_factory));
	map.insert(std::make_pair("cim:StructureSupport", &StructureSupport_factory));
	map.insert(std::make_pair("cim:Structure", &Structure_factory));
	map.insert(std::make_pair("cim:DuctBank", &DuctBank_factory));
	map.insert(std::make_pair("cim:WireSpacing", &WireSpacing_factory));
	map.insert(std::make_pair("cim:BusbarSectionInfo", &BusbarSectionInfo_factory));
	map.insert(std::make_pair("cim:BushingInfo", &BushingInfo_factory));
	map.insert(std::make_pair("cim:RepairWorkTask", &RepairWorkTask_factory));
	map.insert(std::make_pair("cim:RepairItem", &RepairItem_factory));
	map.insert(std::make_pair("cim:WorkAsset", &WorkAsset_factory));
	map.insert(std::make_pair("cim:Tool", &Tool_factory));
	map.insert(std::make_pair("cim:MaintenanceWorkTask", &MaintenanceWorkTask_factory));
	map.insert(std::make_pair("cim:Vehicle", &Vehicle_factory));
	map.insert(std::make_pair("cim:MaintenanceLocation", &MaintenanceLocation_factory));
	map.insert(std::make_pair("cim:InternalLocation", &InternalLocation_factory));
	map.insert(std::make_pair("cim:Version", &Version_factory));
	map.insert(std::make_pair("cim:EndDeviceCapability", &EndDeviceCapability_factory));
	map.insert(std::make_pair("cim:EndDeviceInfo", &EndDeviceInfo_factory));
	map.insert(std::make_pair("cim:EndDeviceFunction", &EndDeviceFunction_factory));
	map.insert(std::make_pair("cim:DispatchablePowerCapability", &DispatchablePowerCapability_factory));
	map.insert(std::make_pair("cim:EndDevice", &EndDevice_factory));
	map.insert(std::make_pair("cim:EndDeviceTiming", &EndDeviceTiming_factory));
	map.insert(std::make_pair("cim:UsagePointGroup", &UsagePointGroup_factory));
	map.insert(std::make_pair("cim:EndDeviceAction", &EndDeviceAction_factory));
	map.insert(std::make_pair("cim:EndDeviceControlType", &EndDeviceControlType_factory));
	map.insert(std::make_pair("cim:EndDeviceControl", &EndDeviceControl_factory));
	map.insert(std::make_pair("cim:DERGroupDispatch", &DERGroupDispatch_factory));
	map.insert(std::make_pair("cim:DERMonitorableParameter", &DERMonitorableParameter_factory));
	map.insert(std::make_pair("cim:EndDeviceGroup", &EndDeviceGroup_factory));
	map.insert(std::make_pair("cim:DERGroupForecast", &DERGroupForecast_factory));
	map.insert(std::make_pair("cim:DispatchSchedule", &DispatchSchedule_factory));
	map.insert(std::make_pair("cim:DERFunction", &DERFunction_factory));
	map.insert(std::make_pair("cim:DERCurveData", &DERCurveData_factory));
	map.insert(std::make_pair("cim:LineDetail", &LineDetail_factory));
	map.insert(std::make_pair("cim:MeterMultiplier", &MeterMultiplier_factory));
	map.insert(std::make_pair("cim:EndDeviceEventType", &EndDeviceEventType_factory));
	map.insert(std::make_pair("cim:EndDeviceEventDetail", &EndDeviceEventDetail_factory));
	map.insert(std::make_pair("cim:EndDeviceEvent", &EndDeviceEvent_factory));
	map.insert(std::make_pair("cim:MeterReading", &MeterReading_factory));
	map.insert(std::make_pair("cim:Meter", &Meter_factory));
	map.insert(std::make_pair("cim:Transaction", &Transaction_factory));
	map.insert(std::make_pair("cim:Receipt", &Receipt_factory));
	map.insert(std::make_pair("cim:PointOfSale", &PointOfSale_factory));
	map.insert(std::make_pair("cim:Shift", &Shift_factory));
	map.insert(std::make_pair("cim:CashierShift", &CashierShift_factory));
	map.insert(std::make_pair("cim:Due", &Due_factory));
	map.insert(std::make_pair("cim:BankAccountDetail", &BankAccountDetail_factory));
	map.insert(std::make_pair("cim:Tender", &Tender_factory));
	map.insert(std::make_pair("cim:Cheque", &Cheque_factory));
	map.insert(std::make_pair("cim:Transactor", &Transactor_factory));
	map.insert(std::make_pair("cim:VendorShift", &VendorShift_factory));
	map.insert(std::make_pair("cim:MerchantAccount", &MerchantAccount_factory));
	map.insert(std::make_pair("cim:Agreement", &Agreement_factory));
	map.insert(std::make_pair("cim:AuxiliaryAgreement", &AuxiliaryAgreement_factory));
	map.insert(std::make_pair("cim:Card", &Card_factory));
	map.insert(std::make_pair("cim:AccountMovement", &AccountMovement_factory));
	map.insert(std::make_pair("cim:Cashier", &Cashier_factory));
	map.insert(std::make_pair("cim:AuxiliaryAccount", &AuxiliaryAccount_factory));
	map.insert(std::make_pair("cim:Bank", &Bank_factory));
	map.insert(std::make_pair("cim:BankAccount", &BankAccount_factory));
	map.insert(std::make_pair("cim:Hazard", &Hazard_factory));
	map.insert(std::make_pair("cim:IncidentHazard", &IncidentHazard_factory));
	map.insert(std::make_pair("cim:CustomerNotification", &CustomerNotification_factory));
	map.insert(std::make_pair("cim:Incident", &Incident_factory));
	map.insert(std::make_pair("cim:TroubleTicket", &TroubleTicket_factory));
	map.insert(std::make_pair("cim:ServiceLocation", &ServiceLocation_factory));
	map.insert(std::make_pair("cim:StandardIndustryCode", &StandardIndustryCode_factory));
	map.insert(std::make_pair("cim:CustomerAgreement", &CustomerAgreement_factory));
	map.insert(std::make_pair("cim:ServiceSupplier", &ServiceSupplier_factory));
	map.insert(std::make_pair("cim:Vendor", &Vendor_factory));
	map.insert(std::make_pair("cim:MerchantAgreement", &MerchantAgreement_factory));
	map.insert(std::make_pair("cim:PendingCalculation", &PendingCalculation_factory));
	map.insert(std::make_pair("cim:RemotePoint", &RemotePoint_factory));
	map.insert(std::make_pair("cim:RemoteSource", &RemoteSource_factory));
	map.insert(std::make_pair("cim:Quality61850", &Quality61850_factory));
	map.insert(std::make_pair("cim:MeasurementValueQuality", &MeasurementValueQuality_factory));
	map.insert(std::make_pair("cim:MeasurementValue", &MeasurementValue_factory));
	map.insert(std::make_pair("cim:BaseReading", &BaseReading_factory));
	map.insert(std::make_pair("cim:IntervalReading", &IntervalReading_factory));
	map.insert(std::make_pair("cim:IntervalBlock", &IntervalBlock_factory));
	map.insert(std::make_pair("cim:PanDisplay", &PanDisplay_factory));
	map.insert(std::make_pair("cim:DemandResponseProgram", &DemandResponseProgram_factory));
	map.insert(std::make_pair("cim:ComFunction", &ComFunction_factory));
	map.insert(std::make_pair("cim:ComModule", &ComModule_factory));
	map.insert(std::make_pair("cim:PanPricingDetail", &PanPricingDetail_factory));
	map.insert(std::make_pair("cim:PanPricing", &PanPricing_factory));
	map.insert(std::make_pair("cim:UsagePointLocation", &UsagePointLocation_factory));
	map.insert(std::make_pair("cim:ReadingQualityType", &ReadingQualityType_factory));
	map.insert(std::make_pair("cim:ControlledAppliance", &ControlledAppliance_factory));
	map.insert(std::make_pair("cim:PanDemandResponse", &PanDemandResponse_factory));
	map.insert(std::make_pair("cim:TimeInterval", &TimeInterval_factory));
	map.insert(std::make_pair("cim:Register", &Register_factory));
	map.insert(std::make_pair("cim:MeterWorkTask", &MeterWorkTask_factory));
	map.insert(std::make_pair("cim:ReadingQuality", &ReadingQuality_factory));
	map.insert(std::make_pair("cim:Reading", &Reading_factory));
	map.insert(std::make_pair("cim:SimpleEndDeviceFunction", &SimpleEndDeviceFunction_factory));
	map.insert(std::make_pair("cim:MetrologyRequirement", &MetrologyRequirement_factory));
	map.insert(std::make_pair("cim:ErpInvoice", &ErpInvoice_factory));
	map.insert(std::make_pair("cim:ErpJournalEntry", &ErpJournalEntry_factory));
	map.insert(std::make_pair("cim:ErpReceivable", &ErpReceivable_factory));
	map.insert(std::make_pair("cim:ErpPayment", &ErpPayment_factory));
	map.insert(std::make_pair("cim:ErpRecLineItem", &ErpRecLineItem_factory));
	map.insert(std::make_pair("cim:ErpPayableLineItem", &ErpPayableLineItem_factory));
	map.insert(std::make_pair("cim:ProcedureDataSet", &ProcedureDataSet_factory));
	map.insert(std::make_pair("cim:UserAttribute", &UserAttribute_factory));
	map.insert(std::make_pair("cim:ErpInvoiceLineItem", &ErpInvoiceLineItem_factory));
	map.insert(std::make_pair("cim:WorkBillingInfo", &WorkBillingInfo_factory));
	map.insert(std::make_pair("cim:AccountNotification", &AccountNotification_factory));
	map.insert(std::make_pair("cim:CustomerAccount", &CustomerAccount_factory));
	map.insert(std::make_pair("cim:ErpCompetency", &ErpCompetency_factory));
	map.insert(std::make_pair("cim:ErpPersonnel", &ErpPersonnel_factory));
	map.insert(std::make_pair("cim:Craft", &Craft_factory));
	map.insert(std::make_pair("cim:Skill", &Skill_factory));
	map.insert(std::make_pair("cim:PersonOrganisationRole", &PersonOrganisationRole_factory));
	map.insert(std::make_pair("cim:Role", &Role_factory));
	map.insert(std::make_pair("cim:PersonPropertyRole", &PersonPropertyRole_factory));
	map.insert(std::make_pair("cim:Person", &Person_factory));
	map.insert(std::make_pair("cim:OldPerson", &OldPerson_factory));
	map.insert(std::make_pair("cim:OutageOrder", &OutageOrder_factory));
	map.insert(std::make_pair("cim:OutagePlan", &OutagePlan_factory));
	map.insert(std::make_pair("cim:Customer", &Customer_factory));
	map.insert(std::make_pair("cim:ComMedia", &ComMedia_factory));
	map.insert(std::make_pair("cim:AnalyticScore", &AnalyticScore_factory));
	map.insert(std::make_pair("cim:BushingInsulationPF", &BushingInsulationPF_factory));
	map.insert(std::make_pair("cim:Bushing", &Bushing_factory));
	map.insert(std::make_pair("cim:InterrupterUnit", &InterrupterUnit_factory));
	map.insert(std::make_pair("cim:AggregateScore", &AggregateScore_factory));
	map.insert(std::make_pair("cim:RiskScore", &RiskScore_factory));
	map.insert(std::make_pair("cim:AssetTestSampleTaker", &AssetTestSampleTaker_factory));
	map.insert(std::make_pair("cim:Specimen", &Specimen_factory));
	map.insert(std::make_pair("cim:AssetTestLab", &AssetTestLab_factory));
	map.insert(std::make_pair("cim:LabTestDataSet", &LabTestDataSet_factory));
	map.insert(std::make_pair("cim:MaintenanceDataSet", &MaintenanceDataSet_factory));
	map.insert(std::make_pair("cim:ASTMStandard", &ASTMStandard_factory));
	map.insert(std::make_pair("cim:CIGREStandard", &CIGREStandard_factory));
	map.insert(std::make_pair("cim:DINStandard", &DINStandard_factory));
	map.insert(std::make_pair("cim:DobleStandard", &DobleStandard_factory));
	map.insert(std::make_pair("cim:EPAStandard", &EPAStandard_factory));
	map.insert(std::make_pair("cim:IECStandard", &IECStandard_factory));
	map.insert(std::make_pair("cim:IEEEStandard", &IEEEStandard_factory));
	map.insert(std::make_pair("cim:ISOStandard", &ISOStandard_factory));
	map.insert(std::make_pair("cim:LaborelecStandard", &LaborelecStandard_factory));
	map.insert(std::make_pair("cim:TAPPIStandard", &TAPPIStandard_factory));
	map.insert(std::make_pair("cim:UKMinistryOfDefenceStandard", &UKMinistryOfDefenceStandard_factory));
	map.insert(std::make_pair("cim:WEPStandard", &WEPStandard_factory));
	map.insert(std::make_pair("cim:TestStandard", &TestStandard_factory));
	map.insert(std::make_pair("cim:OperatingMechanism", &OperatingMechanism_factory));
	map.insert(std::make_pair("cim:InspectionDataSet", &InspectionDataSet_factory));
	map.insert(std::make_pair("cim:OilSpecimen", &OilSpecimen_factory));
	map.insert(std::make_pair("cim:FailureEvent", &FailureEvent_factory));
	map.insert(std::make_pair("cim:AssetOwner", &AssetOwner_factory));
	map.insert(std::make_pair("cim:AssetLocationHazard", &AssetLocationHazard_factory));
	map.insert(std::make_pair("cim:Streetlight", &Streetlight_factory));
	map.insert(std::make_pair("cim:AssetUser", &AssetUser_factory));
	map.insert(std::make_pair("cim:Maintainer", &Maintainer_factory));
	map.insert(std::make_pair("cim:Joint", &Joint_factory));
	map.insert(std::make_pair("cim:AssetHealthEvent", &AssetHealthEvent_factory));
	map.insert(std::make_pair("cim:Facility", &Facility_factory));
	map.insert(std::make_pair("cim:Cabinet", &Cabinet_factory));
	map.insert(std::make_pair("cim:HealthScore", &HealthScore_factory));
	map.insert(std::make_pair("cim:Limit", &Limit_factory));
	map.insert(std::make_pair("cim:Procedure", &Procedure_factory));
	map.insert(std::make_pair("cim:TestDataSet", &TestDataSet_factory));
	map.insert(std::make_pair("cim:FinancialInfo", &FinancialInfo_factory));
	map.insert(std::make_pair("cim:AssetGroup", &AssetGroup_factory));
	map.insert(std::make_pair("cim:FACTSDevice", &FACTSDevice_factory));
	map.insert(std::make_pair("cim:DiagnosisDataSet", &DiagnosisDataSet_factory));
	map.insert(std::make_pair("cim:SwitchOperationSummary", &SwitchOperationSummary_factory));
	map.insert(std::make_pair("cim:Analytic", &Analytic_factory));
	map.insert(std::make_pair("cim:ExtensionItem", &ExtensionItem_factory));
	map.insert(std::make_pair("cim:ParentOrganization", &ParentOrganization_factory));
	map.insert(std::make_pair("cim:DocumentPersonRole", &DocumentPersonRole_factory));
	map.insert(std::make_pair("cim:Editor", &Editor_factory));
	map.insert(std::make_pair("cim:ExtensionsList", &ExtensionsList_factory));
	map.insert(std::make_pair("cim:Approver", &Approver_factory));
	map.insert(std::make_pair("cim:Issuer", &Issuer_factory));
	map.insert(std::make_pair("cim:FieldDispatchStep", &FieldDispatchStep_factory));
	map.insert(std::make_pair("cim:Ownership", &Ownership_factory));
	map.insert(std::make_pair("cim:ScheduledEvent", &ScheduledEvent_factory));
	map.insert(std::make_pair("cim:ScheduledEventData", &ScheduledEventData_factory));
	map.insert(std::make_pair("cim:UnplannedOutage", &UnplannedOutage_factory));
	map.insert(std::make_pair("cim:PlannedOutage", &PlannedOutage_factory));
	map.insert(std::make_pair("cim:FieldDispatchHistory", &FieldDispatchHistory_factory));
	map.insert(std::make_pair("cim:Author", &Author_factory));
	map.insert(std::make_pair("cim:IEC61968CIMVersion", &IEC61968CIMVersion_factory));
	map.insert(std::make_pair("cim:FieldSafetySupervisor", &FieldSafetySupervisor_factory));
	map.insert(std::make_pair("cim:Ground", &Ground_factory));
	map.insert(std::make_pair("cim:Conductor", &Conductor_factory));
	map.insert(std::make_pair("cim:Clamp", &Clamp_factory));
	map.insert(std::make_pair("cim:ACLineSegment", &ACLineSegment_factory));
	map.insert(std::make_pair("cim:GroundAction", &GroundAction_factory));
	map.insert(std::make_pair("cim:OperationalRestriction", &OperationalRestriction_factory));
	map.insert(std::make_pair("cim:EstimatedRestorationTime", &EstimatedRestorationTime_factory));
	map.insert(std::make_pair("cim:PSREvent", &PSREvent_factory));
	map.insert(std::make_pair("cim:Cut", &Cut_factory));
	map.insert(std::make_pair("cim:CutAction", &CutAction_factory));
	map.insert(std::make_pair("cim:TroubleOrder", &TroubleOrder_factory));
	map.insert(std::make_pair("cim:OperationsSafetySupervisor", &OperationsSafetySupervisor_factory));
	map.insert(std::make_pair("cim:OperationalTag", &OperationalTag_factory));
	map.insert(std::make_pair("cim:ClearanceDocument", &ClearanceDocument_factory));
	map.insert(std::make_pair("cim:ClearanceAction", &ClearanceAction_factory));
	map.insert(std::make_pair("cim:MeasurementAction", &MeasurementAction_factory));
	map.insert(std::make_pair("cim:GenericAction", &GenericAction_factory));
	map.insert(std::make_pair("cim:Jumper", &Jumper_factory));
	map.insert(std::make_pair("cim:JumperAction", &JumperAction_factory));
	map.insert(std::make_pair("cim:OperationalUpdatedRating", &OperationalUpdatedRating_factory));
	map.insert(std::make_pair("cim:OutageArea", &OutageArea_factory));
	map.insert(std::make_pair("cim:VerificationAction", &VerificationAction_factory));
	map.insert(std::make_pair("cim:TagAction", &TagAction_factory));
	map.insert(std::make_pair("cim:SwitchingStep", &SwitchingStep_factory));
	map.insert(std::make_pair("cim:ControlAction", &ControlAction_factory));
	map.insert(std::make_pair("cim:EnergyConnection", &EnergyConnection_factory));
	map.insert(std::make_pair("cim:EnergySource", &EnergySource_factory));
	map.insert(std::make_pair("cim:EnergySourceAction", &EnergySourceAction_factory));
	map.insert(std::make_pair("cim:RemoteConnectDisconnectInfo", &RemoteConnectDisconnectInfo_factory));
	map.insert(std::make_pair("cim:ConnectDisconnectFunction", &ConnectDisconnectFunction_factory));
	map.insert(std::make_pair("cim:UndergroundStructure", &UndergroundStructure_factory));
	map.insert(std::make_pair("cim:ReliabilityInfo", &ReliabilityInfo_factory));
	map.insert(std::make_pair("cim:DimensionsInfo", &DimensionsInfo_factory));
	map.insert(std::make_pair("cim:Pole", &Pole_factory));
	map.insert(std::make_pair("cim:CoolingPowerRating", &CoolingPowerRating_factory));
	map.insert(std::make_pair("cim:Tower", &Tower_factory));
	map.insert(std::make_pair("cim:CompatibleUnit", &CompatibleUnit_factory));
	map.insert(std::make_pair("cim:CostType", &CostType_factory));
	map.insert(std::make_pair("cim:Assignment", &Assignment_factory));
	map.insert(std::make_pair("cim:WorkFlowStep", &WorkFlowStep_factory));
	map.insert(std::make_pair("cim:CUContractorItem", &CUContractorItem_factory));
	map.insert(std::make_pair("cim:InfoQuestion", &InfoQuestion_factory));
	map.insert(std::make_pair("cim:Route", &Route_factory));
	map.insert(std::make_pair("cim:ShiftPattern", &ShiftPattern_factory));
	map.insert(std::make_pair("cim:OldCrew", &OldCrew_factory));
	map.insert(std::make_pair("cim:Capability", &Capability_factory));
	map.insert(std::make_pair("cim:CUWorkEquipmentItem", &CUWorkEquipmentItem_factory));
	map.insert(std::make_pair("cim:BusinessCase", &BusinessCase_factory));
	map.insert(std::make_pair("cim:CULaborCode", &CULaborCode_factory));
	map.insert(std::make_pair("cim:CULaborItem", &CULaborItem_factory));
	map.insert(std::make_pair("cim:NonStandardItem", &NonStandardItem_factory));
	map.insert(std::make_pair("cim:AccessPermit", &AccessPermit_factory));
	map.insert(std::make_pair("cim:CUAllowableAction", &CUAllowableAction_factory));
	map.insert(std::make_pair("cim:Regulation", &Regulation_factory));
	map.insert(std::make_pair("cim:CompositeSwitchInfo", &CompositeSwitchInfo_factory));
	map.insert(std::make_pair("cim:OldTransformerEndInfo", &OldTransformerEndInfo_factory));
	map.insert(std::make_pair("cim:Ratio", &Ratio_factory));
	map.insert(std::make_pair("cim:CurrentTransformerInfo", &CurrentTransformerInfo_factory));
	map.insert(std::make_pair("cim:OldSwitchInfo", &OldSwitchInfo_factory));
	map.insert(std::make_pair("cim:RecloserInfo", &RecloserInfo_factory));
	map.insert(std::make_pair("cim:ProtectionEquipmentInfo", &ProtectionEquipmentInfo_factory));
	map.insert(std::make_pair("cim:OldTransformerTankInfo", &OldTransformerTankInfo_factory));
	map.insert(std::make_pair("cim:SurgeArresterInfo", &SurgeArresterInfo_factory));
	map.insert(std::make_pair("cim:BreakerInfo", &BreakerInfo_factory));
	map.insert(std::make_pair("cim:PotentialTransformerInfo", &PotentialTransformerInfo_factory));
	map.insert(std::make_pair("cim:FaultIndicatorInfo", &FaultIndicatorInfo_factory));
	map.insert(std::make_pair("cim:PropertyOrganisationRole", &PropertyOrganisationRole_factory));
	map.insert(std::make_pair("cim:DocumentOrganisationRole", &DocumentOrganisationRole_factory));
	map.insert(std::make_pair("cim:OrgOrgRole", &OrgOrgRole_factory));
	map.insert(std::make_pair("cim:BusinessRole", &BusinessRole_factory));
	map.insert(std::make_pair("cim:BusinessPlan", &BusinessPlan_factory));
	map.insert(std::make_pair("cim:ErpTimeEntry", &ErpTimeEntry_factory));
	map.insert(std::make_pair("cim:ErpTimeSheet", &ErpTimeSheet_factory));
	map.insert(std::make_pair("cim:ErpBankAccount", &ErpBankAccount_factory));
	map.insert(std::make_pair("cim:ErpLedgerBudget", &ErpLedgerBudget_factory));
	map.insert(std::make_pair("cim:ErpLedBudLineItem", &ErpLedBudLineItem_factory));
	map.insert(std::make_pair("cim:ErpLedgerEntry", &ErpLedgerEntry_factory));
	map.insert(std::make_pair("cim:ErpLedger", &ErpLedger_factory));
	map.insert(std::make_pair("cim:ErpItemMaster", &ErpItemMaster_factory));
	map.insert(std::make_pair("cim:ErpJournal", &ErpJournal_factory));
	map.insert(std::make_pair("cim:ErpInventoryCount", &ErpInventoryCount_factory));
	map.insert(std::make_pair("cim:ErpSalesOrder", &ErpSalesOrder_factory));
	map.insert(std::make_pair("cim:ErpChartOfAccounts", &ErpChartOfAccounts_factory));
	map.insert(std::make_pair("cim:ErpEngChangeOrder", &ErpEngChangeOrder_factory));
	map.insert(std::make_pair("cim:ErpIssueInventory", &ErpIssueInventory_factory));
	map.insert(std::make_pair("cim:ErpSiteLevelData", &ErpSiteLevelData_factory));
	map.insert(std::make_pair("cim:GeneratorTypeAsset", &GeneratorTypeAsset_factory));
	map.insert(std::make_pair("cim:RegulatingCondEq", &RegulatingCondEq_factory));
	map.insert(std::make_pair("cim:ShuntCompensatorPhase", &ShuntCompensatorPhase_factory));
	map.insert(std::make_pair("cim:ShuntCompensator", &ShuntCompensator_factory));
	map.insert(std::make_pair("cim:SVC", &SVC_factory));
	map.insert(std::make_pair("cim:Zone", &Zone_factory));
	map.insert(std::make_pair("cim:LocationGrant", &LocationGrant_factory));
	map.insert(std::make_pair("cim:LandProperty", &LandProperty_factory));
	map.insert(std::make_pair("cim:RightOfWay", &RightOfWay_factory));
	map.insert(std::make_pair("cim:RedLine", &RedLine_factory));
	map.insert(std::make_pair("cim:ServiceGuarantee", &ServiceGuarantee_factory));
	map.insert(std::make_pair("cim:SubscribePowerCurve", &SubscribePowerCurve_factory));
	map.insert(std::make_pair("cim:PowerQualityPricing", &PowerQualityPricing_factory));
	map.insert(std::make_pair("cim:ExternalCustomerAgreement", &ExternalCustomerAgreement_factory));
	map.insert(std::make_pair("cim:CustomerBillingInfo", &CustomerBillingInfo_factory));
	map.insert(std::make_pair("cim:ComplianceEvent", &ComplianceEvent_factory));
	map.insert(std::make_pair("cim:ValueToAlias", &ValueToAlias_factory));
	map.insert(std::make_pair("cim:ValueAliasSet", &ValueAliasSet_factory));
	map.insert(std::make_pair("cim:Command", &Command_factory));
	map.insert(std::make_pair("cim:DiscreteValue", &DiscreteValue_factory));
	map.insert(std::make_pair("cim:Discrete", &Discrete_factory));
	map.insert(std::make_pair("cim:AssetDiscrete", &AssetDiscrete_factory));
	map.insert(std::make_pair("cim:AnalogControl", &AnalogControl_factory));
	map.insert(std::make_pair("cim:AnalogValue", &AnalogValue_factory));
	map.insert(std::make_pair("cim:LimitSet", &LimitSet_factory));
	map.insert(std::make_pair("cim:AnalogLimit", &AnalogLimit_factory));
	map.insert(std::make_pair("cim:AnalogLimitSet", &AnalogLimitSet_factory));
	map.insert(std::make_pair("cim:Analog", &Analog_factory));
	map.insert(std::make_pair("cim:AssetAnalog", &AssetAnalog_factory));
	map.insert(std::make_pair("cim:OilAnalysisMoistureAnalog", &OilAnalysisMoistureAnalog_factory));
	map.insert(std::make_pair("cim:InspectionDiscrete", &InspectionDiscrete_factory));
	map.insert(std::make_pair("cim:CalculationMethodHierarchy", &CalculationMethodHierarchy_factory));
	map.insert(std::make_pair("cim:OilAnalysisFluidAnalog", &OilAnalysisFluidAnalog_factory));
	map.insert(std::make_pair("cim:OilAnalysisParticleDiscrete", &OilAnalysisParticleDiscrete_factory));
	map.insert(std::make_pair("cim:CalculationMethodOrder", &CalculationMethodOrder_factory));
	map.insert(std::make_pair("cim:StatisticalCalculation", &StatisticalCalculation_factory));
	map.insert(std::make_pair("cim:PeriodicStatisticalCalculation", &PeriodicStatisticalCalculation_factory));
	map.insert(std::make_pair("cim:OilAnalysisGasAnalog", &OilAnalysisGasAnalog_factory));
	map.insert(std::make_pair("cim:OilAnalysisFluidDiscrete", &OilAnalysisFluidDiscrete_factory));
	map.insert(std::make_pair("cim:OilAnalysisPCBAnalog", &OilAnalysisPCBAnalog_factory));
	map.insert(std::make_pair("cim:OilAnalysisPCBDiscrete", &OilAnalysisPCBDiscrete_factory));
	map.insert(std::make_pair("cim:OilAnalysisPaperAnalog", &OilAnalysisPaperAnalog_factory));
	map.insert(std::make_pair("cim:InspectionAnalog", &InspectionAnalog_factory));
	map.insert(std::make_pair("cim:StringMeasurement", &StringMeasurement_factory));
	map.insert(std::make_pair("cim:AssetStringMeasurement", &AssetStringMeasurement_factory));
	map.insert(std::make_pair("cim:OilAnalysisMetalsAnalog", &OilAnalysisMetalsAnalog_factory));
	map.insert(std::make_pair("cim:AssetTemperaturePressureAnalog", &AssetTemperaturePressureAnalog_factory));
	map.insert(std::make_pair("cim:OilAnalysisParticleAnalog", &OilAnalysisParticleAnalog_factory));
	map.insert(std::make_pair("cim:IEC61970CIMVersion", &IEC61970CIMVersion_factory));
	map.insert(std::make_pair("cim:ReportingGroup", &ReportingGroup_factory));
	map.insert(std::make_pair("cim:TopologicalNode", &TopologicalNode_factory));
	map.insert(std::make_pair("cim:TopologicalIsland", &TopologicalIsland_factory));
	map.insert(std::make_pair("cim:BusNameMarker", &BusNameMarker_factory));
	map.insert(std::make_pair("cim:EquipmentFault", &EquipmentFault_factory));
	map.insert(std::make_pair("cim:LineFault", &LineFault_factory));
	map.insert(std::make_pair("cim:AuxiliaryEquipment", &AuxiliaryEquipment_factory));
	map.insert(std::make_pair("cim:Sensor", &Sensor_factory));
	map.insert(std::make_pair("cim:PostLineSensor", &PostLineSensor_factory));
	map.insert(std::make_pair("cim:SurgeArrester", &SurgeArrester_factory));
	map.insert(std::make_pair("cim:WaveTrap", &WaveTrap_factory));
	map.insert(std::make_pair("cim:FaultIndicator", &FaultIndicator_factory));
	map.insert(std::make_pair("cim:FlowSensor", &FlowSensor_factory));
	map.insert(std::make_pair("cim:CurrentTransformer", &CurrentTransformer_factory));
	map.insert(std::make_pair("cim:PotentialTransformer", &PotentialTransformer_factory));
	map.insert(std::make_pair("cim:StartRampCurve", &StartRampCurve_factory));
	map.insert(std::make_pair("cim:StartIgnFuelCurve", &StartIgnFuelCurve_factory));
	map.insert(std::make_pair("cim:StartMainFuelCurve", &StartMainFuelCurve_factory));
	map.insert(std::make_pair("cim:StartupModel", &StartupModel_factory));
	map.insert(std::make_pair("cim:LevelVsVolumeCurve", &LevelVsVolumeCurve_factory));
	map.insert(std::make_pair("cim:InflowForecast", &InflowForecast_factory));
	map.insert(std::make_pair("cim:TargetLevelSchedule", &TargetLevelSchedule_factory));
	map.insert(std::make_pair("cim:Reservoir", &Reservoir_factory));
	map.insert(std::make_pair("cim:EmissionCurve", &EmissionCurve_factory));
	map.insert(std::make_pair("cim:PowerElectronicsUnit", &PowerElectronicsUnit_factory));
	map.insert(std::make_pair("cim:BatteryUnit", &BatteryUnit_factory));
	map.insert(std::make_pair("cim:GrossToNetActivePowerCurve", &GrossToNetActivePowerCurve_factory));
	map.insert(std::make_pair("cim:GenUnitOpSchedule", &GenUnitOpSchedule_factory));
	map.insert(std::make_pair("cim:HeatRateCurve", &HeatRateCurve_factory));
	map.insert(std::make_pair("cim:AirCompressor", &AirCompressor_factory));
	map.insert(std::make_pair("cim:PowerElectronicsWindUnit", &PowerElectronicsWindUnit_factory));
	map.insert(std::make_pair("cim:GenUnitOpCostCurve", &GenUnitOpCostCurve_factory));
	map.insert(std::make_pair("cim:FuelAllocationSchedule", &FuelAllocationSchedule_factory));
	map.insert(std::make_pair("cim:ShutdownCurve", &ShutdownCurve_factory));
	map.insert(std::make_pair("cim:IncrementalHeatRateCurve", &IncrementalHeatRateCurve_factory));
	map.insert(std::make_pair("cim:HydroPumpOpSchedule", &HydroPumpOpSchedule_factory));
	map.insert(std::make_pair("cim:HydroPump", &HydroPump_factory));
	map.insert(std::make_pair("cim:RotatingMachine", &RotatingMachine_factory));
	map.insert(std::make_pair("cim:GeneratingUnit", &GeneratingUnit_factory));
	map.insert(std::make_pair("cim:EmissionAccount", &EmissionAccount_factory));
	map.insert(std::make_pair("cim:HeatInputCurve", &HeatInputCurve_factory));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit", &ThermalGeneratingUnit_factory));
	map.insert(std::make_pair("cim:CombinedCyclePlant", &CombinedCyclePlant_factory));
	map.insert(std::make_pair("cim:SteamSendoutSchedule", &SteamSendoutSchedule_factory));
	map.insert(std::make_pair("cim:TailbayLossCurve", &TailbayLossCurve_factory));
	map.insert(std::make_pair("cim:HydroGeneratingEfficiencyCurve", &HydroGeneratingEfficiencyCurve_factory));
	map.insert(std::make_pair("cim:PenstockLossCurve", &PenstockLossCurve_factory));
	map.insert(std::make_pair("cim:HydroGeneratingUnit", &HydroGeneratingUnit_factory));
	map.insert(std::make_pair("cim:HydroPowerPlant", &HydroPowerPlant_factory));
	map.insert(std::make_pair("cim:CAESPlant", &CAESPlant_factory));
	map.insert(std::make_pair("cim:WindGeneratingUnit", &WindGeneratingUnit_factory));
	map.insert(std::make_pair("cim:FossilFuel", &FossilFuel_factory));
	map.insert(std::make_pair("cim:PhotoVoltaicUnit", &PhotoVoltaicUnit_factory));
	map.insert(std::make_pair("cim:NuclearGeneratingUnit", &NuclearGeneratingUnit_factory));
	map.insert(std::make_pair("cim:SolarGeneratingUnit", &SolarGeneratingUnit_factory));
	map.insert(std::make_pair("cim:CogenerationPlant", &CogenerationPlant_factory));
	map.insert(std::make_pair("cim:SynchronousMachine", &SynchronousMachine_factory));
	map.insert(std::make_pair("cim:PrimeMover", &PrimeMover_factory));
	map.insert(std::make_pair("cim:SteamTurbine", &SteamTurbine_factory));
	map.insert(std::make_pair("cim:SteamSupply", &SteamSupply_factory));
	map.insert(std::make_pair("cim:FossilSteamSupply", &FossilSteamSupply_factory));
	map.insert(std::make_pair("cim:Subcritical", &Subcritical_factory));
	map.insert(std::make_pair("cim:BWRSteamSupply", &BWRSteamSupply_factory));
	map.insert(std::make_pair("cim:HydroTurbine", &HydroTurbine_factory));
	map.insert(std::make_pair("cim:Supercritical", &Supercritical_factory));
	map.insert(std::make_pair("cim:DrumBoiler", &DrumBoiler_factory));
	map.insert(std::make_pair("cim:PWRSteamSupply", &PWRSteamSupply_factory));
	map.insert(std::make_pair("cim:CTTempActivePowerCurve", &CTTempActivePowerCurve_factory));
	map.insert(std::make_pair("cim:CombustionTurbine", &CombustionTurbine_factory));
	map.insert(std::make_pair("cim:HeatRecoveryBoiler", &HeatRecoveryBoiler_factory));
	map.insert(std::make_pair("cim:MeasurementValueSource", &MeasurementValueSource_factory));
	map.insert(std::make_pair("cim:AccumulatorValue", &AccumulatorValue_factory));
	map.insert(std::make_pair("cim:StringMeasurementValue", &StringMeasurementValue_factory));
	map.insert(std::make_pair("cim:DiscreteCommand", &DiscreteCommand_factory));
	map.insert(std::make_pair("cim:AccumulatorLimit", &AccumulatorLimit_factory));
	map.insert(std::make_pair("cim:AccumulatorLimitSet", &AccumulatorLimitSet_factory));
	map.insert(std::make_pair("cim:SetPoint", &SetPoint_factory));
	map.insert(std::make_pair("cim:AccumulatorReset", &AccumulatorReset_factory));
	map.insert(std::make_pair("cim:RaiseLowerCommand", &RaiseLowerCommand_factory));
	map.insert(std::make_pair("cim:Accumulator", &Accumulator_factory));
	map.insert(std::make_pair("cim:StateVariable", &StateVariable_factory));
	map.insert(std::make_pair("cim:SvVoltage", &SvVoltage_factory));
	map.insert(std::make_pair("cim:SvStatus", &SvStatus_factory));
	map.insert(std::make_pair("cim:SvInjection", &SvInjection_factory));
	map.insert(std::make_pair("cim:SvPowerFlow", &SvPowerFlow_factory));
	map.insert(std::make_pair("cim:SvTapStep", &SvTapStep_factory));
	map.insert(std::make_pair("cim:SvShuntCompensatorSections", &SvShuntCompensatorSections_factory));
	map.insert(std::make_pair("cim:LoadGroup", &LoadGroup_factory));
	map.insert(std::make_pair("cim:LoadResponseCharacteristic", &LoadResponseCharacteristic_factory));
	map.insert(std::make_pair("cim:EnergyConsumerPhase", &EnergyConsumerPhase_factory));
	map.insert(std::make_pair("cim:EnergyConsumer", &EnergyConsumer_factory));
	map.insert(std::make_pair("cim:ConformLoad", &ConformLoad_factory));
	map.insert(std::make_pair("cim:Season", &Season_factory));
	map.insert(std::make_pair("cim:StationSupply", &StationSupply_factory));
	map.insert(std::make_pair("cim:NonConformLoadSchedule", &NonConformLoadSchedule_factory));
	map.insert(std::make_pair("cim:ConformLoadSchedule", &ConformLoadSchedule_factory));
	map.insert(std::make_pair("cim:EnergyArea", &EnergyArea_factory));
	map.insert(std::make_pair("cim:SubLoadArea", &SubLoadArea_factory));
	map.insert(std::make_pair("cim:LoadArea", &LoadArea_factory));
	map.insert(std::make_pair("cim:DayType", &DayType_factory));
	map.insert(std::make_pair("cim:PowerCutZone", &PowerCutZone_factory));
	map.insert(std::make_pair("cim:ConformLoadGroup", &ConformLoadGroup_factory));
	map.insert(std::make_pair("cim:NonConformLoad", &NonConformLoad_factory));
	map.insert(std::make_pair("cim:NonConformLoadGroup", &NonConformLoadGroup_factory));
	map.insert(std::make_pair("cim:EquivalentEquipment", &EquivalentEquipment_factory));
	map.insert(std::make_pair("cim:EquivalentNetwork", &EquivalentNetwork_factory));
	map.insert(std::make_pair("cim:EquivalentBranch", &EquivalentBranch_factory));
	map.insert(std::make_pair("cim:EquivalentShunt", &EquivalentShunt_factory));
	map.insert(std::make_pair("cim:EquivalentInjection", &EquivalentInjection_factory));
	map.insert(std::make_pair("cim:DCTopologicalNode", &DCTopologicalNode_factory));
	map.insert(std::make_pair("cim:EquipmentContainer", &EquipmentContainer_factory));
	map.insert(std::make_pair("cim:DCEquipmentContainer", &DCEquipmentContainer_factory));
	map.insert(std::make_pair("cim:VsCapabilityCurve", &VsCapabilityCurve_factory));
	map.insert(std::make_pair("cim:ACDCConverter", &ACDCConverter_factory));
	map.insert(std::make_pair("cim:CsConverter", &CsConverter_factory));
	map.insert(std::make_pair("cim:DCBaseTerminal", &DCBaseTerminal_factory));
	map.insert(std::make_pair("cim:DCTerminal", &DCTerminal_factory));
	map.insert(std::make_pair("cim:DCConductingEquipment", &DCConductingEquipment_factory));
	map.insert(std::make_pair("cim:DCSwitch", &DCSwitch_factory));
	map.insert(std::make_pair("cim:DCBreaker", &DCBreaker_factory));
	map.insert(std::make_pair("cim:DCTopologicalIsland", &DCTopologicalIsland_factory));
	map.insert(std::make_pair("cim:Line", &Line_factory));
	map.insert(std::make_pair("cim:Bay", &Bay_factory));
	map.insert(std::make_pair("cim:VoltageLevel", &VoltageLevel_factory));
	map.insert(std::make_pair("cim:DCConverterUnit", &DCConverterUnit_factory));
	map.insert(std::make_pair("cim:Feeder", &Feeder_factory));
	map.insert(std::make_pair("cim:Substation", &Substation_factory));
	map.insert(std::make_pair("cim:SubGeographicalRegion", &SubGeographicalRegion_factory));
	map.insert(std::make_pair("cim:DCLine", &DCLine_factory));
	map.insert(std::make_pair("cim:DCBusbar", &DCBusbar_factory));
	map.insert(std::make_pair("cim:ACDCConverterDCTerminal", &ACDCConverterDCTerminal_factory));
	map.insert(std::make_pair("cim:DCLineSegment", &DCLineSegment_factory));
	map.insert(std::make_pair("cim:PerLengthDCLineParameter", &PerLengthDCLineParameter_factory));
	map.insert(std::make_pair("cim:DCNode", &DCNode_factory));
	map.insert(std::make_pair("cim:DCGround", &DCGround_factory));
	map.insert(std::make_pair("cim:DCChopper", &DCChopper_factory));
	map.insert(std::make_pair("cim:DCDisconnector", &DCDisconnector_factory));
	map.insert(std::make_pair("cim:VsConverter", &VsConverter_factory));
	map.insert(std::make_pair("cim:DCSeriesDevice", &DCSeriesDevice_factory));
	map.insert(std::make_pair("cim:DCShunt", &DCShunt_factory));
	map.insert(std::make_pair("cim:Diagram", &Diagram_factory));
	map.insert(std::make_pair("cim:VisibilityLayer", &VisibilityLayer_factory));
	map.insert(std::make_pair("cim:DiagramObjectGluePoint", &DiagramObjectGluePoint_factory));
	map.insert(std::make_pair("cim:DiagramObjectPoint", &DiagramObjectPoint_factory));
	map.insert(std::make_pair("cim:DiagramObjectStyle", &DiagramObjectStyle_factory));
	map.insert(std::make_pair("cim:DiagramObject", &DiagramObject_factory));
	map.insert(std::make_pair("cim:TextDiagramObject", &TextDiagramObject_factory));
	map.insert(std::make_pair("cim:DiagramStyle", &DiagramStyle_factory));
	map.insert(std::make_pair("cim:RemoteUnit", &RemoteUnit_factory));
	map.insert(std::make_pair("cim:CommunicationLink", &CommunicationLink_factory));
	map.insert(std::make_pair("cim:RemoteControl", &RemoteControl_factory));
	map.insert(std::make_pair("cim:Fuse", &Fuse_factory));
	map.insert(std::make_pair("cim:PhaseImpedanceData", &PhaseImpedanceData_factory));
	map.insert(std::make_pair("cim:EarthFaultCompensator", &EarthFaultCompensator_factory));
	map.insert(std::make_pair("cim:GroundingImpedance", &GroundingImpedance_factory));
	map.insert(std::make_pair("cim:SeriesCompensator", &SeriesCompensator_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerNonLinear", &PhaseTapChangerNonLinear_factory));
	map.insert(std::make_pair("cim:VoltageControlZone", &VoltageControlZone_factory));
	map.insert(std::make_pair("cim:Connector", &Connector_factory));
	map.insert(std::make_pair("cim:BusbarSection", &BusbarSection_factory));
	map.insert(std::make_pair("cim:RecloseSequence", &RecloseSequence_factory));
	map.insert(std::make_pair("cim:ProtectedSwitch", &ProtectedSwitch_factory));
	map.insert(std::make_pair("cim:Breaker", &Breaker_factory));
	map.insert(std::make_pair("cim:NonlinearShuntCompensatorPhasePoint", &NonlinearShuntCompensatorPhasePoint_factory));
	map.insert(std::make_pair("cim:TapChangerTablePoint", &TapChangerTablePoint_factory));
	map.insert(std::make_pair("cim:RatioTapChangerTablePoint", &RatioTapChangerTablePoint_factory));
	map.insert(std::make_pair("cim:EnergySourcePhase", &EnergySourcePhase_factory));
	map.insert(std::make_pair("cim:LinearShuntCompensator", &LinearShuntCompensator_factory));
	map.insert(std::make_pair("cim:NonlinearShuntCompensatorPoint", &NonlinearShuntCompensatorPoint_factory));
	map.insert(std::make_pair("cim:NonlinearShuntCompensator", &NonlinearShuntCompensator_factory));
	map.insert(std::make_pair("cim:TapSchedule", &TapSchedule_factory));
	map.insert(std::make_pair("cim:NonlinearShuntCompensatorPhase", &NonlinearShuntCompensatorPhase_factory));
	map.insert(std::make_pair("cim:PerLengthImpedance", &PerLengthImpedance_factory));
	map.insert(std::make_pair("cim:PerLengthSequenceImpedance", &PerLengthSequenceImpedance_factory));
	map.insert(std::make_pair("cim:ReactiveCapabilityCurve", &ReactiveCapabilityCurve_factory));
	map.insert(std::make_pair("cim:LoadBreakSwitch", &LoadBreakSwitch_factory));
	map.insert(std::make_pair("cim:Disconnector", &Disconnector_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerTabular", &PhaseTapChangerTabular_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerTable", &PhaseTapChangerTable_factory));
	map.insert(std::make_pair("cim:RegulationSchedule", &RegulationSchedule_factory));
	map.insert(std::make_pair("cim:Plant", &Plant_factory));
	map.insert(std::make_pair("cim:PerLengthPhaseImpedance", &PerLengthPhaseImpedance_factory));
	map.insert(std::make_pair("cim:StaticVarCompensator", &StaticVarCompensator_factory));
	map.insert(std::make_pair("cim:ExternalNetworkInjection", &ExternalNetworkInjection_factory));
	map.insert(std::make_pair("cim:Junction", &Junction_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerAsymmetrical", &PhaseTapChangerAsymmetrical_factory));
	map.insert(std::make_pair("cim:AsynchronousMachine", &AsynchronousMachine_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerLinear", &PhaseTapChangerLinear_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerSymmetrical", &PhaseTapChangerSymmetrical_factory));
	map.insert(std::make_pair("cim:TransformerTankEnd", &TransformerTankEnd_factory));
	map.insert(std::make_pair("cim:CompositeSwitch", &CompositeSwitch_factory));
	map.insert(std::make_pair("cim:Sectionaliser", &Sectionaliser_factory));
	map.insert(std::make_pair("cim:PowerElectronicsConnection", &PowerElectronicsConnection_factory));
	map.insert(std::make_pair("cim:PhaseTapChangerTablePoint", &PhaseTapChangerTablePoint_factory));
	map.insert(std::make_pair("cim:PetersenCoil", &PetersenCoil_factory));
	map.insert(std::make_pair("cim:Recloser", &Recloser_factory));
	map.insert(std::make_pair("cim:GroundDisconnector", &GroundDisconnector_factory));
	map.insert(std::make_pair("cim:LinearShuntCompensatorPhase", &LinearShuntCompensatorPhase_factory));
	map.insert(std::make_pair("cim:MutualCoupling", &MutualCoupling_factory));
	map.insert(std::make_pair("cim:FrequencyConverter", &FrequencyConverter_factory));
	map.insert(std::make_pair("cim:ACLineSegmentPhase", &ACLineSegmentPhase_factory));
	map.insert(std::make_pair("cim:ProtectionEquipment", &ProtectionEquipment_factory));
	map.insert(std::make_pair("cim:SynchrocheckRelay", &SynchrocheckRelay_factory));
	map.insert(std::make_pair("cim:CurrentRelay", &CurrentRelay_factory));
	map.insert(std::make_pair("cim:ContingencyElement", &ContingencyElement_factory));
	map.insert(std::make_pair("cim:Contingency", &Contingency_factory));
	map.insert(std::make_pair("cim:ContingencyEquipment", &ContingencyEquipment_factory));
	map.insert(std::make_pair("cim:AltGeneratingUnitMeas", &AltGeneratingUnitMeas_factory));
	map.insert(std::make_pair("cim:ControlAreaGeneratingUnit", &ControlAreaGeneratingUnit_factory));
	map.insert(std::make_pair("cim:AltTieMeas", &AltTieMeas_factory));
	map.insert(std::make_pair("cim:TieFlow", &TieFlow_factory));
	map.insert(std::make_pair("cim:ControlArea", &ControlArea_factory));
	map.insert(std::make_pair("cim:SourcingActor", &SourcingActor_factory));
	map.insert(std::make_pair("cim:BilateralExchangeAgreement", &BilateralExchangeAgreement_factory));
	map.insert(std::make_pair("cim:TASE2BilateralTable", &TASE2BilateralTable_factory));
	map.insert(std::make_pair("cim:ICCPVirtualControlCenter", &ICCPVirtualControlCenter_factory));
	map.insert(std::make_pair("cim:IPAccessPoint", &IPAccessPoint_factory));
	map.insert(std::make_pair("cim:TCPAccessPoint", &TCPAccessPoint_factory));
	map.insert(std::make_pair("cim:ISOUpperLayer", &ISOUpperLayer_factory));
	map.insert(std::make_pair("cim:ICCPInformationMessage", &ICCPInformationMessage_factory));
	map.insert(std::make_pair("cim:ICCPVCC", &ICCPVCC_factory));
	map.insert(std::make_pair("cim:IOPointSource", &IOPointSource_factory));
	map.insert(std::make_pair("cim:PublicX509Certificate", &PublicX509Certificate_factory));
	map.insert(std::make_pair("cim:ISOAPAddressing", &ISOAPAddressing_factory));
	map.insert(std::make_pair("cim:ICCPProvidedPoint", &ICCPProvidedPoint_factory));
	map.insert(std::make_pair("cim:OperationalLimitType", &OperationalLimitType_factory));
	map.insert(std::make_pair("cim:OperationalLimit", &OperationalLimit_factory));
	map.insert(std::make_pair("cim:OperationalLimitSet", &OperationalLimitSet_factory));
	map.insert(std::make_pair("cim:BranchGroupTerminal", &BranchGroupTerminal_factory));
	map.insert(std::make_pair("cim:VoltageLimit", &VoltageLimit_factory));
	map.insert(std::make_pair("cim:CurrentLimit", &CurrentLimit_factory));
	map.insert(std::make_pair("cim:BranchGroup", &BranchGroup_factory));
	map.insert(std::make_pair("cim:ActivePowerLimit", &ActivePowerLimit_factory));
	map.insert(std::make_pair("cim:ApparentPowerLimit", &ApparentPowerLimit_factory));
	map.insert(std::make_pair("cim:BasePower", &BasePower_factory));
	map.insert(std::make_pair("cim:ReportingSuperGroup", &ReportingSuperGroup_factory));
	map.insert(std::make_pair("cim:OperatingParticipant", &OperatingParticipant_factory));
	map.insert(std::make_pair("cim:OperatingShare", &OperatingShare_factory));
	map.insert(std::make_pair("cim:NameTypeAuthority", &NameTypeAuthority_factory));
	map.insert(std::make_pair("cim:NameType", &NameType_factory));
	map.insert(std::make_pair("cim:IrregularTimePoint", &IrregularTimePoint_factory));
	map.insert(std::make_pair("cim:IrregularIntervalSchedule", &IrregularIntervalSchedule_factory));
	map.insert(std::make_pair("cim:BaseFrequency", &BaseFrequency_factory));
	map.insert(std::make_pair("cim:Name", &Name_factory));
	map.insert(std::make_pair("cim:GeographicalRegion", &GeographicalRegion_factory));
	map.insert(std::make_pair("cim:DateInterval", &DateInterval_factory));
	map.insert(std::make_pair("cim:MonthDayInterval", &MonthDayInterval_factory));
	map.insert(std::make_pair("cim:URI", &URI_factory));
	map.insert(std::make_pair("cim:Model", &Model_factory));
	map.insert(std::make_pair("cim:FullModel", &FullModel_factory));
	map.insert(std::make_pair("cim:Statements", &Statements_factory));
	map.insert(std::make_pair("cim:DifferenceModel", &DifferenceModel_factory));
	map.insert(std::make_pair("cim:Profile", &Profile_factory));
	map.insert(std::make_pair("cim:DataSet", &DataSet_factory));
	map.insert(std::make_pair("cim:InstanceSet", &InstanceSet_factory));
	map.insert(std::make_pair("cim:ChangeSet", &ChangeSet_factory));
	map.insert(std::make_pair("cim:DataSetMember", &DataSetMember_factory));
	map.insert(std::make_pair("cim:ChangeSetMember", &ChangeSetMember_factory));
	map.insert(std::make_pair("cim:ObjectDeletion", &ObjectDeletion_factory));
	map.insert(std::make_pair("cim:ObjectModification", &ObjectModification_factory));
	map.insert(std::make_pair("cim:ObjectReverseModification", &ObjectReverseModification_factory));
	map.insert(std::make_pair("cim:ObjectCreation", &ObjectCreation_factory));
	map.insert(std::make_pair("cim:InstanceSetMember", &InstanceSetMember_factory));
	map.insert(std::make_pair("cim:GenericDataSetVersion", &GenericDataSetVersion_factory));
	map.insert(std::make_pair("cim:RemoteInputSignal", &RemoteInputSignal_factory));
	map.insert(std::make_pair("cim:DynamicsFunctionBlock", &DynamicsFunctionBlock_factory));
	map.insert(std::make_pair("cim:RotatingMachineDynamics", &RotatingMachineDynamics_factory));
	map.insert(std::make_pair("cim:AsynchronousMachineDynamics", &AsynchronousMachineDynamics_factory));
	map.insert(std::make_pair("cim:TurbineGovernorDynamics", &TurbineGovernorDynamics_factory));
	map.insert(std::make_pair("cim:SynchronousMachineDynamics", &SynchronousMachineDynamics_factory));
	map.insert(std::make_pair("cim:MechanicalLoadDynamics", &MechanicalLoadDynamics_factory));
	map.insert(std::make_pair("cim:MechanicalLoadUserDefined", &MechanicalLoadUserDefined_factory));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics", &ExcitationSystemDynamics_factory));
	map.insert(std::make_pair("cim:PFVArControllerType1Dynamics", &PFVArControllerType1Dynamics_factory));
	map.insert(std::make_pair("cim:PFVArControllerType1UserDefined", &PFVArControllerType1UserDefined_factory));
	map.insert(std::make_pair("cim:OverexcitationLimiterDynamics", &OverexcitationLimiterDynamics_factory));
	map.insert(std::make_pair("cim:OverexcitationLimiterUserDefined", &OverexcitationLimiterUserDefined_factory));
	map.insert(std::make_pair("cim:LoadDynamics", &LoadDynamics_factory));
	map.insert(std::make_pair("cim:LoadUserDefined", &LoadUserDefined_factory));
	map.insert(std::make_pair("cim:VoltageCompensatorDynamics", &VoltageCompensatorDynamics_factory));
	map.insert(std::make_pair("cim:VoltageCompensatorUserDefined", &VoltageCompensatorUserDefined_factory));
	map.insert(std::make_pair("cim:PFVArControllerType2Dynamics", &PFVArControllerType2Dynamics_factory));
	map.insert(std::make_pair("cim:PFVArControllerType2UserDefined", &PFVArControllerType2UserDefined_factory));
	map.insert(std::make_pair("cim:VoltageAdjusterDynamics", &VoltageAdjusterDynamics_factory));
	map.insert(std::make_pair("cim:VoltageAdjusterUserDefined", &VoltageAdjusterUserDefined_factory));
	map.insert(std::make_pair("cim:DiscontinuousExcitationControlDynamics", &DiscontinuousExcitationControlDynamics_factory));
	map.insert(std::make_pair("cim:DiscontinuousExcitationControlUserDefined", &DiscontinuousExcitationControlUserDefined_factory));
	map.insert(std::make_pair("cim:PowerSystemStabilizerDynamics", &PowerSystemStabilizerDynamics_factory));
	map.insert(std::make_pair("cim:PowerSystemStabilizerUserDefined", &PowerSystemStabilizerUserDefined_factory));
	map.insert(std::make_pair("cim:UnderexcitationLimiterDynamics", &UnderexcitationLimiterDynamics_factory));
	map.insert(std::make_pair("cim:UnderexcitationLimiterUserDefined", &UnderexcitationLimiterUserDefined_factory));
	map.insert(std::make_pair("cim:ExcitationSystemUserDefined", &ExcitationSystemUserDefined_factory));
	map.insert(std::make_pair("cim:TurbineLoadControllerDynamics", &TurbineLoadControllerDynamics_factory));
	map.insert(std::make_pair("cim:TurbineLoadControllerUserDefined", &TurbineLoadControllerUserDefined_factory));
	map.insert(std::make_pair("cim:TurbineGovernorUserDefined", &TurbineGovernorUserDefined_factory));
	map.insert(std::make_pair("cim:AsynchronousMachineUserDefined", &AsynchronousMachineUserDefined_factory));
	map.insert(std::make_pair("cim:SynchronousMachineUserDefined", &SynchronousMachineUserDefined_factory));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics", &ProprietaryParameterDynamics_factory));
	map.insert(std::make_pair("cim:WindTurbineType1or2Dynamics", &WindTurbineType1or2Dynamics_factory));
	map.insert(std::make_pair("cim:WindType1or2UserDefined", &WindType1or2UserDefined_factory));
	map.insert(std::make_pair("cim:WindTurbineType3or4Dynamics", &WindTurbineType3or4Dynamics_factory));
	map.insert(std::make_pair("cim:WindPlantDynamics", &WindPlantDynamics_factory));
	map.insert(std::make_pair("cim:WindPlantUserDefined", &WindPlantUserDefined_factory));
	map.insert(std::make_pair("cim:WindType3or4UserDefined", &WindType3or4UserDefined_factory));
	map.insert(std::make_pair("cim:GovHydroWEH", &GovHydroWEH_factory));
	map.insert(std::make_pair("cim:GovSteam0", &GovSteam0_factory));
	map.insert(std::make_pair("cim:GovSteamEU", &GovSteamEU_factory));
	map.insert(std::make_pair("cim:GovSteamFV2", &GovSteamFV2_factory));
	map.insert(std::make_pair("cim:GovCT1", &GovCT1_factory));
	map.insert(std::make_pair("cim:GovSteamFV3", &GovSteamFV3_factory));
	map.insert(std::make_pair("cim:GovHydroPID2", &GovHydroPID2_factory));
	map.insert(std::make_pair("cim:GovSteam1", &GovSteam1_factory));
	map.insert(std::make_pair("cim:GovSteamCC", &GovSteamCC_factory));
	map.insert(std::make_pair("cim:GovSteamSGO", &GovSteamSGO_factory));
	map.insert(std::make_pair("cim:GovHydroDD", &GovHydroDD_factory));
	map.insert(std::make_pair("cim:GovHydroIEEE2", &GovHydroIEEE2_factory));
	map.insert(std::make_pair("cim:GovHydroIEEE0", &GovHydroIEEE0_factory));
	map.insert(std::make_pair("cim:GovGAST3", &GovGAST3_factory));
	map.insert(std::make_pair("cim:GovCT2", &GovCT2_factory));
	map.insert(std::make_pair("cim:GovGAST1", &GovGAST1_factory));
	map.insert(std::make_pair("cim:GovHydroWPID", &GovHydroWPID_factory));
	map.insert(std::make_pair("cim:GovGAST2", &GovGAST2_factory));
	map.insert(std::make_pair("cim:GovSteamIEEE1", &GovSteamIEEE1_factory));
	map.insert(std::make_pair("cim:GovHydroR", &GovHydroR_factory));
	map.insert(std::make_pair("cim:GovGASTWD", &GovGASTWD_factory));
	map.insert(std::make_pair("cim:GovHydro1", &GovHydro1_factory));
	map.insert(std::make_pair("cim:GovHydroFrancis", &GovHydroFrancis_factory));
	map.insert(std::make_pair("cim:GovHydro2", &GovHydro2_factory));
	map.insert(std::make_pair("cim:GovGAST", &GovGAST_factory));
	map.insert(std::make_pair("cim:GovHydroPID", &GovHydroPID_factory));
	map.insert(std::make_pair("cim:GovSteam2", &GovSteam2_factory));
	map.insert(std::make_pair("cim:GovSteamFV4", &GovSteamFV4_factory));
	map.insert(std::make_pair("cim:GovHydro4", &GovHydro4_factory));
	map.insert(std::make_pair("cim:GovHydroPelton", &GovHydroPelton_factory));
	map.insert(std::make_pair("cim:GovGAST4", &GovGAST4_factory));
	map.insert(std::make_pair("cim:GovHydro3", &GovHydro3_factory));
	map.insert(std::make_pair("cim:SynchronousMachineSimplified", &SynchronousMachineSimplified_factory));
	map.insert(std::make_pair("cim:SynchronousMachineDetailed", &SynchronousMachineDetailed_factory));
	map.insert(std::make_pair("cim:SynchronousMachineTimeConstantReactance", &SynchronousMachineTimeConstantReactance_factory));
	map.insert(std::make_pair("cim:SynchronousMachineEquivalentCircuit", &SynchronousMachineEquivalentCircuit_factory));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC", &WindTurbineType3or4IEC_factory));
	map.insert(std::make_pair("cim:WindTurbineType3IEC", &WindTurbineType3IEC_factory));
	map.insert(std::make_pair("cim:WindGenType3IEC", &WindGenType3IEC_factory));
	map.insert(std::make_pair("cim:WindAeroOneDimIEC", &WindAeroOneDimIEC_factory));
	map.insert(std::make_pair("cim:WindTurbineType1or2IEC", &WindTurbineType1or2IEC_factory));
	map.insert(std::make_pair("cim:WindGenTurbineType2IEC", &WindGenTurbineType2IEC_factory));
	map.insert(std::make_pair("cim:WindPitchContPowerIEC", &WindPitchContPowerIEC_factory));
	map.insert(std::make_pair("cim:WindGenTurbineType1bIEC", &WindGenTurbineType1bIEC_factory));
	map.insert(std::make_pair("cim:WindTurbineType4IEC", &WindTurbineType4IEC_factory));
	map.insert(std::make_pair("cim:WindTurbineType4bIEC", &WindTurbineType4bIEC_factory));
	map.insert(std::make_pair("cim:WindRefFrameRotIEC", &WindRefFrameRotIEC_factory));
	map.insert(std::make_pair("cim:WindPlantReactiveControlIEC", &WindPlantReactiveControlIEC_factory));
	map.insert(std::make_pair("cim:WindGenTurbineType1aIEC", &WindGenTurbineType1aIEC_factory));
	map.insert(std::make_pair("cim:WindAeroConstIEC", &WindAeroConstIEC_factory));
	map.insert(std::make_pair("cim:WindPlantIEC", &WindPlantIEC_factory));
	map.insert(std::make_pair("cim:WindPlantFreqPcontrolIEC", &WindPlantFreqPcontrolIEC_factory));
	map.insert(std::make_pair("cim:WindProtectionIEC", &WindProtectionIEC_factory));
	map.insert(std::make_pair("cim:WindContQPQULimIEC", &WindContQPQULimIEC_factory));
	map.insert(std::make_pair("cim:WindContCurrLimIEC", &WindContCurrLimIEC_factory));
	map.insert(std::make_pair("cim:WindContPType3IEC", &WindContPType3IEC_factory));
	map.insert(std::make_pair("cim:WindContRotorRIEC", &WindContRotorRIEC_factory));
	map.insert(std::make_pair("cim:WindGenType3bIEC", &WindGenType3bIEC_factory));
	map.insert(std::make_pair("cim:WindDynamicsLookupTable", &WindDynamicsLookupTable_factory));
	map.insert(std::make_pair("cim:WindTurbineType4aIEC", &WindTurbineType4aIEC_factory));
	map.insert(std::make_pair("cim:WindGenType4IEC", &WindGenType4IEC_factory));
	map.insert(std::make_pair("cim:WindGenType3aIEC", &WindGenType3aIEC_factory));
	map.insert(std::make_pair("cim:WindContQIEC", &WindContQIEC_factory));
	map.insert(std::make_pair("cim:WindContPType4aIEC", &WindContPType4aIEC_factory));
	map.insert(std::make_pair("cim:WindContPitchAngleIEC", &WindContPitchAngleIEC_factory));
	map.insert(std::make_pair("cim:WindContQLimIEC", &WindContQLimIEC_factory));
	map.insert(std::make_pair("cim:WindMechIEC", &WindMechIEC_factory));
	map.insert(std::make_pair("cim:WindContPType4bIEC", &WindContPType4bIEC_factory));
	map.insert(std::make_pair("cim:WindAeroTwoDimIEC", &WindAeroTwoDimIEC_factory));
	map.insert(std::make_pair("cim:TurbLCFB1", &TurbLCFB1_factory));
	map.insert(std::make_pair("cim:PFVArType1IEEEVArController", &PFVArType1IEEEVArController_factory));
	map.insert(std::make_pair("cim:PFVArType1IEEEPFController", &PFVArType1IEEEPFController_factory));
	map.insert(std::make_pair("cim:MechLoad1", &MechLoad1_factory));
	map.insert(std::make_pair("cim:PFVArType2IEEEVArController", &PFVArType2IEEEVArController_factory));
	map.insert(std::make_pair("cim:PFVArType2Common1", &PFVArType2Common1_factory));
	map.insert(std::make_pair("cim:PFVArType2IEEEPFController", &PFVArType2IEEEPFController_factory));
	map.insert(std::make_pair("cim:VCompIEEEType2", &VCompIEEEType2_factory));
	map.insert(std::make_pair("cim:GenICompensationForGenJ", &GenICompensationForGenJ_factory));
	map.insert(std::make_pair("cim:VCompIEEEType1", &VCompIEEEType1_factory));
	map.insert(std::make_pair("cim:OverexcLimIEEE", &OverexcLimIEEE_factory));
	map.insert(std::make_pair("cim:OverexcLim2", &OverexcLim2_factory));
	map.insert(std::make_pair("cim:OverexcLimX1", &OverexcLimX1_factory));
	map.insert(std::make_pair("cim:OverexcLimX2", &OverexcLimX2_factory));
	map.insert(std::make_pair("cim:LoadAggregate", &LoadAggregate_factory));
	map.insert(std::make_pair("cim:LoadStatic", &LoadStatic_factory));
	map.insert(std::make_pair("cim:LoadGenericNonLinear", &LoadGenericNonLinear_factory));
	map.insert(std::make_pair("cim:LoadMotor", &LoadMotor_factory));
	map.insert(std::make_pair("cim:LoadComposite", &LoadComposite_factory));
	map.insert(std::make_pair("cim:PssSH", &PssSH_factory));
	map.insert(std::make_pair("cim:Pss2ST", &Pss2ST_factory));
	map.insert(std::make_pair("cim:Pss5", &Pss5_factory));
	map.insert(std::make_pair("cim:Pss1A", &Pss1A_factory));
	map.insert(std::make_pair("cim:PssELIN2", &PssELIN2_factory));
	map.insert(std::make_pair("cim:Pss2B", &Pss2B_factory));
	map.insert(std::make_pair("cim:PssIEEE4B", &PssIEEE4B_factory));
	map.insert(std::make_pair("cim:PssPTIST3", &PssPTIST3_factory));
	map.insert(std::make_pair("cim:PssPTIST1", &PssPTIST1_factory));
	map.insert(std::make_pair("cim:PssIEEE3B", &PssIEEE3B_factory));
	map.insert(std::make_pair("cim:PssSK", &PssSK_factory));
	map.insert(std::make_pair("cim:PssSB4", &PssSB4_factory));
	map.insert(std::make_pair("cim:PssIEEE1A", &PssIEEE1A_factory));
	map.insert(std::make_pair("cim:PssIEEE2B", &PssIEEE2B_factory));
	map.insert(std::make_pair("cim:Pss1", &Pss1_factory));
	map.insert(std::make_pair("cim:PssWECC", &PssWECC_factory));
	map.insert(std::make_pair("cim:UnderexcLimIEEE2", &UnderexcLimIEEE2_factory));
	map.insert(std::make_pair("cim:UnderexcLimIEEE1", &UnderexcLimIEEE1_factory));
	map.insert(std::make_pair("cim:UnderexcLimX1", &UnderexcLimX1_factory));
	map.insert(std::make_pair("cim:UnderexcLimX2", &UnderexcLimX2_factory));
	map.insert(std::make_pair("cim:UnderexcLim2Simplified", &UnderexcLim2Simplified_factory));
	map.insert(std::make_pair("cim:VAdjIEEE", &VAdjIEEE_factory));
	map.insert(std::make_pair("cim:ExcAVR7", &ExcAVR7_factory));
	map.insert(std::make_pair("cim:ExcPIC", &ExcPIC_factory));
	map.insert(std::make_pair("cim:ExcREXS", &ExcREXS_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC8B", &ExcIEEEAC8B_factory));
	map.insert(std::make_pair("cim:ExcIEEEDC4B", &ExcIEEEDC4B_factory));
	map.insert(std::make_pair("cim:ExcAC3A", &ExcAC3A_factory));
	map.insert(std::make_pair("cim:ExcST2A", &ExcST2A_factory));
	map.insert(std::make_pair("cim:ExcDC3A", &ExcDC3A_factory));
	map.insert(std::make_pair("cim:ExcAVR4", &ExcAVR4_factory));
	map.insert(std::make_pair("cim:ExcIEEEST2A", &ExcIEEEST2A_factory));
	map.insert(std::make_pair("cim:ExcIEEEDC3A", &ExcIEEEDC3A_factory));
	map.insert(std::make_pair("cim:ExcST1A", &ExcST1A_factory));
	map.insert(std::make_pair("cim:ExcDC1A", &ExcDC1A_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC2A", &ExcIEEEAC2A_factory));
	map.insert(std::make_pair("cim:ExcST3A", &ExcST3A_factory));
	map.insert(std::make_pair("cim:ExcIEEEDC1A", &ExcIEEEDC1A_factory));
	map.insert(std::make_pair("cim:ExcDC3A1", &ExcDC3A1_factory));
	map.insert(std::make_pair("cim:ExcIEEEST6B", &ExcIEEEST6B_factory));
	map.insert(std::make_pair("cim:ExcOEX3T", &ExcOEX3T_factory));
	map.insert(std::make_pair("cim:ExcHU", &ExcHU_factory));
	map.insert(std::make_pair("cim:ExcAC4A", &ExcAC4A_factory));
	map.insert(std::make_pair("cim:ExcSCRX", &ExcSCRX_factory));
	map.insert(std::make_pair("cim:ExcSK", &ExcSK_factory));
	map.insert(std::make_pair("cim:ExcANS", &ExcANS_factory));
	map.insert(std::make_pair("cim:ExcDC2A", &ExcDC2A_factory));
	map.insert(std::make_pair("cim:ExcAVR1", &ExcAVR1_factory));
	map.insert(std::make_pair("cim:ExcST7B", &ExcST7B_factory));
	map.insert(std::make_pair("cim:ExcAC5A", &ExcAC5A_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC3A", &ExcIEEEAC3A_factory));
	map.insert(std::make_pair("cim:ExcAVR5", &ExcAVR5_factory));
	map.insert(std::make_pair("cim:ExcST4B", &ExcST4B_factory));
	map.insert(std::make_pair("cim:ExcIEEEDC2A", &ExcIEEEDC2A_factory));
	map.insert(std::make_pair("cim:ExcIEEEST4B", &ExcIEEEST4B_factory));
	map.insert(std::make_pair("cim:ExcAC2A", &ExcAC2A_factory));
	map.insert(std::make_pair("cim:ExcIEEEST3A", &ExcIEEEST3A_factory));
	map.insert(std::make_pair("cim:ExcAC6A", &ExcAC6A_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC1A", &ExcIEEEAC1A_factory));
	map.insert(std::make_pair("cim:ExcIEEEST7B", &ExcIEEEST7B_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC6A", &ExcIEEEAC6A_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC4A", &ExcIEEEAC4A_factory));
	map.insert(std::make_pair("cim:ExcAC1A", &ExcAC1A_factory));
	map.insert(std::make_pair("cim:ExcST6B", &ExcST6B_factory));
	map.insert(std::make_pair("cim:ExcAVR3", &ExcAVR3_factory));
	map.insert(std::make_pair("cim:ExcAC8B", &ExcAC8B_factory));
	map.insert(std::make_pair("cim:ExcAVR2", &ExcAVR2_factory));
	map.insert(std::make_pair("cim:ExcELIN1", &ExcELIN1_factory));
	map.insert(std::make_pair("cim:ExcCZ", &ExcCZ_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC7B", &ExcIEEEAC7B_factory));
	map.insert(std::make_pair("cim:ExcELIN2", &ExcELIN2_factory));
	map.insert(std::make_pair("cim:ExcBBC", &ExcBBC_factory));
	map.insert(std::make_pair("cim:ExcIEEEST1A", &ExcIEEEST1A_factory));
	map.insert(std::make_pair("cim:ExcIEEEAC5A", &ExcIEEEAC5A_factory));
	map.insert(std::make_pair("cim:ExcSEXS", &ExcSEXS_factory));
	map.insert(std::make_pair("cim:ExcIEEEST5B", &ExcIEEEST5B_factory));
	map.insert(std::make_pair("cim:AsynchronousMachineEquivalentCircuit", &AsynchronousMachineEquivalentCircuit_factory));
	map.insert(std::make_pair("cim:AsynchronousMachineTimeConstantReactance", &AsynchronousMachineTimeConstantReactance_factory));
	map.insert(std::make_pair("cim:DiscExcContIEEEDEC1A", &DiscExcContIEEEDEC1A_factory));
	map.insert(std::make_pair("cim:DiscExcContIEEEDEC2A", &DiscExcContIEEEDEC2A_factory));
	map.insert(std::make_pair("cim:DiscExcContIEEEDEC3A", &DiscExcContIEEEDEC3A_factory));
	
	return map;
}
