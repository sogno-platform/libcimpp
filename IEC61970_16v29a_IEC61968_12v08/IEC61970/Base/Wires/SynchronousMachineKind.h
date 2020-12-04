///////////////////////////////////////////////////////////
//  SynchronousMachineKind.h
//  Implementation of the Class SynchronousMachineKind
///////////////////////////////////////////////////////////

#ifndef SYNCHRONOUSMACHINEKIND_H
#define SYNCHRONOUSMACHINEKIND_H

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
				 _undef = -1, 	generatorOrCondenser,
				motor,
				generatorOrMotor,
				motorOrCondenser,
				generatorOrCondenserOrMotor
			};

		}

	}

}
#endif // SYNCHRONOUSMACHINEKIND_H
