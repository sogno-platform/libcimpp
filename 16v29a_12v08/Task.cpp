#include <iostream>

#include "Folders.hpp"
#include "Aliases.hpp"
#include "Task.hpp"

typedef bool (*task_function)(BaseClass*, BaseClass*);
static std::unordered_map<std::string, task_function> initialize();
std::unordered_map<std::string, task_function> Task::dynamic_switch = initialize();

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

	std::unordered_map<std::string, task_function>::iterator it_func = dynamic_switch.find(_CIMAttrName);
	if(it_func == dynamic_switch.end())
		return false;

	if((*it_func->second)(_CIMObj, it_id->second))
		return true;
	else
		return (*it_func->second)(it_id->second, _CIMObj);
}


bool assign_OrganisationRole_Organisation(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::OrganisationRole* element = dynamic_cast<IEC61968::Common::OrganisationRole*>(BaseClass_ptr1))
	{
		element->Organisation = dynamic_cast<IEC61968::Common::Organisation*>(BaseClass_ptr2);
		if(element->Organisation != nullptr)
			return true;
	}
	return false;
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

bool assign_ErpPOLineItem_ErpPurchaseOrder(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpPOLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPOLineItem*>(BaseClass_ptr1))
	{
		element->ErpPurchaseOrder = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPurchaseOrder*>(BaseClass_ptr2);
		if(element->ErpPurchaseOrder != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpRecLineItem_ErpReceivable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpRecLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpRecLineItem*>(BaseClass_ptr1))
	{
		element->ErpReceivable = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpReceivable*>(BaseClass_ptr2);
		if(element->ErpReceivable != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpPayableLineItem_ErpPayable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpPayableLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayableLineItem*>(BaseClass_ptr1))
	{
		element->ErpPayable = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayable*>(BaseClass_ptr2);
		if(element->ErpPayable != nullptr)
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

bool assign_WindingInsulation_ToWinding(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::WindingInsulation* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::WindingInsulation*>(BaseClass_ptr1))
	{
		element->ToWinding = dynamic_cast<IEC61970::Base::Wires::TransformerEnd*>(BaseClass_ptr2);
		if(element->ToWinding != nullptr)
			return true;
	}
	return false;
}

bool assign_WindingInsulation_FromWinding(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::WindingInsulation* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::WindingInsulation*>(BaseClass_ptr1))
	{
		element->FromWinding = dynamic_cast<IEC61970::Base::Wires::TransformerEnd*>(BaseClass_ptr2);
		if(element->FromWinding != nullptr)
			return true;
	}
	return false;
}

bool assign_TransformerObservation_Transformer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::TransformerObservation* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::TransformerObservation*>(BaseClass_ptr1))
	{
		element->Transformer = dynamic_cast<IEC61970::Base::Wires::TransformerTank*>(BaseClass_ptr2);
		if(element->Transformer != nullptr)
			return true;
	}
	return false;
}

bool assign_Transaction_Meter(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::Transaction* element = dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr1))
	{
		element->Meter = dynamic_cast<IEC61968::Metering::Meter*>(BaseClass_ptr2);
		if(element->Meter != nullptr)
			return true;
	}
	return false;
}

bool assign_UserAttribute_RatingSpecification(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::UserAttribute* element = dynamic_cast<IEC61968::Common::UserAttribute*>(BaseClass_ptr1))
	{
		element->RatingSpecification = dynamic_cast<IEC61968::InfIEC61968::InfAssets::Specification*>(BaseClass_ptr2);
		if(element->RatingSpecification != nullptr)
			return true;
	}
	return false;
}

bool assign_UserAttribute_PropertySpecification(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::UserAttribute* element = dynamic_cast<IEC61968::Common::UserAttribute*>(BaseClass_ptr1))
	{
		element->PropertySpecification = dynamic_cast<IEC61968::InfIEC61968::InfAssets::Specification*>(BaseClass_ptr2);
		if(element->PropertySpecification != nullptr)
			return true;
	}
	return false;
}

bool assign_UserAttribute_Transaction(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::UserAttribute* element = dynamic_cast<IEC61968::Common::UserAttribute*>(BaseClass_ptr1))
	{
		element->Transaction = dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2);
		if(element->Transaction != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpInvoiceLineItem_ContainerErpInvoiceLineItem(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr1))
	{
		element->ContainerErpInvoiceLineItem = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr2);
		if(element->ContainerErpInvoiceLineItem != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpInvoiceLineItem_ErpRecLineItem(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr1))
	{
		element->ErpRecLineItem = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpRecLineItem*>(BaseClass_ptr2);
		if(element->ErpRecLineItem != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpInvoiceLineItem_ErpPayableLineItem(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr1))
	{
		element->ErpPayableLineItem = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayableLineItem*>(BaseClass_ptr2);
		if(element->ErpPayableLineItem != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpInvoiceLineItem_ErpInvoice(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr1))
	{
		element->ErpInvoice = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoice*>(BaseClass_ptr2);
		if(element->ErpInvoice != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpRecDelvLineItem_ErpReceiveDelivery(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpRecDelvLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpRecDelvLineItem*>(BaseClass_ptr1))
	{
		element->ErpReceiveDelivery = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpReceiveDelivery*>(BaseClass_ptr2);
		if(element->ErpReceiveDelivery != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpRecDelvLineItem_ErpPOLineItem(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpRecDelvLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpRecDelvLineItem*>(BaseClass_ptr1))
	{
		element->ErpPOLineItem = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPOLineItem*>(BaseClass_ptr2);
		if(element->ErpPOLineItem != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpRecDelvLineItem_ErpInvoiceLineItem(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpRecDelvLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpRecDelvLineItem*>(BaseClass_ptr1))
	{
		element->ErpInvoiceLineItem = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr2);
		if(element->ErpInvoiceLineItem != nullptr)
			return true;
	}
	return false;
}

bool assign_Location_CoordinateSystem(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Location* element = dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr1))
	{
		element->CoordinateSystem = dynamic_cast<IEC61968::Common::CoordinateSystem*>(BaseClass_ptr2);
		if(element->CoordinateSystem != nullptr)
			return true;
	}
	return false;
}

bool assign_Asset_ErpInventory(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Asset* element = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr1))
	{
		element->ErpInventory = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInventory*>(BaseClass_ptr2);
		if(element->ErpInventory != nullptr)
			return true;
	}
	return false;
}

bool assign_Asset_AssetContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Asset* element = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr1))
	{
		element->AssetContainer = dynamic_cast<IEC61968::Assets::AssetContainer*>(BaseClass_ptr2);
		if(element->AssetContainer != nullptr)
			return true;
	}
	return false;
}

bool assign_Asset_AssetInfo(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Asset* element = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr1))
	{
		element->AssetInfo = dynamic_cast<IEC61968::Assets::AssetInfo*>(BaseClass_ptr2);
		if(element->AssetInfo != nullptr)
			return true;
	}
	return false;
}

bool assign_Asset_Location(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Asset* element = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr1))
	{
		element->Location = dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr2);
		if(element->Location != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpReqLineItem_ErpRequisition(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem*>(BaseClass_ptr1))
	{
		element->ErpRequisition = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpRequisition*>(BaseClass_ptr2);
		if(element->ErpRequisition != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpReqLineItem_ErpPOLineItem(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem*>(BaseClass_ptr1))
	{
		element->ErpPOLineItem = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPOLineItem*>(BaseClass_ptr2);
		if(element->ErpPOLineItem != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpQuoteLineItem_ErpReqLineItem(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem*>(BaseClass_ptr1))
	{
		element->ErpReqLineItem = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem*>(BaseClass_ptr2);
		if(element->ErpReqLineItem != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpQuoteLineItem_ErpQuote(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem*>(BaseClass_ptr1))
	{
		element->ErpQuote = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpQuote*>(BaseClass_ptr2);
		if(element->ErpQuote != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpQuoteLineItem_ErpInvoiceLineItem(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem*>(BaseClass_ptr1))
	{
		element->ErpInvoiceLineItem = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr2);
		if(element->ErpInvoiceLineItem != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpQuoteLineItem_Design(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem*>(BaseClass_ptr1))
	{
		element->Design = dynamic_cast<IEC61968::InfIEC61968::InfWork::Design*>(BaseClass_ptr2);
		if(element->Design != nullptr)
			return true;
	}
	return false;
}

bool assign_AssetModelCatalogueItem_AssetModelCatalogue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogueItem* element = dynamic_cast<IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogueItem*>(BaseClass_ptr1))
	{
		element->AssetModelCatalogue = dynamic_cast<IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogue*>(BaseClass_ptr2);
		if(element->AssetModelCatalogue != nullptr)
			return true;
	}
	return false;
}

bool assign_AssetModel_AssetInfo(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::AssetModel* element = dynamic_cast<IEC61968::Assets::AssetModel*>(BaseClass_ptr1))
	{
		element->AssetInfo = dynamic_cast<IEC61968::Assets::AssetInfo*>(BaseClass_ptr2);
		if(element->AssetInfo != nullptr)
			return true;
	}
	return false;
}

bool assign_ProductAssetModel_Manufacturer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::ProductAssetModel* element = dynamic_cast<IEC61968::Assets::ProductAssetModel*>(BaseClass_ptr1))
	{
		element->Manufacturer = dynamic_cast<IEC61968::Assets::Manufacturer*>(BaseClass_ptr2);
		if(element->Manufacturer != nullptr)
			return true;
	}
	return false;
}

bool assign_ReliabilityInfo_Specification(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::ReliabilityInfo* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::ReliabilityInfo*>(BaseClass_ptr1))
	{
		element->Specification = dynamic_cast<IEC61968::InfIEC61968::InfAssets::Specification*>(BaseClass_ptr2);
		if(element->Specification != nullptr)
			return true;
	}
	return false;
}

bool assign_BushingInsulationPF_TransformerObservation(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::BushingInsulationPF* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::BushingInsulationPF*>(BaseClass_ptr1))
	{
		element->TransformerObservation = dynamic_cast<IEC61968::InfIEC61968::InfAssets::TransformerObservation*>(BaseClass_ptr2);
		if(element->TransformerObservation != nullptr)
			return true;
	}
	return false;
}

bool assign_Bushing_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::Bushing* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::Bushing*>(BaseClass_ptr1))
	{
		element->Terminal = dynamic_cast<IEC61970::Base::Core::Terminal*>(BaseClass_ptr2);
		if(element->Terminal != nullptr)
			return true;
	}
	return false;
}

bool assign_CUAsset_TypeAsset(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CUAsset* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CUAsset*>(BaseClass_ptr1))
	{
		element->TypeAsset = dynamic_cast<IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial*>(BaseClass_ptr2);
		if(element->TypeAsset != nullptr)
			return true;
	}
	return false;
}

bool assign_CompatibleUnit_CUGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CompatibleUnit* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr1))
	{
		element->CUGroup = dynamic_cast<IEC61968::InfIEC61968::InfWork::CUGroup*>(BaseClass_ptr2);
		if(element->CUGroup != nullptr)
			return true;
	}
	return false;
}

bool assign_CUMaterialItem_TypeMaterial(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CUMaterialItem* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CUMaterialItem*>(BaseClass_ptr1))
	{
		element->TypeMaterial = dynamic_cast<IEC61968::InfIEC61968::InfWork::TypeMaterial*>(BaseClass_ptr2);
		if(element->TypeMaterial != nullptr)
			return true;
	}
	return false;
}

bool assign_WorkLocation_OneCallRequest(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Work::WorkLocation* element = dynamic_cast<IEC61968::Work::WorkLocation*>(BaseClass_ptr1))
	{
		element->OneCallRequest = dynamic_cast<IEC61968::InfIEC61968::InfWork::OneCallRequest*>(BaseClass_ptr2);
		if(element->OneCallRequest != nullptr)
			return true;
	}
	return false;
}

bool assign_BaseWork_WorkLocation(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Work::BaseWork* element = dynamic_cast<IEC61968::Work::BaseWork*>(BaseClass_ptr1))
	{
		element->WorkLocation = dynamic_cast<IEC61968::Work::WorkLocation*>(BaseClass_ptr2);
		if(element->WorkLocation != nullptr)
			return true;
	}
	return false;
}

bool assign_Work_Project(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Work::Work* element = dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr1))
	{
		element->Project = dynamic_cast<IEC61968::InfIEC61968::InfWork::Project*>(BaseClass_ptr2);
		if(element->Project != nullptr)
			return true;
	}
	return false;
}

bool assign_Work_ErpProjectAccounting(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Work::Work* element = dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr1))
	{
		element->ErpProjectAccounting = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpProjectAccounting*>(BaseClass_ptr2);
		if(element->ErpProjectAccounting != nullptr)
			return true;
	}
	return false;
}

bool assign_Crew_CrewType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Crew* element = dynamic_cast<IEC61968::Common::Crew*>(BaseClass_ptr1))
	{
		element->CrewType = dynamic_cast<IEC61968::Common::CrewType*>(BaseClass_ptr2);
		if(element->CrewType != nullptr)
			return true;
	}
	return false;
}

bool assign_WorkTask_OldAsset(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Work::WorkTask* element = dynamic_cast<IEC61968::Work::WorkTask*>(BaseClass_ptr1))
	{
		element->OldAsset = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2);
		if(element->OldAsset != nullptr)
			return true;
	}
	return false;
}

bool assign_OldWorkTask_OverheadCost(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::OldWorkTask* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr1))
	{
		element->OverheadCost = dynamic_cast<IEC61968::InfIEC61968::InfWork::OverheadCost*>(BaseClass_ptr2);
		if(element->OverheadCost != nullptr)
			return true;
	}
	return false;
}

bool assign_WorkCostDetail_WorkCostSummary(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::WorkCostDetail* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr1))
	{
		element->WorkCostSummary = dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostSummary*>(BaseClass_ptr2);
		if(element->WorkCostSummary != nullptr)
			return true;
	}
	return false;
}

bool assign_WorkCostDetail_ErpProjectAccounting(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::WorkCostDetail* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr1))
	{
		element->ErpProjectAccounting = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpProjectAccounting*>(BaseClass_ptr2);
		if(element->ErpProjectAccounting != nullptr)
			return true;
	}
	return false;
}

bool assign_WorkCostDetail_WorkTask(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::WorkCostDetail* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr1))
	{
		element->WorkTask = dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr2);
		if(element->WorkTask != nullptr)
			return true;
	}
	return false;
}

bool assign_MiscCostItem_WorkCostDetail(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::MiscCostItem* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::MiscCostItem*>(BaseClass_ptr1))
	{
		element->WorkCostDetail = dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr2);
		if(element->WorkCostDetail != nullptr)
			return true;
	}
	return false;
}

bool assign_Design_Work(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::Design* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::Design*>(BaseClass_ptr1))
	{
		element->Work = dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2);
		if(element->Work != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpBomItemData_ErpBOM(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpBomItemData* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpBomItemData*>(BaseClass_ptr1))
	{
		element->ErpBOM = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpBOM*>(BaseClass_ptr2);
		if(element->ErpBOM != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpBomItemData_DesignLocation(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpBomItemData* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpBomItemData*>(BaseClass_ptr1))
	{
		element->DesignLocation = dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocation*>(BaseClass_ptr2);
		if(element->DesignLocation != nullptr)
			return true;
	}
	return false;
}

bool assign_GenericAssetModelOrMaterial_TypeAssetCatalogue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial*>(BaseClass_ptr1))
	{
		element->TypeAssetCatalogue = dynamic_cast<IEC61968::InfIEC61968::InfTypeAsset::TypeAssetCatalogue*>(BaseClass_ptr2);
		if(element->TypeAssetCatalogue != nullptr)
			return true;
	}
	return false;
}

bool assign_FinancialInfo_Asset(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::FinancialInfo* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::FinancialInfo*>(BaseClass_ptr1))
	{
		element->Asset = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2);
		if(element->Asset != nullptr)
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

bool assign_TransformerEndInfo_CoreAdmittance(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::TransformerEndInfo* element = dynamic_cast<IEC61968::AssetInfo::TransformerEndInfo*>(BaseClass_ptr1))
	{
		element->CoreAdmittance = dynamic_cast<IEC61970::Base::Wires::TransformerCoreAdmittance*>(BaseClass_ptr2);
		if(element->CoreAdmittance != nullptr)
			return true;
	}
	return false;
}

bool assign_TransformerEndInfo_TransformerStarImpedance(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::TransformerEndInfo* element = dynamic_cast<IEC61968::AssetInfo::TransformerEndInfo*>(BaseClass_ptr1))
	{
		element->TransformerStarImpedance = dynamic_cast<IEC61970::Base::Wires::TransformerStarImpedance*>(BaseClass_ptr2);
		if(element->TransformerStarImpedance != nullptr)
			return true;
	}
	return false;
}

bool assign_TransformerTankInfo_PowerTransformerInfo(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::TransformerTankInfo* element = dynamic_cast<IEC61968::AssetInfo::TransformerTankInfo*>(BaseClass_ptr1))
	{
		element->PowerTransformerInfo = dynamic_cast<IEC61968::AssetInfo::PowerTransformerInfo*>(BaseClass_ptr2);
		if(element->PowerTransformerInfo != nullptr)
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

bool assign_EndDevice_EndDeviceInfo(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDevice* element = dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr1))
	{
		element->EndDeviceInfo = dynamic_cast<IEC61968::Metering::EndDeviceInfo*>(BaseClass_ptr2);
		if(element->EndDeviceInfo != nullptr)
			return true;
	}
	return false;
}

bool assign_UsagePoint_ServiceCategory(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::UsagePoint* element = dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr1))
	{
		element->ServiceCategory = dynamic_cast<IEC61968::Customers::ServiceCategory*>(BaseClass_ptr2);
		if(element->ServiceCategory != nullptr)
			return true;
	}
	return false;
}

bool assign_CustomerAgreement_StandardIndustryCode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::CustomerAgreement* element = dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr1))
	{
		element->StandardIndustryCode = dynamic_cast<IEC61968::InfIEC61968::InfCustomers::StandardIndustryCode*>(BaseClass_ptr2);
		if(element->StandardIndustryCode != nullptr)
			return true;
	}
	return false;
}

bool assign_CustomerAgreement_ServiceCategory(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::CustomerAgreement* element = dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr1))
	{
		element->ServiceCategory = dynamic_cast<IEC61968::Customers::ServiceCategory*>(BaseClass_ptr2);
		if(element->ServiceCategory != nullptr)
			return true;
	}
	return false;
}

bool assign_CustomerBillingInfo_CustomerAccount(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCustomers::CustomerBillingInfo* element = dynamic_cast<IEC61968::InfIEC61968::InfCustomers::CustomerBillingInfo*>(BaseClass_ptr1))
	{
		element->CustomerAccount = dynamic_cast<IEC61968::Customers::CustomerAccount*>(BaseClass_ptr2);
		if(element->CustomerAccount != nullptr)
			return true;
	}
	return false;
}

bool assign_LaborItem_WorkCostDetail(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::LaborItem* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::LaborItem*>(BaseClass_ptr1))
	{
		element->WorkCostDetail = dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr2);
		if(element->WorkCostDetail != nullptr)
			return true;
	}
	return false;
}

bool assign_OldPerson_ErpCompetency(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldPerson* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldPerson*>(BaseClass_ptr1))
	{
		element->ErpCompetency = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpCompetency*>(BaseClass_ptr2);
		if(element->ErpCompetency != nullptr)
			return true;
	}
	return false;
}

bool assign_OldPerson_ErpPersonnel(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldPerson* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldPerson*>(BaseClass_ptr1))
	{
		element->ErpPersonnel = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPersonnel*>(BaseClass_ptr2);
		if(element->ErpPersonnel != nullptr)
			return true;
	}
	return false;
}

bool assign_BankAccount_Bank(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::BankAccount* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::BankAccount*>(BaseClass_ptr1))
	{
		element->Bank = dynamic_cast<IEC61968::InfIEC61968::InfCommon::Bank*>(BaseClass_ptr2);
		if(element->Bank != nullptr)
			return true;
	}
	return false;
}

bool assign_OldCrew_Route(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldCrew* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldCrew*>(BaseClass_ptr1))
	{
		element->Route = dynamic_cast<IEC61968::InfIEC61968::InfLocations::Route*>(BaseClass_ptr2);
		if(element->Route != nullptr)
			return true;
	}
	return false;
}

bool assign_CUWorkEquipmentItem_TypeAsset(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CUWorkEquipmentItem* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CUWorkEquipmentItem*>(BaseClass_ptr1))
	{
		element->TypeAsset = dynamic_cast<IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial*>(BaseClass_ptr2);
		if(element->TypeAsset != nullptr)
			return true;
	}
	return false;
}

bool assign_WorkFlowStep_Work(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::WorkFlowStep* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkFlowStep*>(BaseClass_ptr1))
	{
		element->Work = dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2);
		if(element->Work != nullptr)
			return true;
	}
	return false;
}

bool assign_Capability_Crew(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::Capability* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::Capability*>(BaseClass_ptr1))
	{
		element->Crew = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldCrew*>(BaseClass_ptr2);
		if(element->Crew != nullptr)
			return true;
	}
	return false;
}

bool assign_CULaborItem_CULaborCode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CULaborItem* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CULaborItem*>(BaseClass_ptr1))
	{
		element->CULaborCode = dynamic_cast<IEC61968::InfIEC61968::InfWork::CULaborCode*>(BaseClass_ptr2);
		if(element->CULaborCode != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpTimeEntry_ErpProjectAccounting(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpTimeEntry* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpTimeEntry*>(BaseClass_ptr1))
	{
		element->ErpProjectAccounting = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpProjectAccounting*>(BaseClass_ptr2);
		if(element->ErpProjectAccounting != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpLedBudLineItem_ErpLedgerBudget(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpLedBudLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpLedBudLineItem*>(BaseClass_ptr1))
	{
		element->ErpLedgerBudget = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpLedgerBudget*>(BaseClass_ptr2);
		if(element->ErpLedgerBudget != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpLedgerEntry_MyErpLedgerEntry(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpLedgerEntry* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpLedgerEntry*>(BaseClass_ptr1))
	{
		element->MyErpLedgerEntry = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpLedBudLineItem*>(BaseClass_ptr2);
		if(element->MyErpLedgerEntry != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpLedgerEntry_ErpJounalEntry(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpLedgerEntry* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpLedgerEntry*>(BaseClass_ptr1))
	{
		element->ErpJounalEntry = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*>(BaseClass_ptr2);
		if(element->ErpJounalEntry != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpItemMaster_Asset(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpItemMaster* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpItemMaster*>(BaseClass_ptr1))
	{
		element->Asset = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2);
		if(element->Asset != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpIssueInventory_TypeMaterial(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpIssueInventory* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpIssueInventory*>(BaseClass_ptr1))
	{
		element->TypeMaterial = dynamic_cast<IEC61968::InfIEC61968::InfWork::TypeMaterial*>(BaseClass_ptr2);
		if(element->TypeMaterial != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpIssueInventory_TypeAsset(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpIssueInventory* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpIssueInventory*>(BaseClass_ptr1))
	{
		element->TypeAsset = dynamic_cast<IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial*>(BaseClass_ptr2);
		if(element->TypeAsset != nullptr)
			return true;
	}
	return false;
}

bool assign_ErpInventoryCount_AssetModel(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpInventoryCount* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInventoryCount*>(BaseClass_ptr1))
	{
		element->AssetModel = dynamic_cast<IEC61968::Assets::AssetModel*>(BaseClass_ptr2);
		if(element->AssetModel != nullptr)
			return true;
	}
	return false;
}

bool assign_TroubleTicket_Incident(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::TroubleTicket* element = dynamic_cast<IEC61968::Customers::TroubleTicket*>(BaseClass_ptr1))
	{
		element->Incident = dynamic_cast<IEC61968::Operations::Incident*>(BaseClass_ptr2);
		if(element->Incident != nullptr)
			return true;
	}
	return false;
}

bool assign_TroubleTicket_Customer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::TroubleTicket* element = dynamic_cast<IEC61968::Customers::TroubleTicket*>(BaseClass_ptr1))
	{
		element->Customer = dynamic_cast<IEC61968::Customers::Customer*>(BaseClass_ptr2);
		if(element->Customer != nullptr)
			return true;
	}
	return false;
}

bool assign_CustomerNotification_Customer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::CustomerNotification* element = dynamic_cast<IEC61968::Customers::CustomerNotification*>(BaseClass_ptr1))
	{
		element->Customer = dynamic_cast<IEC61968::Customers::Customer*>(BaseClass_ptr2);
		if(element->Customer != nullptr)
			return true;
	}
	return false;
}

bool assign_WorkAsset_Crew(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Work::WorkAsset* element = dynamic_cast<IEC61968::Work::WorkAsset*>(BaseClass_ptr1))
	{
		element->Crew = dynamic_cast<IEC61968::Common::Crew*>(BaseClass_ptr2);
		if(element->Crew != nullptr)
			return true;
	}
	return false;
}

bool assign_ScheduledEventData_InspectionDataSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::ScheduledEventData* element = dynamic_cast<IEC61968::Common::ScheduledEventData*>(BaseClass_ptr1))
	{
		element->InspectionDataSet = dynamic_cast<IEC61968::InfIEC61968::Sandbox::InfNewAssets::InspectionDataSet*>(BaseClass_ptr2);
		if(element->InspectionDataSet != nullptr)
			return true;
	}
	return false;
}

bool assign_Ownership_AssetOwner(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Ownership* element = dynamic_cast<IEC61968::Common::Ownership*>(BaseClass_ptr1))
	{
		element->AssetOwner = dynamic_cast<IEC61968::Assets::AssetOwner*>(BaseClass_ptr2);
		if(element->AssetOwner != nullptr)
			return true;
	}
	return false;
}

bool assign_Ownership_Asset(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Ownership* element = dynamic_cast<IEC61968::Common::Ownership*>(BaseClass_ptr1))
	{
		element->Asset = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2);
		if(element->Asset != nullptr)
			return true;
	}
	return false;
}

bool assign_OperationalRestriction_ProductAssetModel(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::OperationalRestriction* element = dynamic_cast<IEC61968::Operations::OperationalRestriction*>(BaseClass_ptr1))
	{
		element->ProductAssetModel = dynamic_cast<IEC61968::Assets::ProductAssetModel*>(BaseClass_ptr2);
		if(element->ProductAssetModel != nullptr)
			return true;
	}
	return false;
}

bool assign_SwitchingStep_Operator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingStep* element = dynamic_cast<IEC61968::Operations::SwitchingStep*>(BaseClass_ptr1))
	{
		element->Operator = dynamic_cast<IEC61968::Common::Operator*>(BaseClass_ptr2);
		if(element->Operator != nullptr)
			return true;
	}
	return false;
}

bool assign_SwitchingStep_CrewMember(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingStep* element = dynamic_cast<IEC61968::Operations::SwitchingStep*>(BaseClass_ptr1))
	{
		element->CrewMember = dynamic_cast<IEC61968::Common::CrewMember*>(BaseClass_ptr2);
		if(element->CrewMember != nullptr)
			return true;
	}
	return false;
}

bool assign_PSREvent_PowerSystemResource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::PSREvent* element = dynamic_cast<IEC61968::Operations::PSREvent*>(BaseClass_ptr1))
	{
		element->PowerSystemResource = dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2);
		if(element->PowerSystemResource != nullptr)
			return true;
	}
	return false;
}

bool assign_JumperAction_Jumper(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::JumperAction* element = dynamic_cast<IEC61968::Operations::JumperAction*>(BaseClass_ptr1))
	{
		element->Jumper = dynamic_cast<IEC61970::Base::Wires::Jumper*>(BaseClass_ptr2);
		if(element->Jumper != nullptr)
			return true;
	}
	return false;
}

bool assign_ClearanceAction_Clearance(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::ClearanceAction* element = dynamic_cast<IEC61968::Operations::ClearanceAction*>(BaseClass_ptr1))
	{
		element->Clearance = dynamic_cast<IEC61968::Operations::ClearanceDocument*>(BaseClass_ptr2);
		if(element->Clearance != nullptr)
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

bool assign_CutAction_Cut(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::CutAction* element = dynamic_cast<IEC61968::Operations::CutAction*>(BaseClass_ptr1))
	{
		element->Cut = dynamic_cast<IEC61970::Base::Wires::Cut*>(BaseClass_ptr2);
		if(element->Cut != nullptr)
			return true;
	}
	return false;
}

bool assign_SwitchAction_OperatedSwitch(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchAction* element = dynamic_cast<IEC61968::Operations::SwitchAction*>(BaseClass_ptr1))
	{
		element->OperatedSwitch = dynamic_cast<IEC61970::Base::Wires::Switch*>(BaseClass_ptr2);
		if(element->OperatedSwitch != nullptr)
			return true;
	}
	return false;
}

bool assign_OperationTag_PowerSystemResource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::OperationTag* element = dynamic_cast<IEC61968::Operations::OperationTag*>(BaseClass_ptr1))
	{
		element->PowerSystemResource = dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2);
		if(element->PowerSystemResource != nullptr)
			return true;
	}
	return false;
}

bool assign_OperationTag_Asset(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::OperationTag* element = dynamic_cast<IEC61968::Operations::OperationTag*>(BaseClass_ptr1))
	{
		element->Asset = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2);
		if(element->Asset != nullptr)
			return true;
	}
	return false;
}

bool assign_TagAction_OperationTag(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::TagAction* element = dynamic_cast<IEC61968::Operations::TagAction*>(BaseClass_ptr1))
	{
		element->OperationTag = dynamic_cast<IEC61968::Operations::OperationTag*>(BaseClass_ptr2);
		if(element->OperationTag != nullptr)
			return true;
	}
	return false;
}

bool assign_GroundAction_GroundedEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::GroundAction* element = dynamic_cast<IEC61968::Operations::GroundAction*>(BaseClass_ptr1))
	{
		element->GroundedEquipment = dynamic_cast<IEC61970::Base::Core::ConductingEquipment*>(BaseClass_ptr2);
		if(element->GroundedEquipment != nullptr)
			return true;
	}
	return false;
}

bool assign_GroundAction_AlongACLineSegment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::GroundAction* element = dynamic_cast<IEC61968::Operations::GroundAction*>(BaseClass_ptr1))
	{
		element->AlongACLineSegment = dynamic_cast<IEC61970::Base::Wires::ACLineSegment*>(BaseClass_ptr2);
		if(element->AlongACLineSegment != nullptr)
			return true;
	}
	return false;
}

bool assign_GroundAction_Ground(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::GroundAction* element = dynamic_cast<IEC61968::Operations::GroundAction*>(BaseClass_ptr1))
	{
		element->Ground = dynamic_cast<IEC61970::Base::Wires::Ground*>(BaseClass_ptr2);
		if(element->Ground != nullptr)
			return true;
	}
	return false;
}

bool assign_EnergySourceAction_EnergySource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::EnergySourceAction* element = dynamic_cast<IEC61968::Operations::EnergySourceAction*>(BaseClass_ptr1))
	{
		element->EnergySource = dynamic_cast<IEC61970::Base::Wires::EnergySource*>(BaseClass_ptr2);
		if(element->EnergySource != nullptr)
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

bool assign_Incident_Outage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::Incident* element = dynamic_cast<IEC61968::Operations::Incident*>(BaseClass_ptr1))
	{
		element->Outage = dynamic_cast<IEC61968::Operations::Outage*>(BaseClass_ptr2);
		if(element->Outage != nullptr)
			return true;
	}
	return false;
}

bool assign_Incident_Owner(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::Incident* element = dynamic_cast<IEC61968::Operations::Incident*>(BaseClass_ptr1))
	{
		element->Owner = dynamic_cast<IEC61968::Common::Operator*>(BaseClass_ptr2);
		if(element->Owner != nullptr)
			return true;
	}
	return false;
}

