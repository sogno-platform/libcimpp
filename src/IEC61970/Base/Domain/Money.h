///////////////////////////////////////////////////////////
//  Money.h
//  Implementation of the Class Money
//  Created on:      28-Jan-2016 12:45:44
///////////////////////////////////////////////////////////

#if !defined(EA_584E8DB1_54E5_451d_AFDC_A86969D4133C__INCLUDED_)
#define EA_584E8DB1_54E5_451d_AFDC_A86969D4133C__INCLUDED_

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/Currency.h"
#include "IEC61970/Base/Domain/Decimal.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Amount of money.
			 */
			class Money
			{

			public:
				Money();
				virtual ~Money();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				IEC61970::Base::Domain::Currency unit;
				IEC61970::Base::Domain::Decimal value;

			};

		}

	}

}
#endif // !defined(EA_584E8DB1_54E5_451d_AFDC_A86969D4133C__INCLUDED_)
