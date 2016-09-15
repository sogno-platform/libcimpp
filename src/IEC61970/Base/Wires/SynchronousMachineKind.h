///////////////////////////////////////////////////////////
//  SynchronousMachineKind.h
//  Implementation of the Class SynchronousMachineKind
//  Created on:      28-Jan-2016 12:47:06
///////////////////////////////////////////////////////////

#if !defined(EA_2F7B7F2F_50A5_4379_AA9D_36955ED01873__INCLUDED_)
#define EA_2F7B7F2F_50A5_4379_AA9D_36955ED01873__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Synchronous machine type.
			 */
			enum class SynchronousMachineKind
			{
				generator,
				condenser,
				generatorOrCondenser,
				motor,
				generatorOrMotor,
				motorOrCondenser,
				generatorOrCondenserOrMotor
			};

		}

	}

}
#endif // !defined(EA_2F7B7F2F_50A5_4379_AA9D_36955ED01873__INCLUDED_)
