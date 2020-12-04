///////////////////////////////////////////////////////////
//  OldTransformerTankInfo.h
//  Implementation of the Class OldTransformerTankInfo
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OLDTRANSFORMERTANKINFO_H
#define OLDTRANSFORMERTANKINFO_H

#include "IEC61968/InfIEC61968/InfAssetInfo/TransformerConstructionKind.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/TransformerCoreKind.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/TransformerFunctionKind.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/OilPreservationKind.h"
#include "IEC61968/AssetInfo/TransformerTankInfo.h"
#include "IEC61970/Base/Domain/Mass.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			class OldTransformerTankInfo : public IEC61968::AssetInfo::TransformerTankInfo
			{

			public:
				OldTransformerTankInfo();
				virtual ~OldTransformerTankInfo();
				/**
				 * Kind of construction for this transformer.
				 */
				IEC61968::InfIEC61968::InfAssetInfo::TransformerConstructionKind constructionKind = IEC61968::InfIEC61968::InfAssetInfo::TransformerConstructionKind::_undef;
				/**
				 * Weight of core and coils in transformer.
				 */
				IEC61970::Base::Domain::Mass coreCoilsWeight;
				/**
				 * Core kind of this transformer product.
				 */
				IEC61968::InfIEC61968::InfAssetInfo::TransformerCoreKind coreKind = IEC61968::InfIEC61968::InfAssetInfo::TransformerCoreKind::_undef;
				/**
				 * Function of this transformer.
				 */
				IEC61968::InfIEC61968::InfAssetInfo::TransformerFunctionKind function = IEC61968::InfIEC61968::InfAssetInfo::TransformerFunctionKind::_undef;
				/**
				 * Basic insulation level of neutral.
				 */
				IEC61970::Base::Domain::Voltage neutralBIL;
				/**
				 * Kind of oil preservation system.
				 */
				IEC61968::InfIEC61968::InfAssetInfo::OilPreservationKind oilPreservationKind = IEC61968::InfIEC61968::InfAssetInfo::OilPreservationKind::_undef;

			};

		}

	}

}
#endif // OLDTRANSFORMERTANKINFO_H
