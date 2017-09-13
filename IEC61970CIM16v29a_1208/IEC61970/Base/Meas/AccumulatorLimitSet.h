///////////////////////////////////////////////////////////
//  AccumulatorLimitSet.h
//  Implementation of the Class AccumulatorLimitSet
///////////////////////////////////////////////////////////

#ifndef ACCUMULATORLIMITSET_H
#define ACCUMULATORLIMITSET_H

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
#endif // ACCUMULATORLIMITSET_H
