///////////////////////////////////////////////////////////
//  AccumulatorLimit.h
//  Implementation of the Class AccumulatorLimit
///////////////////////////////////////////////////////////

#ifndef ACCUMULATORLIMIT_H
#define ACCUMULATORLIMIT_H

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Meas/Limit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Limit values for Accumulator measurements.
			 */
			class AccumulatorLimit : public IEC61970::Base::Meas::Limit
			{

			public:
				AccumulatorLimit();
				virtual ~AccumulatorLimit();
				/**
				 * The value to supervise against. The value is positive.
				 */
				IEC61970::Base::Domain::Integer value;

			};

		}

	}

}
#endif // ACCUMULATORLIMIT_H
