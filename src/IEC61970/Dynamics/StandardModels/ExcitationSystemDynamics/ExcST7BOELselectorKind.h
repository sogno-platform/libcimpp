///////////////////////////////////////////////////////////
//  ExcST7BOELselectorKind.h
//  Implementation of the Class ExcST7BOELselectorKind
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef EXCST7BOELSELECTORKIND_H
#define EXCST7BOELSELECTORKIND_H

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
#endif // EXCST7BOELSELECTORKIND_H
