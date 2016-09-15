///////////////////////////////////////////////////////////
//  ActivePowerLimit.h
//  Implementation of the Class ActivePowerLimit
//  Created on:      28-Jan-2016 12:43:14
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_DD04D169_1C7F_4bbe_AF1C_D998CEA8A2F8__INCLUDED_)
#define EA_DD04D169_1C7F_4bbe_AF1C_D998CEA8A2F8__INCLUDED_

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/OperationalLimits/OperationalLimit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace OperationalLimits
		{
			/**
			 * Limit on active power flow.
			 */
			class ActivePowerLimit : public IEC61970::Base::OperationalLimits::OperationalLimit
			{

			public:
				ActivePowerLimit();
				virtual ~ActivePowerLimit();
				/**
				 * Value of active power limit.
				 */
				IEC61970::Base::Domain::ActivePower value;

			};

		}

	}

}
#endif // !defined(EA_DD04D169_1C7F_4bbe_AF1C_D998CEA8A2F8__INCLUDED_)
