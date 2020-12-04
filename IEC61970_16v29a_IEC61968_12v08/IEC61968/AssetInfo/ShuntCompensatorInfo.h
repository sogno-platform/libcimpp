///////////////////////////////////////////////////////////
//  ShuntCompensatorInfo.h
//  Implementation of the Class ShuntCompensatorInfo
///////////////////////////////////////////////////////////

#ifndef SHUNTCOMPENSATORINFO_H
#define SHUNTCOMPENSATORINFO_H

#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61968/Assets/AssetInfo.h"
#include "IEC61968/InfIEC61968/InfWiresExt/ShuntCompensatorControl.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Properties of shunt capacitor, shunt reactor or switchable bank of shunt
		 * capacitor or reactor assets.
		 */
		class ShuntCompensatorInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			ShuntCompensatorInfo();
			virtual ~ShuntCompensatorInfo();
			/**
			 * Maximum allowed apparent power loss.
			 */
			IEC61970::Base::Domain::ApparentPower maxPowerLoss;
			/**
			 * Rated current.
			 */
			IEC61970::Base::Domain::CurrentFlow ratedCurrent;
			/**
			 * Rated reactive power.
			 */
			IEC61970::Base::Domain::ReactivePower ratedReactivePower;
			/**
			 * Rated voltage.
			 */
			IEC61970::Base::Domain::Voltage ratedVoltage;
			IEC61968::InfIEC61968::InfWiresExt::ShuntCompensatorControl *ShuntCompensatorControl;

		};

	}

}
#endif // SHUNTCOMPENSATORINFO_H
