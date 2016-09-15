///////////////////////////////////////////////////////////
//  Breaker.h
//  Implementation of the Class Breaker
//  Created on:      28-Jan-2016 12:43:30
///////////////////////////////////////////////////////////

#if !defined(EA_1B14BE8F_BD9A_4be8_80DD_F9B06C85D96E__INCLUDED_)
#define EA_1B14BE8F_BD9A_4be8_80DD_F9B06C85D96E__INCLUDED_

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Wires/ProtectedSwitch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A mechanical switching device capable of making, carrying, and breaking
			 * currents under normal circuit conditions and also making, carrying for a
			 * specified time, and breaking currents under specified abnormal circuit
			 * conditions e.g.  those of short circuit.
			 */
			class Breaker : public IEC61970::Base::Wires::ProtectedSwitch
			{

			public:
				Breaker();
				virtual ~Breaker();
				/**
				 * The transition time from open to close.
				 */
				IEC61970::Base::Domain::Seconds inTransitTime;

			};

		}

	}

}
#endif // !defined(EA_1B14BE8F_BD9A_4be8_80DD_F9B06C85D96E__INCLUDED_)
