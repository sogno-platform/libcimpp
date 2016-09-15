///////////////////////////////////////////////////////////
//  AltTieMeas.h
//  Implementation of the Class AltTieMeas
//  Created on:      28-Jan-2016 12:43:17
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_AA372C0F_4587_4ee3_94E1_05C89890C410__INCLUDED_)
#define EA_AA372C0F_4587_4ee3_94E1_05C89890C410__INCLUDED_

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
			 * A prioritized measurement to be used for the tie flow as part of the control
			 * area specification.
			 */
			class AltTieMeas : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				AltTieMeas();
				virtual ~AltTieMeas();
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
#endif // !defined(EA_AA372C0F_4587_4ee3_94E1_05C89890C410__INCLUDED_)
