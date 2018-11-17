///////////////////////////////////////////////////////////
//  ExcREXSFeedbackSignalKind.h
//  Implementation of the Class ExcREXSFeedbackSignalKind
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef EXCREXSFEEDBACKSIGNALKIND_H
#define EXCREXSFEEDBACKSIGNALKIND_H

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
					 _undef = -1, 	fieldVoltage,
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
#endif // EXCREXSFEEDBACKSIGNALKIND_H
