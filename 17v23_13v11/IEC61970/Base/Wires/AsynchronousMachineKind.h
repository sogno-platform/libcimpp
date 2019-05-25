///////////////////////////////////////////////////////////
//  AsynchronousMachineKind.h
//  Implementation of the Class AsynchronousMachineKind
//  Original author: msphuku2
///////////////////////////////////////////////////////////

#ifndef ASYNCHRONOUSMACHINEKIND_H
#define ASYNCHRONOUSMACHINEKIND_H

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
				 _undef = -1, 	generator, none,
				/**
				 * The Asynchronous Machine is a motor.
				 */
				motor
			};

		}

	}

}
#endif // ASYNCHRONOUSMACHINEKIND_H
