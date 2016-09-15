///////////////////////////////////////////////////////////
//  RatioTapChangerTablePoint.h
//  Implementation of the Class RatioTapChangerTablePoint
//  Created on:      28-Jan-2016 12:46:25
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_8EE4D94D_88B9_4536_B852_2637A8803011__INCLUDED_)
#define EA_8EE4D94D_88B9_4536_B852_2637A8803011__INCLUDED_

#include "IEC61970/Base/Wires/RatioTapChangerTable.h"
#include "IEC61970/Base/Wires/TapChangerTablePoint.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Describes each tap step in the ratio tap changer tabular curve.
			 */
			class RatioTapChangerTablePoint : public IEC61970::Base::Wires::TapChangerTablePoint
			{

			public:
				RatioTapChangerTablePoint();
				virtual ~RatioTapChangerTablePoint();
				/**
				 * Table of this point.
				 */
				IEC61970::Base::Wires::RatioTapChangerTable *RatioTapChangerTable;

			};

		}

	}

}
#endif // !defined(EA_8EE4D94D_88B9_4536_B852_2637A8803011__INCLUDED_)
