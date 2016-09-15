///////////////////////////////////////////////////////////
//  Area.h
//  Implementation of the Class Area
//  Created on:      28-Jan-2016 12:43:22
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_07DFEDD7_3682_4e64_B200_9B90C29E8686__INCLUDED_)
#define EA_07DFEDD7_3682_4e64_B200_9B90C29E8686__INCLUDED_

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
			 * Area.
			 */
			class Area
			{

			public:
				Area();
				virtual ~Area();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_07DFEDD7_3682_4e64_B200_9B90C29E8686__INCLUDED_)
