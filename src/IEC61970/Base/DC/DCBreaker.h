///////////////////////////////////////////////////////////
//  DCBreaker.h
//  Implementation of the Class DCBreaker
//  Created on:      28-Jan-2016 12:43:55
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_8A107052_EC58_49a4_A9B3_91CFD276C521__INCLUDED_)
#define EA_8A107052_EC58_49a4_A9B3_91CFD276C521__INCLUDED_

#include "IEC61970/Base/DC/DCSwitch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * A breaker within a DC system. 
			 */
			class DCBreaker : public IEC61970::Base::DC::DCSwitch
			{

			public:
				DCBreaker();
				virtual ~DCBreaker();

			};

		}

	}

}
#endif // !defined(EA_8A107052_EC58_49a4_A9B3_91CFD276C521__INCLUDED_)
