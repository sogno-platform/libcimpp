///////////////////////////////////////////////////////////
//  ActivePowerLimit.h
//  Implementation of the Class ActivePowerLimit
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef ACTIVEPOWERLIMIT_H
#define ACTIVEPOWERLIMIT_H

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
				 * The normal value of active power limit.
				 */
				IEC61970::Base::Domain::ActivePower normalValue;
				/**
				 * Value of active power limit.
				 */
				IEC61970::Base::Domain::ActivePower value;

			};

		}

	}

}
#endif // ACTIVEPOWERLIMIT_H
