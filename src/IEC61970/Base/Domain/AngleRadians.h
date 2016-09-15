///////////////////////////////////////////////////////////
//  AngleRadians.h
//  Implementation of the Class AngleRadians
//  Created on:      28-Jan-2016 12:43:20
///////////////////////////////////////////////////////////

#if !defined(EA_3850C62C_462E_4685_B246_FBA67CA20087__INCLUDED_)
#define EA_3850C62C_462E_4685_B246_FBA67CA20087__INCLUDED_

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
			 * Phase angle in radians.
			 */
			class AngleRadians
			{

			public:
				AngleRadians();
				virtual ~AngleRadians();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_3850C62C_462E_4685_B246_FBA67CA20087__INCLUDED_)
