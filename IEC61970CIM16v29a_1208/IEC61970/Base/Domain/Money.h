///////////////////////////////////////////////////////////
//  Money.h
//  Implementation of the Class Money
///////////////////////////////////////////////////////////

#ifndef MONEY_H
#define MONEY_H

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
#endif // MONEY_H
