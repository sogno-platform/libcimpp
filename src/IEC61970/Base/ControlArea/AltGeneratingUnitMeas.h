///////////////////////////////////////////////////////////
//  AltGeneratingUnitMeas.h
//  Implementation of the Class AltGeneratingUnitMeas
//  Created on:      28-Jan-2016 12:43:16
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_A312B16B_BFF5_47c1_9FD3_B87D03B302D0__INCLUDED_)
#define EA_A312B16B_BFF5_47c1_9FD3_B87D03B302D0__INCLUDED_

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Meas/AnalogValue.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ControlArea
		{
			/**
			 * A prioritized measurement to be used for the generating unit in the control
			 * area specificaiton.
			 */
			class AltGeneratingUnitMeas : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				AltGeneratingUnitMeas();
				virtual ~AltGeneratingUnitMeas();
				/**
				 * Priority of a measurement usage.   Lower numbers have first priority.
				 */
				IEC61970::Base::Domain::Integer priority;
				/**
				 * The specific analog value used as a source.
				 */
				IEC61970::Base::Meas::AnalogValue *AnalogValue;

			};

		}

	}

}
#endif // !defined(EA_A312B16B_BFF5_47c1_9FD3_B87D03B302D0__INCLUDED_)
