///////////////////////////////////////////////////////////
//  PhaseTapChanger.h
//  Implementation of the Class PhaseTapChanger
//  Created on:      28-Jan-2016 12:46:03
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_D156BFB9_3778_4fc6_AB85_9DAF6F3DC2FB__INCLUDED_)
#define EA_D156BFB9_3778_4fc6_AB85_9DAF6F3DC2FB__INCLUDED_

#include "IEC61970/Base/Wires/TapChanger.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A transformer phase shifting tap model that controls the phase angle difference
			 * across the power transformer and potentially the active power flow through the
			 * power transformer.  This phase tap model may also impact the voltage magnitude.
			 */
			class PhaseTapChanger : public IEC61970::Base::Wires::TapChanger
			{

			public:
				PhaseTapChanger();
				virtual ~PhaseTapChanger();

			};

		}

	}

}
#endif // !defined(EA_D156BFB9_3778_4fc6_AB85_9DAF6F3DC2FB__INCLUDED_)
