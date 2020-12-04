///////////////////////////////////////////////////////////
//  AnalogValue.h
//  Implementation of the Class AnalogValue
///////////////////////////////////////////////////////////

#ifndef ANALOGVALUE_H
#define ANALOGVALUE_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Meas/MeasurementValue.h"
#include "IEC61970/Base/Meas/AnalogControl.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * AnalogValue represents an analog MeasurementValue.
			 */
			class AnalogValue : public IEC61970::Base::Meas::MeasurementValue
			{

			public:
				AnalogValue();
				virtual ~AnalogValue();
				/**
				 * The value to supervise.
				 */
				IEC61970::Base::Domain::Float value;
				/**
				 * The Control variable associated with the MeasurementValue.
				 */
				IEC61970::Base::Meas::AnalogControl *AnalogControl;

			};

		}

	}

}
#endif // ANALOGVALUE_H
