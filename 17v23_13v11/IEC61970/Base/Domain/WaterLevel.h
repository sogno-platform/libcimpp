///////////////////////////////////////////////////////////
//  WaterLevel.h
//  Implementation of the Class WaterLevel
///////////////////////////////////////////////////////////

#ifndef WATERLEVEL_H
#define WATERLEVEL_H

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
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // WATERLEVEL_H
