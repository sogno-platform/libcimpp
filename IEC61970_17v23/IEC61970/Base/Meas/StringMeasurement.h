///////////////////////////////////////////////////////////
//  StringMeasurement.h
//  Implementation of the Class StringMeasurement
///////////////////////////////////////////////////////////

#ifndef STRINGMEASUREMENT_H
#define STRINGMEASUREMENT_H

#include "IEC61970/Base/Meas/Measurement.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * StringMeasurement represents a measurement with values of type string.
			 */
			class StringMeasurement : public IEC61970::Base::Meas::Measurement
			{

			public:
				StringMeasurement();
				virtual ~StringMeasurement();

			};

		}

	}

}
#endif // STRINGMEASUREMENT_H
