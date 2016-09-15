///////////////////////////////////////////////////////////
//  Limit.h
//  Implementation of the Class Limit
//  Created on:      28-Jan-2016 12:45:33
///////////////////////////////////////////////////////////

#if !defined(EA_6E3107A5_CED1_4489_B0A0_FB9415CCFBF1__INCLUDED_)
#define EA_6E3107A5_CED1_4489_B0A0_FB9415CCFBF1__INCLUDED_

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Specifies one limit value for a Measurement. A Measurement typically has
			 * several limits that are kept together by the LimitSet class. The actual meaning
			 * and use of a Limit instance (i.e., if it is an alarm or warning limit or if it
			 * is a high or low limit) is not captured in the Limit class. However the name of
			 * a Limit instance may indicate both meaning and use.
			 */
			class Limit : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Limit();
				virtual ~Limit();

			};

		}

	}

}
#endif // !defined(EA_6E3107A5_CED1_4489_B0A0_FB9415CCFBF1__INCLUDED_)
