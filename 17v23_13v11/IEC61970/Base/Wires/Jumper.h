///////////////////////////////////////////////////////////
//  Jumper.h
//  Implementation of the Class Jumper
///////////////////////////////////////////////////////////

#ifndef JUMPER_H
#define JUMPER_H

#include "IEC61970/Base/Wires/Switch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A short section of conductor with negligible impedance which can be manually
			 * removed and replaced if the circuit is de-energized. Note that zero-impedance
			 * branches can potentially be modeled by other equipment types.
			 */
			class Jumper : public IEC61970::Base::Wires::Switch
			{

			public:
				Jumper();
				virtual ~Jumper();

			};

		}

	}

}
#endif // JUMPER_H
