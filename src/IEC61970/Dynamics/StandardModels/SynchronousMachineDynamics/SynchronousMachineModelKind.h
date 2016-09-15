///////////////////////////////////////////////////////////
//  SynchronousMachineModelKind.h
//  Implementation of the Class SynchronousMachineModelKind
//  Created on:      28-Jan-2016 12:47:07
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_55919DDF_7CEC_455b_B6B2_0238BC3F1C18__INCLUDED_)
#define EA_55919DDF_7CEC_455b_B6B2_0238BC3F1C18__INCLUDED_

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace SynchronousMachineDynamics
			{
				/**
				 * Type of synchronous machine model used in Dynamic simulation applications.
				 */
				enum class SynchronousMachineModelKind
				{
					/**
					 * Subtransient synchronous machine model.
					 */
					subtransient,
					/**
					 * WECC Type F variant of subtransient synchronous machine model.
					 */
					subtransientTypeF,
					/**
					 * WECC Type J variant of subtransient synchronous machine model.
					 */
					subtransientTypeJ,
					/**
					 * Simplified version of subtransient synchronous machine model where magnetic
					 * coupling between the direct and quadrature axes is ignored.
					 */
					subtransientSimplified,
					/**
					 * Simplified version of a subtransient synchronous machine model with no damper
					 * circuit on d-axis. 
					 */
					subtransientSimplifiedDirectAxis
				};

			}

		}

	}

}
#endif // !defined(EA_55919DDF_7CEC_455b_B6B2_0238BC3F1C18__INCLUDED_)
