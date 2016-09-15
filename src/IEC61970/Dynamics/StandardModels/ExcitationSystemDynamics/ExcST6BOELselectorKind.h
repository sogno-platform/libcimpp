///////////////////////////////////////////////////////////
//  ExcST6BOELselectorKind.h
//  Implementation of the Class ExcST6BOELselectorKind
//  Created on:      28-Jan-2016 12:44:47
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_349A3AAA_44E3_471e_8F9F_A72FB0695D2A__INCLUDED_)
#define EA_349A3AAA_44E3_471e_8F9F_A72FB0695D2A__INCLUDED_

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * Type of connection for the OEL input used for static excitation systems type 6B.
				 */
				enum class ExcST6BOELselectorKind
				{
					/**
					 * No OEL input is used.
					 */
					noOELinput,
					/**
					 * The connection is before UEL.
					 */
					beforeUEL,
					/**
					 * The connection is after UEL.
					 */
					afterUEL
				};

			}

		}

	}

}
#endif // !defined(EA_349A3AAA_44E3_471e_8F9F_A72FB0695D2A__INCLUDED_)
