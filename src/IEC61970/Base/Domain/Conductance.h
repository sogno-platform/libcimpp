///////////////////////////////////////////////////////////
//  Conductance.h
//  Implementation of the Class Conductance
//  Created on:      28-Jan-2016 12:43:36
///////////////////////////////////////////////////////////

#if !defined(EA_029051B6_CE8F_4a57_AE4C_4A2DD5D5DF27__INCLUDED_)
#define EA_029051B6_CE8F_4a57_AE4C_4A2DD5D5DF27__INCLUDED_

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
			 * Factor by which voltage must be multiplied to give corresponding power lost
			 * from a circuit. Real part of admittance.
			 */
			class Conductance
			{

			public:
				Conductance();
				virtual ~Conductance();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_029051B6_CE8F_4a57_AE4C_4A2DD5D5DF27__INCLUDED_)
