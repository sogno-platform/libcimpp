///////////////////////////////////////////////////////////
//  Susceptance.h
//  Implementation of the Class Susceptance
//  Created on:      28-Jan-2016 12:46:56
///////////////////////////////////////////////////////////

#if !defined(EA_A3195E9F_D880_4936_9B6A_B3377EC82712__INCLUDED_)
#define EA_A3195E9F_D880_4936_9B6A_B3377EC82712__INCLUDED_

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
			 * Imaginary part of admittance.
			 */
			class Susceptance
			{

			public:
				Susceptance();
				virtual ~Susceptance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_A3195E9F_D880_4936_9B6A_B3377EC82712__INCLUDED_)
