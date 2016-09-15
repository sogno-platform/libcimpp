///////////////////////////////////////////////////////////
//  Seconds.h
//  Implementation of the Class Seconds
//  Created on:      28-Jan-2016 12:46:38
///////////////////////////////////////////////////////////

#if !defined(EA_79B6C787_ABBF_46f8_9FF8_F9FE8F38C607__INCLUDED_)
#define EA_79B6C787_ABBF_46f8_9FF8_F9FE8F38C607__INCLUDED_

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
			 * Time, in seconds.
			 */
			class Seconds
			{

			public:
				Seconds();
				virtual ~Seconds();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				/**
				 * Time, in seconds
				 */
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_79B6C787_ABBF_46f8_9FF8_F9FE8F38C607__INCLUDED_)
