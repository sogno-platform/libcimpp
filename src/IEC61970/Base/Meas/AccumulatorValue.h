///////////////////////////////////////////////////////////
//  AccumulatorValue.h
//  Implementation of the Class AccumulatorValue
//  Created on:      28-Jan-2016 12:43:10
///////////////////////////////////////////////////////////

#if !defined(EA_09F73FD0_4EE2_46ce_A9E1_7D201C90B77A__INCLUDED_)
#define EA_09F73FD0_4EE2_46ce_A9E1_7D201C90B77A__INCLUDED_

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
#endif // !defined(EA_09F73FD0_4EE2_46ce_A9E1_7D201C90B77A__INCLUDED_)
