///////////////////////////////////////////////////////////
//  IntervalBlock.h
//  Implementation of the Class IntervalBlock
///////////////////////////////////////////////////////////

#ifndef INTERVALBLOCK_H
#define INTERVALBLOCK_H

#include "BaseClass.h"
#include <list>

#include "IEC61968/Metering/PendingCalculation.h"
#include "IEC61968/Metering/ReadingType.h"
#include "IEC61968/Metering/MeterReading.h"
#include "IEC61968/Metering/IntervalReading.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Time sequence of readings of the same reading type. Contained interval readings
		 * may need conversion through the application of an offset and a scalar defined
		 * in associated pending.
		 */
		class IntervalBlock : public BaseClass
		{

		public:
			IntervalBlock();
			virtual ~IntervalBlock();
			/**
			 * Pending calculation to apply to interval reading values contained by this block
			 * (after which the resulting reading type is different than the original because
			 * it reflects the conversion result).
			 */
			IEC61968::Metering::PendingCalculation *PendingCalculation;
			/**
			 * Type information for interval reading values contained in this block.
			 */
			IEC61968::Metering::ReadingType *ReadingType;
			/**
			 * Meter reading containing this interval block.
			 */
			IEC61968::Metering::MeterReading *MeterReading;
			/**
			 * Interval reading contained in this block.
			 */
			std::list<IEC61968::Metering::IntervalReading*> IntervalReadings;

		};

	}

}
#endif // INTERVALBLOCK_H
