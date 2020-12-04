///////////////////////////////////////////////////////////
//  Analog.h
//  Implementation of the Class Analog
///////////////////////////////////////////////////////////

#ifndef ANALOG_H
#define ANALOG_H

#include <list>

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Meas/AnalogValue.h"
#include "IEC61970/Base/Meas/Measurement.h"
#include "IEC61970/Base/Meas/AnalogLimitSet.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Analog represents an analog Measurement.
			 */
			class Analog : public IEC61970::Base::Meas::Measurement
			{

			public:
				Analog();
				virtual ~Analog();
				/**
				 * Normal value range maximum for any of the MeasurementValue.values. Used for
				 * scaling, e.g. in bar graphs or of telemetered raw values.
				 */
				IEC61970::Base::Domain::Float maxValue;
				/**
				 * Normal value range minimum for any of the MeasurementValue.values. Used for
				 * scaling, e.g. in bar graphs or of telemetered raw values.
				 */
				IEC61970::Base::Domain::Float minValue;
				/**
				 * Normal measurement value, e.g., used for percentage calculations.
				 */
				IEC61970::Base::Domain::Float normalValue;
				/**
				 * If true then this measurement is an active power, reactive power or current
				 * with the convention that a positive value measured at the Terminal means power
				 * is flowing into the related PowerSystemResource.
				 */
				IEC61970::Base::Domain::Boolean positiveFlowIn;
				/**
				 * The values connected to this measurement.
				 */
				std::list<IEC61970::Base::Meas::AnalogValue*> AnalogValues;
				/**
				 * A measurement may have zero or more limit ranges defined for it.
				 */
				std::list<IEC61970::Base::Meas::AnalogLimitSet*> LimitSets;

			};

		}

	}

}
#endif // ANALOG_H
