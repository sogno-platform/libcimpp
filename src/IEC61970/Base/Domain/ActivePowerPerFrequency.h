///////////////////////////////////////////////////////////
//  ActivePowerPerFrequency.h
//  Implementation of the Class ActivePowerPerFrequency
//  Created on:      28-Jan-2016 12:43:15
///////////////////////////////////////////////////////////

#if !defined(EA_A4CEFFE0_EBD9_4d2f_AD6F_BEE1C10189C1__INCLUDED_)
#define EA_A4CEFFE0_EBD9_4d2f_AD6F_BEE1C10189C1__INCLUDED_

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
			 * Active power variation with frequency.
			 */
			class ActivePowerPerFrequency
			{

			public:
				ActivePowerPerFrequency();
				virtual ~ActivePowerPerFrequency();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_A4CEFFE0_EBD9_4d2f_AD6F_BEE1C10189C1__INCLUDED_)
