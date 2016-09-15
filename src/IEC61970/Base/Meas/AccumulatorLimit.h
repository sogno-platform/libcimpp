///////////////////////////////////////////////////////////
//  AccumulatorLimit.h
//  Implementation of the Class AccumulatorLimit
//  Created on:      28-Jan-2016 12:43:09
///////////////////////////////////////////////////////////

#if !defined(EA_624D105C_0427_4dc8_AEA6_0C210D6CC308__INCLUDED_)
#define EA_624D105C_0427_4dc8_AEA6_0C210D6CC308__INCLUDED_

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
#endif // !defined(EA_624D105C_0427_4dc8_AEA6_0C210D6CC308__INCLUDED_)
