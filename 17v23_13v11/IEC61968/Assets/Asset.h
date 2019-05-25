///////////////////////////////////////////////////////////
//  Asset.h
//  Implementation of the Class Asset
///////////////////////////////////////////////////////////

#ifndef ASSET_H
#define ASSET_H

#include <list>

#include "IEC61968/Assets/AcceptanceTest.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/Common/ElectronicAddress.h"
#include "IEC61968/Assets/InUseDate.h"
#include "IEC61968/Assets/InUseStateKind.h"
#include "IEC61968/Assets/AssetKind.h"
#include "IEC61968/Assets/LifecycleDate.h"
#include "IEC61968/Assets/AssetLifecycleStateKind.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/Assets/RetiredReasonKind.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpInventory.h"
#include "IEC61968/Assets/AssetOrganisationRole.h"
#include "IEC61968/Assets/AssetFunction.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"
#include "IEC61968/InfIEC61968/InfAssets/AssetPropertyCurve.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpRecDelvLineItem.h"
#include "IEC61968/Assets/AssetDeployment.h"
#include "IEC61968/InfIEC61968/InfAssets/Reconditioning.h"
#include "IEC61968/Assets/AssetInfo.h"
#include "IEC61970/Base/Meas/Measurement.h"
#include "IEC61968/Assets/ProductAssetModel.h"
#include "IEC61968/Common/ConfigurationEvent.h"
#include "IEC61968/Common/Location.h"
#include "IEC61968/Common/ActivityRecord.h"

namespace IEC61968
{
	namespace Assets
	{
		class AssetContainer;
	}
}

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Tangible resource of the utility, including power system equipment, various end
		 * devices, cabinets, buildings, etc. For electrical network equipment, the role
		 * of the asset is defined through PowerSystemResource and its subclasses, defined
		 * mainly in the Wires model (refer to IEC61970-301 and model package IEC61970::
		 * Wires). Asset description places emphasis on the physical characteristics of
		 * the equipment fulfilling that role.
		 */
		class Asset : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Asset();
			virtual ~Asset();
			/**
			 * Information on acceptance test.
			 */
			IEC61968::Assets::AcceptanceTest acceptanceTest;
			/**
			 * Condition of asset at last baseline. Examples include new, rebuilt, overhaul
			 * required, other. Refer to inspection data for information on the most current
			 * condition of the asset.
			 */
			IEC61970::Base::Domain::String baselineCondition;
			/**
			 * Percentage of initial life expectancy that has been lost as of the last life
			 * expectancy baseline. Represents
			 * (initial life expectancy - current life expectancy) / initial life expectancy.
			 */
			IEC61970::Base::Domain::PerCent baselineLossOfLife;
			/**
			 * True if asset is considered critical for some reason (for example, a pole with
			 * critical attachments).
			 */
			IEC61970::Base::Domain::Boolean critical;
			/**
			 * Electronic address.
			 */
			IEC61968::Common::ElectronicAddress electronicAddress;
			/**
			 * In use dates for this asset.
			 */
			IEC61968::Assets::InUseDate inUseDate;
			/**
			 * Indication of whether asset is currently deployed (in use), ready to be put
			 * into use or not available for use.
			 */
			IEC61968::Assets::InUseStateKind inUseState = IEC61968::Assets::InUseStateKind::_undef;
			/**
			 * Kind of asset. Used in description of asset components in asset instance
			 * templates.
			 */
			IEC61968::Assets::AssetKind kind = IEC61968::Assets::AssetKind::_undef;
			/**
			 * <was lifecycle>
			 * Lifecycle dates for this asset.
			 */
			IEC61968::Assets::LifecycleDate lifecycleDate;
			/**
			 * Current lifecycle state of asset.
			 */
			IEC61968::Assets::AssetLifecycleStateKind lifecycleState = IEC61968::Assets::AssetLifecycleStateKind::_undef;
			/**
			 * Lot number for this asset. Even for the same model and version number, many
			 * assets are manufactured in lots.
			 */
			IEC61970::Base::Domain::String lotNumber;
			/**
			 * Position of asset or asset component. May often be in relation to other assets
			 * or components. 
			 */
			IEC61970::Base::Domain::String position;
			/**
			 * Purchase price of asset.
			 */
			IEC61970::Base::Domain::Money purchasePrice;
			/**
			 * Reason asset retired.
			 */
			IEC61968::Assets::RetiredReasonKind retiredReason = IEC61968::Assets::RetiredReasonKind::_undef;
			/**
			 * Serial number of this asset.
			 */
			IEC61970::Base::Domain::String serialNumber;
			/**
			 * Status of this asset.
			 */
			IEC61968::Common::Status status;
			/**
			 * Utility-specific classification of Asset and its subtypes, according to their
			 * corporate standards, practices, and existing IT systems (e.g., for management
			 * of assets, maintenance, work, outage, customers, etc.).
			 */
			IEC61970::Base::Domain::String type;
			/**
			 * Uniquely tracked commodity (UTC) number.
			 */
			IEC61970::Base::Domain::String utcNumber;
			IEC61968::InfIEC61968::InfERPSupport::ErpInventory *ErpInventory;
			/**
			 * All roles an organisation plays for this asset.
			 */
			std::list<IEC61968::Assets::AssetOrganisationRole*> OrganisationRoles;
			std::list<IEC61968::Assets::AssetFunction*> AssetFunction;
			/**
			 * All power system resources used to electrically model this asset. For example,
			 * transformer asset is electrically modelled with a transformer and its windings
			 * and tap changer.
			 */
			std::list<IEC61970::Base::Core::PowerSystemResource*> PowerSystemResources;
			/**
			 * Container of this asset.
			 */
			IEC61968::Assets::AssetContainer *AssetContainer;
			std::list<IEC61968::InfIEC61968::InfAssets::AssetPropertyCurve*> AssetPropertyCurves;
			std::list<IEC61968::InfIEC61968::InfERPSupport::ErpRecDelvLineItem*> ErpRecDeliveryItems;
			/**
			 * This asset's deployment.
			 */
			IEC61968::Assets::AssetDeployment *AssetDeployment;
			std::list<IEC61968::InfIEC61968::InfAssets::Reconditioning*> Reconditionings;
			/**
			 * Data applicable to this asset.
			 */
			IEC61968::Assets::AssetInfo *AssetInfo;
			std::list<IEC61970::Base::Meas::Measurement*> Measurements;
			/**
			 * The model of this asset.
			 */
			IEC61968::Assets::ProductAssetModel *ProductAssetModel;
			/**
			 * All configuration events created for this asset.
			 */
			std::list<IEC61968::Common::ConfigurationEvent*> ConfigurationEvents;
			/**
			 * Location of this asset.
			 */
			IEC61968::Common::Location *Location;
			/**
			 * All activity records created for this asset.
			 */
			std::list<IEC61968::Common::ActivityRecord*> ActivityRecords;

		};

	}

}
#endif // ASSET_H
