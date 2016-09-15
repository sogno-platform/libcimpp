///////////////////////////////////////////////////////////
//  IfdBaseKind.h
//  Implementation of the Class IfdBaseKind
//  Created on:      28-Jan-2016 12:45:26
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_91EE6FEF_E7BA_415c_B1FC_02803F1FB069__INCLUDED_)
#define EA_91EE6FEF_E7BA_415c_B1FC_02803F1FB069__INCLUDED_

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
#endif // !defined(EA_91EE6FEF_E7BA_415c_B1FC_02803F1FB069__INCLUDED_)
