///////////////////////////////////////////////////////////
//  Accumulator.h
//  Implementation of the Class Accumulator
//  Created on:      28-Jan-2016 12:43:08
///////////////////////////////////////////////////////////

#if !defined(EA_26C0AA0B_40A9_4870_8138_8245B4136A39__INCLUDED_)
#define EA_26C0AA0B_40A9_4870_8138_8245B4136A39__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Meas/AccumulatorValue.h"
#include "IEC61970/Base/Meas/Measurement.h"
#include "IEC61970/Base/Meas/AccumulatorLimitSet.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Accumulator represents an accumulated (counted) Measurement, e.g. an energy
			 * value.
			 */
			class Accumulator : public IEC61970::Base::Meas::Measurement
			{

			public:
				Accumulator();
				virtual ~Accumulator();
				/**
				 * Normal value range maximum for any of the MeasurementValue.values. Used for
				 * scaling, e.g. in bar graphs or of telemetered raw values.
				 */
				IEC61970::Base::Domain::Integer maxValue;
				/**
				 * The values connected to this measurement.
				 */
				std::list<IEC61970::Base::Meas::AccumulatorValue*> AccumulatorValues;
				/**
				 * A measurement may have zero or more limit ranges defined for it.
				 */
				std::list<IEC61970::Base::Meas::AccumulatorLimitSet*> LimitSets;

			};

		}

	}

}
#endif // !defined(EA_26C0AA0B_40A9_4870_8138_8245B4136A39__INCLUDED_)
