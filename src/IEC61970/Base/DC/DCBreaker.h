///////////////////////////////////////////////////////////
//  DCBreaker.h
//  Implementation of the Class DCBreaker
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef DCBREAKER_H
#define DCBREAKER_H

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
#endif // DCBREAKER_H
