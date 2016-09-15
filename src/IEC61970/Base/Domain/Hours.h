///////////////////////////////////////////////////////////
//  Hours.h
//  Implementation of the Class Hours
//  Created on:      28-Jan-2016 12:45:19
///////////////////////////////////////////////////////////

#if !defined(EA_3B1801C2_A937_47fb_AD27_353C6727E895__INCLUDED_)
#define EA_3B1801C2_A937_47fb_AD27_353C6727E895__INCLUDED_

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
			 * Time specified in hours.
			 */
			class Hours
			{

			public:
				Hours();
				virtual ~Hours();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_3B1801C2_A937_47fb_AD27_353C6727E895__INCLUDED_)
