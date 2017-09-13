///////////////////////////////////////////////////////////
//  OldSwitchInfo.h
//  Implementation of the Class OldSwitchInfo
///////////////////////////////////////////////////////////

#ifndef OLDSWITCHINFO_H
#define OLDSWITCHINFO_H

#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/AssetInfo/SwitchInfo.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Properties of switch assets.
			 */
			class OldSwitchInfo : public IEC61968::AssetInfo::SwitchInfo
			{

			public:
				OldSwitchInfo();
				virtual ~OldSwitchInfo();
				/**
				 * The maximum rms voltage that may be applied across an open contact without
				 * breaking down the dielectric properties of the switch in the open position.
				 */
				IEC61970::Base::Domain::Voltage dielectricStrength;
				/**
				 * True if switch has load breaking capabiity. Unless specified false, this is
				 * always assumed to be true for breakers and reclosers.
				 */
				IEC61970::Base::Domain::Boolean loadBreak;
				/**
				 * The highest value of current the switch can make at the rated voltage under
				 * specified operating conditions without suffering significant deterioration of
				 * its performance.
				 */
				IEC61970::Base::Domain::CurrentFlow makingCapacity;
				/**
				 * The lowest value of current that the switch can make, carry and break in
				 * uninterrupted duty at the rated voltage under specified operating conditions
				 * without suffering significant deterioration of its performance.
				 */
				IEC61970::Base::Domain::CurrentFlow minimumCurrent;
				/**
				 * Number of poles (i.e. of current carrying conductors that are switched).
				 */
				IEC61970::Base::Domain::Integer poleCount;
				/**
				 * True if device is capable of being operated by remote control.
				 */
				IEC61970::Base::Domain::Boolean remote;
				/**
				 * The highest value of current the switch can carry in the closed position at the
				 * rated voltage under specified operating conditions without suffering
				 * significant deterioration of its performance.
				 */
				IEC61970::Base::Domain::CurrentFlow withstandCurrent;

			};

		}

	}

}
#endif // OLDSWITCHINFO_H
