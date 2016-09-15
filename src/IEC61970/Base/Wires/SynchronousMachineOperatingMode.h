///////////////////////////////////////////////////////////
//  SynchronousMachineOperatingMode.h
//  Implementation of the Class SynchronousMachineOperatingMode
//  Created on:      28-Jan-2016 12:47:07
///////////////////////////////////////////////////////////

#if !defined(EA_EBC7FADC_521E_412e_A09E_1960FEA34728__INCLUDED_)
#define EA_EBC7FADC_521E_412e_A09E_1960FEA34728__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Synchronous machine operating mode.
			 */
			enum class SynchronousMachineOperatingMode
			{
				generator,
				condenser,
				motor
			};

		}

	}

}
#endif // !defined(EA_EBC7FADC_521E_412e_A09E_1960FEA34728__INCLUDED_)
