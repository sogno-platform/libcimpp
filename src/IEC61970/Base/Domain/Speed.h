///////////////////////////////////////////////////////////
//  Speed.h
//  Implementation of the Class Speed
//  Created on:      28-Jan-2016 12:46:43
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_C3627124_F59F_4631_A327_741FFC1440D0__INCLUDED_)
#define EA_C3627124_F59F_4631_A327_741FFC1440D0__INCLUDED_

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
			 * Distance per unit of time.
			 */
			class Speed
			{

			public:
				Speed();
				virtual ~Speed();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_C3627124_F59F_4631_A327_741FFC1440D0__INCLUDED_)
