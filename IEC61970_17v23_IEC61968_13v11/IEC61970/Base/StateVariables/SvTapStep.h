///////////////////////////////////////////////////////////
//  SvTapStep.h
//  Implementation of the Class SvTapStep
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef SVTAPSTEP_H
#define SVTAPSTEP_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/StateVariables/StateVariable.h"
#include "IEC61970/Base/Wires/TapChanger.h"

namespace IEC61970
{
	namespace Base
	{
		namespace StateVariables
		{
			/**
			 * State variable for transformer tap step. 
			 */
			class SvTapStep : public IEC61970::Base::StateVariables::StateVariable
			{

			public:
				SvTapStep();
				virtual ~SvTapStep();
				/**
				 * The floating point tap position.   This is not the tap ratio, but rather the
				 * tap step position as defined by the related tap changer model and normally is
				 * constrained to be within the range of minimum and maximum tap positions.
				 */
				IEC61970::Base::Domain::Float position;
				/**
				 * The tap changer associated with the tap step state.
				 */
				IEC61970::Base::Wires::TapChanger *TapChanger;

			};

		}

	}

}
#endif // SVTAPSTEP_H
