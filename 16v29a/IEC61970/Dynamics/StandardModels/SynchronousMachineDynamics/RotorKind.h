///////////////////////////////////////////////////////////
//  RotorKind.h
//  Implementation of the Class RotorKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ROTORKIND_H
#define ROTORKIND_H

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
					 _undef = -1, 	roundRotor,
					/**
					 * Salient pole type of synchronous machine.
					 */
					salientPole
				};

			}

		}

	}

}
#endif // ROTORKIND_H
