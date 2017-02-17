///////////////////////////////////////////////////////////
//  AltTieMeas.h
//  Implementation of the Class AltTieMeas
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef ALTTIEMEAS_H
#define ALTTIEMEAS_H

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
#endif // ALTTIEMEAS_H
