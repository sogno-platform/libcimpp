///////////////////////////////////////////////////////////
//  LoadBreakSwitch.h
//  Implementation of the Class LoadBreakSwitch
//  Created on:      28-Jan-2016 12:45:35
///////////////////////////////////////////////////////////

#if !defined(EA_5DCBF77A_40AD_43e0_B345_68DA69D3AD91__INCLUDED_)
#define EA_5DCBF77A_40AD_43e0_B345_68DA69D3AD91__INCLUDED_

#include "IEC61970/Base/Wires/ProtectedSwitch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A mechanical switching device capable of making, carrying, and breaking
			 * currents under normal operating conditions.
			 */
			class LoadBreakSwitch : public IEC61970::Base::Wires::ProtectedSwitch
			{

			public:
				LoadBreakSwitch();
				virtual ~LoadBreakSwitch();

			};

		}

	}

}
#endif // !defined(EA_5DCBF77A_40AD_43e0_B345_68DA69D3AD91__INCLUDED_)
