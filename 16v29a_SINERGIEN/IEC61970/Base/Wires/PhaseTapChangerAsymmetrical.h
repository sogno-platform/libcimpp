///////////////////////////////////////////////////////////
//  PhaseTapChangerAsymmetrical.h
//  Implementation of the Class PhaseTapChangerAsymmetrical
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef PHASETAPCHANGERASYMMETRICAL_H
#define PHASETAPCHANGERASYMMETRICAL_H

#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61970/Base/Wires/PhaseTapChangerNonLinear.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Describes the tap model for an asymmetrical phase shifting transformer in which
			 * the difference voltage vector adds to the primary side voltage. The angle
			 * between the primary side voltage and the difference voltage is named the
			 * winding connection angle. The phase shift depends on both the difference
			 * voltage magnitude and the winding connection angle.
			 */
			class PhaseTapChangerAsymmetrical : public IEC61970::Base::Wires::PhaseTapChangerNonLinear
			{

			public:
				PhaseTapChangerAsymmetrical();
				virtual ~PhaseTapChangerAsymmetrical();
				/**
				 * The phase angle between the in-phase winding and the out-of -phase winding used
				 * for creating phase shift. The out-of-phase winding produces what is known as
				 * the difference voltage.  Setting this angle to 90 degrees is not the same as a
				 * symmemtrical transformer.
				 */
				IEC61970::Base::Domain::AngleDegrees windingConnectionAngle;

			};

		}

	}

}
#endif // PHASETAPCHANGERASYMMETRICAL_H
