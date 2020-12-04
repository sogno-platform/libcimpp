///////////////////////////////////////////////////////////
//  MeterServiceWork.h
//  Implementation of the Class MeterServiceWork
///////////////////////////////////////////////////////////

#ifndef METERSERVICEWORK_H
#define METERSERVICEWORK_H

#include "IEC61968/Metering/UsagePoint.h"
#include "IEC61968/Work/Work.h"
#include "IEC61968/Metering/Meter.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Work involving meters.
		 */
		class MeterServiceWork : public IEC61968::Work::Work
		{

		public:
			MeterServiceWork();
			virtual ~MeterServiceWork();
			/**
			 * Usage point to which this meter service work applies.
			 */
			IEC61968::Metering::UsagePoint *UsagePoint;
			/**
			 * Meter on which this non-replacement work is performed.
			 */
			IEC61968::Metering::Meter *Meter;
			/**
			 * Old meter replaced by this work.
			 */
			IEC61968::Metering::Meter *OldMeter;

		};

	}

}
#endif // METERSERVICEWORK_H
