///////////////////////////////////////////////////////////
//  BreakerInfo.h
//  Implementation of the Class BreakerInfo
///////////////////////////////////////////////////////////

#ifndef BREAKERINFO_H
#define BREAKERINFO_H

#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/OldSwitchInfo.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Properties of breaker assets.
			 */
			class BreakerInfo : public IEC61968::InfIEC61968::InfAssetInfo::OldSwitchInfo
			{

			public:
				BreakerInfo();
				virtual ~BreakerInfo();
				/**
				 * Phase trip rating.
				 */
				IEC61970::Base::Domain::CurrentFlow phaseTrip;

			};

		}

	}

}
#endif // BREAKERINFO_H
