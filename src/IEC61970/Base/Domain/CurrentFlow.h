///////////////////////////////////////////////////////////
//  CurrentFlow.h
//  Implementation of the Class CurrentFlow
//  Created on:      28-Jan-2016 12:43:47
///////////////////////////////////////////////////////////

#if !defined(EA_87E25BF5_EBC6_405d_82A2_239F89E1B8BB__INCLUDED_)
#define EA_87E25BF5_EBC6_405d_82A2_239F89E1B8BB__INCLUDED_

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
			 * Electrical current with sign convention: positive flow is out of the conducting
			 * equipment into the connectivity node. Can be both AC and DC.
			 */
			class CurrentFlow
			{

			public:
				CurrentFlow();
				virtual ~CurrentFlow();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_87E25BF5_EBC6_405d_82A2_239F89E1B8BB__INCLUDED_)
