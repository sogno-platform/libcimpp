///////////////////////////////////////////////////////////
//  ExcREXSFeedbackSignalKind.h
//  Implementation of the Class ExcREXSFeedbackSignalKind
//  Created on:      28-Jan-2016 12:44:42
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_05847632_6809_4d60_A100_96BBE0B9A479__INCLUDED_)
#define EA_05847632_6809_4d60_A100_96BBE0B9A479__INCLUDED_

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * Type of rate feedback signals. 
				 */
				enum class ExcREXSFeedbackSignalKind
				{
					/**
					 * The voltage regulator output voltage is used. It is the same as exciter field
					 * voltage.
					 */
					fieldVoltage,
					/**
					 * The exciter field current is used.
					 */
					fieldCurrent,
					/**
					 * The output voltage of the exciter is used.
					 */
					outputVoltage
				};

			}

		}

	}

}
#endif // !defined(EA_05847632_6809_4d60_A100_96BBE0B9A479__INCLUDED_)
