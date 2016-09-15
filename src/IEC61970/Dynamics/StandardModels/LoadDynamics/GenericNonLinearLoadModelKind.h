///////////////////////////////////////////////////////////
//  GenericNonLinearLoadModelKind.h
//  Implementation of the Class GenericNonLinearLoadModelKind
//  Created on:      28-Jan-2016 12:44:56
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_7005D8D0_CE88_491c_A9A4_62201514A1A8__INCLUDED_)
#define EA_7005D8D0_CE88_491c_A9A4_62201514A1A8__INCLUDED_

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace LoadDynamics
			{
				/**
				 * Type of generic non-linear load model.
				 */
				enum class GenericNonLinearLoadModelKind
				{
					/**
					 * Exponential recovery model.
					 */
					exponentialRecovery,
					/**
					 * Load adaptive model.
					 */
					loadAdaptive
				};

			}

		}

	}

}
#endif // !defined(EA_7005D8D0_CE88_491c_A9A4_62201514A1A8__INCLUDED_)
