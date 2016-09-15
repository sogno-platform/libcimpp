///////////////////////////////////////////////////////////
//  PhaseTapChangerTablePoint.h
//  Implementation of the Class PhaseTapChangerTablePoint
//  Created on:      28-Jan-2016 12:46:05
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_9DDC220F_BCAC_4bf5_801B_AFD7A1186732__INCLUDED_)
#define EA_9DDC220F_BCAC_4bf5_801B_AFD7A1186732__INCLUDED_

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
				 * The angle difference in degrees.
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
#endif // !defined(EA_9DDC220F_BCAC_4bf5_801B_AFD7A1186732__INCLUDED_)
