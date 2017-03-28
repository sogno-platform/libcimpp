///////////////////////////////////////////////////////////
//  StringQuantity.h
//  Implementation of the Class StringQuantity
///////////////////////////////////////////////////////////

#ifndef STRINGQUANTITY_H
#define STRINGQUANTITY_H

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Quantity with string value (when it is not important whether it is an integral
			 * or a floating point number) and associated unit information.
			 */
			class StringQuantity
			{

			public:
				StringQuantity();
				virtual ~StringQuantity();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::String value;

			};

		}

	}

}
#endif // STRINGQUANTITY_H
