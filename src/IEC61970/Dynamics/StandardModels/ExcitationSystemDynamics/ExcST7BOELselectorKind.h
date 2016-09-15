///////////////////////////////////////////////////////////
//  ExcST7BOELselectorKind.h
//  Implementation of the Class ExcST7BOELselectorKind
//  Created on:      28-Jan-2016 12:44:47
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_2288EC3B_60E3_4874_8676_8B02C0763462__INCLUDED_)
#define EA_2288EC3B_60E3_4874_8676_8B02C0763462__INCLUDED_

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * Type of connection for the OEL input used for static excitation systems type 7B.
				 */
				enum class ExcST7BOELselectorKind
				{
					/**
					 * No OEL input is used.
					 */
					noOELinput,
					/**
					 * The signal is added to Vref.
					 */
					addVref,
					/**
					 * The signal is connected in the input of the LV gate.
					 */
					inputLVgate,
					/**
					 * The signal is connected in the output of the LV gate.
					 */
					outputLVgate
				};

			}

		}

	}

}
#endif // !defined(EA_2288EC3B_60E3_4874_8676_8B02C0763462__INCLUDED_)
