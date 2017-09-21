///////////////////////////////////////////////////////////
//  StringMeasurementValue.h
//  Implementation of the Class StringMeasurementValue
///////////////////////////////////////////////////////////

#ifndef STRINGMEASUREMENTVALUE_H
#define STRINGMEASUREMENTVALUE_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Meas/MeasurementValue.h"
#include "IEC61970/Base/Meas/StringMeasurement.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * StringMeasurementValue represents a measurement value of type string.
			 */
			class StringMeasurementValue : public IEC61970::Base::Meas::MeasurementValue
			{

			public:
				StringMeasurementValue();
				virtual ~StringMeasurementValue();
				/**
				 * The value to supervise.
				 */
				IEC61970::Base::Domain::String value;
				/**
				 * Measurement to which this value is connected.
				 */
				IEC61970::Base::Meas::StringMeasurement *StringMeasurement;

			};

		}

	}

}
#endif // STRINGMEASUREMENTVALUE_H
