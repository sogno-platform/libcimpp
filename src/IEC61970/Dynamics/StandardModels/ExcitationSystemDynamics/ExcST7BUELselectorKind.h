///////////////////////////////////////////////////////////
//  ExcST7BUELselectorKind.h
//  Implementation of the Class ExcST7BUELselectorKind
//  Created on:      28-Jan-2016 12:44:48
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_51891137_DE5D_45f6_A528_52E034DC12F2__INCLUDED_)
#define EA_51891137_DE5D_45f6_A528_52E034DC12F2__INCLUDED_

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * Type of connection for the UEL input used for static excitation systems type 7B.
				 */
				enum class ExcST7BUELselectorKind
				{
					/**
					 * No UEL input is used.
					 */
					noUELinput,
					/**
					 * The signal is added to Vref.
					 */
					addVref,
					/**
					 * The signal is connected in the input of the HV gate.
					 */
					inputHVgate,
					/**
					 * The signal is connected in the output of the HV gate.
					 */
					outputHVgate
				};

			}

		}

	}

}
#endif // !defined(EA_51891137_DE5D_45f6_A528_52E034DC12F2__INCLUDED_)
