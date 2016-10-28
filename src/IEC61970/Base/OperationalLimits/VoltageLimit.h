///////////////////////////////////////////////////////////
//  VoltageLimit.h
//  Implementation of the Class VoltageLimit
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef VOLTAGELIMIT_H
#define VOLTAGELIMIT_H

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
#endif // VOLTAGELIMIT_H
