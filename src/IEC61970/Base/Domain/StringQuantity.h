///////////////////////////////////////////////////////////
//  StringQuantity.h
//  Implementation of the Class StringQuantity
//  Created on:      28-Jan-2016 12:46:51
///////////////////////////////////////////////////////////

#if !defined(EA_E1A52F99_CAFF_447d_9753_2509CE3F4C84__INCLUDED_)
#define EA_E1A52F99_CAFF_447d_9753_2509CE3F4C84__INCLUDED_

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
#endif // !defined(EA_E1A52F99_CAFF_447d_9753_2509CE3F4C84__INCLUDED_)
