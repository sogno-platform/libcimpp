///////////////////////////////////////////////////////////
//  AnalogValue.h
//  Implementation of the Class AnalogValue
//  Created on:      28-Jan-2016 12:43:20
///////////////////////////////////////////////////////////

#if !defined(EA_519E6BA0_101F_4c45_992E_6DBBDB4070EE__INCLUDED_)
#define EA_519E6BA0_101F_4c45_992E_6DBBDB4070EE__INCLUDED_

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
#endif // !defined(EA_519E6BA0_101F_4c45_992E_6DBBDB4070EE__INCLUDED_)
