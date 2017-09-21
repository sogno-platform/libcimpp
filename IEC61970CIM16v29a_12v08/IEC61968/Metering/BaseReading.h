///////////////////////////////////////////////////////////
//  BaseReading.h
//  Implementation of the Class BaseReading
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef BASEREADING_H
#define BASEREADING_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61970/Base/Meas/MeasurementValue.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Common representation for reading values. Note that a reading value may have
		 * multiple qualities, as produced by various systems ('ReadingQuality.source').
		 */
		class BaseReading : public IEC61970::Base::Meas::MeasurementValue
		{

		public:
			BaseReading();
			virtual ~BaseReading();
			/**
			 * (used only when there are detailed auditing requirements) Date and time at
			 * which the reading was first delivered to the metering system.
			 */
			IEC61970::Base::Domain::DateTime reportedDateTime;
			/**
			 * System that originally supplied the reading (e.g., customer, AMI system,
			 * handheld reading system, another enterprise system, etc.).
			 */
			IEC61970::Base::Domain::String source;
			/**
			 * Start and end of the period for those readings whose type has a time attribute
			 * such as 'billing', seasonal' or 'forTheSpecifiedPeriod'.
			 */
			IEC61970::Base::Domain::DateTimeInterval timePeriod;
			/**
			 * Value of this reading.
			 */
			IEC61970::Base::Domain::String value;

		};

	}

}
#endif // BASEREADING_H
