///////////////////////////////////////////////////////////
//  AsynchronousMachineKind.h
//  Implementation of the Class AsynchronousMachineKind
//  Created on:      28-Jan-2016 12:43:24
//  Original author: msphuku2
///////////////////////////////////////////////////////////

#if !defined(EA_96909C2D_C983_4359_B003_94DA604BE8B3__INCLUDED_)
#define EA_96909C2D_C983_4359_B003_94DA604BE8B3__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Kind of Asynchronous Machine.
			 */
			enum class AsynchronousMachineKind
			{
				/**
				 * The Asynchronous Machine is a generator.
				 */
				generator,
				/**
				 * The Asynchronous Machine is a motor.
				 */
				motor
			};

		}

	}

}
#endif // !defined(EA_96909C2D_C983_4359_B003_94DA604BE8B3__INCLUDED_)
