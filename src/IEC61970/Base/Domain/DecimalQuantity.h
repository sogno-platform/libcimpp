///////////////////////////////////////////////////////////
//  DecimalQuantity.h
//  Implementation of the Class DecimalQuantity
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DECIMALQUANTITY_H
#define DECIMALQUANTITY_H

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
#endif // DECIMALQUANTITY_H
