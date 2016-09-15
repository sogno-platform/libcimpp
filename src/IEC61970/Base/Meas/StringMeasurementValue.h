///////////////////////////////////////////////////////////
//  StringMeasurementValue.h
//  Implementation of the Class StringMeasurementValue
//  Created on:      28-Jan-2016 12:46:50
///////////////////////////////////////////////////////////

#if !defined(EA_E208B51A_A234_4e1c_9316_89E3D0ED3586__INCLUDED_)
#define EA_E208B51A_A234_4e1c_9316_89E3D0ED3586__INCLUDED_

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
#endif // !defined(EA_E208B51A_A234_4e1c_9316_89E3D0ED3586__INCLUDED_)
