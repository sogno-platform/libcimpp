///////////////////////////////////////////////////////////
//  Reactance.h
//  Implementation of the Class Reactance
//  Created on:      28-Jan-2016 12:46:25
///////////////////////////////////////////////////////////

#if !defined(EA_52125CA6_34EB_49c3_A18B_208B7B7896C3__INCLUDED_)
#define EA_52125CA6_34EB_49c3_A18B_208B7B7896C3__INCLUDED_

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
			 * Reactance (imaginary part of impedance), at rated frequency.
			 */
			class Reactance
			{

			public:
				Reactance();
				virtual ~Reactance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_52125CA6_34EB_49c3_A18B_208B7B7896C3__INCLUDED_)
