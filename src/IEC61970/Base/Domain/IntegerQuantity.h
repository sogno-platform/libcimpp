///////////////////////////////////////////////////////////
//  IntegerQuantity.h
//  Implementation of the Class IntegerQuantity
//  Created on:      28-Jan-2016 12:45:29
///////////////////////////////////////////////////////////

#if !defined(EA_05289230_29F0_46a6_9533_F99ABEC2283B__INCLUDED_)
#define EA_05289230_29F0_46a6_9533_F99ABEC2283B__INCLUDED_

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
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Integer value;

			};

		}

	}

}
#endif // !defined(EA_05289230_29F0_46a6_9533_F99ABEC2283B__INCLUDED_)
