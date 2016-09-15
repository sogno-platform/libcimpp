///////////////////////////////////////////////////////////
//  Recloser.h
//  Implementation of the Class Recloser
//  Created on:      28-Jan-2016 12:46:27
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_86A00084_3E33_423b_BE61_21C4D13E52E5__INCLUDED_)
#define EA_86A00084_3E33_423b_BE61_21C4D13E52E5__INCLUDED_

#include "IEC61970/Base/Wires/ProtectedSwitch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Pole-mounted fault interrupter with built-in phase and ground relays, current
			 * transformer (CT), and supplemental controls.
			 */
			class Recloser : public IEC61970::Base::Wires::ProtectedSwitch
			{

			public:
				Recloser();
				virtual ~Recloser();

			};

		}

	}

}
#endif // !defined(EA_86A00084_3E33_423b_BE61_21C4D13E52E5__INCLUDED_)
