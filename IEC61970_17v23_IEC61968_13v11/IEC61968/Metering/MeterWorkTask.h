///////////////////////////////////////////////////////////
//  MeterWorkTask.h
//  Implementation of the Class MeterWorkTask
///////////////////////////////////////////////////////////

#ifndef METERWORKTASK_H
#define METERWORKTASK_H

#include "IEC61968/Metering/UsagePoint.h"
#include "IEC61968/Metering/Meter.h"
#include "IEC61968/Work/WorkTask.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Work task involving meters.
		 */
		class MeterWorkTask : public IEC61968::Work::WorkTask
		{

		public:
			MeterWorkTask();
			virtual ~MeterWorkTask();
			/**
			 * Usage point to which this meter service work task applies.
			 */
			IEC61968::Metering::UsagePoint *UsagePoint;
			/**
			 * Meter on which this non-replacement work task is performed.
			 */
			IEC61968::Metering::Meter *Meter;
			/**
			 * Old meter replaced by this work task.
			 */
			IEC61968::Metering::Meter *OldMeter;

		};

	}

}
#endif // METERWORKTASK_H
