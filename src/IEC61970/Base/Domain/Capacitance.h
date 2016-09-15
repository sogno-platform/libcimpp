///////////////////////////////////////////////////////////
//  Capacitance.h
//  Implementation of the Class Capacitance
//  Created on:      28-Jan-2016 12:43:32
///////////////////////////////////////////////////////////

#if !defined(EA_1524DD94_B988_41ae_80A6_BCC07941A088__INCLUDED_)
#define EA_1524DD94_B988_41ae_80A6_BCC07941A088__INCLUDED_

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
			 * Capacitive part of reactance (imaginary part of impedance), at rated frequency.
			 */
			class Capacitance
			{

			public:
				Capacitance();
				virtual ~Capacitance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_1524DD94_B988_41ae_80A6_BCC07941A088__INCLUDED_)
