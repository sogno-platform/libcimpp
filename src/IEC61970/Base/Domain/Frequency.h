///////////////////////////////////////////////////////////
//  Frequency.h
//  Implementation of the Class Frequency
//  Created on:      28-Jan-2016 12:44:54
///////////////////////////////////////////////////////////

#if !defined(EA_A0E87876_0C1C_45c8_9166_BFF24FC11553__INCLUDED_)
#define EA_A0E87876_0C1C_45c8_9166_BFF24FC11553__INCLUDED_

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
			 * Cycles per second.
			 */
			class Frequency
			{

			public:
				Frequency();
				virtual ~Frequency();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_A0E87876_0C1C_45c8_9166_BFF24FC11553__INCLUDED_)
