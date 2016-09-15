///////////////////////////////////////////////////////////
//  RotorKind.h
//  Implementation of the Class RotorKind
//  Created on:      28-Jan-2016 12:46:37
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_1BEA9C66_6E86_42e7_8E46_8F098E5C9F58__INCLUDED_)
#define EA_1BEA9C66_6E86_42e7_8E46_8F098E5C9F58__INCLUDED_

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace SynchronousMachineDynamics
			{
				/**
				 * Type of rotor on physical machine.
				 */
				enum class RotorKind
				{
					/**
					 * Round rotor type of synchronous machine.
					 */
					roundRotor,
					/**
					 * Salient pole type of synchronous machine.
					 */
					salientPole
				};

			}

		}

	}

}
#endif // !defined(EA_1BEA9C66_6E86_42e7_8E46_8F098E5C9F58__INCLUDED_)
