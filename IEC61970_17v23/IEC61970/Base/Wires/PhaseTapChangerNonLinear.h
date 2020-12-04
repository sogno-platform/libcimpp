///////////////////////////////////////////////////////////
//  PhaseTapChangerNonLinear.h
//  Implementation of the Class PhaseTapChangerNonLinear
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef PHASETAPCHANGERNONLINEAR_H
#define PHASETAPCHANGERNONLINEAR_H

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Wires/PhaseTapChanger.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * The non-linear phase tap changer describes the non-linear behavior of a phase
			 * tap changer. This is a base class for the symmetrical and asymmetrical phase
			 * tap changer models. The details of these models can be found in the IEC 61970-
			 * 301 document.
			 */
			class PhaseTapChangerNonLinear : public IEC61970::Base::Wires::PhaseTapChanger
			{

			public:
				PhaseTapChangerNonLinear();
				virtual ~PhaseTapChangerNonLinear();
				/**
				 * The voltage step increment on the out of phase winding specified in percent of
				 * neutral voltage of the tap changer.
				 */
				IEC61970::Base::Domain::PerCent voltageStepIncrement;
				/**
				 * The reactance depend on the tap position according to a "u" shaped curve. The
				 * maximum reactance (xMax) appear at the low and high tap positions.
				 */
				IEC61970::Base::Domain::Reactance xMax;
				/**
				 * The reactance depend on the tap position according to a "u" shaped curve. The
				 * minimum reactance (xMin) appear at the mid tap position.
				 */
				IEC61970::Base::Domain::Reactance xMin;

			};

		}

	}

}
#endif // PHASETAPCHANGERNONLINEAR_H
