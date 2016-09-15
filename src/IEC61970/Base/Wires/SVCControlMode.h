///////////////////////////////////////////////////////////
//  SVCControlMode.h
//  Implementation of the Class SVCControlMode
//  Created on:      28-Jan-2016 12:46:57
///////////////////////////////////////////////////////////

#if !defined(EA_73006764_180F_4149_B34F_D033ABDE5729__INCLUDED_)
#define EA_73006764_180F_4149_B34F_D033ABDE5729__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Static VAr Compensator control mode.
			 */
			enum class SVCControlMode
			{
				reactivePower,
				voltage
			};

		}

	}

}
#endif // !defined(EA_73006764_180F_4149_B34F_D033ABDE5729__INCLUDED_)
