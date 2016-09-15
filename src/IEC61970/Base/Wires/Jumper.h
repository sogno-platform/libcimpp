///////////////////////////////////////////////////////////
//  Jumper.h
//  Implementation of the Class Jumper
//  Created on:      28-Jan-2016 12:45:31
///////////////////////////////////////////////////////////

#if !defined(EA_E5DAF2E3_7595_4c08_904E_FA7215626AF3__INCLUDED_)
#define EA_E5DAF2E3_7595_4c08_904E_FA7215626AF3__INCLUDED_

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
#endif // !defined(EA_E5DAF2E3_7595_4c08_904E_FA7215626AF3__INCLUDED_)
