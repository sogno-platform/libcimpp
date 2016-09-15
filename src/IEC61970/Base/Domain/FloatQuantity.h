///////////////////////////////////////////////////////////
//  FloatQuantity.h
//  Implementation of the Class FloatQuantity
//  Created on:      28-Jan-2016 12:44:51
///////////////////////////////////////////////////////////

#if !defined(EA_5C274B37_B87A_424e_9874_6071AD81F472__INCLUDED_)
#define EA_5C274B37_B87A_424e_9874_6071AD81F472__INCLUDED_

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
			 * Quantity with float value and associated unit information.
			 */
			class FloatQuantity
			{

			public:
				FloatQuantity();
				virtual ~FloatQuantity();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_5C274B37_B87A_424e_9874_6071AD81F472__INCLUDED_)
