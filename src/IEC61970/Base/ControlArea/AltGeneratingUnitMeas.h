///////////////////////////////////////////////////////////
//  AltGeneratingUnitMeas.h
//  Implementation of the Class AltGeneratingUnitMeas
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef ALTGENERATINGUNITMEAS_H
#define ALTGENERATINGUNITMEAS_H

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
#endif // ALTGENERATINGUNITMEAS_H
