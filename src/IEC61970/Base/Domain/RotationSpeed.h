///////////////////////////////////////////////////////////
//  RotationSpeed.h
//  Implementation of the Class RotationSpeed
//  Created on:      28-Jan-2016 12:46:37
///////////////////////////////////////////////////////////

#if !defined(EA_E01B1D9A_1856_4e7f_8DA5_A563249585CA__INCLUDED_)
#define EA_E01B1D9A_1856_4e7f_8DA5_A563249585CA__INCLUDED_

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
			 * Number of revolutions per second.
			 */
			class RotationSpeed
			{

			public:
				RotationSpeed();
				virtual ~RotationSpeed();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_E01B1D9A_1856_4e7f_8DA5_A563249585CA__INCLUDED_)
