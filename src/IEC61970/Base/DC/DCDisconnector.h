///////////////////////////////////////////////////////////
//  DCDisconnector.h
//  Implementation of the Class DCDisconnector
//  Created on:      28-Jan-2016 12:43:57
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_2846A7A4_3479_49a4_BDA6_0596E6FAD7DD__INCLUDED_)
#define EA_2846A7A4_3479_49a4_BDA6_0596E6FAD7DD__INCLUDED_

#include "IEC61970/Base/DC/DCSwitch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * A disconnector within a DC system.
			 */
			class DCDisconnector : public IEC61970::Base::DC::DCSwitch
			{

			public:
				DCDisconnector();
				virtual ~DCDisconnector();

			};

		}

	}

}
#endif // !defined(EA_2846A7A4_3479_49a4_BDA6_0596E6FAD7DD__INCLUDED_)
