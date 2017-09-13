///////////////////////////////////////////////////////////
//  Accumulator.h
//  Implementation of the Class Accumulator
///////////////////////////////////////////////////////////

#ifndef ACCUMULATOR_H
#define ACCUMULATOR_H

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
#endif // ACCUMULATOR_H
