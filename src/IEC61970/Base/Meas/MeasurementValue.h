///////////////////////////////////////////////////////////
//  MeasurementValue.h
//  Implementation of the Class MeasurementValue
///////////////////////////////////////////////////////////

#ifndef MEASUREMENTVALUE_H
#define MEASUREMENTVALUE_H

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/SCADA/RemoteSource.h"
#include "IEC61970/Base/Meas/MeasurementValueQuality.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * The current state for a measurement. A state value is an instance of a
			 * measurement from a specific source. Measurements can be associated with many
			 * state values, each representing a different source for the measurement.
			 */
			class MeasurementValue : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				MeasurementValue();
				virtual ~MeasurementValue();
				/**
				 * The limit, expressed as a percentage of the sensor maximum, that errors will
				 * not exceed when the sensor is used under  reference conditions.
				 */
				IEC61970::Base::Domain::PerCent sensorAccuracy;
				/**
				 * The time when the value was last updated
				 */
				IEC61970::Base::Domain::DateTime timeStamp;
				/**
				 * Link to the physical telemetered point associated with this measurement.
				 */
				IEC61970::Base::SCADA::RemoteSource *RemoteSource;
				/**
				 * A MeasurementValue has a MeasurementValueQuality associated with it.
				 */
				IEC61970::Base::Meas::MeasurementValueQuality *MeasurementValueQuality;

			};

		}

	}

}
#endif // MEASUREMENTVALUE_H
