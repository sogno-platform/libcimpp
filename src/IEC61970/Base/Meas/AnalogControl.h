///////////////////////////////////////////////////////////
//  AnalogControl.h
//  Implementation of the Class AnalogControl
//  Created on:      28-Jan-2016 12:43:18
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_9BEA6545_0C6A_4495_A769_9CBE5D40B4C6__INCLUDED_)
#define EA_9BEA6545_0C6A_4495_A769_9CBE5D40B4C6__INCLUDED_

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
#endif // !defined(EA_9BEA6545_0C6A_4495_A769_9CBE5D40B4C6__INCLUDED_)
