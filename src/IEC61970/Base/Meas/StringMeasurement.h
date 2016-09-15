///////////////////////////////////////////////////////////
//  StringMeasurement.h
//  Implementation of the Class StringMeasurement
//  Created on:      28-Jan-2016 12:46:50
///////////////////////////////////////////////////////////

#if !defined(EA_FC188193_3F0C_4976_A47D_5C996D93E44E__INCLUDED_)
#define EA_FC188193_3F0C_4976_A47D_5C996D93E44E__INCLUDED_

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
#endif // !defined(EA_FC188193_3F0C_4976_A47D_5C996D93E44E__INCLUDED_)
