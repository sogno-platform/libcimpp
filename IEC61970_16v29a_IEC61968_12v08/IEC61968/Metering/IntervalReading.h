///////////////////////////////////////////////////////////
//  IntervalReading.h
//  Implementation of the Class IntervalReading
///////////////////////////////////////////////////////////

#ifndef INTERVALREADING_H
#define INTERVALREADING_H

#include "IEC61968/Metering/BaseReading.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Data captured at regular intervals of time. Interval data could be captured as
		 * incremental data, absolute data, or relative data. The source for the data is
		 * usually a tariff quantity or an engineering quantity. Data is typically
		 * captured in time-tagged, uniform, fixed-length intervals of 5 min, 10 min, 15
		 * min, 30 min, or 60 min.
		 * Note: Interval Data is sometimes also called "Interval Data Readings" (IDR).
		 */
		class IntervalReading : public IEC61968::Metering::BaseReading
		{

		public:
			IntervalReading();
			virtual ~IntervalReading();

		};

	}

}
#endif // INTERVALREADING_H
