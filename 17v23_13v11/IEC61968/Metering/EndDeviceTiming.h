///////////////////////////////////////////////////////////
//  EndDeviceTiming.h
//  Implementation of the Class EndDeviceTiming
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ENDDEVICETIMING_H
#define ENDDEVICETIMING_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Minutes.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/Metering/RandomisationKind.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Timing for the control actions of end devices.
		 */
		class EndDeviceTiming : public BaseClass
		{

		public:
			EndDeviceTiming();
			virtual ~EndDeviceTiming();
			/**
			 * Duration of the end device control action or the business event that is the
			 * subject of the end device control.
			 */
			IEC61970::Base::Domain::Minutes duration;
			/**
			 * True if 'duration' is indefinite.
			 */
			IEC61970::Base::Domain::Boolean durationIndefinite;
			/**
			 * Start and end time of an interval during which end device control actions are
			 * to be executed.
			 */
			IEC61970::Base::Domain::DateTimeInterval interval;
			/**
			 * Kind of randomisation to be applied to the end device control actions to be
			 * executed.
			 */
			IEC61968::Metering::RandomisationKind randomisation = IEC61968::Metering::RandomisationKind::_undef;

		};

	}

}
#endif // ENDDEVICETIMING_H
