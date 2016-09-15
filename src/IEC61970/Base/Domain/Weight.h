///////////////////////////////////////////////////////////
//  Weight.h
//  Implementation of the Class Weight
//  Created on:      28-Jan-2016 12:47:44
///////////////////////////////////////////////////////////

#if !defined(EA_ACC74AA3_792F_47f0_A7AB_20E43B4AAFD1__INCLUDED_)
#define EA_ACC74AA3_792F_47f0_A7AB_20E43B4AAFD1__INCLUDED_

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
			 * The weight of an object.
			 */
			class Weight
			{

			public:
				Weight();
				virtual ~Weight();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_ACC74AA3_792F_47f0_A7AB_20E43B4AAFD1__INCLUDED_)
