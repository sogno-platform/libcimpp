///////////////////////////////////////////////////////////
//  ApparentPowerLimit.h
//  Implementation of the Class ApparentPowerLimit
//  Created on:      28-Jan-2016 12:43:21
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_FA75D514_30E1_4233_8D76_22EBB925DCA2__INCLUDED_)
#define EA_FA75D514_30E1_4233_8D76_22EBB925DCA2__INCLUDED_

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
#endif // !defined(EA_FA75D514_30E1_4233_8D76_22EBB925DCA2__INCLUDED_)
