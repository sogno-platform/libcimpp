///////////////////////////////////////////////////////////
//  PhaseTapChangerLinear.h
//  Implementation of the Class PhaseTapChangerLinear
//  Created on:      28-Jan-2016 12:46:04
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_47CCB12B_25DC_4d16_A7F0_59036CF73BC7__INCLUDED_)
#define EA_47CCB12B_25DC_4d16_A7F0_59036CF73BC7__INCLUDED_

#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Wires/PhaseTapChanger.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Describes a tap changer with a linear relation between the tap step and the
			 * phase angle difference across the transformer. This is a mathematical model
			 * that is an approximation of a real phase tap changer.
			 * The phase angle is computed as stepPhaseShitfIncrement times the tap position.
			 * The secondary side voltage magnitude is the same as at the primary side.
			 */
			class PhaseTapChangerLinear : public IEC61970::Base::Wires::PhaseTapChanger
			{

			public:
				PhaseTapChangerLinear();
				virtual ~PhaseTapChangerLinear();
				/**
				 * Phase shift per step position. A positive value indicates a positive phase
				 * shift from the winding where the tap is located to the other winding (for a two-
				 * winding transformer).
				 * The actual phase shift increment might be more accurately computed from the
				 * symmetrical or asymmetrical models or a tap step table lookup if those are
				 * available.
				 */
				IEC61970::Base::Domain::AngleDegrees stepPhaseShiftIncrement;
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
#endif // !defined(EA_47CCB12B_25DC_4d16_A7F0_59036CF73BC7__INCLUDED_)
