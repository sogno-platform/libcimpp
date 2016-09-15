///////////////////////////////////////////////////////////
//  VoltageLimit.h
//  Implementation of the Class VoltageLimit
//  Created on:      28-Jan-2016 12:47:39
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_E2FFBCC0_F659_4362_9800_654F118867E4__INCLUDED_)
#define EA_E2FFBCC0_F659_4362_9800_654F118867E4__INCLUDED_

#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/OperationalLimits/OperationalLimit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace OperationalLimits
		{
			/**
			 * Operational limit applied to voltage.
			 */
			class VoltageLimit : public IEC61970::Base::OperationalLimits::OperationalLimit
			{

			public:
				VoltageLimit();
				virtual ~VoltageLimit();
				/**
				 * Limit on voltage. High or low limit nature of the limit depends upon the
				 * properties of the operational limit type.
				 */
				IEC61970::Base::Domain::Voltage value;

			};

		}

	}

}
#endif // !defined(EA_E2FFBCC0_F659_4362_9800_654F118867E4__INCLUDED_)
