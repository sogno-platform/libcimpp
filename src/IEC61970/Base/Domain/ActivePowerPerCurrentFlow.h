///////////////////////////////////////////////////////////
//  ActivePowerPerCurrentFlow.h
//  Implementation of the Class ActivePowerPerCurrentFlow
//  Created on:      28-Jan-2016 12:43:15
//  Original author: 222206
///////////////////////////////////////////////////////////

#if !defined(EA_10589B37_A622_4e48_A4A2_25B42CFDF189__INCLUDED_)
#define EA_10589B37_A622_4e48_A4A2_25B42CFDF189__INCLUDED_

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			class ActivePowerPerCurrentFlow
			{

			public:
				ActivePowerPerCurrentFlow();
				virtual ~ActivePowerPerCurrentFlow();
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_10589B37_A622_4e48_A4A2_25B42CFDF189__INCLUDED_)
