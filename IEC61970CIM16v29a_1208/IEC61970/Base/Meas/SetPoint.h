///////////////////////////////////////////////////////////
//  SetPoint.h
//  Implementation of the Class SetPoint
///////////////////////////////////////////////////////////

#ifndef SETPOINT_H
#define SETPOINT_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Meas/AnalogControl.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * An analog control that issue a set point value.
			 */
			class SetPoint : public IEC61970::Base::Meas::AnalogControl
			{

			public:
				SetPoint();
				virtual ~SetPoint();
				/**
				 * Normal value for Control.value e.g. used for percentage scaling.
				 */
				IEC61970::Base::Domain::Float normalValue;
				/**
				 * The value representing the actuator output.
				 */
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // SETPOINT_H
