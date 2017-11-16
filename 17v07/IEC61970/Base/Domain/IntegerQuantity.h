///////////////////////////////////////////////////////////
//  IntegerQuantity.h
//  Implementation of the Class IntegerQuantity
///////////////////////////////////////////////////////////

#ifndef INTEGERQUANTITY_H
#define INTEGERQUANTITY_H

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Integer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Quantity with integer value and associated unit information.
			 */
			class IntegerQuantity
			{

			public:
				IntegerQuantity();
				virtual ~IntegerQuantity();
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				IEC61970::Base::Domain::UnitSymbol unit = IEC61970::Base::Domain::UnitSymbol::_undef;
				IEC61970::Base::Domain::Integer value;

			};

		}

	}

}
#endif // INTEGERQUANTITY_H
