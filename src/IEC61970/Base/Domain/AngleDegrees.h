///////////////////////////////////////////////////////////
//  AngleDegrees.h
//  Implementation of the Class AngleDegrees
//  Created on:      28-Jan-2016 12:43:20
///////////////////////////////////////////////////////////

#if !defined(EA_FEC44135_8AE5_41ba_835D_E0BD99BB5F8C__INCLUDED_)
#define EA_FEC44135_8AE5_41ba_835D_E0BD99BB5F8C__INCLUDED_

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Measurement of angle in degrees.
			 */
			class AngleDegrees
			{

			public:
				AngleDegrees();
				virtual ~AngleDegrees();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_FEC44135_8AE5_41ba_835D_E0BD99BB5F8C__INCLUDED_)
