///////////////////////////////////////////////////////////
//  Sectionaliser.h
//  Implementation of the Class Sectionaliser
//  Created on:      28-Jan-2016 12:46:38
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_D12CB04F_856D_41c1_9562_2C494C6E11E2__INCLUDED_)
#define EA_D12CB04F_856D_41c1_9562_2C494C6E11E2__INCLUDED_

#include "IEC61970/Base/Wires/Switch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Automatic switch that will lock open to isolate a faulted section. It may, or
			 * may not, have load breaking capability. Its primary purpose is to provide fault
			 * sectionalising at locations where the fault current is either too high, or too
			 * low, for proper coordination of fuses.
			 */
			class Sectionaliser : public IEC61970::Base::Wires::Switch
			{

			public:
				Sectionaliser();
				virtual ~Sectionaliser();

			};

		}

	}

}
#endif // !defined(EA_D12CB04F_856D_41c1_9562_2C494C6E11E2__INCLUDED_)
