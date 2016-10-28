///////////////////////////////////////////////////////////
//  Discrete.h
//  Implementation of the Class Discrete
///////////////////////////////////////////////////////////

#ifndef DISCRETE_H
#define DISCRETE_H

#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Meas/Measurement.h"
#include "IEC61970/Base/Meas/DiscreteValue.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Discrete represents a discrete Measurement, i.e. a Measurement representing
			 * discrete values, e.g. a Breaker position.
			 */
			class Discrete : public IEC61970::Base::Meas::Measurement
			{

			public:
				Discrete();
				virtual ~Discrete();
				/**
				 * Normal value range maximum for any of the MeasurementValue.values. Used for
				 * scaling, e.g. in bar graphs or of telemetered raw values.
				 */
				IEC61970::Base::Domain::Integer maxValue;
				/**
				 * Normal value range minimum for any of the MeasurementValue.values. Used for
				 * scaling, e.g. in bar graphs or of telemetered raw values.
				 */
				IEC61970::Base::Domain::Integer minValue;
				/**
				 * Normal measurement value, e.g., used for percentage calculations.
				 */
				IEC61970::Base::Domain::Integer normalValue;
				/**
				 * The values connected to this measurement.
				 */
				std::list<IEC61970::Base::Meas::DiscreteValue*> DiscreteValues;

			};

		}

	}

}
#endif // DISCRETE_H
