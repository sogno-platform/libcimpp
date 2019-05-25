///////////////////////////////////////////////////////////
//  SurgeArresterInfo.h
//  Implementation of the Class SurgeArresterInfo
///////////////////////////////////////////////////////////

#ifndef SURGEARRESTERINFO_H
#define SURGEARRESTERINFO_H

#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Properties of surge arrester.
			 */
			class SurgeArresterInfo : public IEC61968::Assets::AssetInfo
			{

			public:
				SurgeArresterInfo();
				virtual ~SurgeArresterInfo();
				/**
				 * Maximum continuous power frequency voltage allowed on the surge arrester.
				 */
				IEC61970::Base::Domain::Voltage continuousOperatingVoltage;
				/**
				 * If true, the arrester has a polymer housing, porcelain otherwise.
				 */
				IEC61970::Base::Domain::Boolean isPolymer;
				/**
				 * Residual voltage during an 8x20 microsecond current impulse at the nominal
				 * discharge current level.
				 */
				IEC61970::Base::Domain::Voltage lightningImpulseDischargeVoltage;
				/**
				 * Determines the arrester energy discharge capability.  Choices are limited to 0
				 * (none) through 5 (highest) by IEC 60099. Classes 1..3 require a 10-kA nominal
				 * discharge current. Classes 4..5 require a 20-kA nominal discharge current.
				 * Lower nominal discharge currents must use class 0.
				 */
				IEC61970::Base::Domain::Integer lineDischargeClass;
				/**
				 * The lightning discharge current used to classify the arrester. Choices are
				 * limited to 1.5, 2.5, 5, 10, and 20 kA by IEC 60099.
				 */
				IEC61970::Base::Domain::CurrentFlow nominalDischargeCurrent;
				/**
				 * Fault current level at which all parts of the failed arrester lie within a
				 * circle prescribed by IEC 60099.
				 */
				IEC61970::Base::Domain::CurrentFlow pressureReliefClass;
				/**
				 * The temporary overvoltage (TOV) level at power frequency that the surge
				 * arrester withstands for 10 seconds.
				 */
				IEC61970::Base::Domain::Voltage ratedVoltage;
				/**
				 * Residual voltage during a current impulse with front time of 1 microsecond, and
				 * magnitude equal to the nominal discharge current level.
				 */
				IEC61970::Base::Domain::Voltage steepFrontDischargeVoltage;
				/**
				 * Residual voltage during a current impulse with front time of at least 30
				 * microseconds, and magnitude specified in IEC 60099 for the line discharge class.
				 * Does not apply to line discharge class 0.
				 */
				IEC61970::Base::Domain::Voltage switchingImpulseDischargeVoltage;

			};

		}

	}

}
#endif // SURGEARRESTERINFO_H
