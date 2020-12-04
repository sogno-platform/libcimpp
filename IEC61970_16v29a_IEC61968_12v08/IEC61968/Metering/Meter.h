///////////////////////////////////////////////////////////
//  Meter.h
//  Implementation of the Class Meter
///////////////////////////////////////////////////////////

#ifndef METER_H
#define METER_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Metering/MeterReading.h"
#include "IEC61968/Metering/MeterMultiplier.h"
#include "IEC61968/Metering/EndDevice.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Physical asset that performs the metering role of the usage point. Used for
		 * measuring consumption and detection of events.
		 */
		class Meter : public IEC61968::Metering::EndDevice
		{

		public:
			Meter();
			virtual ~Meter();
			/**
			 * Meter form designation per ANSI C12.10 or other applicable standard. An
			 * alphanumeric designation denoting the circuit arrangement for which the meter
			 * is applicable and its specific terminal arrangement.
			 */
			IEC61970::Base::Domain::String formNumber;
			/**
			 * All meter readings provided by this meter.
			 */
			std::list<IEC61968::Metering::MeterReading*> MeterReadings;
			/**
			 * All multipliers applied at this meter.
			 */
			std::list<IEC61968::Metering::MeterMultiplier*> MeterMultipliers;

		};

	}

}
#endif // METER_H
