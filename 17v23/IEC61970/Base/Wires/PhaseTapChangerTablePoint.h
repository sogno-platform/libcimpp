///////////////////////////////////////////////////////////
//  PhaseTapChangerTablePoint.h
//  Implementation of the Class PhaseTapChangerTablePoint
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef PHASETAPCHANGERTABLEPOINT_H
#define PHASETAPCHANGERTABLEPOINT_H

#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61970/Base/Wires/PhaseTapChangerTable.h"
#include "IEC61970/Base/Wires/TapChangerTablePoint.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Describes each tap step in the phase tap changer tabular curve.
			 */
			class PhaseTapChangerTablePoint : public IEC61970::Base::Wires::TapChangerTablePoint
			{

			public:
				PhaseTapChangerTablePoint();
				virtual ~PhaseTapChangerTablePoint();
				/**
				 * The angle difference in degrees. A positive value indicates a positive phase
				 * shift from the winding where the tap is located to the other winding (for a two-
				 * winding transformer).
				 */
				IEC61970::Base::Domain::AngleDegrees angle;
				/**
				 * The table of this point.
				 */
				IEC61970::Base::Wires::PhaseTapChangerTable *PhaseTapChangerTable;

			};

		}

	}

}
#endif // PHASETAPCHANGERTABLEPOINT_H
