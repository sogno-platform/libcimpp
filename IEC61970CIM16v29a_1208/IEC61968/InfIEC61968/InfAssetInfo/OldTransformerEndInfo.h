///////////////////////////////////////////////////////////
//  OldTransformerEndInfo.h
//  Implementation of the Class OldTransformerEndInfo
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OLDTRANSFORMERENDINFO_H
#define OLDTRANSFORMERENDINFO_H

#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Domain/Weight.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/WindingInsulationKind.h"
#include "IEC61968/AssetInfo/TransformerEndInfo.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			class OldTransformerEndInfo : public IEC61968::AssetInfo::TransformerEndInfo
			{

			public:
				OldTransformerEndInfo();
				virtual ~OldTransformerEndInfo();
				/**
				 * Overload rating for 24 hours.
				 */
				IEC61970::Base::Domain::ApparentPower dayOverLoadRating;
				/**
				 * Overload rating for 1 hour.
				 */
				IEC61970::Base::Domain::ApparentPower hourOverLoadRating;
				/**
				 * Weight of solid insultation in transformer.
				 */
				IEC61970::Base::Domain::Weight solidInsulationWeight;
				/**
				 * Type of insultation used for transformer windings.
				 */
				IEC61968::InfIEC61968::InfAssetInfo::WindingInsulationKind windingInsulationKind;

			};

		}

	}

}
#endif // OLDTRANSFORMERENDINFO_H
