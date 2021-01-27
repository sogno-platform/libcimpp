///////////////////////////////////////////////////////////
//  MeterReading.h
//  Implementation of the Class MeterReading
///////////////////////////////////////////////////////////

#ifndef METERREADING_H
#define METERREADING_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/Metering/UsagePoint.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Metering/EndDeviceEvent.h"
#include "IEC61968/Customers/CustomerAgreement.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Set of values obtained from the meter.
		 */
		class MeterReading : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			MeterReading();
			virtual ~MeterReading();
			/**
			 * If true, this meter reading is the meter reading for which other coincident
			 * meter readings are requested or provided.
			 */
			IEC61970::Base::Domain::Boolean isCoincidentTrigger;
			/**
			 * Date and time interval of the data items contained within this meter reading.
			 */
			IEC61970::Base::Domain::DateTimeInterval valuesInterval;
			/**
			 * Usage point from which this meter reading (set of values) has been obtained.
			 */
			IEC61968::Metering::UsagePoint *UsagePoint;
			/**
			 * All end device events associated with this set of measured values.
			 */
			std::list<IEC61968::Metering::EndDeviceEvent*> EndDeviceEvents;
			/**
			 * (could be deprecated in the future) Customer agreement for this meter reading.
			 */
			IEC61968::Customers::CustomerAgreement *CustomerAgreement;

		};

	}

}
#endif // METERREADING_H
