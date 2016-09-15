///////////////////////////////////////////////////////////
//  AnalogLimit.h
//  Implementation of the Class AnalogLimit
//  Created on:      28-Jan-2016 12:43:18
///////////////////////////////////////////////////////////

#if !defined(EA_5F2569AE_911B_479c_B7D5_EFAEA7220C06__INCLUDED_)
#define EA_5F2569AE_911B_479c_B7D5_EFAEA7220C06__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Meas/Limit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Limit values for Analog measurements.
			 */
			class AnalogLimit : public IEC61970::Base::Meas::Limit
			{

			public:
				AnalogLimit();
				virtual ~AnalogLimit();
				/**
				 * The value to supervise against.
				 */
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_5F2569AE_911B_479c_B7D5_EFAEA7220C06__INCLUDED_)
