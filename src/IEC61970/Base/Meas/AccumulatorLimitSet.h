///////////////////////////////////////////////////////////
//  AccumulatorLimitSet.h
//  Implementation of the Class AccumulatorLimitSet
//  Created on:      28-Jan-2016 12:43:09
///////////////////////////////////////////////////////////

#if !defined(EA_58CC1AB0_DBD3_4f26_8D2B_F4377545FD99__INCLUDED_)
#define EA_58CC1AB0_DBD3_4f26_8D2B_F4377545FD99__INCLUDED_

#include <list>

#include "IEC61970/Base/Meas/AccumulatorLimit.h"
#include "IEC61970/Base/Meas/LimitSet.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * An AccumulatorLimitSet specifies a set of Limits that are associated with an
			 * Accumulator measurement.
			 */
			class AccumulatorLimitSet : public IEC61970::Base::Meas::LimitSet
			{

			public:
				AccumulatorLimitSet();
				virtual ~AccumulatorLimitSet();
				/**
				 * The limit values used for supervision of Measurements.
				 */
				std::list<IEC61970::Base::Meas::AccumulatorLimit*> Limits;

			};

		}

	}

}
#endif // !defined(EA_58CC1AB0_DBD3_4f26_8D2B_F4377545FD99__INCLUDED_)