bool assign_OperationalUpdatedRating_PlannedOutage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::OperationalUpdatedRating* element = dynamic_cast<IEC61968::Operations::OperationalUpdatedRating*>(BaseClass_ptr1))
	{
		element->PlannedOutage = dynamic_cast<IEC61968::Operations::Outage*>(BaseClass_ptr2);
		if(element->PlannedOutage != nullptr)
			return true;
	}
	return false;
}

bool assign_SwitchingPlan_Outage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingPlan* element = dynamic_cast<IEC61968::Operations::SwitchingPlan*>(BaseClass_ptr1))
	{
		element->Outage = dynamic_cast<IEC61968::Operations::Outage*>(BaseClass_ptr2);
		if(element->Outage != nullptr)
			return true;
	}
	return false;
}

bool assign_ShuntCompensatorInfo_ShuntCompensatorControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::ShuntCompensatorInfo* element = dynamic_cast<IEC61968::AssetInfo::ShuntCompensatorInfo*>(BaseClass_ptr1))
	{
		element->ShuntCompensatorControl = dynamic_cast<IEC61968::InfIEC61968::InfWiresExt::ShuntCompensatorControl*>(BaseClass_ptr2);
		if(element->ShuntCompensatorControl != nullptr)
			return true;
	}
	return false;
}

bool assign_OpenCircuitTest_OpenEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::OpenCircuitTest* element = dynamic_cast<IEC61968::AssetInfo::OpenCircuitTest*>(BaseClass_ptr1))
	{
		element->OpenEnd = dynamic_cast<IEC61968::AssetInfo::TransformerEndInfo*>(BaseClass_ptr2);
		if(element->OpenEnd != nullptr)
			return true;
	}
	return false;
}

bool assign_OpenCircuitTest_EnergisedEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::OpenCircuitTest* element = dynamic_cast<IEC61968::AssetInfo::OpenCircuitTest*>(BaseClass_ptr1))
	{
		element->EnergisedEnd = dynamic_cast<IEC61968::AssetInfo::TransformerEndInfo*>(BaseClass_ptr2);
		if(element->EnergisedEnd != nullptr)
			return true;
	}
	return false;
}

bool assign_WireSpacingInfo_DuctBank(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::WireSpacingInfo* element = dynamic_cast<IEC61968::AssetInfo::WireSpacingInfo*>(BaseClass_ptr1))
	{
		element->DuctBank = dynamic_cast<IEC61968::InfIEC61968::InfAssets::DuctBank*>(BaseClass_ptr2);
		if(element->DuctBank != nullptr)
			return true;
	}
	return false;
}

bool assign_ShortCircuitTest_EnergisedEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::ShortCircuitTest* element = dynamic_cast<IEC61968::AssetInfo::ShortCircuitTest*>(BaseClass_ptr1))
	{
		element->EnergisedEnd = dynamic_cast<IEC61968::AssetInfo::TransformerEndInfo*>(BaseClass_ptr2);
		if(element->EnergisedEnd != nullptr)
			return true;
	}
	return false;
}

bool assign_NoLoadTest_EnergisedEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::NoLoadTest* element = dynamic_cast<IEC61968::AssetInfo::NoLoadTest*>(BaseClass_ptr1))
	{
		element->EnergisedEnd = dynamic_cast<IEC61968::AssetInfo::TransformerEndInfo*>(BaseClass_ptr2);
		if(element->EnergisedEnd != nullptr)
			return true;
	}
	return false;
}

bool assign_Tender_Receipt(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::Tender* element = dynamic_cast<IEC61968::PaymentMetering::Tender*>(BaseClass_ptr1))
	{
		element->Receipt = dynamic_cast<IEC61968::PaymentMetering::Receipt*>(BaseClass_ptr2);
		if(element->Receipt != nullptr)
			return true;
	}
	return false;
}

bool assign_CashierShift_PointOfSale(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::CashierShift* element = dynamic_cast<IEC61968::PaymentMetering::CashierShift*>(BaseClass_ptr1))
	{
		element->PointOfSale = dynamic_cast<IEC61968::PaymentMetering::PointOfSale*>(BaseClass_ptr2);
		if(element->PointOfSale != nullptr)
			return true;
	}
	return false;
}

bool assign_Card_Tender(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::Card* element = dynamic_cast<IEC61968::PaymentMetering::Card*>(BaseClass_ptr1))
	{
		element->Tender = dynamic_cast<IEC61968::PaymentMetering::Tender*>(BaseClass_ptr2);
		if(element->Tender != nullptr)
			return true;
	}
	return false;
}

bool assign_Cheque_Tender(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::Cheque* element = dynamic_cast<IEC61968::PaymentMetering::Cheque*>(BaseClass_ptr1))
	{
		element->Tender = dynamic_cast<IEC61968::PaymentMetering::Tender*>(BaseClass_ptr2);
		if(element->Tender != nullptr)
			return true;
	}
	return false;
}

bool assign_Register_EndDeviceFunction(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::Register* element = dynamic_cast<IEC61968::Metering::Register*>(BaseClass_ptr1))
	{
		element->EndDeviceFunction = dynamic_cast<IEC61968::Metering::EndDeviceFunction*>(BaseClass_ptr2);
		if(element->EndDeviceFunction != nullptr)
			return true;
	}
	return false;
}

bool assign_ReadingType_Channel(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::ReadingType* element = dynamic_cast<IEC61968::Metering::ReadingType*>(BaseClass_ptr1))
	{
		element->Channel = dynamic_cast<IEC61968::Metering::Channel*>(BaseClass_ptr2);
		if(element->Channel != nullptr)
			return true;
	}
	return false;
}

bool assign_EndDeviceEvent_UsagePoint(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDeviceEvent* element = dynamic_cast<IEC61968::Metering::EndDeviceEvent*>(BaseClass_ptr1))
	{
		element->UsagePoint = dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2);
		if(element->UsagePoint != nullptr)
			return true;
	}
	return false;
}

bool assign_EndDeviceEvent_EndDeviceEventType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDeviceEvent* element = dynamic_cast<IEC61968::Metering::EndDeviceEvent*>(BaseClass_ptr1))
	{
		element->EndDeviceEventType = dynamic_cast<IEC61968::Metering::EndDeviceEventType*>(BaseClass_ptr2);
		if(element->EndDeviceEventType != nullptr)
			return true;
	}
	return false;
}

bool assign_EndDeviceEvent_EndDevice(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDeviceEvent* element = dynamic_cast<IEC61968::Metering::EndDeviceEvent*>(BaseClass_ptr1))
	{
		element->EndDevice = dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr2);
		if(element->EndDevice != nullptr)
			return true;
	}
	return false;
}

bool assign_MeterReading_UsagePoint(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::MeterReading* element = dynamic_cast<IEC61968::Metering::MeterReading*>(BaseClass_ptr1))
	{
		element->UsagePoint = dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2);
		if(element->UsagePoint != nullptr)
			return true;
	}
	return false;
}

bool assign_MeterReading_CustomerAgreement(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::MeterReading* element = dynamic_cast<IEC61968::Metering::MeterReading*>(BaseClass_ptr1))
	{
		element->CustomerAgreement = dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr2);
		if(element->CustomerAgreement != nullptr)
			return true;
	}
	return false;
}

bool assign_Reading_ReadingType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::Reading* element = dynamic_cast<IEC61968::Metering::Reading*>(BaseClass_ptr1))
	{
		element->ReadingType = dynamic_cast<IEC61968::Metering::ReadingType*>(BaseClass_ptr2);
		if(element->ReadingType != nullptr)
			return true;
	}
	return false;
}

bool assign_PendingCalculation_ReadingType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::PendingCalculation* element = dynamic_cast<IEC61968::Metering::PendingCalculation*>(BaseClass_ptr1))
	{
		element->ReadingType = dynamic_cast<IEC61968::Metering::ReadingType*>(BaseClass_ptr2);
		if(element->ReadingType != nullptr)
			return true;
	}
	return false;
}

bool assign_IntervalBlock_PendingCalculation(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::IntervalBlock* element = dynamic_cast<IEC61968::Metering::IntervalBlock*>(BaseClass_ptr1))
	{
		element->PendingCalculation = dynamic_cast<IEC61968::Metering::PendingCalculation*>(BaseClass_ptr2);
		if(element->PendingCalculation != nullptr)
			return true;
	}
	return false;
}

bool assign_IntervalBlock_ReadingType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::IntervalBlock* element = dynamic_cast<IEC61968::Metering::IntervalBlock*>(BaseClass_ptr1))
	{
		element->ReadingType = dynamic_cast<IEC61968::Metering::ReadingType*>(BaseClass_ptr2);
		if(element->ReadingType != nullptr)
			return true;
	}
	return false;
}

bool assign_IntervalBlock_MeterReading(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::IntervalBlock* element = dynamic_cast<IEC61968::Metering::IntervalBlock*>(BaseClass_ptr1))
	{
		element->MeterReading = dynamic_cast<IEC61968::Metering::MeterReading*>(BaseClass_ptr2);
		if(element->MeterReading != nullptr)
			return true;
	}
	return false;
}

bool assign_EndDeviceControl_EndDeviceControlType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDeviceControl* element = dynamic_cast<IEC61968::Metering::EndDeviceControl*>(BaseClass_ptr1))
	{
		element->EndDeviceControlType = dynamic_cast<IEC61968::Metering::EndDeviceControlType*>(BaseClass_ptr2);
		if(element->EndDeviceControlType != nullptr)
			return true;
	}
	return false;
}

bool assign_EndDeviceControl_EndDeviceAction(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDeviceControl* element = dynamic_cast<IEC61968::Metering::EndDeviceControl*>(BaseClass_ptr1))
	{
		element->EndDeviceAction = dynamic_cast<IEC61968::Metering::EndDeviceAction*>(BaseClass_ptr2);
		if(element->EndDeviceAction != nullptr)
			return true;
	}
	return false;
}

bool assign_ReadingQuality_ReadingQualityType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::ReadingQuality* element = dynamic_cast<IEC61968::Metering::ReadingQuality*>(BaseClass_ptr1))
	{
		element->ReadingQualityType = dynamic_cast<IEC61968::Metering::ReadingQualityType*>(BaseClass_ptr2);
		if(element->ReadingQualityType != nullptr)
			return true;
	}
	return false;
}

bool assign_ReadingQuality_Reading(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::ReadingQuality* element = dynamic_cast<IEC61968::Metering::ReadingQuality*>(BaseClass_ptr1))
	{
		element->Reading = dynamic_cast<IEC61968::Metering::BaseReading*>(BaseClass_ptr2);
		if(element->Reading != nullptr)
			return true;
	}
	return false;
}

bool assign_MeterServiceWork_UsagePoint(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::MeterServiceWork* element = dynamic_cast<IEC61968::Metering::MeterServiceWork*>(BaseClass_ptr1))
	{
		element->UsagePoint = dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2);
		if(element->UsagePoint != nullptr)
			return true;
	}
	return false;
}

bool assign_MeterServiceWork_Meter(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::MeterServiceWork* element = dynamic_cast<IEC61968::Metering::MeterServiceWork*>(BaseClass_ptr1))
	{
		element->Meter = dynamic_cast<IEC61968::Metering::Meter*>(BaseClass_ptr2);
		if(element->Meter != nullptr)
			return true;
	}
	return false;
}

