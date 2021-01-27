///////////////////////////////////////////////////////////
//  CurrentTransformerInfo.h
//  Implementation of the Class CurrentTransformerInfo
///////////////////////////////////////////////////////////

#ifndef CURRENTTRANSFORMERINFO_H
#define CURRENTTRANSFORMERINFO_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61968/InfIEC61968/InfCommon/Ratio.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Properties of current transformer asset.
			 */
			class CurrentTransformerInfo : public IEC61968::Assets::AssetInfo
			{

			public:
				CurrentTransformerInfo();
				virtual ~CurrentTransformerInfo();
				/**
				 * CT accuracy classification.
				 */
				IEC61970::Base::Domain::String accuracyClass;
				/**
				 * Accuracy limit.
				 */
				IEC61970::Base::Domain::CurrentFlow accuracyLimit;
				/**
				 * Number of cores.
				 */
				IEC61970::Base::Domain::Integer coreCount;
				IEC61970::Base::Domain::String ctClass;
				/**
				 * Maximum primary current where the CT still displays linear characteristicts.
				 */
				IEC61970::Base::Domain::CurrentFlow kneePointCurrent;
				/**
				 * Maximum voltage across the secondary terminals where the CT still displays
				 * linear characteristicts.
				 */
				IEC61970::Base::Domain::Voltage kneePointVoltage;
				/**
				 * Maximum ratio between the primary and secondary current.
				 */
				IEC61968::InfIEC61968::InfCommon::Ratio maxRatio;
				/**
				 * Nominal ratio between the primary and secondary current; i.e. 100:5.
				 */
				IEC61968::InfIEC61968::InfCommon::Ratio nominalRatio;
				/**
				 * Full load secondary (FLS) rating for primary winding.
				 */
				IEC61970::Base::Domain::CurrentFlow primaryFlsRating;
				/**
				 * Ratio for the primary winding tap changer.
				 */
				IEC61968::InfIEC61968::InfCommon::Ratio primaryRatio;
				/**
				 * Rated current on the primary side.
				 */
				IEC61970::Base::Domain::CurrentFlow ratedCurrent;
				/**
				 * Full load secondary (FLS) rating for secondary winding.
				 */
				IEC61970::Base::Domain::CurrentFlow secondaryFlsRating;
				/**
				 * Ratio for the secondary winding tap changer.
				 */
				IEC61968::InfIEC61968::InfCommon::Ratio secondaryRatio;
				/**
				 * Full load secondary (FLS) rating for tertiary winding.
				 */
				IEC61970::Base::Domain::CurrentFlow tertiaryFlsRating;
				/**
				 * Ratio for the tertiary winding tap changer.
				 */
				IEC61968::InfIEC61968::InfCommon::Ratio tertiaryRatio;
				/**
				 * Usage: eg. metering, protection, etc.
				 */
				IEC61970::Base::Domain::String usage;

			};

		}

	}

}
#endif // CURRENTTRANSFORMERINFO_H
