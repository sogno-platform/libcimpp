///////////////////////////////////////////////////////////
//  Minutes.h
//  Implementation of the Class Minutes
//  Created on:      28-Jan-2016 12:45:44
///////////////////////////////////////////////////////////

#if !defined(EA_CFBB03D5_F88E_4e02_B8EE_8F0AC0D43E70__INCLUDED_)
#define EA_CFBB03D5_F88E_4e02_B8EE_8F0AC0D43E70__INCLUDED_

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
			 * Time in minutes.
			 */
			class Minutes
			{

			public:
				Minutes();
				virtual ~Minutes();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_CFBB03D5_F88E_4e02_B8EE_8F0AC0D43E70__INCLUDED_)
