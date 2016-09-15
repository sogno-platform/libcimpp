///////////////////////////////////////////////////////////
//  Resistance.h
//  Implementation of the Class Resistance
//  Created on:      28-Jan-2016 12:46:35
///////////////////////////////////////////////////////////

#if !defined(EA_D6487B5B_DB99_480a_8796_A626575C8AEF__INCLUDED_)
#define EA_D6487B5B_DB99_480a_8796_A626575C8AEF__INCLUDED_

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
			 * Resistance (real part of impedance).
			 */
			class Resistance
			{

			public:
				Resistance();
				virtual ~Resistance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_D6487B5B_DB99_480a_8796_A626575C8AEF__INCLUDED_)
