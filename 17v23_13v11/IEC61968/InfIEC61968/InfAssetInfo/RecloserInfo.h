///////////////////////////////////////////////////////////
//  RecloserInfo.h
//  Implementation of the Class RecloserInfo
///////////////////////////////////////////////////////////

#ifndef RECLOSERINFO_H
#define RECLOSERINFO_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/OldSwitchInfo.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Properties of recloser assets.
			 */
			class RecloserInfo : public IEC61968::InfIEC61968::InfAssetInfo::OldSwitchInfo
			{

			public:
				RecloserInfo();
				virtual ~RecloserInfo();
				/**
				 * True if device has ground trip capability.
				 */
				IEC61970::Base::Domain::Boolean groundTripCapable;
				/**
				 * True if normal status of ground trip is enabled.
				 */
				IEC61970::Base::Domain::Boolean groundTripNormalEnabled;
				/**
				 * Ground trip rating.
				 */
				IEC61970::Base::Domain::CurrentFlow groundTripRating;
				/**
				 * Phase trip rating.
				 */
				IEC61970::Base::Domain::CurrentFlow phaseTripRating;
				/**
				 * Total number of phase reclose operations.
				 */
				IEC61970::Base::Domain::Integer recloseLockoutCount;

			};

		}

	}

}
#endif // RECLOSERINFO_H
