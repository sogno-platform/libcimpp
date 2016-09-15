///////////////////////////////////////////////////////////
//  Disconnector.h
//  Implementation of the Class Disconnector
//  Created on:      28-Jan-2016 12:44:07
///////////////////////////////////////////////////////////

#if !defined(EA_B26FCF5B_1520_49b9_A42D_3F6A952C487F__INCLUDED_)
#define EA_B26FCF5B_1520_49b9_A42D_3F6A952C487F__INCLUDED_

#include "IEC61970/Base/Wires/Switch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A manually operated or motor operated mechanical switching device used for
			 * changing the connections in a circuit, or for isolating a circuit or equipment
			 * from a source of power. It is required to open or close circuits when
			 * negligible current is broken or made. 
			 */
			class Disconnector : public IEC61970::Base::Wires::Switch
			{

			public:
				Disconnector();
				virtual ~Disconnector();

			};

		}

	}

}
#endif // !defined(EA_B26FCF5B_1520_49b9_A42D_3F6A952C487F__INCLUDED_)
