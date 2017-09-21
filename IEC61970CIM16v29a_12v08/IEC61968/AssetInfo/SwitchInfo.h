///////////////////////////////////////////////////////////
//  SwitchInfo.h
//  Implementation of the Class SwitchInfo
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SWITCHINFO_H
#define SWITCHINFO_H

#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Switch data.
		 */
		class SwitchInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			SwitchInfo();
			virtual ~SwitchInfo();
			/**
			 * The maximum fault current a breaking device can break safely under prescribed
			 * conditions of use.
			 */
			IEC61970::Base::Domain::CurrentFlow breakingCapacity;
			/**
			 * If true, it is a single phase switch.
			 */
			IEC61970::Base::Domain::Boolean isSinglePhase;
			/**
			 * If true, the switch is not ganged (i.e., a switch phase may be operated
			 * separately from other phases).
			 */
			IEC61970::Base::Domain::Boolean isUnganged;
			/**
			 * Rated current.
			 */
			IEC61970::Base::Domain::CurrentFlow ratedCurrent;
			/**
			 * Rated voltage.
			 */
			IEC61970::Base::Domain::Voltage ratedVoltage;

		};

	}

}
#endif // SWITCHINFO_H
