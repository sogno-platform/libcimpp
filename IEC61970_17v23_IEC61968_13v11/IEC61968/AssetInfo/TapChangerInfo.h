///////////////////////////////////////////////////////////
//  TapChangerInfo.h
//  Implementation of the Class TapChangerInfo
///////////////////////////////////////////////////////////

#ifndef TAPCHANGERINFO_H
#define TAPCHANGERINFO_H

#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Frequency.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Tap changer data.
		 */
		class TapChangerInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			TapChangerInfo();
			virtual ~TapChangerInfo();
			/**
			 * Basic Insulation Level (BIL) expressed as the impulse crest voltage of a
			 * nominal wave, typically 1.2 X 50 microsecond. This is a measure of the ability
			 * of the insulation to withstand very high voltage surges.
			 */
			IEC61970::Base::Domain::Voltage bil;
			/**
			 * Built-in current transformer primary rating.
			 */
			IEC61970::Base::Domain::CurrentFlow ctRating;
			/**
			 * Built-in current transducer ratio.
			 */
			IEC61970::Base::Domain::Float ctRatio;
			/**
			 * Frequency at which the ratings apply.
			 */
			IEC61970::Base::Domain::Frequency frequency;
			/**
			 * Highest possible tap step position, advance from neutral.
			 */
			IEC61970::Base::Domain::Integer highStep;
			/**
			 * Whether this tap changer has under load tap changing capabilities.
			 */
			IEC61970::Base::Domain::Boolean isTcul;
			/**
			 * Lowest possible tap step position, retard from neutral.
			 */
			IEC61970::Base::Domain::Integer lowStep;
			/**
			 * The neutral tap step position for the winding.
			 */
			IEC61970::Base::Domain::Integer neutralStep;
			/**
			 * Voltage at which the winding operates at the neutral tap setting.
			 */
			IEC61970::Base::Domain::Voltage neutralU;
			/**
			 * Built-in voltage transducer ratio.
			 */
			IEC61970::Base::Domain::Float ptRatio;
			/**
			 * Rated apparent power.
			 */
			IEC61970::Base::Domain::ApparentPower ratedApparentPower;
			/**
			 * Rated current.
			 */
			IEC61970::Base::Domain::CurrentFlow ratedCurrent;
			/**
			 * Rated voltage.
			 */
			IEC61970::Base::Domain::Voltage ratedVoltage;
			/**
			 * Phase shift per step position.
			 */
			IEC61970::Base::Domain::AngleDegrees stepPhaseIncrement;
			/**
			 * Tap step increment, in per cent of rated voltage, per step position.
			 */
			IEC61970::Base::Domain::PerCent stepVoltageIncrement;

		};

	}

}
#endif // TAPCHANGERINFO_H
