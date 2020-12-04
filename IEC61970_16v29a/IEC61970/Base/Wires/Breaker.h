///////////////////////////////////////////////////////////
//  Breaker.h
//  Implementation of the Class Breaker
///////////////////////////////////////////////////////////

#ifndef BREAKER_H
#define BREAKER_H

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
#endif // BREAKER_H
