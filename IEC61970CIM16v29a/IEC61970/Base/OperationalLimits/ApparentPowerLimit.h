///////////////////////////////////////////////////////////
//  ApparentPowerLimit.h
//  Implementation of the Class ApparentPowerLimit
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef APPARENTPOWERLIMIT_H
#define APPARENTPOWERLIMIT_H

#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/OperationalLimits/OperationalLimit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace OperationalLimits
		{
			/**
			 * Apparent power limit.
			 */
			class ApparentPowerLimit : public IEC61970::Base::OperationalLimits::OperationalLimit
			{

			public:
				ApparentPowerLimit();
				virtual ~ApparentPowerLimit();
				/**
				 * The apparent power limit.
				 */
				IEC61970::Base::Domain::ApparentPower value;

			};

		}

	}

}
#endif // APPARENTPOWERLIMIT_H
