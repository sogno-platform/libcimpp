///////////////////////////////////////////////////////////
//  DecimalQuantity.h
//  Implementation of the Class DecimalQuantity
//  Created on:      28-Jan-2016 12:44:02
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_5724D3A6_C4A0_40b9_B202_4FE3C48081FB__INCLUDED_)
#define EA_5724D3A6_C4A0_40b9_B202_4FE3C48081FB__INCLUDED_

#include "IEC61970/Base/Domain/Currency.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Decimal.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			class DecimalQuantity
			{

			public:
				DecimalQuantity();
				virtual ~DecimalQuantity();
				/**
				 * Quantity with decimal value and associated unit or currency information.
				 */
				IEC61970::Base::Domain::Currency currency;
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Decimal value;

			};

		}

	}

}
#endif // !defined(EA_5724D3A6_C4A0_40b9_B202_4FE3C48081FB__INCLUDED_)
