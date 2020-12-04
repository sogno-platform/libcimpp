///////////////////////////////////////////////////////////
//  Reading.h
//  Implementation of the Class Reading
///////////////////////////////////////////////////////////

#ifndef READING_H
#define READING_H

#include <list>

#include "IEC61968/Metering/ReadingReasonKind.h"
#include "IEC61968/Metering/ReadingType.h"
#include "IEC61968/Metering/BaseReading.h"
#include "IEC61968/Metering/MeterReading.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Specific value measured by a meter or other asset, or calculated by a system.
		 * Each Reading is associated with a specific ReadingType.
		 */
		class Reading : public IEC61968::Metering::BaseReading
		{

		public:
			Reading();
			virtual ~Reading();
			/**
			 * Reason for this reading being taken.
			 */
			IEC61968::Metering::ReadingReasonKind reason = IEC61968::Metering::ReadingReasonKind::_undef;
			/**
			 * Type information for this reading value.
			 */
			IEC61968::Metering::ReadingType *ReadingType;
			/**
			 * All meter readings (sets of values) containing this reading value.
			 */
			std::list<IEC61968::Metering::MeterReading*> MeterReadings;

		};

	}

}
#endif // READING_H
