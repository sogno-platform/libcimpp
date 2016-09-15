///////////////////////////////////////////////////////////
//  WaterLevel.h
//  Implementation of the Class WaterLevel
//  Created on:      28-Jan-2016 12:47:43
///////////////////////////////////////////////////////////

#if !defined(EA_BC1EFBF8_B119_4762_AAA5_A6A8500A746E__INCLUDED_)
#define EA_BC1EFBF8_B119_4762_AAA5_A6A8500A746E__INCLUDED_

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
			 * Reservoir water level referred to a given datum such as mean sea level.
			 */
			class WaterLevel
			{

			public:
				WaterLevel();
				virtual ~WaterLevel();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_BC1EFBF8_B119_4762_AAA5_A6A8500A746E__INCLUDED_)
