///////////////////////////////////////////////////////////
//  Inductance.h
//  Implementation of the Class Inductance
//  Created on:      28-Jan-2016 12:45:27
///////////////////////////////////////////////////////////

#if !defined(EA_87F16ECE_3CEA_407f_8185_2118945FB188__INCLUDED_)
#define EA_87F16ECE_3CEA_407f_8185_2118945FB188__INCLUDED_

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
			 * Inductive part of reactance (imaginary part of impedance), at rated frequency.
			 */
			class Inductance
			{

			public:
				Inductance();
				virtual ~Inductance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_87F16ECE_3CEA_407f_8185_2118945FB188__INCLUDED_)
