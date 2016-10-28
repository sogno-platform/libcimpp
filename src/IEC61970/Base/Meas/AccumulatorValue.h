///////////////////////////////////////////////////////////
//  AccumulatorValue.h
//  Implementation of the Class AccumulatorValue
///////////////////////////////////////////////////////////

#ifndef ACCUMULATORVALUE_H
#define ACCUMULATORVALUE_H

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Meas/MeasurementValue.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * AccumulatorValue represents an accumulated (counted) MeasurementValue.
			 */
			class AccumulatorValue : public IEC61970::Base::Meas::MeasurementValue
			{

			public:
				AccumulatorValue();
				virtual ~AccumulatorValue();
				/**
				 * The value to supervise. The value is positive.
				 */
				IEC61970::Base::Domain::Integer value;

			};

		}

	}

}
#endif // ACCUMULATORVALUE_H
