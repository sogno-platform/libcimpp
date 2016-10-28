///////////////////////////////////////////////////////////
//  AnalogControl.h
//  Implementation of the Class AnalogControl
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef ANALOGCONTROL_H
#define ANALOGCONTROL_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Meas/Control.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * An analog control used for supervisory control.
			 */
			class AnalogControl : public IEC61970::Base::Meas::Control
			{

			public:
				AnalogControl();
				virtual ~AnalogControl();
				/**
				 * Normal value range maximum for any of the Control.value. Used for scaling, e.g.
				 * in bar graphs.
				 */
				IEC61970::Base::Domain::Float maxValue;
				/**
				 * Normal value range minimum for any of the Control.value. Used for scaling, e.g.
				 * in bar graphs.
				 */
				IEC61970::Base::Domain::Float minValue;

			};

		}

	}

}
#endif // ANALOGCONTROL_H
