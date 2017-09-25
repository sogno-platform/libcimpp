///////////////////////////////////////////////////////////
//  Recloser.h
//  Implementation of the Class Recloser
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef RECLOSER_H
#define RECLOSER_H

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
#endif // RECLOSER_H