bool assign_MeterServiceWork_OldMeter(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::MeterServiceWork* element = dynamic_cast<IEC61968::Metering::MeterServiceWork*>(BaseClass_ptr1))
	{
		element->OldMeter = dynamic_cast<IEC61968::Metering::Meter*>(BaseClass_ptr2);
		if(element->OldMeter != nullptr)
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

bool assign_Organisation_ActivityRecords(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Organisation* element = dynamic_cast<IEC61968::Common::Organisation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::ActivityRecord*>(BaseClass_ptr2) != nullptr)
		{
			element->ActivityRecords.push_back(dynamic_cast<IEC61968::Common::ActivityRecord*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OrganisationRole_ConfigurationEvents(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::OrganisationRole* element = dynamic_cast<IEC61968::Common::OrganisationRole*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2) != nullptr)
		{
			element->ConfigurationEvents.push_back(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2));
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

bool assign_Document_ConfigurationEvents(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Document* element = dynamic_cast<IEC61968::Common::Document*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2) != nullptr)
		{
			element->ConfigurationEvents.push_back(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ErpRecLineItem_ErpPayments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpRecLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpRecLineItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayment*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpPayments.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ErpRecLineItem_ErpJournalEntries(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpRecLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpRecLineItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpJournalEntries.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ErpPayableLineItem_ErpPayments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpPayableLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayableLineItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayment*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpPayments.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ErpPayableLineItem_ErpJournalEntries(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpPayableLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayableLineItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpJournalEntries.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Medium_Assets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::Medium* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::Medium*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2) != nullptr)
		{
			element->Assets.push_back(dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Specification_Mediums(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::Specification* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::Specification*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Medium*>(BaseClass_ptr2) != nullptr)
		{
			element->Mediums.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Medium*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Specification_AssetPropertyCurves(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::Specification* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::Specification*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::AssetPropertyCurve*>(BaseClass_ptr2) != nullptr)
		{
			element->AssetPropertyCurves.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::AssetPropertyCurve*>(BaseClass_ptr2));
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

bool assign_TransformerObservation_WindingInsulationPFs(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::TransformerObservation* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::TransformerObservation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::WindingInsulation*>(BaseClass_ptr2) != nullptr)
		{
			element->WindingInsulationPFs.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::WindingInsulation*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ProcedureDataSet_MeasurementValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::ProcedureDataSet* element = dynamic_cast<IEC61968::Assets::ProcedureDataSet*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::MeasurementValue*>(BaseClass_ptr2) != nullptr)
		{
			element->MeasurementValues.push_back(dynamic_cast<IEC61970::Base::Meas::MeasurementValue*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ProcedureDataSet_TransformerObservations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::ProcedureDataSet* element = dynamic_cast<IEC61968::Assets::ProcedureDataSet*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::TransformerObservation*>(BaseClass_ptr2) != nullptr)
		{
			element->TransformerObservations.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::TransformerObservation*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_UserAttribute_ProcedureDataSets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::UserAttribute* element = dynamic_cast<IEC61968::Common::UserAttribute*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Assets::ProcedureDataSet*>(BaseClass_ptr2) != nullptr)
		{
			element->ProcedureDataSets.push_back(dynamic_cast<IEC61968::Assets::ProcedureDataSet*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ErpInvoiceLineItem_ErpJournalEntries(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpJournalEntries.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ErpInvoiceLineItem_ErpPayments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayment*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpPayments.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ErpInvoiceLineItem_UserAttributes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::UserAttribute*>(BaseClass_ptr2) != nullptr)
		{
			element->UserAttributes.push_back(dynamic_cast<IEC61968::Common::UserAttribute*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Reconditioning_TransformerObservations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::Reconditioning* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::Reconditioning*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::TransformerObservation*>(BaseClass_ptr2) != nullptr)
		{
			element->TransformerObservations.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::TransformerObservation*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AssetInfo_PowerSystemResources(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::AssetInfo* element = dynamic_cast<IEC61968::Assets::AssetInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2) != nullptr)
		{
			element->PowerSystemResources.push_back(dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Location_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Location* element = dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::Measurement*>(BaseClass_ptr2) != nullptr)
		{
			element->Measurements.push_back(dynamic_cast<IEC61970::Base::Meas::Measurement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Location_PositionPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Location* element = dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::PositionPoint*>(BaseClass_ptr2) != nullptr)
		{
			element->PositionPoints.push_back(dynamic_cast<IEC61968::Common::PositionPoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Location_PowerSystemResources(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Location* element = dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2) != nullptr)
		{
			element->PowerSystemResources.push_back(dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Location_ConfigurationEvents(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Location* element = dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2) != nullptr)
		{
			element->ConfigurationEvents.push_back(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Asset_OrganisationRoles(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Asset* element = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Assets::AssetOrganisationRole*>(BaseClass_ptr2) != nullptr)
		{
			element->OrganisationRoles.push_back(dynamic_cast<IEC61968::Assets::AssetOrganisationRole*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Asset_PowerSystemResources(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Asset* element = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2) != nullptr)
		{
			element->PowerSystemResources.push_back(dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Asset_AssetPropertyCurves(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Asset* element = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::AssetPropertyCurve*>(BaseClass_ptr2) != nullptr)
		{
			element->AssetPropertyCurves.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::AssetPropertyCurve*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Asset_ErpRecDeliveryItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Asset* element = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpRecDelvLineItem*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpRecDeliveryItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpRecDelvLineItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Asset_Reconditionings(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Asset* element = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Reconditioning*>(BaseClass_ptr2) != nullptr)
		{
			element->Reconditionings.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Reconditioning*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Asset_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Asset* element = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::Measurement*>(BaseClass_ptr2) != nullptr)
		{
			element->Measurements.push_back(dynamic_cast<IEC61970::Base::Meas::Measurement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Asset_ConfigurationEvents(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Asset* element = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2) != nullptr)
		{
			element->ConfigurationEvents.push_back(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Asset_ActivityRecords(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Asset* element = dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::ActivityRecord*>(BaseClass_ptr2) != nullptr)
		{
			element->ActivityRecords.push_back(dynamic_cast<IEC61968::Common::ActivityRecord*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AssetContainer_Seals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::AssetContainer* element = dynamic_cast<IEC61968::Assets::AssetContainer*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Assets::Seal*>(BaseClass_ptr2) != nullptr)
		{
			element->Seals.push_back(dynamic_cast<IEC61968::Assets::Seal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AssetLocationHazard_Locations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::AssetLocationHazard* element = dynamic_cast<IEC61968::Assets::AssetLocationHazard*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr2) != nullptr)
		{
			element->Locations.push_back(dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Procedure_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Procedure* element = dynamic_cast<IEC61968::Assets::Procedure*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::Measurement*>(BaseClass_ptr2) != nullptr)
		{
			element->Measurements.push_back(dynamic_cast<IEC61970::Base::Meas::Measurement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Procedure_ProcedureDataSets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Procedure* element = dynamic_cast<IEC61968::Assets::Procedure*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Assets::ProcedureDataSet*>(BaseClass_ptr2) != nullptr)
		{
			element->ProcedureDataSets.push_back(dynamic_cast<IEC61968::Assets::ProcedureDataSet*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Procedure_Limits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Procedure* element = dynamic_cast<IEC61968::Assets::Procedure*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::Limit*>(BaseClass_ptr2) != nullptr)
		{
			element->Limits.push_back(dynamic_cast<IEC61970::Base::Meas::Limit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Procedure_Assets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::Procedure* element = dynamic_cast<IEC61968::Assets::Procedure*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2) != nullptr)
		{
			element->Assets.push_back(dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AssetModelCatalogueItem_ErpQuoteLineItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogueItem* element = dynamic_cast<IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogueItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpQuoteLineItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpQuoteLineItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AssetModelCatalogueItem_ErpPOLineItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogueItem* element = dynamic_cast<IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogueItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPOLineItem*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpPOLineItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPOLineItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ProductAssetModel_AssetModelCatalogueItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Assets::ProductAssetModel* element = dynamic_cast<IEC61968::Assets::ProductAssetModel*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogueItem*>(BaseClass_ptr2) != nullptr)
		{
			element->AssetModelCatalogueItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssetInfo::AssetModelCatalogueItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Structure_StructureSupports(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::Structure* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::Structure*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::StructureSupport*>(BaseClass_ptr2) != nullptr)
		{
			element->StructureSupports.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::StructureSupport*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Pole_Streetlights(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::Pole* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::Pole*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Streetlight*>(BaseClass_ptr2) != nullptr)
		{
			element->Streetlights.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Streetlight*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ReliabilityInfo_Assets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::ReliabilityInfo* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::ReliabilityInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2) != nullptr)
		{
			element->Assets.push_back(dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Bushing_BushingInsulationPFs(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::Bushing* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::Bushing*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::BushingInsulationPF*>(BaseClass_ptr2) != nullptr)
		{
			element->BushingInsulationPFs.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::BushingInsulationPF*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CoolingPowerRating_Reconditionings(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::CoolingPowerRating* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::CoolingPowerRating*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Reconditioning*>(BaseClass_ptr2) != nullptr)
		{
			element->Reconditionings.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Reconditioning*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Project_SubProjects(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::Project* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::Project*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::Project*>(BaseClass_ptr2) != nullptr)
		{
			element->SubProjects.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::Project*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ErpProjectAccounting_Projects(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpProjectAccounting* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpProjectAccounting*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::Project*>(BaseClass_ptr2) != nullptr)
		{
			element->Projects.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::Project*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CUGroup_ChildCUGroups(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CUGroup* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CUGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::CUGroup*>(BaseClass_ptr2) != nullptr)
		{
			element->ChildCUGroups.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::CUGroup*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CompatibleUnit_DesignLocationCUs(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CompatibleUnit* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocationCU*>(BaseClass_ptr2) != nullptr)
		{
			element->DesignLocationCUs.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocationCU*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CompatibleUnit_CUAssets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CompatibleUnit* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::CUAsset*>(BaseClass_ptr2) != nullptr)
		{
			element->CUAssets.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::CUAsset*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CompatibleUnit_Procedures(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CompatibleUnit* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Assets::Procedure*>(BaseClass_ptr2) != nullptr)
		{
			element->Procedures.push_back(dynamic_cast<IEC61968::Assets::Procedure*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TypeMaterial_ErpReqLineItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::TypeMaterial* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::TypeMaterial*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpReqLineItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TypeMaterial_MaterialItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::TypeMaterial* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::TypeMaterial*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Work::MaterialItem*>(BaseClass_ptr2) != nullptr)
		{
			element->MaterialItems.push_back(dynamic_cast<IEC61968::Work::MaterialItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CUMaterialItem_CompatibleUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CUMaterialItem* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CUMaterialItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->CompatibleUnits.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PropertyUnit_CompatibleUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::PropertyUnit* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::PropertyUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->CompatibleUnits.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PropertyUnit_CUMaterialItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::PropertyUnit* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::PropertyUnit*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::CUMaterialItem*>(BaseClass_ptr2) != nullptr)
		{
			element->CUMaterialItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::CUMaterialItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OverheadCost_WorkCostDetails(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::OverheadCost* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::OverheadCost*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr2) != nullptr)
		{
			element->WorkCostDetails.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_QualificationRequirement_Specifications(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::QualificationRequirement* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::QualificationRequirement*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Specification*>(BaseClass_ptr2) != nullptr)
		{
			element->Specifications.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Specification*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TimeSchedule_TimePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::TimeSchedule* element = dynamic_cast<IEC61968::Common::TimeSchedule*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::TimePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->TimePoints.push_back(dynamic_cast<IEC61968::Common::TimePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_BaseWork_TimeSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Work::BaseWork* element = dynamic_cast<IEC61968::Work::BaseWork*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Work::WorkTimeSchedule*>(BaseClass_ptr2) != nullptr)
		{
			element->TimeSchedules.push_back(dynamic_cast<IEC61968::Work::WorkTimeSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Work_WorkTasks(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Work::Work* element = dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Work::WorkTask*>(BaseClass_ptr2) != nullptr)
		{
			element->WorkTasks.push_back(dynamic_cast<IEC61968::Work::WorkTask*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Appointment_Works(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Appointment* element = dynamic_cast<IEC61968::Common::Appointment*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2) != nullptr)
		{
			element->Works.push_back(dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PersonRole_Appointments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::PersonRole* element = dynamic_cast<IEC61968::Common::PersonRole*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::Appointment*>(BaseClass_ptr2) != nullptr)
		{
			element->Appointments.push_back(dynamic_cast<IEC61968::Common::Appointment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PersonRole_ConfigurationEvents(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::PersonRole* element = dynamic_cast<IEC61968::Common::PersonRole*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2) != nullptr)
		{
			element->ConfigurationEvents.push_back(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Crew_CrewMembers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Crew* element = dynamic_cast<IEC61968::Common::Crew*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::CrewMember*>(BaseClass_ptr2) != nullptr)
		{
			element->CrewMembers.push_back(dynamic_cast<IEC61968::Common::CrewMember*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WorkTask_MaterialItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Work::WorkTask* element = dynamic_cast<IEC61968::Work::WorkTask*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Work::MaterialItem*>(BaseClass_ptr2) != nullptr)
		{
			element->MaterialItems.push_back(dynamic_cast<IEC61968::Work::MaterialItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WorkTask_Crews(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Work::WorkTask* element = dynamic_cast<IEC61968::Work::WorkTask*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::Crew*>(BaseClass_ptr2) != nullptr)
		{
			element->Crews.push_back(dynamic_cast<IEC61968::Common::Crew*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WorkTask_Assets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Work::WorkTask* element = dynamic_cast<IEC61968::Work::WorkTask*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2) != nullptr)
		{
			element->Assets.push_back(dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ContractorItem_ErpPayables(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::ContractorItem* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::ContractorItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayable*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpPayables.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpPayable*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldWorkTask_QualificationRequirements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::OldWorkTask* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::QualificationRequirement*>(BaseClass_ptr2) != nullptr)
		{
			element->QualificationRequirements.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::QualificationRequirement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldWorkTask_Usages(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::OldWorkTask* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::Usage*>(BaseClass_ptr2) != nullptr)
		{
			element->Usages.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::Usage*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldWorkTask_MiscCostItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::OldWorkTask* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::MiscCostItem*>(BaseClass_ptr2) != nullptr)
		{
			element->MiscCostItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::MiscCostItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldWorkTask_LaborItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::OldWorkTask* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::LaborItem*>(BaseClass_ptr2) != nullptr)
		{
			element->LaborItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::LaborItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldWorkTask_ContractorItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::OldWorkTask* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::ContractorItem*>(BaseClass_ptr2) != nullptr)
		{
			element->ContractorItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::ContractorItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WorkCostDetail_PropertyUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::WorkCostDetail* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::PropertyUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->PropertyUnits.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::PropertyUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WorkCostDetail_ContractorItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::WorkCostDetail* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::ContractorItem*>(BaseClass_ptr2) != nullptr)
		{
			element->ContractorItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::ContractorItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WorkCostDetail_Works(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::WorkCostDetail* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2) != nullptr)
		{
			element->Works.push_back(dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DesignLocationCU_WorkTasks(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::DesignLocationCU* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocationCU*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr2) != nullptr)
		{
			element->WorkTasks.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DesignLocationCU_Designs(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::DesignLocationCU* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocationCU*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::Design*>(BaseClass_ptr2) != nullptr)
		{
			element->Designs.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::Design*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DesignLocationCU_ConditionFactors(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::DesignLocationCU* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocationCU*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::ConditionFactor*>(BaseClass_ptr2) != nullptr)
		{
			element->ConditionFactors.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::ConditionFactor*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DesignLocationCU_CUGroups(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::DesignLocationCU* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocationCU*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::CUGroup*>(BaseClass_ptr2) != nullptr)
		{
			element->CUGroups.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::CUGroup*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Design_WorkTasks(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::Design* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::Design*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr2) != nullptr)
		{
			element->WorkTasks.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Design_WorkCostDetails(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::Design* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::Design*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr2) != nullptr)
		{
			element->WorkCostDetails.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Design_ErpBOMs(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::Design* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::Design*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpBOM*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpBOMs.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpBOM*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Design_ConditionFactors(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::Design* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::Design*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::ConditionFactor*>(BaseClass_ptr2) != nullptr)
		{
			element->ConditionFactors.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::ConditionFactor*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DesignLocation_MiscCostItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::DesignLocation* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::MiscCostItem*>(BaseClass_ptr2) != nullptr)
		{
			element->MiscCostItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::MiscCostItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DesignLocation_DesignLocationCUs(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::DesignLocation* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocationCU*>(BaseClass_ptr2) != nullptr)
		{
			element->DesignLocationCUs.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocationCU*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DesignLocation_Designs(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::DesignLocation* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::Design*>(BaseClass_ptr2) != nullptr)
		{
			element->Designs.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::Design*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DesignLocation_ConditionFactors(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::DesignLocation* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::ConditionFactor*>(BaseClass_ptr2) != nullptr)
		{
			element->ConditionFactors.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::ConditionFactor*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DesignLocation_WorkLocations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::DesignLocation* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::DesignLocation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Work::WorkLocation*>(BaseClass_ptr2) != nullptr)
		{
			element->WorkLocations.push_back(dynamic_cast<IEC61968::Work::WorkLocation*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_GenericAssetModelOrMaterial_ErpReqLineItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpReqLineItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_GenericAssetModelOrMaterial_ErpBomItemDatas(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpBomItemData*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpBomItemDatas.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpBomItemData*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_GenericAssetModelOrMaterial_ProductAssetModels(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Assets::ProductAssetModel*>(BaseClass_ptr2) != nullptr)
		{
			element->ProductAssetModels.push_back(dynamic_cast<IEC61968::Assets::ProductAssetModel*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DimensionsInfo_Specifications(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfAssets::DimensionsInfo* element = dynamic_cast<IEC61968::InfIEC61968::InfAssets::DimensionsInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Specification*>(BaseClass_ptr2) != nullptr)
		{
			element->Specifications.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Specification*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_LandProperty_LocationGrants(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfLocations::LandProperty* element = dynamic_cast<IEC61968::InfIEC61968::InfLocations::LandProperty*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfLocations::LocationGrant*>(BaseClass_ptr2) != nullptr)
		{
			element->LocationGrants.push_back(dynamic_cast<IEC61968::InfIEC61968::InfLocations::LocationGrant*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_LandProperty_ErpSiteLevelDatas(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfLocations::LandProperty* element = dynamic_cast<IEC61968::InfIEC61968::InfLocations::LandProperty*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpSiteLevelData*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpSiteLevelDatas.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpSiteLevelData*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_LandProperty_ErpOrganisationRoles(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfLocations::LandProperty* element = dynamic_cast<IEC61968::InfIEC61968::InfLocations::LandProperty*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfCommon::PropertyOrganisationRole*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpOrganisationRoles.push_back(dynamic_cast<IEC61968::InfIEC61968::InfCommon::PropertyOrganisationRole*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_LandProperty_ErpPersonRoles(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfLocations::LandProperty* element = dynamic_cast<IEC61968::InfIEC61968::InfLocations::LandProperty*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfCommon::PersonPropertyRole*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpPersonRoles.push_back(dynamic_cast<IEC61968::InfIEC61968::InfCommon::PersonPropertyRole*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_LandProperty_AssetContainers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfLocations::LandProperty* element = dynamic_cast<IEC61968::InfIEC61968::InfLocations::LandProperty*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Assets::AssetContainer*>(BaseClass_ptr2) != nullptr)
		{
			element->AssetContainers.push_back(dynamic_cast<IEC61968::Assets::AssetContainer*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_LandProperty_Locations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfLocations::LandProperty* element = dynamic_cast<IEC61968::InfIEC61968::InfLocations::LandProperty*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr2) != nullptr)
		{
			element->Locations.push_back(dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_RightOfWay_LandProperties(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfLocations::RightOfWay* element = dynamic_cast<IEC61968::InfIEC61968::InfLocations::RightOfWay*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfLocations::LandProperty*>(BaseClass_ptr2) != nullptr)
		{
			element->LandProperties.push_back(dynamic_cast<IEC61968::InfIEC61968::InfLocations::LandProperty*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Route_Locations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfLocations::Route* element = dynamic_cast<IEC61968::InfIEC61968::InfLocations::Route*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr2) != nullptr)
		{
			element->Locations.push_back(dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr2));
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

bool assign_TransformerEndInfo_FromMeshImpedances(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::TransformerEndInfo* element = dynamic_cast<IEC61968::AssetInfo::TransformerEndInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::TransformerMeshImpedance*>(BaseClass_ptr2) != nullptr)
		{
			element->FromMeshImpedances.push_back(dynamic_cast<IEC61970::Base::Wires::TransformerMeshImpedance*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TransformerEndInfo_ToMeshImpedances(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::TransformerEndInfo* element = dynamic_cast<IEC61968::AssetInfo::TransformerEndInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::TransformerMeshImpedance*>(BaseClass_ptr2) != nullptr)
		{
			element->ToMeshImpedances.push_back(dynamic_cast<IEC61970::Base::Wires::TransformerMeshImpedance*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TransformerTankInfo_TransformerEndInfos(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::TransformerTankInfo* element = dynamic_cast<IEC61968::AssetInfo::TransformerTankInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::AssetInfo::TransformerEndInfo*>(BaseClass_ptr2) != nullptr)
		{
			element->TransformerEndInfos.push_back(dynamic_cast<IEC61968::AssetInfo::TransformerEndInfo*>(BaseClass_ptr2));
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

bool assign_WorkBillingInfo_ErpLineItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCustomers::WorkBillingInfo* element = dynamic_cast<IEC61968::InfIEC61968::InfCustomers::WorkBillingInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpLineItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WorkBillingInfo_Works(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCustomers::WorkBillingInfo* element = dynamic_cast<IEC61968::InfIEC61968::InfCustomers::WorkBillingInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2) != nullptr)
		{
			element->Works.push_back(dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_EndDevice_EndDeviceFunctions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDevice* element = dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::EndDeviceFunction*>(BaseClass_ptr2) != nullptr)
		{
			element->EndDeviceFunctions.push_back(dynamic_cast<IEC61968::Metering::EndDeviceFunction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Charge_ChildCharges(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::Charge* element = dynamic_cast<IEC61968::PaymentMetering::Charge*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Charge*>(BaseClass_ptr2) != nullptr)
		{
			element->ChildCharges.push_back(dynamic_cast<IEC61968::PaymentMetering::Charge*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TimeTariffInterval_Charges(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::TimeTariffInterval* element = dynamic_cast<IEC61968::PaymentMetering::TimeTariffInterval*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Charge*>(BaseClass_ptr2) != nullptr)
		{
			element->Charges.push_back(dynamic_cast<IEC61968::PaymentMetering::Charge*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ConsumptionTariffInterval_TouTariffIntervals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::ConsumptionTariffInterval* element = dynamic_cast<IEC61968::PaymentMetering::ConsumptionTariffInterval*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::TimeTariffInterval*>(BaseClass_ptr2) != nullptr)
		{
			element->TouTariffIntervals.push_back(dynamic_cast<IEC61968::PaymentMetering::TimeTariffInterval*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ConsumptionTariffInterval_Charges(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::ConsumptionTariffInterval* element = dynamic_cast<IEC61968::PaymentMetering::ConsumptionTariffInterval*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Charge*>(BaseClass_ptr2) != nullptr)
		{
			element->Charges.push_back(dynamic_cast<IEC61968::PaymentMetering::Charge*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TariffProfile_TimeTariffIntervals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::TariffProfile* element = dynamic_cast<IEC61968::PaymentMetering::TariffProfile*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::TimeTariffInterval*>(BaseClass_ptr2) != nullptr)
		{
			element->TimeTariffIntervals.push_back(dynamic_cast<IEC61968::PaymentMetering::TimeTariffInterval*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TariffProfile_ConsumptionTariffIntervals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::TariffProfile* element = dynamic_cast<IEC61968::PaymentMetering::TariffProfile*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::ConsumptionTariffInterval*>(BaseClass_ptr2) != nullptr)
		{
			element->ConsumptionTariffIntervals.push_back(dynamic_cast<IEC61968::PaymentMetering::ConsumptionTariffInterval*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Tariff_TariffProfiles(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::Tariff* element = dynamic_cast<IEC61968::Customers::Tariff*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::TariffProfile*>(BaseClass_ptr2) != nullptr)
		{
			element->TariffProfiles.push_back(dynamic_cast<IEC61968::PaymentMetering::TariffProfile*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PricingStructure_UsagePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::PricingStructure* element = dynamic_cast<IEC61968::Customers::PricingStructure*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->UsagePoints.push_back(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PricingStructure_Tariffs(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::PricingStructure* element = dynamic_cast<IEC61968::Customers::PricingStructure*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::Tariff*>(BaseClass_ptr2) != nullptr)
		{
			element->Tariffs.push_back(dynamic_cast<IEC61968::Customers::Tariff*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PricingStructure_Transactions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::PricingStructure* element = dynamic_cast<IEC61968::Customers::PricingStructure*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2) != nullptr)
		{
			element->Transactions.push_back(dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ServiceCategory_PricingStructures(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::ServiceCategory* element = dynamic_cast<IEC61968::Customers::ServiceCategory*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::PricingStructure*>(BaseClass_ptr2) != nullptr)
		{
			element->PricingStructures.push_back(dynamic_cast<IEC61968::Customers::PricingStructure*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ServiceCategory_ConfigurationEvents(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::ServiceCategory* element = dynamic_cast<IEC61968::Customers::ServiceCategory*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2) != nullptr)
		{
			element->ConfigurationEvents.push_back(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_UsagePoint_Equipments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::UsagePoint* element = dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::Equipment*>(BaseClass_ptr2) != nullptr)
		{
			element->Equipments.push_back(dynamic_cast<IEC61970::Base::Core::Equipment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_UsagePoint_ServiceMultipliers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::UsagePoint* element = dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::ServiceMultiplier*>(BaseClass_ptr2) != nullptr)
		{
			element->ServiceMultipliers.push_back(dynamic_cast<IEC61968::Metering::ServiceMultiplier*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_UsagePoint_EndDevices(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::UsagePoint* element = dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr2) != nullptr)
		{
			element->EndDevices.push_back(dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_UsagePoint_ConfigurationEvents(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::UsagePoint* element = dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2) != nullptr)
		{
			element->ConfigurationEvents.push_back(dynamic_cast<IEC61968::Common::ConfigurationEvent*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ServiceLocation_EndDevices(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::ServiceLocation* element = dynamic_cast<IEC61968::Customers::ServiceLocation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr2) != nullptr)
		{
			element->EndDevices.push_back(dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ServiceLocation_UsagePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::ServiceLocation* element = dynamic_cast<IEC61968::Customers::ServiceLocation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->UsagePoints.push_back(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AuxiliaryAccount_PaymentTransactions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::AuxiliaryAccount* element = dynamic_cast<IEC61968::PaymentMetering::AuxiliaryAccount*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2) != nullptr)
		{
			element->PaymentTransactions.push_back(dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AuxiliaryAccount_Charges(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::AuxiliaryAccount* element = dynamic_cast<IEC61968::PaymentMetering::AuxiliaryAccount*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Charge*>(BaseClass_ptr2) != nullptr)
		{
			element->Charges.push_back(dynamic_cast<IEC61968::PaymentMetering::Charge*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AuxiliaryAgreement_AuxiliaryAccounts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::AuxiliaryAgreement* element = dynamic_cast<IEC61968::PaymentMetering::AuxiliaryAgreement*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::AuxiliaryAccount*>(BaseClass_ptr2) != nullptr)
		{
			element->AuxiliaryAccounts.push_back(dynamic_cast<IEC61968::PaymentMetering::AuxiliaryAccount*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CustomerAgreement_ServiceLocations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::CustomerAgreement* element = dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::ServiceLocation*>(BaseClass_ptr2) != nullptr)
		{
			element->ServiceLocations.push_back(dynamic_cast<IEC61968::Customers::ServiceLocation*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CustomerAgreement_AuxiliaryAgreements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::CustomerAgreement* element = dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::AuxiliaryAgreement*>(BaseClass_ptr2) != nullptr)
		{
			element->AuxiliaryAgreements.push_back(dynamic_cast<IEC61968::PaymentMetering::AuxiliaryAgreement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CustomerAgreement_PricingStructures(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::CustomerAgreement* element = dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::PricingStructure*>(BaseClass_ptr2) != nullptr)
		{
			element->PricingStructures.push_back(dynamic_cast<IEC61968::Customers::PricingStructure*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CustomerAgreement_UsagePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::CustomerAgreement* element = dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->UsagePoints.push_back(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CustomerAccount_ErpInvoicees(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::CustomerAccount* element = dynamic_cast<IEC61968::Customers::CustomerAccount*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoice*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpInvoicees.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoice*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CustomerAccount_WorkBillingInfos(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::CustomerAccount* element = dynamic_cast<IEC61968::Customers::CustomerAccount*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfCustomers::WorkBillingInfo*>(BaseClass_ptr2) != nullptr)
		{
			element->WorkBillingInfos.push_back(dynamic_cast<IEC61968::InfIEC61968::InfCustomers::WorkBillingInfo*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CustomerAccount_CustomerAgreements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::CustomerAccount* element = dynamic_cast<IEC61968::Customers::CustomerAccount*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr2) != nullptr)
		{
			element->CustomerAgreements.push_back(dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CustomerAccount_PaymentTransactions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::CustomerAccount* element = dynamic_cast<IEC61968::Customers::CustomerAccount*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2) != nullptr)
		{
			element->PaymentTransactions.push_back(dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CustomerBillingInfo_ErpInvoiceLineItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCustomers::CustomerBillingInfo* element = dynamic_cast<IEC61968::InfIEC61968::InfCustomers::CustomerBillingInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpInvoiceLineItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Person_Roles(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::Person* element = dynamic_cast<IEC61968::Common::Person*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::PersonRole*>(BaseClass_ptr2) != nullptr)
		{
			element->Roles.push_back(dynamic_cast<IEC61968::Common::PersonRole*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldPerson_MeasurementValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldPerson* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldPerson*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Meas::MeasurementValue*>(BaseClass_ptr2) != nullptr)
		{
			element->MeasurementValues.push_back(dynamic_cast<IEC61970::Base::Meas::MeasurementValue*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldPerson_LandPropertyRoles(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldPerson* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldPerson*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfCommon::PersonPropertyRole*>(BaseClass_ptr2) != nullptr)
		{
			element->LandPropertyRoles.push_back(dynamic_cast<IEC61968::InfIEC61968::InfCommon::PersonPropertyRole*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldPerson_LaborItems(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldPerson* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldPerson*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::LaborItem*>(BaseClass_ptr2) != nullptr)
		{
			element->LaborItems.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::LaborItem*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldPerson_Skills(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldPerson* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldPerson*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfCommon::Skill*>(BaseClass_ptr2) != nullptr)
		{
			element->Skills.push_back(dynamic_cast<IEC61968::InfIEC61968::InfCommon::Skill*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldPerson_OrganisationRoles(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldPerson* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldPerson*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfCommon::PersonOrganisationRole*>(BaseClass_ptr2) != nullptr)
		{
			element->OrganisationRoles.push_back(dynamic_cast<IEC61968::InfIEC61968::InfCommon::PersonOrganisationRole*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldPerson_DocumentRoles(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldPerson* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldPerson*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfCommon::PersonDocumentRole*>(BaseClass_ptr2) != nullptr)
		{
			element->DocumentRoles.push_back(dynamic_cast<IEC61968::InfIEC61968::InfCommon::PersonDocumentRole*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Craft_ErpPersons(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::Craft* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::Craft*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldPerson*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpPersons.push_back(dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldPerson*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Skill_QualificationRequirements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::Skill* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::Skill*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::QualificationRequirement*>(BaseClass_ptr2) != nullptr)
		{
			element->QualificationRequirements.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::QualificationRequirement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Skill_Crafts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::Skill* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::Skill*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfCommon::Craft*>(BaseClass_ptr2) != nullptr)
		{
			element->Crafts.push_back(dynamic_cast<IEC61968::InfIEC61968::InfCommon::Craft*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldCrew_Assignments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldCrew* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldCrew*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::Assignment*>(BaseClass_ptr2) != nullptr)
		{
			element->Assignments.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::Assignment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldCrew_ShiftPatterns(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldCrew* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldCrew*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::ShiftPattern*>(BaseClass_ptr2) != nullptr)
		{
			element->ShiftPatterns.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::ShiftPattern*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldCrew_Organisations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldCrew* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldCrew*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::Organisation*>(BaseClass_ptr2) != nullptr)
		{
			element->Organisations.push_back(dynamic_cast<IEC61968::Common::Organisation*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OldCrew_Locations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfCommon::OldCrew* element = dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldCrew*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr2) != nullptr)
		{
			element->Locations.push_back(dynamic_cast<IEC61968::Common::Location*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CUWorkEquipmentItem_CompatibleUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CUWorkEquipmentItem* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CUWorkEquipmentItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->CompatibleUnits.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WorkFlowStep_WorkTasks(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::WorkFlowStep* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkFlowStep*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr2) != nullptr)
		{
			element->WorkTasks.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CostType_ChildCostTypes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CostType* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CostType*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::CostType*>(BaseClass_ptr2) != nullptr)
		{
			element->ChildCostTypes.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::CostType*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CostType_WorkCostDetails(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CostType* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CostType*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr2) != nullptr)
		{
			element->WorkCostDetails.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::WorkCostDetail*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CostType_ErpJournalEntries(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CostType* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CostType*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpJournalEntries.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CostType_CompatibleUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CostType* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CostType*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->CompatibleUnits.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CUContractorItem_CompatibleUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CUContractorItem* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CUContractorItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->CompatibleUnits.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Capability_WorkTasks(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::Capability* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::Capability*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr2) != nullptr)
		{
			element->WorkTasks.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::OldWorkTask*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Capability_Crafts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::Capability* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::Capability*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfCommon::Craft*>(BaseClass_ptr2) != nullptr)
		{
			element->Crafts.push_back(dynamic_cast<IEC61968::InfIEC61968::InfCommon::Craft*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CULaborItem_QualificationRequirements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CULaborItem* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CULaborItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::QualificationRequirement*>(BaseClass_ptr2) != nullptr)
		{
			element->QualificationRequirements.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::QualificationRequirement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CULaborItem_CompatibleUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CULaborItem* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CULaborItem*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->CompatibleUnits.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CUAllowableAction_CompatibleUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::CUAllowableAction* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::CUAllowableAction*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2) != nullptr)
		{
			element->CompatibleUnits.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::CompatibleUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_BusinessCase_Projects(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::BusinessCase* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::BusinessCase*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfWork::Project*>(BaseClass_ptr2) != nullptr)
		{
			element->Projects.push_back(dynamic_cast<IEC61968::InfIEC61968::InfWork::Project*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_BusinessCase_Works(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfWork::BusinessCase* element = dynamic_cast<IEC61968::InfIEC61968::InfWork::BusinessCase*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2) != nullptr)
		{
			element->Works.push_back(dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ErpTimeSheet_ErpTimeEntries(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpTimeSheet* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpTimeSheet*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpTimeEntry*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpTimeEntries.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpTimeEntry*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ErpLedgerEntry_UserAttributes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpLedgerEntry* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpLedgerEntry*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::UserAttribute*>(BaseClass_ptr2) != nullptr)
		{
			element->UserAttributes.push_back(dynamic_cast<IEC61968::Common::UserAttribute*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ErpLedger_ErpLedgerEntries(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpLedger* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpLedger*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpLedgerEntry*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpLedgerEntries.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpLedgerEntry*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ErpJournal_ErpJournalEntries(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::InfIEC61968::InfERPSupport::ErpJournal* element = dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpJournal*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpJournalEntries.push_back(dynamic_cast<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Customer_EndDevices(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::Customer* element = dynamic_cast<IEC61968::Customers::Customer*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr2) != nullptr)
		{
			element->EndDevices.push_back(dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Customer_CustomerAccounts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::Customer* element = dynamic_cast<IEC61968::Customers::Customer*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::CustomerAccount*>(BaseClass_ptr2) != nullptr)
		{
			element->CustomerAccounts.push_back(dynamic_cast<IEC61968::Customers::CustomerAccount*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Customer_CustomerAgreements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::Customer* element = dynamic_cast<IEC61968::Customers::Customer*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr2) != nullptr)
		{
			element->CustomerAgreements.push_back(dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Customer_ErpPersons(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::Customer* element = dynamic_cast<IEC61968::Customers::Customer*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldPerson*>(BaseClass_ptr2) != nullptr)
		{
			element->ErpPersons.push_back(dynamic_cast<IEC61968::InfIEC61968::InfCommon::OldPerson*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Customer_Works(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::Customer* element = dynamic_cast<IEC61968::Customers::Customer*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2) != nullptr)
		{
			element->Works.push_back(dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_TroubleTicket_Hazards(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::TroubleTicket* element = dynamic_cast<IEC61968::Customers::TroubleTicket*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::IncidentHazard*>(BaseClass_ptr2) != nullptr)
		{
			element->Hazards.push_back(dynamic_cast<IEC61968::Customers::IncidentHazard*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CustomerNotification_TroubleTickets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Customers::CustomerNotification* element = dynamic_cast<IEC61968::Customers::CustomerNotification*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::TroubleTicket*>(BaseClass_ptr2) != nullptr)
		{
			element->TroubleTickets.push_back(dynamic_cast<IEC61968::Customers::TroubleTicket*>(BaseClass_ptr2));
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

bool assign_ConnectDisconnectFunction_Switches(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::LoadControl::ConnectDisconnectFunction* element = dynamic_cast<IEC61968::LoadControl::ConnectDisconnectFunction*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::Switch*>(BaseClass_ptr2) != nullptr)
		{
			element->Switches.push_back(dynamic_cast<IEC61970::Base::Wires::Switch*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ScheduledEvent_Assets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::ScheduledEvent* element = dynamic_cast<IEC61968::Common::ScheduledEvent*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2) != nullptr)
		{
			element->Assets.push_back(dynamic_cast<IEC61968::Assets::Asset*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ScheduledEventData_ScheduledEvents(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Common::ScheduledEventData* element = dynamic_cast<IEC61968::Common::ScheduledEventData*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Common::ScheduledEvent*>(BaseClass_ptr2) != nullptr)
		{
			element->ScheduledEvents.push_back(dynamic_cast<IEC61968::Common::ScheduledEvent*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OperationalRestriction_Equipments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::OperationalRestriction* element = dynamic_cast<IEC61968::Operations::OperationalRestriction*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::Equipment*>(BaseClass_ptr2) != nullptr)
		{
			element->Equipments.push_back(dynamic_cast<IEC61970::Base::Core::Equipment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ClearanceDocument_TaggedPSRs(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::ClearanceDocument* element = dynamic_cast<IEC61968::Operations::ClearanceDocument*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2) != nullptr)
		{
			element->TaggedPSRs.push_back(dynamic_cast<IEC61970::Base::Core::PowerSystemResource*>(BaseClass_ptr2));
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

bool assign_JumperAction_JumpedEquipments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::JumperAction* element = dynamic_cast<IEC61968::Operations::JumperAction*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::ConductingEquipment*>(BaseClass_ptr2) != nullptr)
		{
			element->JumpedEquipments.push_back(dynamic_cast<IEC61970::Base::Core::ConductingEquipment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_JumperAction_AlongACLineSegments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::JumperAction* element = dynamic_cast<IEC61968::Operations::JumperAction*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::ACLineSegment*>(BaseClass_ptr2) != nullptr)
		{
			element->AlongACLineSegments.push_back(dynamic_cast<IEC61970::Base::Wires::ACLineSegment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SwitchingStepGroup_ClearanceActions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingStepGroup* element = dynamic_cast<IEC61968::Operations::SwitchingStepGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Operations::ClearanceAction*>(BaseClass_ptr2) != nullptr)
		{
			element->ClearanceActions.push_back(dynamic_cast<IEC61968::Operations::ClearanceAction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SwitchingStepGroup_GenericActions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingStepGroup* element = dynamic_cast<IEC61968::Operations::SwitchingStepGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Operations::GenericAction*>(BaseClass_ptr2) != nullptr)
		{
			element->GenericActions.push_back(dynamic_cast<IEC61968::Operations::GenericAction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SwitchingStepGroup_JumperActions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingStepGroup* element = dynamic_cast<IEC61968::Operations::SwitchingStepGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Operations::JumperAction*>(BaseClass_ptr2) != nullptr)
		{
			element->JumperActions.push_back(dynamic_cast<IEC61968::Operations::JumperAction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SwitchingStepGroup_CutActions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingStepGroup* element = dynamic_cast<IEC61968::Operations::SwitchingStepGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Operations::CutAction*>(BaseClass_ptr2) != nullptr)
		{
			element->CutActions.push_back(dynamic_cast<IEC61968::Operations::CutAction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SwitchingStepGroup_SwitchActions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingStepGroup* element = dynamic_cast<IEC61968::Operations::SwitchingStepGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Operations::SwitchAction*>(BaseClass_ptr2) != nullptr)
		{
			element->SwitchActions.push_back(dynamic_cast<IEC61968::Operations::SwitchAction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SwitchingStepGroup_TagActions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingStepGroup* element = dynamic_cast<IEC61968::Operations::SwitchingStepGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Operations::TagAction*>(BaseClass_ptr2) != nullptr)
		{
			element->TagActions.push_back(dynamic_cast<IEC61968::Operations::TagAction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SwitchingStepGroup_GroundActions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingStepGroup* element = dynamic_cast<IEC61968::Operations::SwitchingStepGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Operations::GroundAction*>(BaseClass_ptr2) != nullptr)
		{
			element->GroundActions.push_back(dynamic_cast<IEC61968::Operations::GroundAction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SwitchingStepGroup_EnergySourceActions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingStepGroup* element = dynamic_cast<IEC61968::Operations::SwitchingStepGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Operations::EnergySourceAction*>(BaseClass_ptr2) != nullptr)
		{
			element->EnergySourceActions.push_back(dynamic_cast<IEC61968::Operations::EnergySourceAction*>(BaseClass_ptr2));
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

bool assign_Outage_OpenedSwitches(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::Outage* element = dynamic_cast<IEC61968::Operations::Outage*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::Switch*>(BaseClass_ptr2) != nullptr)
		{
			element->OpenedSwitches.push_back(dynamic_cast<IEC61970::Base::Wires::Switch*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Outage_Faults(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::Outage* element = dynamic_cast<IEC61968::Operations::Outage*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Faults::Fault*>(BaseClass_ptr2) != nullptr)
		{
			element->Faults.push_back(dynamic_cast<IEC61970::Base::Faults::Fault*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Outage_UsagePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::Outage* element = dynamic_cast<IEC61968::Operations::Outage*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->UsagePoints.push_back(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Outage_Equipments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::Outage* element = dynamic_cast<IEC61968::Operations::Outage*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Core::Equipment*>(BaseClass_ptr2) != nullptr)
		{
			element->Equipments.push_back(dynamic_cast<IEC61970::Base::Core::Equipment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Outage_PlannedSwitchActions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::Outage* element = dynamic_cast<IEC61968::Operations::Outage*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Operations::SwitchAction*>(BaseClass_ptr2) != nullptr)
		{
			element->PlannedSwitchActions.push_back(dynamic_cast<IEC61968::Operations::SwitchAction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Incident_Works(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::Incident* element = dynamic_cast<IEC61968::Operations::Incident*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2) != nullptr)
		{
			element->Works.push_back(dynamic_cast<IEC61968::Work::Work*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Incident_Hazards(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::Incident* element = dynamic_cast<IEC61968::Operations::Incident*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::IncidentHazard*>(BaseClass_ptr2) != nullptr)
		{
			element->Hazards.push_back(dynamic_cast<IEC61968::Customers::IncidentHazard*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Incident_CustomerNotifications(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::Incident* element = dynamic_cast<IEC61968::Operations::Incident*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::CustomerNotification*>(BaseClass_ptr2) != nullptr)
		{
			element->CustomerNotifications.push_back(dynamic_cast<IEC61968::Customers::CustomerNotification*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_OutageSchedule_PlannedOutages(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::OutageSchedule* element = dynamic_cast<IEC61968::Operations::OutageSchedule*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Operations::Outage*>(BaseClass_ptr2) != nullptr)
		{
			element->PlannedOutages.push_back(dynamic_cast<IEC61968::Operations::Outage*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SwitchingPlan_WorkTasks(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingPlan* element = dynamic_cast<IEC61968::Operations::SwitchingPlan*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Work::WorkTask*>(BaseClass_ptr2) != nullptr)
		{
			element->WorkTasks.push_back(dynamic_cast<IEC61968::Work::WorkTask*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SwitchingPlan_SwitchingStepGroups(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingPlan* element = dynamic_cast<IEC61968::Operations::SwitchingPlan*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Operations::SwitchingStepGroup*>(BaseClass_ptr2) != nullptr)
		{
			element->SwitchingStepGroups.push_back(dynamic_cast<IEC61968::Operations::SwitchingStepGroup*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SwitchingPlan_SafetyDocuments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Operations::SwitchingPlan* element = dynamic_cast<IEC61968::Operations::SwitchingPlan*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Operations::SafetyDocument*>(BaseClass_ptr2) != nullptr)
		{
			element->SafetyDocuments.push_back(dynamic_cast<IEC61968::Operations::SafetyDocument*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WireInfo_PerLengthParameters(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::WireInfo* element = dynamic_cast<IEC61968::AssetInfo::WireInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::PerLengthLineParameter*>(BaseClass_ptr2) != nullptr)
		{
			element->PerLengthParameters.push_back(dynamic_cast<IEC61970::Base::Wires::PerLengthLineParameter*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WireSpacingInfo_Structures(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::WireSpacingInfo* element = dynamic_cast<IEC61968::AssetInfo::WireSpacingInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Structure*>(BaseClass_ptr2) != nullptr)
		{
			element->Structures.push_back(dynamic_cast<IEC61968::InfIEC61968::InfAssets::Structure*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WireSpacingInfo_PerLengthParameters(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::WireSpacingInfo* element = dynamic_cast<IEC61968::AssetInfo::WireSpacingInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61970::Base::Wires::PerLengthLineParameter*>(BaseClass_ptr2) != nullptr)
		{
			element->PerLengthParameters.push_back(dynamic_cast<IEC61970::Base::Wires::PerLengthLineParameter*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_WireSpacingInfo_WirePositions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::WireSpacingInfo* element = dynamic_cast<IEC61968::AssetInfo::WireSpacingInfo*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::AssetInfo::WirePosition*>(BaseClass_ptr2) != nullptr)
		{
			element->WirePositions.push_back(dynamic_cast<IEC61968::AssetInfo::WirePosition*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ShortCircuitTest_GroundedEnds(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::AssetInfo::ShortCircuitTest* element = dynamic_cast<IEC61968::AssetInfo::ShortCircuitTest*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::AssetInfo::TransformerEndInfo*>(BaseClass_ptr2) != nullptr)
		{
			element->GroundedEnds.push_back(dynamic_cast<IEC61968::AssetInfo::TransformerEndInfo*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Receipt_Transactions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::Receipt* element = dynamic_cast<IEC61968::PaymentMetering::Receipt*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2) != nullptr)
		{
			element->Transactions.push_back(dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_VendorShift_Transactions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::VendorShift* element = dynamic_cast<IEC61968::PaymentMetering::VendorShift*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2) != nullptr)
		{
			element->Transactions.push_back(dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_VendorShift_Receipts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::VendorShift* element = dynamic_cast<IEC61968::PaymentMetering::VendorShift*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Receipt*>(BaseClass_ptr2) != nullptr)
		{
			element->Receipts.push_back(dynamic_cast<IEC61968::PaymentMetering::Receipt*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_MerchantAccount_Transactors(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::MerchantAccount* element = dynamic_cast<IEC61968::PaymentMetering::MerchantAccount*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Transactor*>(BaseClass_ptr2) != nullptr)
		{
			element->Transactors.push_back(dynamic_cast<IEC61968::PaymentMetering::Transactor*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_MerchantAccount_VendorShifts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::MerchantAccount* element = dynamic_cast<IEC61968::PaymentMetering::MerchantAccount*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::VendorShift*>(BaseClass_ptr2) != nullptr)
		{
			element->VendorShifts.push_back(dynamic_cast<IEC61968::PaymentMetering::VendorShift*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CashierShift_Receipts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::CashierShift* element = dynamic_cast<IEC61968::PaymentMetering::CashierShift*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Receipt*>(BaseClass_ptr2) != nullptr)
		{
			element->Receipts.push_back(dynamic_cast<IEC61968::PaymentMetering::Receipt*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_CashierShift_Transactions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::CashierShift* element = dynamic_cast<IEC61968::PaymentMetering::CashierShift*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2) != nullptr)
		{
			element->Transactions.push_back(dynamic_cast<IEC61968::PaymentMetering::Transaction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Cashier_CashierShifts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::Cashier* element = dynamic_cast<IEC61968::PaymentMetering::Cashier*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::CashierShift*>(BaseClass_ptr2) != nullptr)
		{
			element->CashierShifts.push_back(dynamic_cast<IEC61968::PaymentMetering::CashierShift*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Vendor_VendorShifts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::Vendor* element = dynamic_cast<IEC61968::PaymentMetering::Vendor*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::VendorShift*>(BaseClass_ptr2) != nullptr)
		{
			element->VendorShifts.push_back(dynamic_cast<IEC61968::PaymentMetering::VendorShift*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_MerchantAgreement_MerchantAccounts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::MerchantAgreement* element = dynamic_cast<IEC61968::PaymentMetering::MerchantAgreement*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::PaymentMetering::MerchantAccount*>(BaseClass_ptr2) != nullptr)
		{
			element->MerchantAccounts.push_back(dynamic_cast<IEC61968::PaymentMetering::MerchantAccount*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ServiceSupplier_BankAccounts(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::ServiceSupplier* element = dynamic_cast<IEC61968::PaymentMetering::ServiceSupplier*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::InfIEC61968::InfCommon::BankAccount*>(BaseClass_ptr2) != nullptr)
		{
			element->BankAccounts.push_back(dynamic_cast<IEC61968::InfIEC61968::InfCommon::BankAccount*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ServiceSupplier_UsagePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::ServiceSupplier* element = dynamic_cast<IEC61968::PaymentMetering::ServiceSupplier*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->UsagePoints.push_back(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ServiceSupplier_CustomerAgreements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::PaymentMetering::ServiceSupplier* element = dynamic_cast<IEC61968::PaymentMetering::ServiceSupplier*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr2) != nullptr)
		{
			element->CustomerAgreements.push_back(dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Register_Channels(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::Register* element = dynamic_cast<IEC61968::Metering::Register*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::Channel*>(BaseClass_ptr2) != nullptr)
		{
			element->Channels.push_back(dynamic_cast<IEC61968::Metering::Channel*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ComModule_ComFunctions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::ComModule* element = dynamic_cast<IEC61968::Metering::ComModule*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::ComFunction*>(BaseClass_ptr2) != nullptr)
		{
			element->ComFunctions.push_back(dynamic_cast<IEC61968::Metering::ComFunction*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_EndDeviceEvent_EndDeviceEventDetails(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDeviceEvent* element = dynamic_cast<IEC61968::Metering::EndDeviceEvent*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::EndDeviceEventDetail*>(BaseClass_ptr2) != nullptr)
		{
			element->EndDeviceEventDetails.push_back(dynamic_cast<IEC61968::Metering::EndDeviceEventDetail*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_MeterReading_EndDeviceEvents(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::MeterReading* element = dynamic_cast<IEC61968::Metering::MeterReading*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::EndDeviceEvent*>(BaseClass_ptr2) != nullptr)
		{
			element->EndDeviceEvents.push_back(dynamic_cast<IEC61968::Metering::EndDeviceEvent*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Reading_MeterReadings(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::Reading* element = dynamic_cast<IEC61968::Metering::Reading*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::MeterReading*>(BaseClass_ptr2) != nullptr)
		{
			element->MeterReadings.push_back(dynamic_cast<IEC61968::Metering::MeterReading*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_IntervalBlock_IntervalReadings(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::IntervalBlock* element = dynamic_cast<IEC61968::Metering::IntervalBlock*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::IntervalReading*>(BaseClass_ptr2) != nullptr)
		{
			element->IntervalReadings.push_back(dynamic_cast<IEC61968::Metering::IntervalReading*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_UsagePointGroup_UsagePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::UsagePointGroup* element = dynamic_cast<IEC61968::Metering::UsagePointGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->UsagePoints.push_back(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_EndDeviceControl_UsagePointGroups(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDeviceControl* element = dynamic_cast<IEC61968::Metering::EndDeviceControl*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::UsagePointGroup*>(BaseClass_ptr2) != nullptr)
		{
			element->UsagePointGroups.push_back(dynamic_cast<IEC61968::Metering::UsagePointGroup*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_EndDeviceControl_UsagePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDeviceControl* element = dynamic_cast<IEC61968::Metering::EndDeviceControl*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->UsagePoints.push_back(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_EndDeviceControl_EndDevices(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDeviceControl* element = dynamic_cast<IEC61968::Metering::EndDeviceControl*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr2) != nullptr)
		{
			element->EndDevices.push_back(dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_EndDeviceGroup_EndDeviceControls(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDeviceGroup* element = dynamic_cast<IEC61968::Metering::EndDeviceGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::EndDeviceControl*>(BaseClass_ptr2) != nullptr)
		{
			element->EndDeviceControls.push_back(dynamic_cast<IEC61968::Metering::EndDeviceControl*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_EndDeviceGroup_EndDevices(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::EndDeviceGroup* element = dynamic_cast<IEC61968::Metering::EndDeviceGroup*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr2) != nullptr)
		{
			element->EndDevices.push_back(dynamic_cast<IEC61968::Metering::EndDevice*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DemandResponseProgram_UsagePointGroups(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::DemandResponseProgram* element = dynamic_cast<IEC61968::Metering::DemandResponseProgram*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::UsagePointGroup*>(BaseClass_ptr2) != nullptr)
		{
			element->UsagePointGroups.push_back(dynamic_cast<IEC61968::Metering::UsagePointGroup*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DemandResponseProgram_EndDeviceGroups(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::DemandResponseProgram* element = dynamic_cast<IEC61968::Metering::DemandResponseProgram*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::EndDeviceGroup*>(BaseClass_ptr2) != nullptr)
		{
			element->EndDeviceGroups.push_back(dynamic_cast<IEC61968::Metering::EndDeviceGroup*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DemandResponseProgram_CustomerAgreements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::DemandResponseProgram* element = dynamic_cast<IEC61968::Metering::DemandResponseProgram*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr2) != nullptr)
		{
			element->CustomerAgreements.push_back(dynamic_cast<IEC61968::Customers::CustomerAgreement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Meter_MeterReadings(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::Meter* element = dynamic_cast<IEC61968::Metering::Meter*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::MeterReading*>(BaseClass_ptr2) != nullptr)
		{
			element->MeterReadings.push_back(dynamic_cast<IEC61968::Metering::MeterReading*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Meter_MeterMultipliers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::Meter* element = dynamic_cast<IEC61968::Metering::Meter*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::MeterMultiplier*>(BaseClass_ptr2) != nullptr)
		{
			element->MeterMultipliers.push_back(dynamic_cast<IEC61968::Metering::MeterMultiplier*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PanPricing_PanPricingDetails(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::PanPricing* element = dynamic_cast<IEC61968::Metering::PanPricing*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::PanPricingDetail*>(BaseClass_ptr2) != nullptr)
		{
			element->PanPricingDetails.push_back(dynamic_cast<IEC61968::Metering::PanPricingDetail*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_UsagePointLocation_UsagePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::UsagePointLocation* element = dynamic_cast<IEC61968::Metering::UsagePointLocation*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->UsagePoints.push_back(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_MetrologyRequirement_ReadingTypes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::MetrologyRequirement* element = dynamic_cast<IEC61968::Metering::MetrologyRequirement*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::ReadingType*>(BaseClass_ptr2) != nullptr)
		{
			element->ReadingTypes.push_back(dynamic_cast<IEC61968::Metering::ReadingType*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_MetrologyRequirement_UsagePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(IEC61968::Metering::MetrologyRequirement* element = dynamic_cast<IEC61968::Metering::MetrologyRequirement*>(BaseClass_ptr1))
	{
		if(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2) != nullptr)
		{
			element->UsagePoints.push_back(dynamic_cast<IEC61968::Metering::UsagePoint*>(BaseClass_ptr2));
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


static std::unordered_map<std::string, task_function> initialize()
{
	std::unordered_map<std::string, task_function> map;

	map.insert(std::make_pair("cim:OrganisationRole.Organisation", &assign_OrganisationRole_Organisation));
	map.insert(std::make_pair("cim:Organisation.OrganisationRole", &assign_OrganisationRole_Organisation));
	map.insert(std::make_pair("cim:Measurement.Terminal", &assign_Measurement_Terminal));
	map.insert(std::make_pair("cim:Terminal.Measurement", &assign_Measurement_Terminal));
	map.insert(std::make_pair("cim:PowerSystemResource.PSRType", &assign_PowerSystemResource_PSRType));
	map.insert(std::make_pair("cim:PSRType.PowerSystemResource", &assign_PowerSystemResource_PSRType));
	map.insert(std::make_pair("cim:ErpPOLineItem.ErpPurchaseOrder", &assign_ErpPOLineItem_ErpPurchaseOrder));
	map.insert(std::make_pair("cim:ErpPurchaseOrder.ErpPOLineItem", &assign_ErpPOLineItem_ErpPurchaseOrder));
	map.insert(std::make_pair("cim:ErpRecLineItem.ErpReceivable", &assign_ErpRecLineItem_ErpReceivable));
	map.insert(std::make_pair("cim:ErpReceivable.ErpRecLineItem", &assign_ErpRecLineItem_ErpReceivable));
	map.insert(std::make_pair("cim:ErpPayableLineItem.ErpPayable", &assign_ErpPayableLineItem_ErpPayable));
	map.insert(std::make_pair("cim:ErpPayable.ErpPayableLineItem", &assign_ErpPayableLineItem_ErpPayable));
	map.insert(std::make_pair("cim:MeasurementValue.RemoteSource", &assign_MeasurementValue_RemoteSource));
	map.insert(std::make_pair("cim:RemoteSource.MeasurementValue", &assign_MeasurementValue_RemoteSource));
	map.insert(std::make_pair("cim:MeasurementValue.MeasurementValueQuality", &assign_MeasurementValue_MeasurementValueQuality));
	map.insert(std::make_pair("cim:MeasurementValueQuality.MeasurementValue", &assign_MeasurementValue_MeasurementValueQuality));
	map.insert(std::make_pair("cim:TapChanger.TapChangerControl", &assign_TapChanger_TapChangerControl));
	map.insert(std::make_pair("cim:TapChangerControl.TapChanger", &assign_TapChanger_TapChangerControl));
	map.insert(std::make_pair("cim:RatioTapChanger.RatioTapChangerTable", &assign_RatioTapChanger_RatioTapChangerTable));
	map.insert(std::make_pair("cim:RatioTapChangerTable.RatioTapChanger", &assign_RatioTapChanger_RatioTapChangerTable));
	map.insert(std::make_pair("cim:ConnectivityNode.ConnectivityNodeContainer", &assign_ConnectivityNode_ConnectivityNodeContainer));
	map.insert(std::make_pair("cim:ConnectivityNodeContainer.ConnectivityNode", &assign_ConnectivityNode_ConnectivityNodeContainer));
	map.insert(std::make_pair("cim:Terminal.ConnectivityNode", &assign_Terminal_ConnectivityNode));
	map.insert(std::make_pair("cim:ConnectivityNode.Terminal", &assign_Terminal_ConnectivityNode));
	map.insert(std::make_pair("cim:Terminal.ConductingEquipment", &assign_Terminal_ConductingEquipment));
	map.insert(std::make_pair("cim:ConductingEquipment.Terminal", &assign_Terminal_ConductingEquipment));
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
	map.insert(std::make_pair("cim:TransformerTank.PowerTransformer", &assign_TransformerTank_PowerTransformer));
	map.insert(std::make_pair("cim:PowerTransformer.TransformerTank", &assign_TransformerTank_PowerTransformer));
	map.insert(std::make_pair("cim:WindingInsulation.ToWinding", &assign_WindingInsulation_ToWinding));
	map.insert(std::make_pair("cim:ToWinding.WindingInsulation", &assign_WindingInsulation_ToWinding));
	map.insert(std::make_pair("cim:WindingInsulation.FromWinding", &assign_WindingInsulation_FromWinding));
	map.insert(std::make_pair("cim:FromWinding.WindingInsulation", &assign_WindingInsulation_FromWinding));
	map.insert(std::make_pair("cim:TransformerObservation.Transformer", &assign_TransformerObservation_Transformer));
	map.insert(std::make_pair("cim:Transformer.TransformerObservation", &assign_TransformerObservation_Transformer));
	map.insert(std::make_pair("cim:Transaction.Meter", &assign_Transaction_Meter));
	map.insert(std::make_pair("cim:Meter.Transaction", &assign_Transaction_Meter));
	map.insert(std::make_pair("cim:UserAttribute.RatingSpecification", &assign_UserAttribute_RatingSpecification));
	map.insert(std::make_pair("cim:RatingSpecification.UserAttribute", &assign_UserAttribute_RatingSpecification));
	map.insert(std::make_pair("cim:UserAttribute.PropertySpecification", &assign_UserAttribute_PropertySpecification));
	map.insert(std::make_pair("cim:PropertySpecification.UserAttribute", &assign_UserAttribute_PropertySpecification));
	map.insert(std::make_pair("cim:UserAttribute.Transaction", &assign_UserAttribute_Transaction));
	map.insert(std::make_pair("cim:Transaction.UserAttribute", &assign_UserAttribute_Transaction));
	map.insert(std::make_pair("cim:ErpInvoiceLineItem.ContainerErpInvoiceLineItem", &assign_ErpInvoiceLineItem_ContainerErpInvoiceLineItem));
	map.insert(std::make_pair("cim:ContainerErpInvoiceLineItem.ErpInvoiceLineItem", &assign_ErpInvoiceLineItem_ContainerErpInvoiceLineItem));
	map.insert(std::make_pair("cim:ErpInvoiceLineItem.ErpRecLineItem", &assign_ErpInvoiceLineItem_ErpRecLineItem));
	map.insert(std::make_pair("cim:ErpRecLineItem.ErpInvoiceLineItem", &assign_ErpInvoiceLineItem_ErpRecLineItem));
	map.insert(std::make_pair("cim:ErpInvoiceLineItem.ErpPayableLineItem", &assign_ErpInvoiceLineItem_ErpPayableLineItem));
	map.insert(std::make_pair("cim:ErpPayableLineItem.ErpInvoiceLineItem", &assign_ErpInvoiceLineItem_ErpPayableLineItem));
	map.insert(std::make_pair("cim:ErpInvoiceLineItem.ErpInvoice", &assign_ErpInvoiceLineItem_ErpInvoice));
	map.insert(std::make_pair("cim:ErpInvoice.ErpInvoiceLineItem", &assign_ErpInvoiceLineItem_ErpInvoice));
	map.insert(std::make_pair("cim:ErpRecDelvLineItem.ErpReceiveDelivery", &assign_ErpRecDelvLineItem_ErpReceiveDelivery));
	map.insert(std::make_pair("cim:ErpReceiveDelivery.ErpRecDelvLineItem", &assign_ErpRecDelvLineItem_ErpReceiveDelivery));
	map.insert(std::make_pair("cim:ErpRecDelvLineItem.ErpPOLineItem", &assign_ErpRecDelvLineItem_ErpPOLineItem));
	map.insert(std::make_pair("cim:ErpPOLineItem.ErpRecDelvLineItem", &assign_ErpRecDelvLineItem_ErpPOLineItem));
	map.insert(std::make_pair("cim:ErpRecDelvLineItem.ErpInvoiceLineItem", &assign_ErpRecDelvLineItem_ErpInvoiceLineItem));
	map.insert(std::make_pair("cim:ErpInvoiceLineItem.ErpRecDelvLineItem", &assign_ErpRecDelvLineItem_ErpInvoiceLineItem));
	map.insert(std::make_pair("cim:Location.CoordinateSystem", &assign_Location_CoordinateSystem));
	map.insert(std::make_pair("cim:CoordinateSystem.Location", &assign_Location_CoordinateSystem));
	map.insert(std::make_pair("cim:Asset.ErpInventory", &assign_Asset_ErpInventory));
	map.insert(std::make_pair("cim:ErpInventory.Asset", &assign_Asset_ErpInventory));
	map.insert(std::make_pair("cim:Asset.AssetContainer", &assign_Asset_AssetContainer));
	map.insert(std::make_pair("cim:AssetContainer.Asset", &assign_Asset_AssetContainer));
	map.insert(std::make_pair("cim:Asset.AssetInfo", &assign_Asset_AssetInfo));
	map.insert(std::make_pair("cim:AssetInfo.Asset", &assign_Asset_AssetInfo));
	map.insert(std::make_pair("cim:Asset.Location", &assign_Asset_Location));
	map.insert(std::make_pair("cim:Location.Asset", &assign_Asset_Location));
	map.insert(std::make_pair("cim:ErpReqLineItem.ErpRequisition", &assign_ErpReqLineItem_ErpRequisition));
	map.insert(std::make_pair("cim:ErpRequisition.ErpReqLineItem", &assign_ErpReqLineItem_ErpRequisition));
	map.insert(std::make_pair("cim:ErpReqLineItem.ErpPOLineItem", &assign_ErpReqLineItem_ErpPOLineItem));
	map.insert(std::make_pair("cim:ErpPOLineItem.ErpReqLineItem", &assign_ErpReqLineItem_ErpPOLineItem));
	map.insert(std::make_pair("cim:ErpQuoteLineItem.ErpReqLineItem", &assign_ErpQuoteLineItem_ErpReqLineItem));
	map.insert(std::make_pair("cim:ErpReqLineItem.ErpQuoteLineItem", &assign_ErpQuoteLineItem_ErpReqLineItem));
	map.insert(std::make_pair("cim:ErpQuoteLineItem.ErpQuote", &assign_ErpQuoteLineItem_ErpQuote));
	map.insert(std::make_pair("cim:ErpQuote.ErpQuoteLineItem", &assign_ErpQuoteLineItem_ErpQuote));
	map.insert(std::make_pair("cim:ErpQuoteLineItem.ErpInvoiceLineItem", &assign_ErpQuoteLineItem_ErpInvoiceLineItem));
	map.insert(std::make_pair("cim:ErpInvoiceLineItem.ErpQuoteLineItem", &assign_ErpQuoteLineItem_ErpInvoiceLineItem));
	map.insert(std::make_pair("cim:ErpQuoteLineItem.Design", &assign_ErpQuoteLineItem_Design));
	map.insert(std::make_pair("cim:Design.ErpQuoteLineItem", &assign_ErpQuoteLineItem_Design));
	map.insert(std::make_pair("cim:AssetModelCatalogueItem.AssetModelCatalogue", &assign_AssetModelCatalogueItem_AssetModelCatalogue));
	map.insert(std::make_pair("cim:AssetModelCatalogue.AssetModelCatalogueItem", &assign_AssetModelCatalogueItem_AssetModelCatalogue));
	map.insert(std::make_pair("cim:AssetModel.AssetInfo", &assign_AssetModel_AssetInfo));
	map.insert(std::make_pair("cim:AssetInfo.AssetModel", &assign_AssetModel_AssetInfo));
	map.insert(std::make_pair("cim:ProductAssetModel.Manufacturer", &assign_ProductAssetModel_Manufacturer));
	map.insert(std::make_pair("cim:Manufacturer.ProductAssetModel", &assign_ProductAssetModel_Manufacturer));
	map.insert(std::make_pair("cim:ReliabilityInfo.Specification", &assign_ReliabilityInfo_Specification));
	map.insert(std::make_pair("cim:Specification.ReliabilityInfo", &assign_ReliabilityInfo_Specification));
	map.insert(std::make_pair("cim:BushingInsulationPF.TransformerObservation", &assign_BushingInsulationPF_TransformerObservation));
	map.insert(std::make_pair("cim:TransformerObservation.BushingInsulationPF", &assign_BushingInsulationPF_TransformerObservation));
	map.insert(std::make_pair("cim:Bushing.Terminal", &assign_Bushing_Terminal));
	map.insert(std::make_pair("cim:Terminal.Bushing", &assign_Bushing_Terminal));
	map.insert(std::make_pair("cim:CUAsset.TypeAsset", &assign_CUAsset_TypeAsset));
	map.insert(std::make_pair("cim:TypeAsset.CUAsset", &assign_CUAsset_TypeAsset));
	map.insert(std::make_pair("cim:CompatibleUnit.CUGroup", &assign_CompatibleUnit_CUGroup));
	map.insert(std::make_pair("cim:CUGroup.CompatibleUnit", &assign_CompatibleUnit_CUGroup));
	map.insert(std::make_pair("cim:CUMaterialItem.TypeMaterial", &assign_CUMaterialItem_TypeMaterial));
	map.insert(std::make_pair("cim:TypeMaterial.CUMaterialItem", &assign_CUMaterialItem_TypeMaterial));
	map.insert(std::make_pair("cim:WorkLocation.OneCallRequest", &assign_WorkLocation_OneCallRequest));
	map.insert(std::make_pair("cim:OneCallRequest.WorkLocation", &assign_WorkLocation_OneCallRequest));
	map.insert(std::make_pair("cim:BaseWork.WorkLocation", &assign_BaseWork_WorkLocation));
	map.insert(std::make_pair("cim:WorkLocation.BaseWork", &assign_BaseWork_WorkLocation));
	map.insert(std::make_pair("cim:Work.Project", &assign_Work_Project));
	map.insert(std::make_pair("cim:Project.Work", &assign_Work_Project));
	map.insert(std::make_pair("cim:Work.ErpProjectAccounting", &assign_Work_ErpProjectAccounting));
	map.insert(std::make_pair("cim:ErpProjectAccounting.Work", &assign_Work_ErpProjectAccounting));
	map.insert(std::make_pair("cim:Crew.CrewType", &assign_Crew_CrewType));
	map.insert(std::make_pair("cim:CrewType.Crew", &assign_Crew_CrewType));
	map.insert(std::make_pair("cim:WorkTask.OldAsset", &assign_WorkTask_OldAsset));
	map.insert(std::make_pair("cim:OldAsset.WorkTask", &assign_WorkTask_OldAsset));
	map.insert(std::make_pair("cim:OldWorkTask.OverheadCost", &assign_OldWorkTask_OverheadCost));
	map.insert(std::make_pair("cim:OverheadCost.OldWorkTask", &assign_OldWorkTask_OverheadCost));
	map.insert(std::make_pair("cim:WorkCostDetail.WorkCostSummary", &assign_WorkCostDetail_WorkCostSummary));
	map.insert(std::make_pair("cim:WorkCostSummary.WorkCostDetail", &assign_WorkCostDetail_WorkCostSummary));
	map.insert(std::make_pair("cim:WorkCostDetail.ErpProjectAccounting", &assign_WorkCostDetail_ErpProjectAccounting));
	map.insert(std::make_pair("cim:ErpProjectAccounting.WorkCostDetail", &assign_WorkCostDetail_ErpProjectAccounting));
	map.insert(std::make_pair("cim:WorkCostDetail.WorkTask", &assign_WorkCostDetail_WorkTask));
	map.insert(std::make_pair("cim:WorkTask.WorkCostDetail", &assign_WorkCostDetail_WorkTask));
	map.insert(std::make_pair("cim:MiscCostItem.WorkCostDetail", &assign_MiscCostItem_WorkCostDetail));
	map.insert(std::make_pair("cim:WorkCostDetail.MiscCostItem", &assign_MiscCostItem_WorkCostDetail));
	map.insert(std::make_pair("cim:Design.Work", &assign_Design_Work));
	map.insert(std::make_pair("cim:Work.Design", &assign_Design_Work));
	map.insert(std::make_pair("cim:ErpBomItemData.ErpBOM", &assign_ErpBomItemData_ErpBOM));
	map.insert(std::make_pair("cim:ErpBOM.ErpBomItemData", &assign_ErpBomItemData_ErpBOM));
	map.insert(std::make_pair("cim:ErpBomItemData.DesignLocation", &assign_ErpBomItemData_DesignLocation));
	map.insert(std::make_pair("cim:DesignLocation.ErpBomItemData", &assign_ErpBomItemData_DesignLocation));
	map.insert(std::make_pair("cim:GenericAssetModelOrMaterial.TypeAssetCatalogue", &assign_GenericAssetModelOrMaterial_TypeAssetCatalogue));
	map.insert(std::make_pair("cim:TypeAssetCatalogue.GenericAssetModelOrMaterial", &assign_GenericAssetModelOrMaterial_TypeAssetCatalogue));
	map.insert(std::make_pair("cim:FinancialInfo.Asset", &assign_FinancialInfo_Asset));
	map.insert(std::make_pair("cim:Asset.FinancialInfo", &assign_FinancialInfo_Asset));
	map.insert(std::make_pair("cim:TransformerMeshImpedance.FromTransformerEnd", &assign_TransformerMeshImpedance_FromTransformerEnd));
	map.insert(std::make_pair("cim:FromTransformerEnd.TransformerMeshImpedance", &assign_TransformerMeshImpedance_FromTransformerEnd));
	map.insert(std::make_pair("cim:TransformerEndInfo.CoreAdmittance", &assign_TransformerEndInfo_CoreAdmittance));
	map.insert(std::make_pair("cim:CoreAdmittance.TransformerEndInfo", &assign_TransformerEndInfo_CoreAdmittance));
	map.insert(std::make_pair("cim:TransformerEndInfo.TransformerStarImpedance", &assign_TransformerEndInfo_TransformerStarImpedance));
	map.insert(std::make_pair("cim:TransformerStarImpedance.TransformerEndInfo", &assign_TransformerEndInfo_TransformerStarImpedance));
	map.insert(std::make_pair("cim:TransformerTankInfo.PowerTransformerInfo", &assign_TransformerTankInfo_PowerTransformerInfo));
	map.insert(std::make_pair("cim:PowerTransformerInfo.TransformerTankInfo", &assign_TransformerTankInfo_PowerTransformerInfo));
	map.insert(std::make_pair("cim:RegulatingCondEq.RegulatingControl", &assign_RegulatingCondEq_RegulatingControl));
	map.insert(std::make_pair("cim:RegulatingControl.RegulatingCondEq", &assign_RegulatingCondEq_RegulatingControl));
	map.insert(std::make_pair("cim:EndDevice.EndDeviceInfo", &assign_EndDevice_EndDeviceInfo));
	map.insert(std::make_pair("cim:EndDeviceInfo.EndDevice", &assign_EndDevice_EndDeviceInfo));
	map.insert(std::make_pair("cim:UsagePoint.ServiceCategory", &assign_UsagePoint_ServiceCategory));
	map.insert(std::make_pair("cim:ServiceCategory.UsagePoint", &assign_UsagePoint_ServiceCategory));
	map.insert(std::make_pair("cim:CustomerAgreement.StandardIndustryCode", &assign_CustomerAgreement_StandardIndustryCode));
	map.insert(std::make_pair("cim:StandardIndustryCode.CustomerAgreement", &assign_CustomerAgreement_StandardIndustryCode));
	map.insert(std::make_pair("cim:CustomerAgreement.ServiceCategory", &assign_CustomerAgreement_ServiceCategory));
	map.insert(std::make_pair("cim:ServiceCategory.CustomerAgreement", &assign_CustomerAgreement_ServiceCategory));
	map.insert(std::make_pair("cim:CustomerBillingInfo.CustomerAccount", &assign_CustomerBillingInfo_CustomerAccount));
	map.insert(std::make_pair("cim:CustomerAccount.CustomerBillingInfo", &assign_CustomerBillingInfo_CustomerAccount));
	map.insert(std::make_pair("cim:LaborItem.WorkCostDetail", &assign_LaborItem_WorkCostDetail));
	map.insert(std::make_pair("cim:WorkCostDetail.LaborItem", &assign_LaborItem_WorkCostDetail));
	map.insert(std::make_pair("cim:OldPerson.ErpCompetency", &assign_OldPerson_ErpCompetency));
	map.insert(std::make_pair("cim:ErpCompetency.OldPerson", &assign_OldPerson_ErpCompetency));
	map.insert(std::make_pair("cim:OldPerson.ErpPersonnel", &assign_OldPerson_ErpPersonnel));
	map.insert(std::make_pair("cim:ErpPersonnel.OldPerson", &assign_OldPerson_ErpPersonnel));
	map.insert(std::make_pair("cim:BankAccount.Bank", &assign_BankAccount_Bank));
	map.insert(std::make_pair("cim:Bank.BankAccount", &assign_BankAccount_Bank));
	map.insert(std::make_pair("cim:OldCrew.Route", &assign_OldCrew_Route));
	map.insert(std::make_pair("cim:Route.OldCrew", &assign_OldCrew_Route));
	map.insert(std::make_pair("cim:CUWorkEquipmentItem.TypeAsset", &assign_CUWorkEquipmentItem_TypeAsset));
	map.insert(std::make_pair("cim:TypeAsset.CUWorkEquipmentItem", &assign_CUWorkEquipmentItem_TypeAsset));
	map.insert(std::make_pair("cim:WorkFlowStep.Work", &assign_WorkFlowStep_Work));
	map.insert(std::make_pair("cim:Work.WorkFlowStep", &assign_WorkFlowStep_Work));
	map.insert(std::make_pair("cim:Capability.Crew", &assign_Capability_Crew));
	map.insert(std::make_pair("cim:Crew.Capability", &assign_Capability_Crew));
	map.insert(std::make_pair("cim:CULaborItem.CULaborCode", &assign_CULaborItem_CULaborCode));
	map.insert(std::make_pair("cim:CULaborCode.CULaborItem", &assign_CULaborItem_CULaborCode));
	map.insert(std::make_pair("cim:ErpTimeEntry.ErpProjectAccounting", &assign_ErpTimeEntry_ErpProjectAccounting));
	map.insert(std::make_pair("cim:ErpProjectAccounting.ErpTimeEntry", &assign_ErpTimeEntry_ErpProjectAccounting));
	map.insert(std::make_pair("cim:ErpLedBudLineItem.ErpLedgerBudget", &assign_ErpLedBudLineItem_ErpLedgerBudget));
	map.insert(std::make_pair("cim:ErpLedgerBudget.ErpLedBudLineItem", &assign_ErpLedBudLineItem_ErpLedgerBudget));
	map.insert(std::make_pair("cim:ErpLedgerEntry.MyErpLedgerEntry", &assign_ErpLedgerEntry_MyErpLedgerEntry));
	map.insert(std::make_pair("cim:MyErpLedgerEntry.ErpLedgerEntry", &assign_ErpLedgerEntry_MyErpLedgerEntry));
	map.insert(std::make_pair("cim:ErpLedgerEntry.ErpJounalEntry", &assign_ErpLedgerEntry_ErpJounalEntry));
	map.insert(std::make_pair("cim:ErpJounalEntry.ErpLedgerEntry", &assign_ErpLedgerEntry_ErpJounalEntry));
	map.insert(std::make_pair("cim:ErpItemMaster.Asset", &assign_ErpItemMaster_Asset));
	map.insert(std::make_pair("cim:Asset.ErpItemMaster", &assign_ErpItemMaster_Asset));
	map.insert(std::make_pair("cim:ErpIssueInventory.TypeMaterial", &assign_ErpIssueInventory_TypeMaterial));
	map.insert(std::make_pair("cim:TypeMaterial.ErpIssueInventory", &assign_ErpIssueInventory_TypeMaterial));
	map.insert(std::make_pair("cim:ErpIssueInventory.TypeAsset", &assign_ErpIssueInventory_TypeAsset));
	map.insert(std::make_pair("cim:TypeAsset.ErpIssueInventory", &assign_ErpIssueInventory_TypeAsset));
	map.insert(std::make_pair("cim:ErpInventoryCount.AssetModel", &assign_ErpInventoryCount_AssetModel));
	map.insert(std::make_pair("cim:AssetModel.ErpInventoryCount", &assign_ErpInventoryCount_AssetModel));
	map.insert(std::make_pair("cim:TroubleTicket.Incident", &assign_TroubleTicket_Incident));
	map.insert(std::make_pair("cim:Incident.TroubleTicket", &assign_TroubleTicket_Incident));
	map.insert(std::make_pair("cim:TroubleTicket.Customer", &assign_TroubleTicket_Customer));
	map.insert(std::make_pair("cim:Customer.TroubleTicket", &assign_TroubleTicket_Customer));
	map.insert(std::make_pair("cim:CustomerNotification.Customer", &assign_CustomerNotification_Customer));
	map.insert(std::make_pair("cim:Customer.CustomerNotification", &assign_CustomerNotification_Customer));
	map.insert(std::make_pair("cim:WorkAsset.Crew", &assign_WorkAsset_Crew));
	map.insert(std::make_pair("cim:Crew.WorkAsset", &assign_WorkAsset_Crew));
	map.insert(std::make_pair("cim:ScheduledEventData.InspectionDataSet", &assign_ScheduledEventData_InspectionDataSet));
	map.insert(std::make_pair("cim:InspectionDataSet.ScheduledEventData", &assign_ScheduledEventData_InspectionDataSet));
	map.insert(std::make_pair("cim:Ownership.AssetOwner", &assign_Ownership_AssetOwner));
	map.insert(std::make_pair("cim:AssetOwner.Ownership", &assign_Ownership_AssetOwner));
	map.insert(std::make_pair("cim:Ownership.Asset", &assign_Ownership_Asset));
	map.insert(std::make_pair("cim:Asset.Ownership", &assign_Ownership_Asset));
	map.insert(std::make_pair("cim:OperationalRestriction.ProductAssetModel", &assign_OperationalRestriction_ProductAssetModel));
	map.insert(std::make_pair("cim:ProductAssetModel.OperationalRestriction", &assign_OperationalRestriction_ProductAssetModel));
	map.insert(std::make_pair("cim:SwitchingStep.Operator", &assign_SwitchingStep_Operator));
	map.insert(std::make_pair("cim:Operator.SwitchingStep", &assign_SwitchingStep_Operator));
	map.insert(std::make_pair("cim:SwitchingStep.CrewMember", &assign_SwitchingStep_CrewMember));
	map.insert(std::make_pair("cim:CrewMember.SwitchingStep", &assign_SwitchingStep_CrewMember));
	map.insert(std::make_pair("cim:PSREvent.PowerSystemResource", &assign_PSREvent_PowerSystemResource));
	map.insert(std::make_pair("cim:PowerSystemResource.PSREvent", &assign_PSREvent_PowerSystemResource));
	map.insert(std::make_pair("cim:JumperAction.Jumper", &assign_JumperAction_Jumper));
	map.insert(std::make_pair("cim:Jumper.JumperAction", &assign_JumperAction_Jumper));
	map.insert(std::make_pair("cim:ClearanceAction.Clearance", &assign_ClearanceAction_Clearance));
	map.insert(std::make_pair("cim:Clearance.ClearanceAction", &assign_ClearanceAction_Clearance));
	map.insert(std::make_pair("cim:Cut.ACLineSegment", &assign_Cut_ACLineSegment));
	map.insert(std::make_pair("cim:ACLineSegment.Cut", &assign_Cut_ACLineSegment));
	map.insert(std::make_pair("cim:CutAction.Cut", &assign_CutAction_Cut));
	map.insert(std::make_pair("cim:Cut.CutAction", &assign_CutAction_Cut));
	map.insert(std::make_pair("cim:SwitchAction.OperatedSwitch", &assign_SwitchAction_OperatedSwitch));
	map.insert(std::make_pair("cim:OperatedSwitch.SwitchAction", &assign_SwitchAction_OperatedSwitch));
	map.insert(std::make_pair("cim:OperationTag.PowerSystemResource", &assign_OperationTag_PowerSystemResource));
	map.insert(std::make_pair("cim:PowerSystemResource.OperationTag", &assign_OperationTag_PowerSystemResource));
	map.insert(std::make_pair("cim:OperationTag.Asset", &assign_OperationTag_Asset));
	map.insert(std::make_pair("cim:Asset.OperationTag", &assign_OperationTag_Asset));
	map.insert(std::make_pair("cim:TagAction.OperationTag", &assign_TagAction_OperationTag));
	map.insert(std::make_pair("cim:OperationTag.TagAction", &assign_TagAction_OperationTag));
	map.insert(std::make_pair("cim:GroundAction.GroundedEquipment", &assign_GroundAction_GroundedEquipment));
	map.insert(std::make_pair("cim:GroundedEquipment.GroundAction", &assign_GroundAction_GroundedEquipment));
	map.insert(std::make_pair("cim:GroundAction.AlongACLineSegment", &assign_GroundAction_AlongACLineSegment));
	map.insert(std::make_pair("cim:AlongACLineSegment.GroundAction", &assign_GroundAction_AlongACLineSegment));
	map.insert(std::make_pair("cim:GroundAction.Ground", &assign_GroundAction_Ground));
	map.insert(std::make_pair("cim:Ground.GroundAction", &assign_GroundAction_Ground));
	map.insert(std::make_pair("cim:EnergySourceAction.EnergySource", &assign_EnergySourceAction_EnergySource));
	map.insert(std::make_pair("cim:EnergySource.EnergySourceAction", &assign_EnergySourceAction_EnergySource));
	map.insert(std::make_pair("cim:Fault.FaultyEquipment", &assign_Fault_FaultyEquipment));
	map.insert(std::make_pair("cim:FaultyEquipment.Fault", &assign_Fault_FaultyEquipment));
	map.insert(std::make_pair("cim:Incident.Outage", &assign_Incident_Outage));
	map.insert(std::make_pair("cim:Outage.Incident", &assign_Incident_Outage));
	map.insert(std::make_pair("cim:Incident.Owner", &assign_Incident_Owner));
	map.insert(std::make_pair("cim:Owner.Incident", &assign_Incident_Owner));
	map.insert(std::make_pair("cim:OperationalUpdatedRating.PlannedOutage", &assign_OperationalUpdatedRating_PlannedOutage));
	map.insert(std::make_pair("cim:PlannedOutage.OperationalUpdatedRating", &assign_OperationalUpdatedRating_PlannedOutage));
	map.insert(std::make_pair("cim:SwitchingPlan.Outage", &assign_SwitchingPlan_Outage));
	map.insert(std::make_pair("cim:Outage.SwitchingPlan", &assign_SwitchingPlan_Outage));
	map.insert(std::make_pair("cim:ShuntCompensatorInfo.ShuntCompensatorControl", &assign_ShuntCompensatorInfo_ShuntCompensatorControl));
	map.insert(std::make_pair("cim:ShuntCompensatorControl.ShuntCompensatorInfo", &assign_ShuntCompensatorInfo_ShuntCompensatorControl));
	map.insert(std::make_pair("cim:OpenCircuitTest.OpenEnd", &assign_OpenCircuitTest_OpenEnd));
	map.insert(std::make_pair("cim:OpenEnd.OpenCircuitTest", &assign_OpenCircuitTest_OpenEnd));
	map.insert(std::make_pair("cim:OpenCircuitTest.EnergisedEnd", &assign_OpenCircuitTest_EnergisedEnd));
	map.insert(std::make_pair("cim:EnergisedEnd.OpenCircuitTest", &assign_OpenCircuitTest_EnergisedEnd));
	map.insert(std::make_pair("cim:WireSpacingInfo.DuctBank", &assign_WireSpacingInfo_DuctBank));
	map.insert(std::make_pair("cim:DuctBank.WireSpacingInfo", &assign_WireSpacingInfo_DuctBank));
	map.insert(std::make_pair("cim:ShortCircuitTest.EnergisedEnd", &assign_ShortCircuitTest_EnergisedEnd));
	map.insert(std::make_pair("cim:EnergisedEnd.ShortCircuitTest", &assign_ShortCircuitTest_EnergisedEnd));
	map.insert(std::make_pair("cim:NoLoadTest.EnergisedEnd", &assign_NoLoadTest_EnergisedEnd));
	map.insert(std::make_pair("cim:EnergisedEnd.NoLoadTest", &assign_NoLoadTest_EnergisedEnd));
	map.insert(std::make_pair("cim:Tender.Receipt", &assign_Tender_Receipt));
	map.insert(std::make_pair("cim:Receipt.Tender", &assign_Tender_Receipt));
	map.insert(std::make_pair("cim:CashierShift.PointOfSale", &assign_CashierShift_PointOfSale));
	map.insert(std::make_pair("cim:PointOfSale.CashierShift", &assign_CashierShift_PointOfSale));
	map.insert(std::make_pair("cim:Card.Tender", &assign_Card_Tender));
	map.insert(std::make_pair("cim:Tender.Card", &assign_Card_Tender));
	map.insert(std::make_pair("cim:Cheque.Tender", &assign_Cheque_Tender));
	map.insert(std::make_pair("cim:Tender.Cheque", &assign_Cheque_Tender));
	map.insert(std::make_pair("cim:Register.EndDeviceFunction", &assign_Register_EndDeviceFunction));
	map.insert(std::make_pair("cim:EndDeviceFunction.Register", &assign_Register_EndDeviceFunction));
	map.insert(std::make_pair("cim:ReadingType.Channel", &assign_ReadingType_Channel));
	map.insert(std::make_pair("cim:Channel.ReadingType", &assign_ReadingType_Channel));
	map.insert(std::make_pair("cim:EndDeviceEvent.UsagePoint", &assign_EndDeviceEvent_UsagePoint));
	map.insert(std::make_pair("cim:UsagePoint.EndDeviceEvent", &assign_EndDeviceEvent_UsagePoint));
	map.insert(std::make_pair("cim:EndDeviceEvent.EndDeviceEventType", &assign_EndDeviceEvent_EndDeviceEventType));
	map.insert(std::make_pair("cim:EndDeviceEventType.EndDeviceEvent", &assign_EndDeviceEvent_EndDeviceEventType));
	map.insert(std::make_pair("cim:EndDeviceEvent.EndDevice", &assign_EndDeviceEvent_EndDevice));
	map.insert(std::make_pair("cim:EndDevice.EndDeviceEvent", &assign_EndDeviceEvent_EndDevice));
	map.insert(std::make_pair("cim:MeterReading.UsagePoint", &assign_MeterReading_UsagePoint));
	map.insert(std::make_pair("cim:UsagePoint.MeterReading", &assign_MeterReading_UsagePoint));
	map.insert(std::make_pair("cim:MeterReading.CustomerAgreement", &assign_MeterReading_CustomerAgreement));
	map.insert(std::make_pair("cim:CustomerAgreement.MeterReading", &assign_MeterReading_CustomerAgreement));
	map.insert(std::make_pair("cim:Reading.ReadingType", &assign_Reading_ReadingType));
	map.insert(std::make_pair("cim:ReadingType.Reading", &assign_Reading_ReadingType));
	map.insert(std::make_pair("cim:PendingCalculation.ReadingType", &assign_PendingCalculation_ReadingType));
	map.insert(std::make_pair("cim:ReadingType.PendingCalculation", &assign_PendingCalculation_ReadingType));
	map.insert(std::make_pair("cim:IntervalBlock.PendingCalculation", &assign_IntervalBlock_PendingCalculation));
	map.insert(std::make_pair("cim:PendingCalculation.IntervalBlock", &assign_IntervalBlock_PendingCalculation));
	map.insert(std::make_pair("cim:IntervalBlock.ReadingType", &assign_IntervalBlock_ReadingType));
	map.insert(std::make_pair("cim:ReadingType.IntervalBlock", &assign_IntervalBlock_ReadingType));
	map.insert(std::make_pair("cim:IntervalBlock.MeterReading", &assign_IntervalBlock_MeterReading));
	map.insert(std::make_pair("cim:MeterReading.IntervalBlock", &assign_IntervalBlock_MeterReading));
	map.insert(std::make_pair("cim:EndDeviceControl.EndDeviceControlType", &assign_EndDeviceControl_EndDeviceControlType));
	map.insert(std::make_pair("cim:EndDeviceControlType.EndDeviceControl", &assign_EndDeviceControl_EndDeviceControlType));
	map.insert(std::make_pair("cim:EndDeviceControl.EndDeviceAction", &assign_EndDeviceControl_EndDeviceAction));
	map.insert(std::make_pair("cim:EndDeviceAction.EndDeviceControl", &assign_EndDeviceControl_EndDeviceAction));
	map.insert(std::make_pair("cim:ReadingQuality.ReadingQualityType", &assign_ReadingQuality_ReadingQualityType));
	map.insert(std::make_pair("cim:ReadingQualityType.ReadingQuality", &assign_ReadingQuality_ReadingQualityType));
	map.insert(std::make_pair("cim:ReadingQuality.Reading", &assign_ReadingQuality_Reading));
	map.insert(std::make_pair("cim:Reading.ReadingQuality", &assign_ReadingQuality_Reading));
	map.insert(std::make_pair("cim:MeterServiceWork.UsagePoint", &assign_MeterServiceWork_UsagePoint));
	map.insert(std::make_pair("cim:UsagePoint.MeterServiceWork", &assign_MeterServiceWork_UsagePoint));
	map.insert(std::make_pair("cim:MeterServiceWork.Meter", &assign_MeterServiceWork_Meter));
	map.insert(std::make_pair("cim:Meter.MeterServiceWork", &assign_MeterServiceWork_Meter));
	map.insert(std::make_pair("cim:MeterServiceWork.OldMeter", &assign_MeterServiceWork_OldMeter));
	map.insert(std::make_pair("cim:OldMeter.MeterServiceWork", &assign_MeterServiceWork_OldMeter));
	map.insert(std::make_pair("cim:RemoteInputSignal.Terminal", &assign_RemoteInputSignal_Terminal));
	map.insert(std::make_pair("cim:Terminal.RemoteInputSignal", &assign_RemoteInputSignal_Terminal));
	map.insert(std::make_pair("cim:HydroPump.HydroPumpOpSchedule", &assign_HydroPump_HydroPumpOpSchedule));
	map.insert(std::make_pair("cim:HydroPumpOpSchedule.HydroPump", &assign_HydroPump_HydroPumpOpSchedule));
	map.insert(std::make_pair("cim:RotatingMachine.HydroPump", &assign_RotatingMachine_HydroPump));
	map.insert(std::make_pair("cim:HydroPump.RotatingMachine", &assign_RotatingMachine_HydroPump));
	map.insert(std::make_pair("cim:AsynchronousMachineDynamics.AsynchronousMachine", &assign_AsynchronousMachineDynamics_AsynchronousMachine));
	map.insert(std::make_pair("cim:AsynchronousMachine.AsynchronousMachineDynamics", &assign_AsynchronousMachineDynamics_AsynchronousMachine));
	map.insert(std::make_pair("cim:TurbineGovernorDynamics.AsynchronousMachineDynamics", &assign_TurbineGovernorDynamics_AsynchronousMachineDynamics));
	map.insert(std::make_pair("cim:AsynchronousMachineDynamics.TurbineGovernorDynamics", &assign_TurbineGovernorDynamics_AsynchronousMachineDynamics));
	map.insert(std::make_pair("cim:SynchronousMachineDynamics.SynchronousMachine", &assign_SynchronousMachineDynamics_SynchronousMachine));
	map.insert(std::make_pair("cim:SynchronousMachine.SynchronousMachineDynamics", &assign_SynchronousMachineDynamics_SynchronousMachine));
	map.insert(std::make_pair("cim:MechanicalLoadDynamics.AsynchronousMachineDynamics", &assign_MechanicalLoadDynamics_AsynchronousMachineDynamics));
	map.insert(std::make_pair("cim:AsynchronousMachineDynamics.MechanicalLoadDynamics", &assign_MechanicalLoadDynamics_AsynchronousMachineDynamics));
	map.insert(std::make_pair("cim:MechanicalLoadDynamics.SynchronousMachineDynamics", &assign_MechanicalLoadDynamics_SynchronousMachineDynamics));
	map.insert(std::make_pair("cim:SynchronousMachineDynamics.MechanicalLoadDynamics", &assign_MechanicalLoadDynamics_SynchronousMachineDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.SynchronousMachineDynamics", &assign_ExcitationSystemDynamics_SynchronousMachineDynamics));
	map.insert(std::make_pair("cim:SynchronousMachineDynamics.ExcitationSystemDynamics", &assign_ExcitationSystemDynamics_SynchronousMachineDynamics));
	map.insert(std::make_pair("cim:PFVArControllerType2Dynamics.ExcitationSystemDynamics", &assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.PFVArControllerType2Dynamics", &assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics", &assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.PowerSystemStabilizerDynamics", &assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:OverexcitationLimiterDynamics.ExcitationSystemDynamics", &assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.OverexcitationLimiterDynamics", &assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:PFVArControllerType1Dynamics.ExcitationSystemDynamics", &assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.PFVArControllerType1Dynamics", &assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:PFVArControllerType1Dynamics.RemoteInputSignal", &assign_PFVArControllerType1Dynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.PFVArControllerType1Dynamics", &assign_PFVArControllerType1Dynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:EnergyConsumer.LoadResponse", &assign_EnergyConsumer_LoadResponse));
	map.insert(std::make_pair("cim:LoadResponse.EnergyConsumer", &assign_EnergyConsumer_LoadResponse));
	map.insert(std::make_pair("cim:LoadMotor.LoadAggregate", &assign_LoadMotor_LoadAggregate));
	map.insert(std::make_pair("cim:LoadAggregate.LoadMotor", &assign_LoadMotor_LoadAggregate));
	map.insert(std::make_pair("cim:LoadStatic.LoadAggregate", &assign_LoadStatic_LoadAggregate));
	map.insert(std::make_pair("cim:LoadAggregate.LoadStatic", &assign_LoadStatic_LoadAggregate));
	map.insert(std::make_pair("cim:UnderexcitationLimiterDynamics.ExcitationSystemDynamics", &assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.UnderexcitationLimiterDynamics", &assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:UnderexcitationLimiterDynamics.RemoteInputSignal", &assign_UnderexcitationLimiterDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.UnderexcitationLimiterDynamics", &assign_UnderexcitationLimiterDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:TurbineLoadControllerDynamics.TurbineGovernorDynamics", &assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics));
	map.insert(std::make_pair("cim:TurbineGovernorDynamics.TurbineLoadControllerDynamics", &assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics));
	map.insert(std::make_pair("cim:DiscontinuousExcitationControlDynamics.ExcitationSystemDynamics", &assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:ExcitationSystemDynamics.DiscontinuousExcitationControlDynamics", &assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics));
	map.insert(std::make_pair("cim:DiscontinuousExcitationControlDynamics.RemoteInputSignal", &assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.DiscontinuousExcitationControlDynamics", &assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal));
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
	map.insert(std::make_pair("cim:WindTurbineType3or4Dynamics.EnergySource", &assign_WindTurbineType3or4Dynamics_EnergySource));
	map.insert(std::make_pair("cim:EnergySource.WindTurbineType3or4Dynamics", &assign_WindTurbineType3or4Dynamics_EnergySource));
	map.insert(std::make_pair("cim:WindTurbineType3or4Dynamics.RemoteInputSignal", &assign_WindTurbineType3or4Dynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.WindTurbineType3or4Dynamics", &assign_WindTurbineType3or4Dynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:WindRefFrameRotIEC.WindTurbineType3or4IEC", &assign_WindRefFrameRotIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC.WindRefFrameRotIEC", &assign_WindRefFrameRotIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindContQLimIEC.WindTurbineType3or4IEC", &assign_WindContQLimIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC.WindContQLimIEC", &assign_WindContQLimIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindGenType3IEC.WindTurbineType3IEC", &assign_WindGenType3IEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindTurbineType3IEC.WindGenType3IEC", &assign_WindGenType3IEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindGenType3aIEC.WindTurbineType4IEC", &assign_WindGenType3aIEC_WindTurbineType4IEC));
	map.insert(std::make_pair("cim:WindTurbineType4IEC.WindGenType3aIEC", &assign_WindGenType3aIEC_WindTurbineType4IEC));
	map.insert(std::make_pair("cim:WindTurbineType1or2Dynamics.AsynchronousMachineDynamics", &assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics));
	map.insert(std::make_pair("cim:AsynchronousMachineDynamics.WindTurbineType1or2Dynamics", &assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics));
	map.insert(std::make_pair("cim:WindTurbineType1or2Dynamics.RemoteInputSignal", &assign_WindTurbineType1or2Dynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.WindTurbineType1or2Dynamics", &assign_WindTurbineType1or2Dynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:WindProtectionIEC.WindTurbineType3or4IEC", &assign_WindProtectionIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC.WindProtectionIEC", &assign_WindProtectionIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindProtectionIEC.WindTurbineType1or2IEC", &assign_WindProtectionIEC_WindTurbineType1or2IEC));
	map.insert(std::make_pair("cim:WindTurbineType1or2IEC.WindProtectionIEC", &assign_WindProtectionIEC_WindTurbineType1or2IEC));
	map.insert(std::make_pair("cim:WindPlantDynamics.RemoteInputSignal", &assign_WindPlantDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.WindPlantDynamics", &assign_WindPlantDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:WindPlantIEC.WindPlantReactiveControlIEC", &assign_WindPlantIEC_WindPlantReactiveControlIEC));
	map.insert(std::make_pair("cim:WindPlantReactiveControlIEC.WindPlantIEC", &assign_WindPlantIEC_WindPlantReactiveControlIEC));
	map.insert(std::make_pair("cim:WindPlantFreqPcontrolIEC.WindPlantIEC", &assign_WindPlantFreqPcontrolIEC_WindPlantIEC));
	map.insert(std::make_pair("cim:WindPlantIEC.WindPlantFreqPcontrolIEC", &assign_WindPlantFreqPcontrolIEC_WindPlantIEC));
	map.insert(std::make_pair("cim:WindContQPQULimIEC.WindTurbineType3or4IEC", &assign_WindContQPQULimIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC.WindContQPQULimIEC", &assign_WindContQPQULimIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindContCurrLimIEC.WindTurbineType3or4IEC", &assign_WindContCurrLimIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC.WindContCurrLimIEC", &assign_WindContCurrLimIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindContPType3IEC.WindTurbineType3IEC", &assign_WindContPType3IEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindTurbineType3IEC.WindContPType3IEC", &assign_WindContPType3IEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindContRotorRIEC.WindGenTurbineType2IEC", &assign_WindContRotorRIEC_WindGenTurbineType2IEC));
	map.insert(std::make_pair("cim:WindGenTurbineType2IEC.WindContRotorRIEC", &assign_WindContRotorRIEC_WindGenTurbineType2IEC));
	map.insert(std::make_pair("cim:WindPitchContPowerIEC.WindGenTurbineType2IEC", &assign_WindPitchContPowerIEC_WindGenTurbineType2IEC));
	map.insert(std::make_pair("cim:WindGenTurbineType2IEC.WindPitchContPowerIEC", &assign_WindPitchContPowerIEC_WindGenTurbineType2IEC));
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
	map.insert(std::make_pair("cim:WindAeroConstIEC.WindGenTurbineType1aIEC", &assign_WindAeroConstIEC_WindGenTurbineType1aIEC));
	map.insert(std::make_pair("cim:WindGenTurbineType1aIEC.WindAeroConstIEC", &assign_WindAeroConstIEC_WindGenTurbineType1aIEC));
	map.insert(std::make_pair("cim:WindGenTurbineType1bIEC.WindPitchContPowerIEC", &assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC));
	map.insert(std::make_pair("cim:WindPitchContPowerIEC.WindGenTurbineType1bIEC", &assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC));
	map.insert(std::make_pair("cim:WindMechIEC.WindTurbineType4bIEC", &assign_WindMechIEC_WindTurbineType4bIEC));
	map.insert(std::make_pair("cim:WindTurbineType4bIEC.WindMechIEC", &assign_WindMechIEC_WindTurbineType4bIEC));
	map.insert(std::make_pair("cim:WindMechIEC.WindTurbineType3IEC", &assign_WindMechIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindTurbineType3IEC.WindMechIEC", &assign_WindMechIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindMechIEC.WindTurbineType1or2IEC", &assign_WindMechIEC_WindTurbineType1or2IEC));
	map.insert(std::make_pair("cim:WindTurbineType1or2IEC.WindMechIEC", &assign_WindMechIEC_WindTurbineType1or2IEC));
	map.insert(std::make_pair("cim:WindContPType4bIEC.WindTurbineType4bIEC", &assign_WindContPType4bIEC_WindTurbineType4bIEC));
	map.insert(std::make_pair("cim:WindTurbineType4bIEC.WindContPType4bIEC", &assign_WindContPType4bIEC_WindTurbineType4bIEC));
	map.insert(std::make_pair("cim:WindContPType4aIEC.WindTurbineType4aIEC", &assign_WindContPType4aIEC_WindTurbineType4aIEC));
	map.insert(std::make_pair("cim:WindTurbineType4aIEC.WindContPType4aIEC", &assign_WindContPType4aIEC_WindTurbineType4aIEC));
	map.insert(std::make_pair("cim:WindContQIEC.WindTurbineType3or4IEC", &assign_WindContQIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindTurbineType3or4IEC.WindContQIEC", &assign_WindContQIEC_WindTurbineType3or4IEC));
	map.insert(std::make_pair("cim:WindGenType4IEC.WindTurbineType4bIEC", &assign_WindGenType4IEC_WindTurbineType4bIEC));
	map.insert(std::make_pair("cim:WindTurbineType4bIEC.WindGenType4IEC", &assign_WindGenType4IEC_WindTurbineType4bIEC));
	map.insert(std::make_pair("cim:WindGenType4IEC.WindTurbineType4aIEC", &assign_WindGenType4IEC_WindTurbineType4aIEC));
	map.insert(std::make_pair("cim:WindTurbineType4aIEC.WindGenType4IEC", &assign_WindGenType4IEC_WindTurbineType4aIEC));
	map.insert(std::make_pair("cim:WindAeroTwoDimIEC.WindTurbineType3IEC", &assign_WindAeroTwoDimIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindTurbineType3IEC.WindAeroTwoDimIEC", &assign_WindAeroTwoDimIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindContPitchAngleIEC.WindTurbineType3IEC", &assign_WindContPitchAngleIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindTurbineType3IEC.WindContPitchAngleIEC", &assign_WindContPitchAngleIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindAeroOneDimIEC.WindTurbineType3IEC", &assign_WindAeroOneDimIEC_WindTurbineType3IEC));
	map.insert(std::make_pair("cim:WindTurbineType3IEC.WindAeroOneDimIEC", &assign_WindAeroOneDimIEC_WindTurbineType3IEC));
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
	map.insert(std::make_pair("cim:RegulationSchedule.RegulatingControl", &assign_RegulationSchedule_RegulatingControl));
	map.insert(std::make_pair("cim:RegulatingControl.RegulationSchedule", &assign_RegulationSchedule_RegulatingControl));
	map.insert(std::make_pair("cim:MutualCoupling.First_Terminal", &assign_MutualCoupling_First_Terminal));
	map.insert(std::make_pair("cim:First_Terminal.MutualCoupling", &assign_MutualCoupling_First_Terminal));
	map.insert(std::make_pair("cim:MutualCoupling.Second_Terminal", &assign_MutualCoupling_Second_Terminal));
	map.insert(std::make_pair("cim:Second_Terminal.MutualCoupling", &assign_MutualCoupling_Second_Terminal));
	map.insert(std::make_pair("cim:ACLineSegmentPhase.ACLineSegment", &assign_ACLineSegmentPhase_ACLineSegment));
	map.insert(std::make_pair("cim:ACLineSegment.ACLineSegmentPhase", &assign_ACLineSegmentPhase_ACLineSegment));
	map.insert(std::make_pair("cim:TapSchedule.TapChanger", &assign_TapSchedule_TapChanger));
	map.insert(std::make_pair("cim:TapChanger.TapSchedule", &assign_TapSchedule_TapChanger));
	map.insert(std::make_pair("cim:TransformerTankEnd.TransformerTank", &assign_TransformerTankEnd_TransformerTank));
	map.insert(std::make_pair("cim:TransformerTank.TransformerTankEnd", &assign_TransformerTankEnd_TransformerTank));
	map.insert(std::make_pair("cim:PhaseTapChangerTablePoint.PhaseTapChangerTable", &assign_PhaseTapChangerTablePoint_PhaseTapChangerTable));
	map.insert(std::make_pair("cim:PhaseTapChangerTable.PhaseTapChangerTablePoint", &assign_PhaseTapChangerTablePoint_PhaseTapChangerTable));
	map.insert(std::make_pair("cim:RatioTapChangerTablePoint.RatioTapChangerTable", &assign_RatioTapChangerTablePoint_RatioTapChangerTable));
	map.insert(std::make_pair("cim:RatioTapChangerTable.RatioTapChangerTablePoint", &assign_RatioTapChangerTablePoint_RatioTapChangerTable));
	map.insert(std::make_pair("cim:BusbarSection.VoltageControlZone", &assign_BusbarSection_VoltageControlZone));
	map.insert(std::make_pair("cim:VoltageControlZone.BusbarSection", &assign_BusbarSection_VoltageControlZone));
	map.insert(std::make_pair("cim:DiagramObjectPoint.DiagramObjectGluePoint", &assign_DiagramObjectPoint_DiagramObjectGluePoint));
	map.insert(std::make_pair("cim:DiagramObjectGluePoint.DiagramObjectPoint", &assign_DiagramObjectPoint_DiagramObjectGluePoint));
	map.insert(std::make_pair("cim:DiagramObject.Diagram", &assign_DiagramObject_Diagram));
	map.insert(std::make_pair("cim:Diagram.DiagramObject", &assign_DiagramObject_Diagram));
	map.insert(std::make_pair("cim:DiagramObject.DiagramObjectStyle", &assign_DiagramObject_DiagramObjectStyle));
	map.insert(std::make_pair("cim:DiagramObjectStyle.DiagramObject", &assign_DiagramObject_DiagramObjectStyle));
	map.insert(std::make_pair("cim:NameType.NameTypeAuthority", &assign_NameType_NameTypeAuthority));
	map.insert(std::make_pair("cim:NameTypeAuthority.NameType", &assign_NameType_NameTypeAuthority));
	map.insert(std::make_pair("cim:Name.NameType", &assign_Name_NameType));
	map.insert(std::make_pair("cim:NameType.Name", &assign_Name_NameType));
	map.insert(std::make_pair("cim:Name.IdentifiedObject", &assign_Name_IdentifiedObject));
	map.insert(std::make_pair("cim:IdentifiedObject.Name", &assign_Name_IdentifiedObject));
	map.insert(std::make_pair("cim:VoltageLevel.BaseVoltage", &assign_VoltageLevel_BaseVoltage));
	map.insert(std::make_pair("cim:BaseVoltage.VoltageLevel", &assign_VoltageLevel_BaseVoltage));
	map.insert(std::make_pair("cim:OperatingShare.OperatingParticipant", &assign_OperatingShare_OperatingParticipant));
	map.insert(std::make_pair("cim:OperatingParticipant.OperatingShare", &assign_OperatingShare_OperatingParticipant));
	map.insert(std::make_pair("cim:OperatingShare.PowerSystemResource", &assign_OperatingShare_PowerSystemResource));
	map.insert(std::make_pair("cim:PowerSystemResource.OperatingShare", &assign_OperatingShare_PowerSystemResource));
	map.insert(std::make_pair("cim:DCBaseTerminal.DCTopologicalNode", &assign_DCBaseTerminal_DCTopologicalNode));
	map.insert(std::make_pair("cim:DCTopologicalNode.DCBaseTerminal", &assign_DCBaseTerminal_DCTopologicalNode));
	map.insert(std::make_pair("cim:ACDCConverter.PccTerminal", &assign_ACDCConverter_PccTerminal));
	map.insert(std::make_pair("cim:PccTerminal.ACDCConverter", &assign_ACDCConverter_PccTerminal));
	map.insert(std::make_pair("cim:DCNode.DCTopologicalNode", &assign_DCNode_DCTopologicalNode));
	map.insert(std::make_pair("cim:DCTopologicalNode.DCNode", &assign_DCNode_DCTopologicalNode));
	map.insert(std::make_pair("cim:DCNode.DCEquipmentContainer", &assign_DCNode_DCEquipmentContainer));
	map.insert(std::make_pair("cim:DCEquipmentContainer.DCNode", &assign_DCNode_DCEquipmentContainer));
	map.insert(std::make_pair("cim:DCLine.Region", &assign_DCLine_Region));
	map.insert(std::make_pair("cim:Region.DCLine", &assign_DCLine_Region));
	map.insert(std::make_pair("cim:VsConverter.CapabilityCurve", &assign_VsConverter_CapabilityCurve));
	map.insert(std::make_pair("cim:CapabilityCurve.VsConverter", &assign_VsConverter_CapabilityCurve));
	map.insert(std::make_pair("cim:ACDCConverterDCTerminal.DCConductingEquipment", &assign_ACDCConverterDCTerminal_DCConductingEquipment));
	map.insert(std::make_pair("cim:DCConductingEquipment.ACDCConverterDCTerminal", &assign_ACDCConverterDCTerminal_DCConductingEquipment));
	map.insert(std::make_pair("cim:OperationalLimit.OperationalLimitType", &assign_OperationalLimit_OperationalLimitType));
	map.insert(std::make_pair("cim:OperationalLimitType.OperationalLimit", &assign_OperationalLimit_OperationalLimitType));
	map.insert(std::make_pair("cim:BranchGroupTerminal.Terminal", &assign_BranchGroupTerminal_Terminal));
	map.insert(std::make_pair("cim:Terminal.BranchGroupTerminal", &assign_BranchGroupTerminal_Terminal));
	map.insert(std::make_pair("cim:OperationalLimitSet.Equipment", &assign_OperationalLimitSet_Equipment));
	map.insert(std::make_pair("cim:Equipment.OperationalLimitSet", &assign_OperationalLimitSet_Equipment));
	map.insert(std::make_pair("cim:OperationalLimitSet.Terminal", &assign_OperationalLimitSet_Terminal));
	map.insert(std::make_pair("cim:Terminal.OperationalLimitSet", &assign_OperationalLimitSet_Terminal));
	map.insert(std::make_pair("cim:GeneratingUnit.GenUnitOpSchedule", &assign_GeneratingUnit_GenUnitOpSchedule));
	map.insert(std::make_pair("cim:GenUnitOpSchedule.GeneratingUnit", &assign_GeneratingUnit_GenUnitOpSchedule));
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
	map.insert(std::make_pair("cim:CogenerationPlant.SteamSendoutSchedule", &assign_CogenerationPlant_SteamSendoutSchedule));
	map.insert(std::make_pair("cim:SteamSendoutSchedule.CogenerationPlant", &assign_CogenerationPlant_SteamSendoutSchedule));
	map.insert(std::make_pair("cim:HydroGeneratingUnit.PenstockLossCurve", &assign_HydroGeneratingUnit_PenstockLossCurve));
	map.insert(std::make_pair("cim:PenstockLossCurve.HydroGeneratingUnit", &assign_HydroGeneratingUnit_PenstockLossCurve));
	map.insert(std::make_pair("cim:FossilFuel.ThermalGeneratingUnit", &assign_FossilFuel_ThermalGeneratingUnit));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.FossilFuel", &assign_FossilFuel_ThermalGeneratingUnit));
	map.insert(std::make_pair("cim:Reservoir.TargetLevelSchedule", &assign_Reservoir_TargetLevelSchedule));
	map.insert(std::make_pair("cim:TargetLevelSchedule.Reservoir", &assign_Reservoir_TargetLevelSchedule));
	map.insert(std::make_pair("cim:CAESPlant.ThermalGeneratingUnit", &assign_CAESPlant_ThermalGeneratingUnit));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.CAESPlant", &assign_CAESPlant_ThermalGeneratingUnit));
	map.insert(std::make_pair("cim:CAESPlant.AirCompressor", &assign_CAESPlant_AirCompressor));
	map.insert(std::make_pair("cim:AirCompressor.CAESPlant", &assign_CAESPlant_AirCompressor));
	map.insert(std::make_pair("cim:HydroPowerPlant.Reservoir", &assign_HydroPowerPlant_Reservoir));
	map.insert(std::make_pair("cim:Reservoir.HydroPowerPlant", &assign_HydroPowerPlant_Reservoir));
	map.insert(std::make_pair("cim:HydroPowerPlant.GenSourcePumpDischargeReservoir", &assign_HydroPowerPlant_GenSourcePumpDischargeReservoir));
	map.insert(std::make_pair("cim:GenSourcePumpDischargeReservoir.HydroPowerPlant", &assign_HydroPowerPlant_GenSourcePumpDischargeReservoir));
	map.insert(std::make_pair("cim:CombustionTurbine.AirCompressor", &assign_CombustionTurbine_AirCompressor));
	map.insert(std::make_pair("cim:AirCompressor.CombustionTurbine", &assign_CombustionTurbine_AirCompressor));
	map.insert(std::make_pair("cim:CombustionTurbine.CTTempActivePowerCurve", &assign_CombustionTurbine_CTTempActivePowerCurve));
	map.insert(std::make_pair("cim:CTTempActivePowerCurve.CombustionTurbine", &assign_CombustionTurbine_CTTempActivePowerCurve));
	map.insert(std::make_pair("cim:BusNameMarker.ReportingGroup", &assign_BusNameMarker_ReportingGroup));
	map.insert(std::make_pair("cim:ReportingGroup.BusNameMarker", &assign_BusNameMarker_ReportingGroup));
	map.insert(std::make_pair("cim:TopologicalNode.ReportingGroup", &assign_TopologicalNode_ReportingGroup));
	map.insert(std::make_pair("cim:ReportingGroup.TopologicalNode", &assign_TopologicalNode_ReportingGroup));
	map.insert(std::make_pair("cim:TopologicalNode.ConnectivityNodeContainer", &assign_TopologicalNode_ConnectivityNodeContainer));
	map.insert(std::make_pair("cim:ConnectivityNodeContainer.TopologicalNode", &assign_TopologicalNode_ConnectivityNodeContainer));
	map.insert(std::make_pair("cim:TopologicalNode.BaseVoltage", &assign_TopologicalNode_BaseVoltage));
	map.insert(std::make_pair("cim:BaseVoltage.TopologicalNode", &assign_TopologicalNode_BaseVoltage));
	map.insert(std::make_pair("cim:TopologicalIsland.AngleRefTopologicalNode", &assign_TopologicalIsland_AngleRefTopologicalNode));
	map.insert(std::make_pair("cim:AngleRefTopologicalNode.TopologicalIsland", &assign_TopologicalIsland_AngleRefTopologicalNode));
	map.insert(std::make_pair("cim:AuxiliaryEquipment.Terminal", &assign_AuxiliaryEquipment_Terminal));
	map.insert(std::make_pair("cim:Terminal.AuxiliaryEquipment", &assign_AuxiliaryEquipment_Terminal));
	map.insert(std::make_pair("cim:AccumulatorReset.AccumulatorValue", &assign_AccumulatorReset_AccumulatorValue));
	map.insert(std::make_pair("cim:AccumulatorValue.AccumulatorReset", &assign_AccumulatorReset_AccumulatorValue));
	map.insert(std::make_pair("cim:Command.ValueAliasSet", &assign_Command_ValueAliasSet));
	map.insert(std::make_pair("cim:ValueAliasSet.Command", &assign_Command_ValueAliasSet));
	map.insert(std::make_pair("cim:StringMeasurementValue.StringMeasurement", &assign_StringMeasurementValue_StringMeasurement));
	map.insert(std::make_pair("cim:StringMeasurement.StringMeasurementValue", &assign_StringMeasurementValue_StringMeasurement));
	map.insert(std::make_pair("cim:AnalogValue.AnalogControl", &assign_AnalogValue_AnalogControl));
	map.insert(std::make_pair("cim:AnalogControl.AnalogValue", &assign_AnalogValue_AnalogControl));
	map.insert(std::make_pair("cim:DiscreteValue.Command", &assign_DiscreteValue_Command));
	map.insert(std::make_pair("cim:Command.DiscreteValue", &assign_DiscreteValue_Command));
	map.insert(std::make_pair("cim:RaiseLowerCommand.ValueAliasSet", &assign_RaiseLowerCommand_ValueAliasSet));
	map.insert(std::make_pair("cim:ValueAliasSet.RaiseLowerCommand", &assign_RaiseLowerCommand_ValueAliasSet));
	map.insert(std::make_pair("cim:ContingencyEquipment.Equipment", &assign_ContingencyEquipment_Equipment));
	map.insert(std::make_pair("cim:Equipment.ContingencyEquipment", &assign_ContingencyEquipment_Equipment));
	map.insert(std::make_pair("cim:EquipmentFault.Terminal", &assign_EquipmentFault_Terminal));
	map.insert(std::make_pair("cim:Terminal.EquipmentFault", &assign_EquipmentFault_Terminal));
	map.insert(std::make_pair("cim:LineFault.ACLineSegment", &assign_LineFault_ACLineSegment));
	map.insert(std::make_pair("cim:ACLineSegment.LineFault", &assign_LineFault_ACLineSegment));
	map.insert(std::make_pair("cim:SvVoltage.TopologicalNode", &assign_SvVoltage_TopologicalNode));
	map.insert(std::make_pair("cim:TopologicalNode.SvVoltage", &assign_SvVoltage_TopologicalNode));
	map.insert(std::make_pair("cim:SvPowerFlow.Terminal", &assign_SvPowerFlow_Terminal));
	map.insert(std::make_pair("cim:Terminal.SvPowerFlow", &assign_SvPowerFlow_Terminal));
	map.insert(std::make_pair("cim:SvTapStep.TapChanger", &assign_SvTapStep_TapChanger));
	map.insert(std::make_pair("cim:TapChanger.SvTapStep", &assign_SvTapStep_TapChanger));
	map.insert(std::make_pair("cim:SvStatus.ConductingEquipment", &assign_SvStatus_ConductingEquipment));
	map.insert(std::make_pair("cim:ConductingEquipment.SvStatus", &assign_SvStatus_ConductingEquipment));
	map.insert(std::make_pair("cim:SvShuntCompensatorSections.ShuntCompensator", &assign_SvShuntCompensatorSections_ShuntCompensator));
	map.insert(std::make_pair("cim:ShuntCompensator.SvShuntCompensatorSections", &assign_SvShuntCompensatorSections_ShuntCompensator));
	map.insert(std::make_pair("cim:SvInjection.TopologicalNode", &assign_SvInjection_TopologicalNode));
	map.insert(std::make_pair("cim:TopologicalNode.SvInjection", &assign_SvInjection_TopologicalNode));
	map.insert(std::make_pair("cim:RemoteControl.Control", &assign_RemoteControl_Control));
	map.insert(std::make_pair("cim:Control.RemoteControl", &assign_RemoteControl_Control));
	map.insert(std::make_pair("cim:AltGeneratingUnitMeas.AnalogValue", &assign_AltGeneratingUnitMeas_AnalogValue));
	map.insert(std::make_pair("cim:AnalogValue.AltGeneratingUnitMeas", &assign_AltGeneratingUnitMeas_AnalogValue));
	map.insert(std::make_pair("cim:ControlAreaGeneratingUnit.GeneratingUnit", &assign_ControlAreaGeneratingUnit_GeneratingUnit));
	map.insert(std::make_pair("cim:GeneratingUnit.ControlAreaGeneratingUnit", &assign_ControlAreaGeneratingUnit_GeneratingUnit));
	map.insert(std::make_pair("cim:AltTieMeas.AnalogValue", &assign_AltTieMeas_AnalogValue));
	map.insert(std::make_pair("cim:AnalogValue.AltTieMeas", &assign_AltTieMeas_AnalogValue));
	map.insert(std::make_pair("cim:TieFlow.Terminal", &assign_TieFlow_Terminal));
	map.insert(std::make_pair("cim:Terminal.TieFlow", &assign_TieFlow_Terminal));
	map.insert(std::make_pair("cim:ControlArea.EnergyArea", &assign_ControlArea_EnergyArea));
	map.insert(std::make_pair("cim:EnergyArea.ControlArea", &assign_ControlArea_EnergyArea));

	map.insert(std::make_pair("cim:IdentifiedObject.DiagramObjects", &assign_IdentifiedObject_DiagramObjects));
	map.insert(std::make_pair("cim:DiagramObjects.IdentifiedObject", &assign_IdentifiedObject_DiagramObjects));
	map.insert(std::make_pair("cim:Organisation.ActivityRecords", &assign_Organisation_ActivityRecords));
	map.insert(std::make_pair("cim:ActivityRecords.Organisation", &assign_Organisation_ActivityRecords));
	map.insert(std::make_pair("cim:OrganisationRole.ConfigurationEvents", &assign_OrganisationRole_ConfigurationEvents));
	map.insert(std::make_pair("cim:ConfigurationEvents.OrganisationRole", &assign_OrganisationRole_ConfigurationEvents));
	map.insert(std::make_pair("cim:PowerSystemResource.Controls", &assign_PowerSystemResource_Controls));
	map.insert(std::make_pair("cim:Controls.PowerSystemResource", &assign_PowerSystemResource_Controls));
	map.insert(std::make_pair("cim:PowerSystemResource.Measurements", &assign_PowerSystemResource_Measurements));
	map.insert(std::make_pair("cim:Measurements.PowerSystemResource", &assign_PowerSystemResource_Measurements));
	map.insert(std::make_pair("cim:Curve.CurveDatas", &assign_Curve_CurveDatas));
	map.insert(std::make_pair("cim:CurveDatas.Curve", &assign_Curve_CurveDatas));
	map.insert(std::make_pair("cim:Document.ConfigurationEvents", &assign_Document_ConfigurationEvents));
	map.insert(std::make_pair("cim:ConfigurationEvents.Document", &assign_Document_ConfigurationEvents));
	map.insert(std::make_pair("cim:ErpRecLineItem.ErpPayments", &assign_ErpRecLineItem_ErpPayments));
	map.insert(std::make_pair("cim:ErpPayments.ErpRecLineItem", &assign_ErpRecLineItem_ErpPayments));
	map.insert(std::make_pair("cim:ErpRecLineItem.ErpJournalEntries", &assign_ErpRecLineItem_ErpJournalEntries));
	map.insert(std::make_pair("cim:ErpJournalEntries.ErpRecLineItem", &assign_ErpRecLineItem_ErpJournalEntries));
	map.insert(std::make_pair("cim:ErpPayableLineItem.ErpPayments", &assign_ErpPayableLineItem_ErpPayments));
	map.insert(std::make_pair("cim:ErpPayments.ErpPayableLineItem", &assign_ErpPayableLineItem_ErpPayments));
	map.insert(std::make_pair("cim:ErpPayableLineItem.ErpJournalEntries", &assign_ErpPayableLineItem_ErpJournalEntries));
	map.insert(std::make_pair("cim:ErpJournalEntries.ErpPayableLineItem", &assign_ErpPayableLineItem_ErpJournalEntries));
	map.insert(std::make_pair("cim:Medium.Assets", &assign_Medium_Assets));
	map.insert(std::make_pair("cim:Assets.Medium", &assign_Medium_Assets));
	map.insert(std::make_pair("cim:Specification.Mediums", &assign_Specification_Mediums));
	map.insert(std::make_pair("cim:Mediums.Specification", &assign_Specification_Mediums));
	map.insert(std::make_pair("cim:Specification.AssetPropertyCurves", &assign_Specification_AssetPropertyCurves));
	map.insert(std::make_pair("cim:AssetPropertyCurves.Specification", &assign_Specification_AssetPropertyCurves));
	map.insert(std::make_pair("cim:BaseVoltage.ConductingEquipment", &assign_BaseVoltage_ConductingEquipment));
	map.insert(std::make_pair("cim:ConductingEquipment.BaseVoltage", &assign_BaseVoltage_ConductingEquipment));
	map.insert(std::make_pair("cim:Terminal.RegulatingControl", &assign_Terminal_RegulatingControl));
	map.insert(std::make_pair("cim:RegulatingControl.Terminal", &assign_Terminal_RegulatingControl));
	map.insert(std::make_pair("cim:PowerTransformer.PowerTransformerEnd", &assign_PowerTransformer_PowerTransformerEnd));
	map.insert(std::make_pair("cim:PowerTransformerEnd.PowerTransformer", &assign_PowerTransformer_PowerTransformerEnd));
	map.insert(std::make_pair("cim:TransformerObservation.WindingInsulationPFs", &assign_TransformerObservation_WindingInsulationPFs));
	map.insert(std::make_pair("cim:WindingInsulationPFs.TransformerObservation", &assign_TransformerObservation_WindingInsulationPFs));
	map.insert(std::make_pair("cim:ProcedureDataSet.MeasurementValues", &assign_ProcedureDataSet_MeasurementValues));
	map.insert(std::make_pair("cim:MeasurementValues.ProcedureDataSet", &assign_ProcedureDataSet_MeasurementValues));
	map.insert(std::make_pair("cim:ProcedureDataSet.TransformerObservations", &assign_ProcedureDataSet_TransformerObservations));
	map.insert(std::make_pair("cim:TransformerObservations.ProcedureDataSet", &assign_ProcedureDataSet_TransformerObservations));
	map.insert(std::make_pair("cim:UserAttribute.ProcedureDataSets", &assign_UserAttribute_ProcedureDataSets));
	map.insert(std::make_pair("cim:ProcedureDataSets.UserAttribute", &assign_UserAttribute_ProcedureDataSets));
	map.insert(std::make_pair("cim:ErpInvoiceLineItem.ErpJournalEntries", &assign_ErpInvoiceLineItem_ErpJournalEntries));
	map.insert(std::make_pair("cim:ErpJournalEntries.ErpInvoiceLineItem", &assign_ErpInvoiceLineItem_ErpJournalEntries));
	map.insert(std::make_pair("cim:ErpInvoiceLineItem.ErpPayments", &assign_ErpInvoiceLineItem_ErpPayments));
	map.insert(std::make_pair("cim:ErpPayments.ErpInvoiceLineItem", &assign_ErpInvoiceLineItem_ErpPayments));
	map.insert(std::make_pair("cim:ErpInvoiceLineItem.UserAttributes", &assign_ErpInvoiceLineItem_UserAttributes));
	map.insert(std::make_pair("cim:UserAttributes.ErpInvoiceLineItem", &assign_ErpInvoiceLineItem_UserAttributes));
	map.insert(std::make_pair("cim:Reconditioning.TransformerObservations", &assign_Reconditioning_TransformerObservations));
	map.insert(std::make_pair("cim:TransformerObservations.Reconditioning", &assign_Reconditioning_TransformerObservations));
	map.insert(std::make_pair("cim:AssetInfo.PowerSystemResources", &assign_AssetInfo_PowerSystemResources));
	map.insert(std::make_pair("cim:PowerSystemResources.AssetInfo", &assign_AssetInfo_PowerSystemResources));
	map.insert(std::make_pair("cim:Location.Measurements", &assign_Location_Measurements));
	map.insert(std::make_pair("cim:Measurements.Location", &assign_Location_Measurements));
	map.insert(std::make_pair("cim:Location.PositionPoints", &assign_Location_PositionPoints));
	map.insert(std::make_pair("cim:PositionPoints.Location", &assign_Location_PositionPoints));
	map.insert(std::make_pair("cim:Location.PowerSystemResources", &assign_Location_PowerSystemResources));
	map.insert(std::make_pair("cim:PowerSystemResources.Location", &assign_Location_PowerSystemResources));
	map.insert(std::make_pair("cim:Location.ConfigurationEvents", &assign_Location_ConfigurationEvents));
	map.insert(std::make_pair("cim:ConfigurationEvents.Location", &assign_Location_ConfigurationEvents));
	map.insert(std::make_pair("cim:Asset.OrganisationRoles", &assign_Asset_OrganisationRoles));
	map.insert(std::make_pair("cim:OrganisationRoles.Asset", &assign_Asset_OrganisationRoles));
	map.insert(std::make_pair("cim:Asset.PowerSystemResources", &assign_Asset_PowerSystemResources));
	map.insert(std::make_pair("cim:PowerSystemResources.Asset", &assign_Asset_PowerSystemResources));
	map.insert(std::make_pair("cim:Asset.AssetPropertyCurves", &assign_Asset_AssetPropertyCurves));
	map.insert(std::make_pair("cim:AssetPropertyCurves.Asset", &assign_Asset_AssetPropertyCurves));
	map.insert(std::make_pair("cim:Asset.ErpRecDeliveryItems", &assign_Asset_ErpRecDeliveryItems));
	map.insert(std::make_pair("cim:ErpRecDeliveryItems.Asset", &assign_Asset_ErpRecDeliveryItems));
	map.insert(std::make_pair("cim:Asset.Reconditionings", &assign_Asset_Reconditionings));
	map.insert(std::make_pair("cim:Reconditionings.Asset", &assign_Asset_Reconditionings));
	map.insert(std::make_pair("cim:Asset.Measurements", &assign_Asset_Measurements));
	map.insert(std::make_pair("cim:Measurements.Asset", &assign_Asset_Measurements));
	map.insert(std::make_pair("cim:Asset.ConfigurationEvents", &assign_Asset_ConfigurationEvents));
	map.insert(std::make_pair("cim:ConfigurationEvents.Asset", &assign_Asset_ConfigurationEvents));
	map.insert(std::make_pair("cim:Asset.ActivityRecords", &assign_Asset_ActivityRecords));
	map.insert(std::make_pair("cim:ActivityRecords.Asset", &assign_Asset_ActivityRecords));
	map.insert(std::make_pair("cim:AssetContainer.Seals", &assign_AssetContainer_Seals));
	map.insert(std::make_pair("cim:Seals.AssetContainer", &assign_AssetContainer_Seals));
	map.insert(std::make_pair("cim:AssetLocationHazard.Locations", &assign_AssetLocationHazard_Locations));
	map.insert(std::make_pair("cim:Locations.AssetLocationHazard", &assign_AssetLocationHazard_Locations));
	map.insert(std::make_pair("cim:Procedure.Measurements", &assign_Procedure_Measurements));
	map.insert(std::make_pair("cim:Measurements.Procedure", &assign_Procedure_Measurements));
	map.insert(std::make_pair("cim:Procedure.ProcedureDataSets", &assign_Procedure_ProcedureDataSets));
	map.insert(std::make_pair("cim:ProcedureDataSets.Procedure", &assign_Procedure_ProcedureDataSets));
	map.insert(std::make_pair("cim:Procedure.Limits", &assign_Procedure_Limits));
	map.insert(std::make_pair("cim:Limits.Procedure", &assign_Procedure_Limits));
	map.insert(std::make_pair("cim:Procedure.Assets", &assign_Procedure_Assets));
	map.insert(std::make_pair("cim:Assets.Procedure", &assign_Procedure_Assets));
	map.insert(std::make_pair("cim:AssetModelCatalogueItem.ErpQuoteLineItems", &assign_AssetModelCatalogueItem_ErpQuoteLineItems));
	map.insert(std::make_pair("cim:ErpQuoteLineItems.AssetModelCatalogueItem", &assign_AssetModelCatalogueItem_ErpQuoteLineItems));
	map.insert(std::make_pair("cim:AssetModelCatalogueItem.ErpPOLineItems", &assign_AssetModelCatalogueItem_ErpPOLineItems));
	map.insert(std::make_pair("cim:ErpPOLineItems.AssetModelCatalogueItem", &assign_AssetModelCatalogueItem_ErpPOLineItems));
	map.insert(std::make_pair("cim:ProductAssetModel.AssetModelCatalogueItems", &assign_ProductAssetModel_AssetModelCatalogueItems));
	map.insert(std::make_pair("cim:AssetModelCatalogueItems.ProductAssetModel", &assign_ProductAssetModel_AssetModelCatalogueItems));
	map.insert(std::make_pair("cim:Structure.StructureSupports", &assign_Structure_StructureSupports));
	map.insert(std::make_pair("cim:StructureSupports.Structure", &assign_Structure_StructureSupports));
	map.insert(std::make_pair("cim:Pole.Streetlights", &assign_Pole_Streetlights));
	map.insert(std::make_pair("cim:Streetlights.Pole", &assign_Pole_Streetlights));
	map.insert(std::make_pair("cim:ReliabilityInfo.Assets", &assign_ReliabilityInfo_Assets));
	map.insert(std::make_pair("cim:Assets.ReliabilityInfo", &assign_ReliabilityInfo_Assets));
	map.insert(std::make_pair("cim:Bushing.BushingInsulationPFs", &assign_Bushing_BushingInsulationPFs));
	map.insert(std::make_pair("cim:BushingInsulationPFs.Bushing", &assign_Bushing_BushingInsulationPFs));
	map.insert(std::make_pair("cim:CoolingPowerRating.Reconditionings", &assign_CoolingPowerRating_Reconditionings));
	map.insert(std::make_pair("cim:Reconditionings.CoolingPowerRating", &assign_CoolingPowerRating_Reconditionings));
	map.insert(std::make_pair("cim:Project.SubProjects", &assign_Project_SubProjects));
	map.insert(std::make_pair("cim:SubProjects.Project", &assign_Project_SubProjects));
	map.insert(std::make_pair("cim:ErpProjectAccounting.Projects", &assign_ErpProjectAccounting_Projects));
	map.insert(std::make_pair("cim:Projects.ErpProjectAccounting", &assign_ErpProjectAccounting_Projects));
	map.insert(std::make_pair("cim:CUGroup.ChildCUGroups", &assign_CUGroup_ChildCUGroups));
	map.insert(std::make_pair("cim:ChildCUGroups.CUGroup", &assign_CUGroup_ChildCUGroups));
	map.insert(std::make_pair("cim:CompatibleUnit.DesignLocationCUs", &assign_CompatibleUnit_DesignLocationCUs));
	map.insert(std::make_pair("cim:DesignLocationCUs.CompatibleUnit", &assign_CompatibleUnit_DesignLocationCUs));
	map.insert(std::make_pair("cim:CompatibleUnit.CUAssets", &assign_CompatibleUnit_CUAssets));
	map.insert(std::make_pair("cim:CUAssets.CompatibleUnit", &assign_CompatibleUnit_CUAssets));
	map.insert(std::make_pair("cim:CompatibleUnit.Procedures", &assign_CompatibleUnit_Procedures));
	map.insert(std::make_pair("cim:Procedures.CompatibleUnit", &assign_CompatibleUnit_Procedures));
	map.insert(std::make_pair("cim:TypeMaterial.ErpReqLineItems", &assign_TypeMaterial_ErpReqLineItems));
	map.insert(std::make_pair("cim:ErpReqLineItems.TypeMaterial", &assign_TypeMaterial_ErpReqLineItems));
	map.insert(std::make_pair("cim:TypeMaterial.MaterialItems", &assign_TypeMaterial_MaterialItems));
	map.insert(std::make_pair("cim:MaterialItems.TypeMaterial", &assign_TypeMaterial_MaterialItems));
	map.insert(std::make_pair("cim:CUMaterialItem.CompatibleUnits", &assign_CUMaterialItem_CompatibleUnits));
	map.insert(std::make_pair("cim:CompatibleUnits.CUMaterialItem", &assign_CUMaterialItem_CompatibleUnits));
	map.insert(std::make_pair("cim:PropertyUnit.CompatibleUnits", &assign_PropertyUnit_CompatibleUnits));
	map.insert(std::make_pair("cim:CompatibleUnits.PropertyUnit", &assign_PropertyUnit_CompatibleUnits));
	map.insert(std::make_pair("cim:PropertyUnit.CUMaterialItems", &assign_PropertyUnit_CUMaterialItems));
	map.insert(std::make_pair("cim:CUMaterialItems.PropertyUnit", &assign_PropertyUnit_CUMaterialItems));
	map.insert(std::make_pair("cim:OverheadCost.WorkCostDetails", &assign_OverheadCost_WorkCostDetails));
	map.insert(std::make_pair("cim:WorkCostDetails.OverheadCost", &assign_OverheadCost_WorkCostDetails));
	map.insert(std::make_pair("cim:QualificationRequirement.Specifications", &assign_QualificationRequirement_Specifications));
	map.insert(std::make_pair("cim:Specifications.QualificationRequirement", &assign_QualificationRequirement_Specifications));
	map.insert(std::make_pair("cim:TimeSchedule.TimePoints", &assign_TimeSchedule_TimePoints));
	map.insert(std::make_pair("cim:TimePoints.TimeSchedule", &assign_TimeSchedule_TimePoints));
	map.insert(std::make_pair("cim:BaseWork.TimeSchedules", &assign_BaseWork_TimeSchedules));
	map.insert(std::make_pair("cim:TimeSchedules.BaseWork", &assign_BaseWork_TimeSchedules));
	map.insert(std::make_pair("cim:Work.WorkTasks", &assign_Work_WorkTasks));
	map.insert(std::make_pair("cim:WorkTasks.Work", &assign_Work_WorkTasks));
	map.insert(std::make_pair("cim:Appointment.Works", &assign_Appointment_Works));
	map.insert(std::make_pair("cim:Works.Appointment", &assign_Appointment_Works));
	map.insert(std::make_pair("cim:PersonRole.Appointments", &assign_PersonRole_Appointments));
	map.insert(std::make_pair("cim:Appointments.PersonRole", &assign_PersonRole_Appointments));
	map.insert(std::make_pair("cim:PersonRole.ConfigurationEvents", &assign_PersonRole_ConfigurationEvents));
	map.insert(std::make_pair("cim:ConfigurationEvents.PersonRole", &assign_PersonRole_ConfigurationEvents));
	map.insert(std::make_pair("cim:Crew.CrewMembers", &assign_Crew_CrewMembers));
	map.insert(std::make_pair("cim:CrewMembers.Crew", &assign_Crew_CrewMembers));
	map.insert(std::make_pair("cim:WorkTask.MaterialItems", &assign_WorkTask_MaterialItems));
	map.insert(std::make_pair("cim:MaterialItems.WorkTask", &assign_WorkTask_MaterialItems));
	map.insert(std::make_pair("cim:WorkTask.Crews", &assign_WorkTask_Crews));
	map.insert(std::make_pair("cim:Crews.WorkTask", &assign_WorkTask_Crews));
	map.insert(std::make_pair("cim:WorkTask.Assets", &assign_WorkTask_Assets));
	map.insert(std::make_pair("cim:Assets.WorkTask", &assign_WorkTask_Assets));
	map.insert(std::make_pair("cim:ContractorItem.ErpPayables", &assign_ContractorItem_ErpPayables));
	map.insert(std::make_pair("cim:ErpPayables.ContractorItem", &assign_ContractorItem_ErpPayables));
	map.insert(std::make_pair("cim:OldWorkTask.QualificationRequirements", &assign_OldWorkTask_QualificationRequirements));
	map.insert(std::make_pair("cim:QualificationRequirements.OldWorkTask", &assign_OldWorkTask_QualificationRequirements));
	map.insert(std::make_pair("cim:OldWorkTask.Usages", &assign_OldWorkTask_Usages));
	map.insert(std::make_pair("cim:Usages.OldWorkTask", &assign_OldWorkTask_Usages));
	map.insert(std::make_pair("cim:OldWorkTask.MiscCostItems", &assign_OldWorkTask_MiscCostItems));
	map.insert(std::make_pair("cim:MiscCostItems.OldWorkTask", &assign_OldWorkTask_MiscCostItems));
	map.insert(std::make_pair("cim:OldWorkTask.LaborItems", &assign_OldWorkTask_LaborItems));
	map.insert(std::make_pair("cim:LaborItems.OldWorkTask", &assign_OldWorkTask_LaborItems));
	map.insert(std::make_pair("cim:OldWorkTask.ContractorItems", &assign_OldWorkTask_ContractorItems));
	map.insert(std::make_pair("cim:ContractorItems.OldWorkTask", &assign_OldWorkTask_ContractorItems));
	map.insert(std::make_pair("cim:WorkCostDetail.PropertyUnits", &assign_WorkCostDetail_PropertyUnits));
	map.insert(std::make_pair("cim:PropertyUnits.WorkCostDetail", &assign_WorkCostDetail_PropertyUnits));
	map.insert(std::make_pair("cim:WorkCostDetail.ContractorItems", &assign_WorkCostDetail_ContractorItems));
	map.insert(std::make_pair("cim:ContractorItems.WorkCostDetail", &assign_WorkCostDetail_ContractorItems));
	map.insert(std::make_pair("cim:WorkCostDetail.Works", &assign_WorkCostDetail_Works));
	map.insert(std::make_pair("cim:Works.WorkCostDetail", &assign_WorkCostDetail_Works));
	map.insert(std::make_pair("cim:DesignLocationCU.WorkTasks", &assign_DesignLocationCU_WorkTasks));
	map.insert(std::make_pair("cim:WorkTasks.DesignLocationCU", &assign_DesignLocationCU_WorkTasks));
	map.insert(std::make_pair("cim:DesignLocationCU.Designs", &assign_DesignLocationCU_Designs));
	map.insert(std::make_pair("cim:Designs.DesignLocationCU", &assign_DesignLocationCU_Designs));
	map.insert(std::make_pair("cim:DesignLocationCU.ConditionFactors", &assign_DesignLocationCU_ConditionFactors));
	map.insert(std::make_pair("cim:ConditionFactors.DesignLocationCU", &assign_DesignLocationCU_ConditionFactors));
	map.insert(std::make_pair("cim:DesignLocationCU.CUGroups", &assign_DesignLocationCU_CUGroups));
	map.insert(std::make_pair("cim:CUGroups.DesignLocationCU", &assign_DesignLocationCU_CUGroups));
	map.insert(std::make_pair("cim:Design.WorkTasks", &assign_Design_WorkTasks));
	map.insert(std::make_pair("cim:WorkTasks.Design", &assign_Design_WorkTasks));
	map.insert(std::make_pair("cim:Design.WorkCostDetails", &assign_Design_WorkCostDetails));
	map.insert(std::make_pair("cim:WorkCostDetails.Design", &assign_Design_WorkCostDetails));
	map.insert(std::make_pair("cim:Design.ErpBOMs", &assign_Design_ErpBOMs));
	map.insert(std::make_pair("cim:ErpBOMs.Design", &assign_Design_ErpBOMs));
	map.insert(std::make_pair("cim:Design.ConditionFactors", &assign_Design_ConditionFactors));
	map.insert(std::make_pair("cim:ConditionFactors.Design", &assign_Design_ConditionFactors));
	map.insert(std::make_pair("cim:DesignLocation.MiscCostItems", &assign_DesignLocation_MiscCostItems));
	map.insert(std::make_pair("cim:MiscCostItems.DesignLocation", &assign_DesignLocation_MiscCostItems));
	map.insert(std::make_pair("cim:DesignLocation.DesignLocationCUs", &assign_DesignLocation_DesignLocationCUs));
	map.insert(std::make_pair("cim:DesignLocationCUs.DesignLocation", &assign_DesignLocation_DesignLocationCUs));
	map.insert(std::make_pair("cim:DesignLocation.Designs", &assign_DesignLocation_Designs));
	map.insert(std::make_pair("cim:Designs.DesignLocation", &assign_DesignLocation_Designs));
	map.insert(std::make_pair("cim:DesignLocation.ConditionFactors", &assign_DesignLocation_ConditionFactors));
	map.insert(std::make_pair("cim:ConditionFactors.DesignLocation", &assign_DesignLocation_ConditionFactors));
	map.insert(std::make_pair("cim:DesignLocation.WorkLocations", &assign_DesignLocation_WorkLocations));
	map.insert(std::make_pair("cim:WorkLocations.DesignLocation", &assign_DesignLocation_WorkLocations));
	map.insert(std::make_pair("cim:GenericAssetModelOrMaterial.ErpReqLineItems", &assign_GenericAssetModelOrMaterial_ErpReqLineItems));
	map.insert(std::make_pair("cim:ErpReqLineItems.GenericAssetModelOrMaterial", &assign_GenericAssetModelOrMaterial_ErpReqLineItems));
	map.insert(std::make_pair("cim:GenericAssetModelOrMaterial.ErpBomItemDatas", &assign_GenericAssetModelOrMaterial_ErpBomItemDatas));
	map.insert(std::make_pair("cim:ErpBomItemDatas.GenericAssetModelOrMaterial", &assign_GenericAssetModelOrMaterial_ErpBomItemDatas));
	map.insert(std::make_pair("cim:GenericAssetModelOrMaterial.ProductAssetModels", &assign_GenericAssetModelOrMaterial_ProductAssetModels));
	map.insert(std::make_pair("cim:ProductAssetModels.GenericAssetModelOrMaterial", &assign_GenericAssetModelOrMaterial_ProductAssetModels));
	map.insert(std::make_pair("cim:DimensionsInfo.Specifications", &assign_DimensionsInfo_Specifications));
	map.insert(std::make_pair("cim:Specifications.DimensionsInfo", &assign_DimensionsInfo_Specifications));
	map.insert(std::make_pair("cim:LandProperty.LocationGrants", &assign_LandProperty_LocationGrants));
	map.insert(std::make_pair("cim:LocationGrants.LandProperty", &assign_LandProperty_LocationGrants));
	map.insert(std::make_pair("cim:LandProperty.ErpSiteLevelDatas", &assign_LandProperty_ErpSiteLevelDatas));
	map.insert(std::make_pair("cim:ErpSiteLevelDatas.LandProperty", &assign_LandProperty_ErpSiteLevelDatas));
	map.insert(std::make_pair("cim:LandProperty.ErpOrganisationRoles", &assign_LandProperty_ErpOrganisationRoles));
	map.insert(std::make_pair("cim:ErpOrganisationRoles.LandProperty", &assign_LandProperty_ErpOrganisationRoles));
	map.insert(std::make_pair("cim:LandProperty.ErpPersonRoles", &assign_LandProperty_ErpPersonRoles));
	map.insert(std::make_pair("cim:ErpPersonRoles.LandProperty", &assign_LandProperty_ErpPersonRoles));
	map.insert(std::make_pair("cim:LandProperty.AssetContainers", &assign_LandProperty_AssetContainers));
	map.insert(std::make_pair("cim:AssetContainers.LandProperty", &assign_LandProperty_AssetContainers));
	map.insert(std::make_pair("cim:LandProperty.Locations", &assign_LandProperty_Locations));
	map.insert(std::make_pair("cim:Locations.LandProperty", &assign_LandProperty_Locations));
	map.insert(std::make_pair("cim:RightOfWay.LandProperties", &assign_RightOfWay_LandProperties));
	map.insert(std::make_pair("cim:LandProperties.RightOfWay", &assign_RightOfWay_LandProperties));
	map.insert(std::make_pair("cim:Route.Locations", &assign_Route_Locations));
	map.insert(std::make_pair("cim:Locations.Route", &assign_Route_Locations));
	map.insert(std::make_pair("cim:TransformerCoreAdmittance.TransformerEnd", &assign_TransformerCoreAdmittance_TransformerEnd));
	map.insert(std::make_pair("cim:TransformerEnd.TransformerCoreAdmittance", &assign_TransformerCoreAdmittance_TransformerEnd));
	map.insert(std::make_pair("cim:TransformerMeshImpedance.ToTransformerEnd", &assign_TransformerMeshImpedance_ToTransformerEnd));
	map.insert(std::make_pair("cim:ToTransformerEnd.TransformerMeshImpedance", &assign_TransformerMeshImpedance_ToTransformerEnd));
	map.insert(std::make_pair("cim:TransformerEndInfo.FromMeshImpedances", &assign_TransformerEndInfo_FromMeshImpedances));
	map.insert(std::make_pair("cim:FromMeshImpedances.TransformerEndInfo", &assign_TransformerEndInfo_FromMeshImpedances));
	map.insert(std::make_pair("cim:TransformerEndInfo.ToMeshImpedances", &assign_TransformerEndInfo_ToMeshImpedances));
	map.insert(std::make_pair("cim:ToMeshImpedances.TransformerEndInfo", &assign_TransformerEndInfo_ToMeshImpedances));
	map.insert(std::make_pair("cim:TransformerTankInfo.TransformerEndInfos", &assign_TransformerTankInfo_TransformerEndInfos));
	map.insert(std::make_pair("cim:TransformerEndInfos.TransformerTankInfo", &assign_TransformerTankInfo_TransformerEndInfos));
	map.insert(std::make_pair("cim:ShuntCompensator.ShuntCompensatorPhase", &assign_ShuntCompensator_ShuntCompensatorPhase));
	map.insert(std::make_pair("cim:ShuntCompensatorPhase.ShuntCompensator", &assign_ShuntCompensator_ShuntCompensatorPhase));
	map.insert(std::make_pair("cim:WorkBillingInfo.ErpLineItems", &assign_WorkBillingInfo_ErpLineItems));
	map.insert(std::make_pair("cim:ErpLineItems.WorkBillingInfo", &assign_WorkBillingInfo_ErpLineItems));
	map.insert(std::make_pair("cim:WorkBillingInfo.Works", &assign_WorkBillingInfo_Works));
	map.insert(std::make_pair("cim:Works.WorkBillingInfo", &assign_WorkBillingInfo_Works));
	map.insert(std::make_pair("cim:EndDevice.EndDeviceFunctions", &assign_EndDevice_EndDeviceFunctions));
	map.insert(std::make_pair("cim:EndDeviceFunctions.EndDevice", &assign_EndDevice_EndDeviceFunctions));
	map.insert(std::make_pair("cim:Charge.ChildCharges", &assign_Charge_ChildCharges));
	map.insert(std::make_pair("cim:ChildCharges.Charge", &assign_Charge_ChildCharges));
	map.insert(std::make_pair("cim:TimeTariffInterval.Charges", &assign_TimeTariffInterval_Charges));
	map.insert(std::make_pair("cim:Charges.TimeTariffInterval", &assign_TimeTariffInterval_Charges));
	map.insert(std::make_pair("cim:ConsumptionTariffInterval.TouTariffIntervals", &assign_ConsumptionTariffInterval_TouTariffIntervals));
	map.insert(std::make_pair("cim:TouTariffIntervals.ConsumptionTariffInterval", &assign_ConsumptionTariffInterval_TouTariffIntervals));
	map.insert(std::make_pair("cim:ConsumptionTariffInterval.Charges", &assign_ConsumptionTariffInterval_Charges));
	map.insert(std::make_pair("cim:Charges.ConsumptionTariffInterval", &assign_ConsumptionTariffInterval_Charges));
	map.insert(std::make_pair("cim:TariffProfile.TimeTariffIntervals", &assign_TariffProfile_TimeTariffIntervals));
	map.insert(std::make_pair("cim:TimeTariffIntervals.TariffProfile", &assign_TariffProfile_TimeTariffIntervals));
	map.insert(std::make_pair("cim:TariffProfile.ConsumptionTariffIntervals", &assign_TariffProfile_ConsumptionTariffIntervals));
	map.insert(std::make_pair("cim:ConsumptionTariffIntervals.TariffProfile", &assign_TariffProfile_ConsumptionTariffIntervals));
	map.insert(std::make_pair("cim:Tariff.TariffProfiles", &assign_Tariff_TariffProfiles));
	map.insert(std::make_pair("cim:TariffProfiles.Tariff", &assign_Tariff_TariffProfiles));
	map.insert(std::make_pair("cim:PricingStructure.UsagePoints", &assign_PricingStructure_UsagePoints));
	map.insert(std::make_pair("cim:UsagePoints.PricingStructure", &assign_PricingStructure_UsagePoints));
	map.insert(std::make_pair("cim:PricingStructure.Tariffs", &assign_PricingStructure_Tariffs));
	map.insert(std::make_pair("cim:Tariffs.PricingStructure", &assign_PricingStructure_Tariffs));
	map.insert(std::make_pair("cim:PricingStructure.Transactions", &assign_PricingStructure_Transactions));
	map.insert(std::make_pair("cim:Transactions.PricingStructure", &assign_PricingStructure_Transactions));
	map.insert(std::make_pair("cim:ServiceCategory.PricingStructures", &assign_ServiceCategory_PricingStructures));
	map.insert(std::make_pair("cim:PricingStructures.ServiceCategory", &assign_ServiceCategory_PricingStructures));
	map.insert(std::make_pair("cim:ServiceCategory.ConfigurationEvents", &assign_ServiceCategory_ConfigurationEvents));
	map.insert(std::make_pair("cim:ConfigurationEvents.ServiceCategory", &assign_ServiceCategory_ConfigurationEvents));
	map.insert(std::make_pair("cim:UsagePoint.Equipments", &assign_UsagePoint_Equipments));
	map.insert(std::make_pair("cim:Equipments.UsagePoint", &assign_UsagePoint_Equipments));
	map.insert(std::make_pair("cim:UsagePoint.ServiceMultipliers", &assign_UsagePoint_ServiceMultipliers));
	map.insert(std::make_pair("cim:ServiceMultipliers.UsagePoint", &assign_UsagePoint_ServiceMultipliers));
	map.insert(std::make_pair("cim:UsagePoint.EndDevices", &assign_UsagePoint_EndDevices));
	map.insert(std::make_pair("cim:EndDevices.UsagePoint", &assign_UsagePoint_EndDevices));
	map.insert(std::make_pair("cim:UsagePoint.ConfigurationEvents", &assign_UsagePoint_ConfigurationEvents));
	map.insert(std::make_pair("cim:ConfigurationEvents.UsagePoint", &assign_UsagePoint_ConfigurationEvents));
	map.insert(std::make_pair("cim:ServiceLocation.EndDevices", &assign_ServiceLocation_EndDevices));
	map.insert(std::make_pair("cim:EndDevices.ServiceLocation", &assign_ServiceLocation_EndDevices));
	map.insert(std::make_pair("cim:ServiceLocation.UsagePoints", &assign_ServiceLocation_UsagePoints));
	map.insert(std::make_pair("cim:UsagePoints.ServiceLocation", &assign_ServiceLocation_UsagePoints));
	map.insert(std::make_pair("cim:AuxiliaryAccount.PaymentTransactions", &assign_AuxiliaryAccount_PaymentTransactions));
	map.insert(std::make_pair("cim:PaymentTransactions.AuxiliaryAccount", &assign_AuxiliaryAccount_PaymentTransactions));
	map.insert(std::make_pair("cim:AuxiliaryAccount.Charges", &assign_AuxiliaryAccount_Charges));
	map.insert(std::make_pair("cim:Charges.AuxiliaryAccount", &assign_AuxiliaryAccount_Charges));
	map.insert(std::make_pair("cim:AuxiliaryAgreement.AuxiliaryAccounts", &assign_AuxiliaryAgreement_AuxiliaryAccounts));
	map.insert(std::make_pair("cim:AuxiliaryAccounts.AuxiliaryAgreement", &assign_AuxiliaryAgreement_AuxiliaryAccounts));
	map.insert(std::make_pair("cim:CustomerAgreement.ServiceLocations", &assign_CustomerAgreement_ServiceLocations));
	map.insert(std::make_pair("cim:ServiceLocations.CustomerAgreement", &assign_CustomerAgreement_ServiceLocations));
	map.insert(std::make_pair("cim:CustomerAgreement.AuxiliaryAgreements", &assign_CustomerAgreement_AuxiliaryAgreements));
	map.insert(std::make_pair("cim:AuxiliaryAgreements.CustomerAgreement", &assign_CustomerAgreement_AuxiliaryAgreements));
	map.insert(std::make_pair("cim:CustomerAgreement.PricingStructures", &assign_CustomerAgreement_PricingStructures));
	map.insert(std::make_pair("cim:PricingStructures.CustomerAgreement", &assign_CustomerAgreement_PricingStructures));
	map.insert(std::make_pair("cim:CustomerAgreement.UsagePoints", &assign_CustomerAgreement_UsagePoints));
	map.insert(std::make_pair("cim:UsagePoints.CustomerAgreement", &assign_CustomerAgreement_UsagePoints));
	map.insert(std::make_pair("cim:CustomerAccount.ErpInvoicees", &assign_CustomerAccount_ErpInvoicees));
	map.insert(std::make_pair("cim:ErpInvoicees.CustomerAccount", &assign_CustomerAccount_ErpInvoicees));
	map.insert(std::make_pair("cim:CustomerAccount.WorkBillingInfos", &assign_CustomerAccount_WorkBillingInfos));
	map.insert(std::make_pair("cim:WorkBillingInfos.CustomerAccount", &assign_CustomerAccount_WorkBillingInfos));
	map.insert(std::make_pair("cim:CustomerAccount.CustomerAgreements", &assign_CustomerAccount_CustomerAgreements));
	map.insert(std::make_pair("cim:CustomerAgreements.CustomerAccount", &assign_CustomerAccount_CustomerAgreements));
	map.insert(std::make_pair("cim:CustomerAccount.PaymentTransactions", &assign_CustomerAccount_PaymentTransactions));
	map.insert(std::make_pair("cim:PaymentTransactions.CustomerAccount", &assign_CustomerAccount_PaymentTransactions));
	map.insert(std::make_pair("cim:CustomerBillingInfo.ErpInvoiceLineItems", &assign_CustomerBillingInfo_ErpInvoiceLineItems));
	map.insert(std::make_pair("cim:ErpInvoiceLineItems.CustomerBillingInfo", &assign_CustomerBillingInfo_ErpInvoiceLineItems));
	map.insert(std::make_pair("cim:Person.Roles", &assign_Person_Roles));
	map.insert(std::make_pair("cim:Roles.Person", &assign_Person_Roles));
	map.insert(std::make_pair("cim:OldPerson.MeasurementValues", &assign_OldPerson_MeasurementValues));
	map.insert(std::make_pair("cim:MeasurementValues.OldPerson", &assign_OldPerson_MeasurementValues));
	map.insert(std::make_pair("cim:OldPerson.LandPropertyRoles", &assign_OldPerson_LandPropertyRoles));
	map.insert(std::make_pair("cim:LandPropertyRoles.OldPerson", &assign_OldPerson_LandPropertyRoles));
	map.insert(std::make_pair("cim:OldPerson.LaborItems", &assign_OldPerson_LaborItems));
	map.insert(std::make_pair("cim:LaborItems.OldPerson", &assign_OldPerson_LaborItems));
	map.insert(std::make_pair("cim:OldPerson.Skills", &assign_OldPerson_Skills));
	map.insert(std::make_pair("cim:Skills.OldPerson", &assign_OldPerson_Skills));
	map.insert(std::make_pair("cim:OldPerson.OrganisationRoles", &assign_OldPerson_OrganisationRoles));
	map.insert(std::make_pair("cim:OrganisationRoles.OldPerson", &assign_OldPerson_OrganisationRoles));
	map.insert(std::make_pair("cim:OldPerson.DocumentRoles", &assign_OldPerson_DocumentRoles));
	map.insert(std::make_pair("cim:DocumentRoles.OldPerson", &assign_OldPerson_DocumentRoles));
	map.insert(std::make_pair("cim:Craft.ErpPersons", &assign_Craft_ErpPersons));
	map.insert(std::make_pair("cim:ErpPersons.Craft", &assign_Craft_ErpPersons));
	map.insert(std::make_pair("cim:Skill.QualificationRequirements", &assign_Skill_QualificationRequirements));
	map.insert(std::make_pair("cim:QualificationRequirements.Skill", &assign_Skill_QualificationRequirements));
	map.insert(std::make_pair("cim:Skill.Crafts", &assign_Skill_Crafts));
	map.insert(std::make_pair("cim:Crafts.Skill", &assign_Skill_Crafts));
	map.insert(std::make_pair("cim:OldCrew.Assignments", &assign_OldCrew_Assignments));
	map.insert(std::make_pair("cim:Assignments.OldCrew", &assign_OldCrew_Assignments));
	map.insert(std::make_pair("cim:OldCrew.ShiftPatterns", &assign_OldCrew_ShiftPatterns));
	map.insert(std::make_pair("cim:ShiftPatterns.OldCrew", &assign_OldCrew_ShiftPatterns));
	map.insert(std::make_pair("cim:OldCrew.Organisations", &assign_OldCrew_Organisations));
	map.insert(std::make_pair("cim:Organisations.OldCrew", &assign_OldCrew_Organisations));
	map.insert(std::make_pair("cim:OldCrew.Locations", &assign_OldCrew_Locations));
	map.insert(std::make_pair("cim:Locations.OldCrew", &assign_OldCrew_Locations));
	map.insert(std::make_pair("cim:CUWorkEquipmentItem.CompatibleUnits", &assign_CUWorkEquipmentItem_CompatibleUnits));
	map.insert(std::make_pair("cim:CompatibleUnits.CUWorkEquipmentItem", &assign_CUWorkEquipmentItem_CompatibleUnits));
	map.insert(std::make_pair("cim:WorkFlowStep.WorkTasks", &assign_WorkFlowStep_WorkTasks));
	map.insert(std::make_pair("cim:WorkTasks.WorkFlowStep", &assign_WorkFlowStep_WorkTasks));
	map.insert(std::make_pair("cim:CostType.ChildCostTypes", &assign_CostType_ChildCostTypes));
	map.insert(std::make_pair("cim:ChildCostTypes.CostType", &assign_CostType_ChildCostTypes));
	map.insert(std::make_pair("cim:CostType.WorkCostDetails", &assign_CostType_WorkCostDetails));
	map.insert(std::make_pair("cim:WorkCostDetails.CostType", &assign_CostType_WorkCostDetails));
	map.insert(std::make_pair("cim:CostType.ErpJournalEntries", &assign_CostType_ErpJournalEntries));
	map.insert(std::make_pair("cim:ErpJournalEntries.CostType", &assign_CostType_ErpJournalEntries));
	map.insert(std::make_pair("cim:CostType.CompatibleUnits", &assign_CostType_CompatibleUnits));
	map.insert(std::make_pair("cim:CompatibleUnits.CostType", &assign_CostType_CompatibleUnits));
	map.insert(std::make_pair("cim:CUContractorItem.CompatibleUnits", &assign_CUContractorItem_CompatibleUnits));
	map.insert(std::make_pair("cim:CompatibleUnits.CUContractorItem", &assign_CUContractorItem_CompatibleUnits));
	map.insert(std::make_pair("cim:Capability.WorkTasks", &assign_Capability_WorkTasks));
	map.insert(std::make_pair("cim:WorkTasks.Capability", &assign_Capability_WorkTasks));
	map.insert(std::make_pair("cim:Capability.Crafts", &assign_Capability_Crafts));
	map.insert(std::make_pair("cim:Crafts.Capability", &assign_Capability_Crafts));
	map.insert(std::make_pair("cim:CULaborItem.QualificationRequirements", &assign_CULaborItem_QualificationRequirements));
	map.insert(std::make_pair("cim:QualificationRequirements.CULaborItem", &assign_CULaborItem_QualificationRequirements));
	map.insert(std::make_pair("cim:CULaborItem.CompatibleUnits", &assign_CULaborItem_CompatibleUnits));
	map.insert(std::make_pair("cim:CompatibleUnits.CULaborItem", &assign_CULaborItem_CompatibleUnits));
	map.insert(std::make_pair("cim:CUAllowableAction.CompatibleUnits", &assign_CUAllowableAction_CompatibleUnits));
	map.insert(std::make_pair("cim:CompatibleUnits.CUAllowableAction", &assign_CUAllowableAction_CompatibleUnits));
	map.insert(std::make_pair("cim:BusinessCase.Projects", &assign_BusinessCase_Projects));
	map.insert(std::make_pair("cim:Projects.BusinessCase", &assign_BusinessCase_Projects));
	map.insert(std::make_pair("cim:BusinessCase.Works", &assign_BusinessCase_Works));
	map.insert(std::make_pair("cim:Works.BusinessCase", &assign_BusinessCase_Works));
	map.insert(std::make_pair("cim:ErpTimeSheet.ErpTimeEntries", &assign_ErpTimeSheet_ErpTimeEntries));
	map.insert(std::make_pair("cim:ErpTimeEntries.ErpTimeSheet", &assign_ErpTimeSheet_ErpTimeEntries));
	map.insert(std::make_pair("cim:ErpLedgerEntry.UserAttributes", &assign_ErpLedgerEntry_UserAttributes));
	map.insert(std::make_pair("cim:UserAttributes.ErpLedgerEntry", &assign_ErpLedgerEntry_UserAttributes));
	map.insert(std::make_pair("cim:ErpLedger.ErpLedgerEntries", &assign_ErpLedger_ErpLedgerEntries));
	map.insert(std::make_pair("cim:ErpLedgerEntries.ErpLedger", &assign_ErpLedger_ErpLedgerEntries));
	map.insert(std::make_pair("cim:ErpJournal.ErpJournalEntries", &assign_ErpJournal_ErpJournalEntries));
	map.insert(std::make_pair("cim:ErpJournalEntries.ErpJournal", &assign_ErpJournal_ErpJournalEntries));
	map.insert(std::make_pair("cim:Customer.EndDevices", &assign_Customer_EndDevices));
	map.insert(std::make_pair("cim:EndDevices.Customer", &assign_Customer_EndDevices));
	map.insert(std::make_pair("cim:Customer.CustomerAccounts", &assign_Customer_CustomerAccounts));
	map.insert(std::make_pair("cim:CustomerAccounts.Customer", &assign_Customer_CustomerAccounts));
	map.insert(std::make_pair("cim:Customer.CustomerAgreements", &assign_Customer_CustomerAgreements));
	map.insert(std::make_pair("cim:CustomerAgreements.Customer", &assign_Customer_CustomerAgreements));
	map.insert(std::make_pair("cim:Customer.ErpPersons", &assign_Customer_ErpPersons));
	map.insert(std::make_pair("cim:ErpPersons.Customer", &assign_Customer_ErpPersons));
	map.insert(std::make_pair("cim:Customer.Works", &assign_Customer_Works));
	map.insert(std::make_pair("cim:Works.Customer", &assign_Customer_Works));
	map.insert(std::make_pair("cim:TroubleTicket.Hazards", &assign_TroubleTicket_Hazards));
	map.insert(std::make_pair("cim:Hazards.TroubleTicket", &assign_TroubleTicket_Hazards));
	map.insert(std::make_pair("cim:CustomerNotification.TroubleTickets", &assign_CustomerNotification_TroubleTickets));
	map.insert(std::make_pair("cim:TroubleTickets.CustomerNotification", &assign_CustomerNotification_TroubleTickets));
	map.insert(std::make_pair("cim:RegularIntervalSchedule.TimePoints", &assign_RegularIntervalSchedule_TimePoints));
	map.insert(std::make_pair("cim:TimePoints.RegularIntervalSchedule", &assign_RegularIntervalSchedule_TimePoints));
	map.insert(std::make_pair("cim:Switch.SwitchPhase", &assign_Switch_SwitchPhase));
	map.insert(std::make_pair("cim:SwitchPhase.Switch", &assign_Switch_SwitchPhase));
	map.insert(std::make_pair("cim:Switch.SwitchSchedules", &assign_Switch_SwitchSchedules));
	map.insert(std::make_pair("cim:SwitchSchedules.Switch", &assign_Switch_SwitchSchedules));
	map.insert(std::make_pair("cim:ConnectDisconnectFunction.Switches", &assign_ConnectDisconnectFunction_Switches));
	map.insert(std::make_pair("cim:Switches.ConnectDisconnectFunction", &assign_ConnectDisconnectFunction_Switches));
	map.insert(std::make_pair("cim:ScheduledEvent.Assets", &assign_ScheduledEvent_Assets));
	map.insert(std::make_pair("cim:Assets.ScheduledEvent", &assign_ScheduledEvent_Assets));
	map.insert(std::make_pair("cim:ScheduledEventData.ScheduledEvents", &assign_ScheduledEventData_ScheduledEvents));
	map.insert(std::make_pair("cim:ScheduledEvents.ScheduledEventData", &assign_ScheduledEventData_ScheduledEvents));
	map.insert(std::make_pair("cim:OperationalRestriction.Equipments", &assign_OperationalRestriction_Equipments));
	map.insert(std::make_pair("cim:Equipments.OperationalRestriction", &assign_OperationalRestriction_Equipments));
	map.insert(std::make_pair("cim:ClearanceDocument.TaggedPSRs", &assign_ClearanceDocument_TaggedPSRs));
	map.insert(std::make_pair("cim:TaggedPSRs.ClearanceDocument", &assign_ClearanceDocument_TaggedPSRs));
	map.insert(std::make_pair("cim:ACLineSegment.Clamp", &assign_ACLineSegment_Clamp));
	map.insert(std::make_pair("cim:Clamp.ACLineSegment", &assign_ACLineSegment_Clamp));
	map.insert(std::make_pair("cim:JumperAction.JumpedEquipments", &assign_JumperAction_JumpedEquipments));
	map.insert(std::make_pair("cim:JumpedEquipments.JumperAction", &assign_JumperAction_JumpedEquipments));
	map.insert(std::make_pair("cim:JumperAction.AlongACLineSegments", &assign_JumperAction_AlongACLineSegments));
	map.insert(std::make_pair("cim:AlongACLineSegments.JumperAction", &assign_JumperAction_AlongACLineSegments));
	map.insert(std::make_pair("cim:SwitchingStepGroup.ClearanceActions", &assign_SwitchingStepGroup_ClearanceActions));
	map.insert(std::make_pair("cim:ClearanceActions.SwitchingStepGroup", &assign_SwitchingStepGroup_ClearanceActions));
	map.insert(std::make_pair("cim:SwitchingStepGroup.GenericActions", &assign_SwitchingStepGroup_GenericActions));
	map.insert(std::make_pair("cim:GenericActions.SwitchingStepGroup", &assign_SwitchingStepGroup_GenericActions));
	map.insert(std::make_pair("cim:SwitchingStepGroup.JumperActions", &assign_SwitchingStepGroup_JumperActions));
	map.insert(std::make_pair("cim:JumperActions.SwitchingStepGroup", &assign_SwitchingStepGroup_JumperActions));
	map.insert(std::make_pair("cim:SwitchingStepGroup.CutActions", &assign_SwitchingStepGroup_CutActions));
	map.insert(std::make_pair("cim:CutActions.SwitchingStepGroup", &assign_SwitchingStepGroup_CutActions));
	map.insert(std::make_pair("cim:SwitchingStepGroup.SwitchActions", &assign_SwitchingStepGroup_SwitchActions));
	map.insert(std::make_pair("cim:SwitchActions.SwitchingStepGroup", &assign_SwitchingStepGroup_SwitchActions));
	map.insert(std::make_pair("cim:SwitchingStepGroup.TagActions", &assign_SwitchingStepGroup_TagActions));
	map.insert(std::make_pair("cim:TagActions.SwitchingStepGroup", &assign_SwitchingStepGroup_TagActions));
	map.insert(std::make_pair("cim:SwitchingStepGroup.GroundActions", &assign_SwitchingStepGroup_GroundActions));
	map.insert(std::make_pair("cim:GroundActions.SwitchingStepGroup", &assign_SwitchingStepGroup_GroundActions));
	map.insert(std::make_pair("cim:SwitchingStepGroup.EnergySourceActions", &assign_SwitchingStepGroup_EnergySourceActions));
	map.insert(std::make_pair("cim:EnergySourceActions.SwitchingStepGroup", &assign_SwitchingStepGroup_EnergySourceActions));
	map.insert(std::make_pair("cim:Fault.FaultCauseTypes", &assign_Fault_FaultCauseTypes));
	map.insert(std::make_pair("cim:FaultCauseTypes.Fault", &assign_Fault_FaultCauseTypes));
	map.insert(std::make_pair("cim:Outage.OpenedSwitches", &assign_Outage_OpenedSwitches));
	map.insert(std::make_pair("cim:OpenedSwitches.Outage", &assign_Outage_OpenedSwitches));
	map.insert(std::make_pair("cim:Outage.Faults", &assign_Outage_Faults));
	map.insert(std::make_pair("cim:Faults.Outage", &assign_Outage_Faults));
	map.insert(std::make_pair("cim:Outage.UsagePoints", &assign_Outage_UsagePoints));
	map.insert(std::make_pair("cim:UsagePoints.Outage", &assign_Outage_UsagePoints));
	map.insert(std::make_pair("cim:Outage.Equipments", &assign_Outage_Equipments));
	map.insert(std::make_pair("cim:Equipments.Outage", &assign_Outage_Equipments));
	map.insert(std::make_pair("cim:Outage.PlannedSwitchActions", &assign_Outage_PlannedSwitchActions));
	map.insert(std::make_pair("cim:PlannedSwitchActions.Outage", &assign_Outage_PlannedSwitchActions));
	map.insert(std::make_pair("cim:Incident.Works", &assign_Incident_Works));
	map.insert(std::make_pair("cim:Works.Incident", &assign_Incident_Works));
	map.insert(std::make_pair("cim:Incident.Hazards", &assign_Incident_Hazards));
	map.insert(std::make_pair("cim:Hazards.Incident", &assign_Incident_Hazards));
	map.insert(std::make_pair("cim:Incident.CustomerNotifications", &assign_Incident_CustomerNotifications));
	map.insert(std::make_pair("cim:CustomerNotifications.Incident", &assign_Incident_CustomerNotifications));
	map.insert(std::make_pair("cim:OutageSchedule.PlannedOutages", &assign_OutageSchedule_PlannedOutages));
	map.insert(std::make_pair("cim:PlannedOutages.OutageSchedule", &assign_OutageSchedule_PlannedOutages));
	map.insert(std::make_pair("cim:SwitchingPlan.WorkTasks", &assign_SwitchingPlan_WorkTasks));
	map.insert(std::make_pair("cim:WorkTasks.SwitchingPlan", &assign_SwitchingPlan_WorkTasks));
	map.insert(std::make_pair("cim:SwitchingPlan.SwitchingStepGroups", &assign_SwitchingPlan_SwitchingStepGroups));
	map.insert(std::make_pair("cim:SwitchingStepGroups.SwitchingPlan", &assign_SwitchingPlan_SwitchingStepGroups));
	map.insert(std::make_pair("cim:SwitchingPlan.SafetyDocuments", &assign_SwitchingPlan_SafetyDocuments));
	map.insert(std::make_pair("cim:SafetyDocuments.SwitchingPlan", &assign_SwitchingPlan_SafetyDocuments));
	map.insert(std::make_pair("cim:WireInfo.PerLengthParameters", &assign_WireInfo_PerLengthParameters));
	map.insert(std::make_pair("cim:PerLengthParameters.WireInfo", &assign_WireInfo_PerLengthParameters));
	map.insert(std::make_pair("cim:WireSpacingInfo.Structures", &assign_WireSpacingInfo_Structures));
	map.insert(std::make_pair("cim:Structures.WireSpacingInfo", &assign_WireSpacingInfo_Structures));
	map.insert(std::make_pair("cim:WireSpacingInfo.PerLengthParameters", &assign_WireSpacingInfo_PerLengthParameters));
	map.insert(std::make_pair("cim:PerLengthParameters.WireSpacingInfo", &assign_WireSpacingInfo_PerLengthParameters));
	map.insert(std::make_pair("cim:WireSpacingInfo.WirePositions", &assign_WireSpacingInfo_WirePositions));
	map.insert(std::make_pair("cim:WirePositions.WireSpacingInfo", &assign_WireSpacingInfo_WirePositions));
	map.insert(std::make_pair("cim:ShortCircuitTest.GroundedEnds", &assign_ShortCircuitTest_GroundedEnds));
	map.insert(std::make_pair("cim:GroundedEnds.ShortCircuitTest", &assign_ShortCircuitTest_GroundedEnds));
	map.insert(std::make_pair("cim:Receipt.Transactions", &assign_Receipt_Transactions));
	map.insert(std::make_pair("cim:Transactions.Receipt", &assign_Receipt_Transactions));
	map.insert(std::make_pair("cim:VendorShift.Transactions", &assign_VendorShift_Transactions));
	map.insert(std::make_pair("cim:Transactions.VendorShift", &assign_VendorShift_Transactions));
	map.insert(std::make_pair("cim:VendorShift.Receipts", &assign_VendorShift_Receipts));
	map.insert(std::make_pair("cim:Receipts.VendorShift", &assign_VendorShift_Receipts));
	map.insert(std::make_pair("cim:MerchantAccount.Transactors", &assign_MerchantAccount_Transactors));
	map.insert(std::make_pair("cim:Transactors.MerchantAccount", &assign_MerchantAccount_Transactors));
	map.insert(std::make_pair("cim:MerchantAccount.VendorShifts", &assign_MerchantAccount_VendorShifts));
	map.insert(std::make_pair("cim:VendorShifts.MerchantAccount", &assign_MerchantAccount_VendorShifts));
	map.insert(std::make_pair("cim:CashierShift.Receipts", &assign_CashierShift_Receipts));
	map.insert(std::make_pair("cim:Receipts.CashierShift", &assign_CashierShift_Receipts));
	map.insert(std::make_pair("cim:CashierShift.Transactions", &assign_CashierShift_Transactions));
	map.insert(std::make_pair("cim:Transactions.CashierShift", &assign_CashierShift_Transactions));
	map.insert(std::make_pair("cim:Cashier.CashierShifts", &assign_Cashier_CashierShifts));
	map.insert(std::make_pair("cim:CashierShifts.Cashier", &assign_Cashier_CashierShifts));
	map.insert(std::make_pair("cim:Vendor.VendorShifts", &assign_Vendor_VendorShifts));
	map.insert(std::make_pair("cim:VendorShifts.Vendor", &assign_Vendor_VendorShifts));
	map.insert(std::make_pair("cim:MerchantAgreement.MerchantAccounts", &assign_MerchantAgreement_MerchantAccounts));
	map.insert(std::make_pair("cim:MerchantAccounts.MerchantAgreement", &assign_MerchantAgreement_MerchantAccounts));
	map.insert(std::make_pair("cim:ServiceSupplier.BankAccounts", &assign_ServiceSupplier_BankAccounts));
	map.insert(std::make_pair("cim:BankAccounts.ServiceSupplier", &assign_ServiceSupplier_BankAccounts));
	map.insert(std::make_pair("cim:ServiceSupplier.UsagePoints", &assign_ServiceSupplier_UsagePoints));
	map.insert(std::make_pair("cim:UsagePoints.ServiceSupplier", &assign_ServiceSupplier_UsagePoints));
	map.insert(std::make_pair("cim:ServiceSupplier.CustomerAgreements", &assign_ServiceSupplier_CustomerAgreements));
	map.insert(std::make_pair("cim:CustomerAgreements.ServiceSupplier", &assign_ServiceSupplier_CustomerAgreements));
	map.insert(std::make_pair("cim:Register.Channels", &assign_Register_Channels));
	map.insert(std::make_pair("cim:Channels.Register", &assign_Register_Channels));
	map.insert(std::make_pair("cim:ComModule.ComFunctions", &assign_ComModule_ComFunctions));
	map.insert(std::make_pair("cim:ComFunctions.ComModule", &assign_ComModule_ComFunctions));
	map.insert(std::make_pair("cim:EndDeviceEvent.EndDeviceEventDetails", &assign_EndDeviceEvent_EndDeviceEventDetails));
	map.insert(std::make_pair("cim:EndDeviceEventDetails.EndDeviceEvent", &assign_EndDeviceEvent_EndDeviceEventDetails));
	map.insert(std::make_pair("cim:MeterReading.EndDeviceEvents", &assign_MeterReading_EndDeviceEvents));
	map.insert(std::make_pair("cim:EndDeviceEvents.MeterReading", &assign_MeterReading_EndDeviceEvents));
	map.insert(std::make_pair("cim:Reading.MeterReadings", &assign_Reading_MeterReadings));
	map.insert(std::make_pair("cim:MeterReadings.Reading", &assign_Reading_MeterReadings));
	map.insert(std::make_pair("cim:IntervalBlock.IntervalReadings", &assign_IntervalBlock_IntervalReadings));
	map.insert(std::make_pair("cim:IntervalReadings.IntervalBlock", &assign_IntervalBlock_IntervalReadings));
	map.insert(std::make_pair("cim:UsagePointGroup.UsagePoints", &assign_UsagePointGroup_UsagePoints));
	map.insert(std::make_pair("cim:UsagePoints.UsagePointGroup", &assign_UsagePointGroup_UsagePoints));
	map.insert(std::make_pair("cim:EndDeviceControl.UsagePointGroups", &assign_EndDeviceControl_UsagePointGroups));
	map.insert(std::make_pair("cim:UsagePointGroups.EndDeviceControl", &assign_EndDeviceControl_UsagePointGroups));
	map.insert(std::make_pair("cim:EndDeviceControl.UsagePoints", &assign_EndDeviceControl_UsagePoints));
	map.insert(std::make_pair("cim:UsagePoints.EndDeviceControl", &assign_EndDeviceControl_UsagePoints));
	map.insert(std::make_pair("cim:EndDeviceControl.EndDevices", &assign_EndDeviceControl_EndDevices));
	map.insert(std::make_pair("cim:EndDevices.EndDeviceControl", &assign_EndDeviceControl_EndDevices));
	map.insert(std::make_pair("cim:EndDeviceGroup.EndDeviceControls", &assign_EndDeviceGroup_EndDeviceControls));
	map.insert(std::make_pair("cim:EndDeviceControls.EndDeviceGroup", &assign_EndDeviceGroup_EndDeviceControls));
	map.insert(std::make_pair("cim:EndDeviceGroup.EndDevices", &assign_EndDeviceGroup_EndDevices));
	map.insert(std::make_pair("cim:EndDevices.EndDeviceGroup", &assign_EndDeviceGroup_EndDevices));
	map.insert(std::make_pair("cim:DemandResponseProgram.UsagePointGroups", &assign_DemandResponseProgram_UsagePointGroups));
	map.insert(std::make_pair("cim:UsagePointGroups.DemandResponseProgram", &assign_DemandResponseProgram_UsagePointGroups));
	map.insert(std::make_pair("cim:DemandResponseProgram.EndDeviceGroups", &assign_DemandResponseProgram_EndDeviceGroups));
	map.insert(std::make_pair("cim:EndDeviceGroups.DemandResponseProgram", &assign_DemandResponseProgram_EndDeviceGroups));
	map.insert(std::make_pair("cim:DemandResponseProgram.CustomerAgreements", &assign_DemandResponseProgram_CustomerAgreements));
	map.insert(std::make_pair("cim:CustomerAgreements.DemandResponseProgram", &assign_DemandResponseProgram_CustomerAgreements));
	map.insert(std::make_pair("cim:Meter.MeterReadings", &assign_Meter_MeterReadings));
	map.insert(std::make_pair("cim:MeterReadings.Meter", &assign_Meter_MeterReadings));
	map.insert(std::make_pair("cim:Meter.MeterMultipliers", &assign_Meter_MeterMultipliers));
	map.insert(std::make_pair("cim:MeterMultipliers.Meter", &assign_Meter_MeterMultipliers));
	map.insert(std::make_pair("cim:PanPricing.PanPricingDetails", &assign_PanPricing_PanPricingDetails));
	map.insert(std::make_pair("cim:PanPricingDetails.PanPricing", &assign_PanPricing_PanPricingDetails));
	map.insert(std::make_pair("cim:UsagePointLocation.UsagePoints", &assign_UsagePointLocation_UsagePoints));
	map.insert(std::make_pair("cim:UsagePoints.UsagePointLocation", &assign_UsagePointLocation_UsagePoints));
	map.insert(std::make_pair("cim:MetrologyRequirement.ReadingTypes", &assign_MetrologyRequirement_ReadingTypes));
	map.insert(std::make_pair("cim:ReadingTypes.MetrologyRequirement", &assign_MetrologyRequirement_ReadingTypes));
	map.insert(std::make_pair("cim:MetrologyRequirement.UsagePoints", &assign_MetrologyRequirement_UsagePoints));
	map.insert(std::make_pair("cim:UsagePoints.MetrologyRequirement", &assign_MetrologyRequirement_UsagePoints));
	map.insert(std::make_pair("cim:SynchronousMachineDynamics.TurbineGovernorDynamics", &assign_SynchronousMachineDynamics_TurbineGovernorDynamics));
	map.insert(std::make_pair("cim:TurbineGovernorDynamics.SynchronousMachineDynamics", &assign_SynchronousMachineDynamics_TurbineGovernorDynamics));
	map.insert(std::make_pair("cim:PowerSystemStabilizerDynamics.RemoteInputSignal", &assign_PowerSystemStabilizerDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:RemoteInputSignal.PowerSystemStabilizerDynamics", &assign_PowerSystemStabilizerDynamics_RemoteInputSignal));
	map.insert(std::make_pair("cim:EnergyConsumer.EnergyConsumerPhase", &assign_EnergyConsumer_EnergyConsumerPhase));
	map.insert(std::make_pair("cim:EnergyConsumerPhase.EnergyConsumer", &assign_EnergyConsumer_EnergyConsumerPhase));
	map.insert(std::make_pair("cim:LoadDynamics.EnergyConsumer", &assign_LoadDynamics_EnergyConsumer));
	map.insert(std::make_pair("cim:EnergyConsumer.LoadDynamics", &assign_LoadDynamics_EnergyConsumer));
	map.insert(std::make_pair("cim:WindPlantDynamics.WindTurbineType3or4Dynamics", &assign_WindPlantDynamics_WindTurbineType3or4Dynamics));
	map.insert(std::make_pair("cim:WindTurbineType3or4Dynamics.WindPlantDynamics", &assign_WindPlantDynamics_WindTurbineType3or4Dynamics));
	map.insert(std::make_pair("cim:WindPlantUserDefined.ProprietaryParameterDynamics", &assign_WindPlantUserDefined_ProprietaryParameterDynamics));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.WindPlantUserDefined", &assign_WindPlantUserDefined_ProprietaryParameterDynamics));
	map.insert(std::make_pair("cim:WindType1or2UserDefined.ProprietaryParameterDynamics", &assign_WindType1or2UserDefined_ProprietaryParameterDynamics));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.WindType1or2UserDefined", &assign_WindType1or2UserDefined_ProprietaryParameterDynamics));
	map.insert(std::make_pair("cim:WindType3or4UserDefined.ProprietaryParameterDynamics", &assign_WindType3or4UserDefined_ProprietaryParameterDynamics));
	map.insert(std::make_pair("cim:ProprietaryParameterDynamics.WindType3or4UserDefined", &assign_WindType3or4UserDefined_ProprietaryParameterDynamics));
	map.insert(std::make_pair("cim:RegulationSchedule.VoltageControlZones", &assign_RegulationSchedule_VoltageControlZones));
	map.insert(std::make_pair("cim:VoltageControlZones.RegulationSchedule", &assign_RegulationSchedule_VoltageControlZones));
	map.insert(std::make_pair("cim:ProtectedSwitch.RecloseSequences", &assign_ProtectedSwitch_RecloseSequences));
	map.insert(std::make_pair("cim:RecloseSequences.ProtectedSwitch", &assign_ProtectedSwitch_RecloseSequences));
	map.insert(std::make_pair("cim:NonlinearShuntCompensator.NonlinearShuntCompensatorPoints", &assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints));
	map.insert(std::make_pair("cim:NonlinearShuntCompensatorPoints.NonlinearShuntCompensator", &assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints));
	map.insert(std::make_pair("cim:EquipmentContainer.Equipments", &assign_EquipmentContainer_Equipments));
	map.insert(std::make_pair("cim:Equipments.EquipmentContainer", &assign_EquipmentContainer_Equipments));
	map.insert(std::make_pair("cim:NonlinearShuntCompensatorPhase.NonlinearShuntCompensatorPhasePoints", &assign_NonlinearShuntCompensatorPhase_NonlinearShuntCompensatorPhasePoints));
	map.insert(std::make_pair("cim:NonlinearShuntCompensatorPhasePoints.NonlinearShuntCompensatorPhase", &assign_NonlinearShuntCompensatorPhase_NonlinearShuntCompensatorPhasePoints));
	map.insert(std::make_pair("cim:ReactiveCapabilityCurve.EquivalentInjection", &assign_ReactiveCapabilityCurve_EquivalentInjection));
	map.insert(std::make_pair("cim:EquivalentInjection.ReactiveCapabilityCurve", &assign_ReactiveCapabilityCurve_EquivalentInjection));
	map.insert(std::make_pair("cim:ReactiveCapabilityCurve.InitiallyUsedBySynchronousMachines", &assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines));
	map.insert(std::make_pair("cim:InitiallyUsedBySynchronousMachines.ReactiveCapabilityCurve", &assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines));
	map.insert(std::make_pair("cim:ReactiveCapabilityCurve.SynchronousMachines", &assign_ReactiveCapabilityCurve_SynchronousMachines));
	map.insert(std::make_pair("cim:SynchronousMachines.ReactiveCapabilityCurve", &assign_ReactiveCapabilityCurve_SynchronousMachines));
	map.insert(std::make_pair("cim:PerLengthImpedance.ACLineSegments", &assign_PerLengthImpedance_ACLineSegments));
	map.insert(std::make_pair("cim:ACLineSegments.PerLengthImpedance", &assign_PerLengthImpedance_ACLineSegments));
	map.insert(std::make_pair("cim:PerLengthPhaseImpedance.PhaseImpedanceData", &assign_PerLengthPhaseImpedance_PhaseImpedanceData));
	map.insert(std::make_pair("cim:PhaseImpedanceData.PerLengthPhaseImpedance", &assign_PerLengthPhaseImpedance_PhaseImpedanceData));
	map.insert(std::make_pair("cim:CompositeSwitch.Switches", &assign_CompositeSwitch_Switches));
	map.insert(std::make_pair("cim:Switches.CompositeSwitch", &assign_CompositeSwitch_Switches));
	map.insert(std::make_pair("cim:PhaseTapChangerTable.PhaseTapChangerTabular", &assign_PhaseTapChangerTable_PhaseTapChangerTabular));
	map.insert(std::make_pair("cim:PhaseTapChangerTabular.PhaseTapChangerTable", &assign_PhaseTapChangerTable_PhaseTapChangerTabular));
	map.insert(std::make_pair("cim:DiagramObject.VisibilityLayers", &assign_DiagramObject_VisibilityLayers));
	map.insert(std::make_pair("cim:VisibilityLayers.DiagramObject", &assign_DiagramObject_VisibilityLayers));
	map.insert(std::make_pair("cim:DiagramObject.DiagramObjectPoints", &assign_DiagramObject_DiagramObjectPoints));
	map.insert(std::make_pair("cim:DiagramObjectPoints.DiagramObject", &assign_DiagramObject_DiagramObjectPoints));
	map.insert(std::make_pair("cim:DiagramStyle.Diagram", &assign_DiagramStyle_Diagram));
	map.insert(std::make_pair("cim:Diagram.DiagramStyle", &assign_DiagramStyle_Diagram));
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
	map.insert(std::make_pair("cim:EquivalentNetwork.EquivalentEquipments", &assign_EquivalentNetwork_EquivalentEquipments));
	map.insert(std::make_pair("cim:EquivalentEquipments.EquivalentNetwork", &assign_EquivalentNetwork_EquivalentEquipments));
	map.insert(std::make_pair("cim:DCConductingEquipment.DCTerminals", &assign_DCConductingEquipment_DCTerminals));
	map.insert(std::make_pair("cim:DCTerminals.DCConductingEquipment", &assign_DCConductingEquipment_DCTerminals));
	map.insert(std::make_pair("cim:DCNode.DCTerminals", &assign_DCNode_DCTerminals));
	map.insert(std::make_pair("cim:DCTerminals.DCNode", &assign_DCNode_DCTerminals));
	map.insert(std::make_pair("cim:PerLengthDCLineParameter.DCLineSegments", &assign_PerLengthDCLineParameter_DCLineSegments));
	map.insert(std::make_pair("cim:DCLineSegments.PerLengthDCLineParameter", &assign_PerLengthDCLineParameter_DCLineSegments));
	map.insert(std::make_pair("cim:DCTopologicalIsland.DCTopologicalNodes", &assign_DCTopologicalIsland_DCTopologicalNodes));
	map.insert(std::make_pair("cim:DCTopologicalNodes.DCTopologicalIsland", &assign_DCTopologicalIsland_DCTopologicalNodes));
	map.insert(std::make_pair("cim:BranchGroup.BranchGroupTerminal", &assign_BranchGroup_BranchGroupTerminal));
	map.insert(std::make_pair("cim:BranchGroupTerminal.BranchGroup", &assign_BranchGroup_BranchGroupTerminal));
	map.insert(std::make_pair("cim:OperationalLimitSet.OperationalLimitValue", &assign_OperationalLimitSet_OperationalLimitValue));
	map.insert(std::make_pair("cim:OperationalLimitValue.OperationalLimitSet", &assign_OperationalLimitSet_OperationalLimitValue));
	map.insert(std::make_pair("cim:GeneratingUnit.GrossToNetActivePowerCurves", &assign_GeneratingUnit_GrossToNetActivePowerCurves));
	map.insert(std::make_pair("cim:GrossToNetActivePowerCurves.GeneratingUnit", &assign_GeneratingUnit_GrossToNetActivePowerCurves));
	map.insert(std::make_pair("cim:GeneratingUnit.GenUnitOpCostCurves", &assign_GeneratingUnit_GenUnitOpCostCurves));
	map.insert(std::make_pair("cim:GenUnitOpCostCurves.GeneratingUnit", &assign_GeneratingUnit_GenUnitOpCostCurves));
	map.insert(std::make_pair("cim:GeneratingUnit.RotatingMachine", &assign_GeneratingUnit_RotatingMachine));
	map.insert(std::make_pair("cim:RotatingMachine.GeneratingUnit", &assign_GeneratingUnit_RotatingMachine));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.FuelAllocationSchedules", &assign_ThermalGeneratingUnit_FuelAllocationSchedules));
	map.insert(std::make_pair("cim:FuelAllocationSchedules.ThermalGeneratingUnit", &assign_ThermalGeneratingUnit_FuelAllocationSchedules));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.EmissionCurves", &assign_ThermalGeneratingUnit_EmissionCurves));
	map.insert(std::make_pair("cim:EmissionCurves.ThermalGeneratingUnit", &assign_ThermalGeneratingUnit_EmissionCurves));
	map.insert(std::make_pair("cim:ThermalGeneratingUnit.EmmissionAccounts", &assign_ThermalGeneratingUnit_EmmissionAccounts));
	map.insert(std::make_pair("cim:EmmissionAccounts.ThermalGeneratingUnit", &assign_ThermalGeneratingUnit_EmmissionAccounts));
	map.insert(std::make_pair("cim:CogenerationPlant.ThermalGeneratingUnits", &assign_CogenerationPlant_ThermalGeneratingUnits));
	map.insert(std::make_pair("cim:ThermalGeneratingUnits.CogenerationPlant", &assign_CogenerationPlant_ThermalGeneratingUnits));
	map.insert(std::make_pair("cim:HydroGeneratingUnit.TailbayLossCurve", &assign_HydroGeneratingUnit_TailbayLossCurve));
	map.insert(std::make_pair("cim:TailbayLossCurve.HydroGeneratingUnit", &assign_HydroGeneratingUnit_TailbayLossCurve));
	map.insert(std::make_pair("cim:HydroGeneratingUnit.HydroGeneratingEfficiencyCurves", &assign_HydroGeneratingUnit_HydroGeneratingEfficiencyCurves));
	map.insert(std::make_pair("cim:HydroGeneratingEfficiencyCurves.HydroGeneratingUnit", &assign_HydroGeneratingUnit_HydroGeneratingEfficiencyCurves));
	map.insert(std::make_pair("cim:FossilFuel.FuelAllocationSchedules", &assign_FossilFuel_FuelAllocationSchedules));
	map.insert(std::make_pair("cim:FuelAllocationSchedules.FossilFuel", &assign_FossilFuel_FuelAllocationSchedules));
	map.insert(std::make_pair("cim:Reservoir.SpillsIntoReservoirs", &assign_Reservoir_SpillsIntoReservoirs));
	map.insert(std::make_pair("cim:SpillsIntoReservoirs.Reservoir", &assign_Reservoir_SpillsIntoReservoirs));
	map.insert(std::make_pair("cim:Reservoir.LevelVsVolumeCurves", &assign_Reservoir_LevelVsVolumeCurves));
	map.insert(std::make_pair("cim:LevelVsVolumeCurves.Reservoir", &assign_Reservoir_LevelVsVolumeCurves));
	map.insert(std::make_pair("cim:Reservoir.InflowForecasts", &assign_Reservoir_InflowForecasts));
	map.insert(std::make_pair("cim:InflowForecasts.Reservoir", &assign_Reservoir_InflowForecasts));
	map.insert(std::make_pair("cim:CombinedCyclePlant.ThermalGeneratingUnits", &assign_CombinedCyclePlant_ThermalGeneratingUnits));
	map.insert(std::make_pair("cim:ThermalGeneratingUnits.CombinedCyclePlant", &assign_CombinedCyclePlant_ThermalGeneratingUnits));
	map.insert(std::make_pair("cim:HydroPowerPlant.HydroPumps", &assign_HydroPowerPlant_HydroPumps));
	map.insert(std::make_pair("cim:HydroPumps.HydroPowerPlant", &assign_HydroPowerPlant_HydroPumps));
	map.insert(std::make_pair("cim:HydroPowerPlant.HydroGeneratingUnits", &assign_HydroPowerPlant_HydroGeneratingUnits));
	map.insert(std::make_pair("cim:HydroGeneratingUnits.HydroPowerPlant", &assign_HydroPowerPlant_HydroGeneratingUnits));
	map.insert(std::make_pair("cim:PrimeMover.SynchronousMachines", &assign_PrimeMover_SynchronousMachines));
	map.insert(std::make_pair("cim:SynchronousMachines.PrimeMover", &assign_PrimeMover_SynchronousMachines));
	map.insert(std::make_pair("cim:SteamSupply.SteamTurbines", &assign_SteamSupply_SteamTurbines));
	map.insert(std::make_pair("cim:SteamTurbines.SteamSupply", &assign_SteamSupply_SteamTurbines));
	map.insert(std::make_pair("cim:HeatRecoveryBoiler.CombustionTurbines", &assign_HeatRecoveryBoiler_CombustionTurbines));
	map.insert(std::make_pair("cim:CombustionTurbines.HeatRecoveryBoiler", &assign_HeatRecoveryBoiler_CombustionTurbines));
	map.insert(std::make_pair("cim:BusNameMarker.Terminal", &assign_BusNameMarker_Terminal));
	map.insert(std::make_pair("cim:Terminal.BusNameMarker", &assign_BusNameMarker_Terminal));
	map.insert(std::make_pair("cim:TopologicalNode.ConnectivityNodes", &assign_TopologicalNode_ConnectivityNodes));
	map.insert(std::make_pair("cim:ConnectivityNodes.TopologicalNode", &assign_TopologicalNode_ConnectivityNodes));
	map.insert(std::make_pair("cim:TopologicalNode.Terminal", &assign_TopologicalNode_Terminal));
	map.insert(std::make_pair("cim:Terminal.TopologicalNode", &assign_TopologicalNode_Terminal));
	map.insert(std::make_pair("cim:TopologicalIsland.TopologicalNodes", &assign_TopologicalIsland_TopologicalNodes));
	map.insert(std::make_pair("cim:TopologicalNodes.TopologicalIsland", &assign_TopologicalIsland_TopologicalNodes));
	map.insert(std::make_pair("cim:ValueAliasSet.Values", &assign_ValueAliasSet_Values));
	map.insert(std::make_pair("cim:Values.ValueAliasSet", &assign_ValueAliasSet_Values));
	map.insert(std::make_pair("cim:ValueAliasSet.Discretes", &assign_ValueAliasSet_Discretes));
	map.insert(std::make_pair("cim:Discretes.ValueAliasSet", &assign_ValueAliasSet_Discretes));
	map.insert(std::make_pair("cim:AccumulatorLimitSet.Limits", &assign_AccumulatorLimitSet_Limits));
	map.insert(std::make_pair("cim:Limits.AccumulatorLimitSet", &assign_AccumulatorLimitSet_Limits));
	map.insert(std::make_pair("cim:Accumulator.AccumulatorValues", &assign_Accumulator_AccumulatorValues));
	map.insert(std::make_pair("cim:AccumulatorValues.Accumulator", &assign_Accumulator_AccumulatorValues));
	map.insert(std::make_pair("cim:Accumulator.LimitSets", &assign_Accumulator_LimitSets));
	map.insert(std::make_pair("cim:LimitSets.Accumulator", &assign_Accumulator_LimitSets));
	map.insert(std::make_pair("cim:AnalogLimitSet.Limits", &assign_AnalogLimitSet_Limits));
	map.insert(std::make_pair("cim:Limits.AnalogLimitSet", &assign_AnalogLimitSet_Limits));
	map.insert(std::make_pair("cim:Discrete.DiscreteValues", &assign_Discrete_DiscreteValues));
	map.insert(std::make_pair("cim:DiscreteValues.Discrete", &assign_Discrete_DiscreteValues));
	map.insert(std::make_pair("cim:MeasurementValueSource.MeasurementValues", &assign_MeasurementValueSource_MeasurementValues));
	map.insert(std::make_pair("cim:MeasurementValues.MeasurementValueSource", &assign_MeasurementValueSource_MeasurementValues));
	map.insert(std::make_pair("cim:Analog.AnalogValues", &assign_Analog_AnalogValues));
	map.insert(std::make_pair("cim:AnalogValues.Analog", &assign_Analog_AnalogValues));
	map.insert(std::make_pair("cim:Analog.LimitSets", &assign_Analog_LimitSets));
	map.insert(std::make_pair("cim:LimitSets.Analog", &assign_Analog_LimitSets));
	map.insert(std::make_pair("cim:Contingency.ContingencyElement", &assign_Contingency_ContingencyElement));
	map.insert(std::make_pair("cim:ContingencyElement.Contingency", &assign_Contingency_ContingencyElement));
	map.insert(std::make_pair("cim:PowerCutZone.EnergyConsumers", &assign_PowerCutZone_EnergyConsumers));
	map.insert(std::make_pair("cim:EnergyConsumers.PowerCutZone", &assign_PowerCutZone_EnergyConsumers));
	map.insert(std::make_pair("cim:NonConformLoadGroup.EnergyConsumers", &assign_NonConformLoadGroup_EnergyConsumers));
	map.insert(std::make_pair("cim:EnergyConsumers.NonConformLoadGroup", &assign_NonConformLoadGroup_EnergyConsumers));
	map.insert(std::make_pair("cim:NonConformLoadGroup.NonConformLoadSchedules", &assign_NonConformLoadGroup_NonConformLoadSchedules));
	map.insert(std::make_pair("cim:NonConformLoadSchedules.NonConformLoadGroup", &assign_NonConformLoadGroup_NonConformLoadSchedules));
	map.insert(std::make_pair("cim:ConformLoadGroup.EnergyConsumers", &assign_ConformLoadGroup_EnergyConsumers));
	map.insert(std::make_pair("cim:EnergyConsumers.ConformLoadGroup", &assign_ConformLoadGroup_EnergyConsumers));
	map.insert(std::make_pair("cim:ConformLoadGroup.ConformLoadSchedules", &assign_ConformLoadGroup_ConformLoadSchedules));
	map.insert(std::make_pair("cim:ConformLoadSchedules.ConformLoadGroup", &assign_ConformLoadGroup_ConformLoadSchedules));
	map.insert(std::make_pair("cim:Season.SeasonDayTypeSchedules", &assign_Season_SeasonDayTypeSchedules));
	map.insert(std::make_pair("cim:SeasonDayTypeSchedules.Season", &assign_Season_SeasonDayTypeSchedules));
	map.insert(std::make_pair("cim:SubLoadArea.LoadGroups", &assign_SubLoadArea_LoadGroups));
	map.insert(std::make_pair("cim:LoadGroups.SubLoadArea", &assign_SubLoadArea_LoadGroups));
	map.insert(std::make_pair("cim:DayType.SeasonDayTypeSchedules", &assign_DayType_SeasonDayTypeSchedules));
	map.insert(std::make_pair("cim:SeasonDayTypeSchedules.DayType", &assign_DayType_SeasonDayTypeSchedules));
	map.insert(std::make_pair("cim:LoadArea.SubLoadAreas", &assign_LoadArea_SubLoadAreas));
	map.insert(std::make_pair("cim:SubLoadAreas.LoadArea", &assign_LoadArea_SubLoadAreas));
	map.insert(std::make_pair("cim:RemoteUnit.RemotePoints", &assign_RemoteUnit_RemotePoints));
	map.insert(std::make_pair("cim:RemotePoints.RemoteUnit", &assign_RemoteUnit_RemotePoints));
	map.insert(std::make_pair("cim:CommunicationLink.RemoteUnits", &assign_CommunicationLink_RemoteUnits));
	map.insert(std::make_pair("cim:RemoteUnits.CommunicationLink", &assign_CommunicationLink_RemoteUnits));
	map.insert(std::make_pair("cim:ControlAreaGeneratingUnit.AltGeneratingUnitMeas", &assign_ControlAreaGeneratingUnit_AltGeneratingUnitMeas));
	map.insert(std::make_pair("cim:AltGeneratingUnitMeas.ControlAreaGeneratingUnit", &assign_ControlAreaGeneratingUnit_AltGeneratingUnitMeas));
	map.insert(std::make_pair("cim:TieFlow.AltTieMeas", &assign_TieFlow_AltTieMeas));
	map.insert(std::make_pair("cim:AltTieMeas.TieFlow", &assign_TieFlow_AltTieMeas));
	map.insert(std::make_pair("cim:ControlArea.ControlAreaGeneratingUnit", &assign_ControlArea_ControlAreaGeneratingUnit));
	map.insert(std::make_pair("cim:ControlAreaGeneratingUnit.ControlArea", &assign_ControlArea_ControlAreaGeneratingUnit));
	map.insert(std::make_pair("cim:ControlArea.TieFlow", &assign_ControlArea_TieFlow));
	map.insert(std::make_pair("cim:TieFlow.ControlArea", &assign_ControlArea_TieFlow));
	map.insert(std::make_pair("cim:ProtectionEquipment.ProtectedSwitches", &assign_ProtectionEquipment_ProtectedSwitches));
	map.insert(std::make_pair("cim:ProtectedSwitches.ProtectionEquipment", &assign_ProtectionEquipment_ProtectedSwitches));
	map.insert(std::make_pair("cim:ProtectionEquipment.ConductingEquipments", &assign_ProtectionEquipment_ConductingEquipments));
	map.insert(std::make_pair("cim:ConductingEquipments.ProtectionEquipment", &assign_ProtectionEquipment_ConductingEquipments));

#include "AliasesTask.hpp"

	load_aliases<task_function>(map, "task_alias.csv");

	return map;
}
