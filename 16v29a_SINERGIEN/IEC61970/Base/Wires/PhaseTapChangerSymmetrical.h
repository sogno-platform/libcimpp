///////////////////////////////////////////////////////////
//  PhaseTapChangerSymmetrical.h
//  Implementation of the Class PhaseTapChangerSymmetrical
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef PHASETAPCHANGERSYMMETRICAL_H
#define PHASETAPCHANGERSYMMETRICAL_H

#include "IEC61970/Base/Wires/PhaseTapChangerNonLinear.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Describes a symmetrical phase shifting transformer tap model in which the
			 * secondary side voltage magnitude is the same as at the primary side. The
			 * difference voltage magnitude is the base in an equal-sided triangle where the
			 * sides corresponds to the primary and secondary voltages. The phase angle
			 * difference corresponds to the top angle and can be expressed as twice the
			 * arctangent of half the total difference voltage.
			 */
			class PhaseTapChangerSymmetrical : public IEC61970::Base::Wires::PhaseTapChangerNonLinear
			{

			public:
				PhaseTapChangerSymmetrical();
				virtual ~PhaseTapChangerSymmetrical();

			};

		}

	}

}
#endif // PHASETAPCHANGERSYMMETRICAL_H
