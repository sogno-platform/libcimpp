///////////////////////////////////////////////////////////
//  PotentialTransformerInfo.h
//  Implementation of the Class PotentialTransformerInfo
///////////////////////////////////////////////////////////

#ifndef POTENTIALTRANSFORMERINFO_H
#define POTENTIALTRANSFORMERINFO_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfCommon/Ratio.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Properties of potential transformer asset.
			 */
			class PotentialTransformerInfo : public IEC61968::Assets::AssetInfo
			{

			public:
				PotentialTransformerInfo();
				virtual ~PotentialTransformerInfo();
				IEC61970::Base::Domain::String accuracyClass;
				IEC61968::InfIEC61968::InfCommon::Ratio nominalRatio;
				/**
				 * Ratio for the primary winding tap changer.
				 */
				IEC61968::InfIEC61968::InfCommon::Ratio primaryRatio;
				IEC61970::Base::Domain::String ptClass;
				/**
				 * Rated voltage on the primary side.
				 */
				IEC61970::Base::Domain::Voltage ratedVoltage;
				/**
				 * Ratio for the secondary winding tap changer.
				 */
				IEC61968::InfIEC61968::InfCommon::Ratio secondaryRatio;
				/**
				 * Ratio for the tertiary winding tap changer.
				 */
				IEC61968::InfIEC61968::InfCommon::Ratio tertiaryRatio;

			};

		}

	}

}
#endif // POTENTIALTRANSFORMERINFO_H
