///////////////////////////////////////////////////////////
//  SetPoint.h
//  Implementation of the Class SetPoint
//  Created on:      28-Jan-2016 12:46:40
///////////////////////////////////////////////////////////

#if !defined(EA_24C25AFC_59B4_4a74_9B54_6D157D75376C__INCLUDED_)
#define EA_24C25AFC_59B4_4a74_9B54_6D157D75376C__INCLUDED_

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
#endif // !defined(EA_24C25AFC_59B4_4a74_9B54_6D157D75376C__INCLUDED_)
