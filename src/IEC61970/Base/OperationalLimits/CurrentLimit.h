///////////////////////////////////////////////////////////
//  CurrentLimit.h
//  Implementation of the Class CurrentLimit
//  Created on:      28-Jan-2016 12:43:48
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_A40C8B3F_26D9_47a8_BFA6_6649FE491CBD__INCLUDED_)
#define EA_A40C8B3F_26D9_47a8_BFA6_6649FE491CBD__INCLUDED_

#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/OperationalLimits/OperationalLimit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace OperationalLimits
		{
			/**
			 * Operational limit on current. 
			 */
			class CurrentLimit : public IEC61970::Base::OperationalLimits::OperationalLimit
			{

			public:
				CurrentLimit();
				virtual ~CurrentLimit();
				/**
				 * Limit on current flow.
				 */
				IEC61970::Base::Domain::CurrentFlow value;

			};

		}

	}

}
#endif // !defined(EA_A40C8B3F_26D9_47a8_BFA6_6649FE491CBD__INCLUDED_)
