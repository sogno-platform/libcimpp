///////////////////////////////////////////////////////////
//  SwitchInfo.h
//  Implementation of the Class SwitchInfo
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SWITCHINFO_H
#define SWITCHINFO_H

#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Pressure.h"
#include "IEC61970/Base/Domain/Volume.h"
#include "IEC61970/Base/Domain/Frequency.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61968/Assets/AssetInfo.h"
#include "IEC61970/Base/Domain/Mass.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * <was Switch data.>
		 * Switch datasheet information.
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
			 * Weight of gas in each tank of SF<sub>6</sub> dead tank breaker.
			 */
			IEC61970::Base::Domain::Mass gasWeightPerTank;
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
			 * Gas or air pressure at or below which a low pressure alarm is generated.
			 */
			IEC61970::Base::Domain::Pressure lowPressureAlarm;
			/**
			 * Gas or air pressure below which the breaker will not open.
			 */
			IEC61970::Base::Domain::Pressure lowPressureLockOut;
			/**
			 * Volume of oil in each tank of bulk oil breaker.
			 */
			IEC61970::Base::Domain::Volume oilVolumePerTank;
			/**
			 * Rated current.
			 */
			IEC61970::Base::Domain::CurrentFlow ratedCurrent;
			/**
			 * Frequency for which switch is rated.
			 */
			IEC61970::Base::Domain::Frequency ratedFrequency;
			/**
			 * Rated impulse withstand voltage, also known as BIL (Basic Impulse Level).
			 */
			IEC61970::Base::Domain::Voltage ratedImpulseWithstandVoltage;
			/**
			 * Switch rated interrupting time in seconds.
			 */
			IEC61970::Base::Domain::Seconds ratedInterruptingTime;
			/**
			 * Rated voltage.
			 */
			IEC61970::Base::Domain::Voltage ratedVoltage;

		};

	}

}
#endif // SWITCHINFO_H
