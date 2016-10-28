///////////////////////////////////////////////////////////
//  ExcST7BUELselectorKind.h
//  Implementation of the Class ExcST7BUELselectorKind
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef EXCST7BUELSELECTORKIND_H
#define EXCST7BUELSELECTORKIND_H

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
#endif // EXCST7BUELSELECTORKIND_H
