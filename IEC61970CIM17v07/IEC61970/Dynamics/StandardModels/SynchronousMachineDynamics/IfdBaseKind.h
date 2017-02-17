///////////////////////////////////////////////////////////
//  IfdBaseKind.h
//  Implementation of the Class IfdBaseKind
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef IFDBASEKIND_H
#define IFDBASEKIND_H

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace SynchronousMachineDynamics
			{
				/**
				 * Excitation base system mode.
				 */
				enum class IfdBaseKind
				{
					/**
					 * Air gap line mode.  ifdBaseValue is computed, not defined by the user, in this
					 * mode.
					 */
					ifag,
					/**
					 * No load system with saturation mode.  ifdBaseValue is computed, not defined by
					 * the user, in this mode.
					 */
					ifnl,
					/**
					 * Full load system mode.  ifdBaseValue is computed, not defined by the user, in
					 * this mode.
					 */
					iffl,
					/**
					 * Free mode.  ifdBaseValue is defined by the user in this mode.
					 */
					other
				};

			}

		}

	}

}
#endif // IFDBASEKIND_H
