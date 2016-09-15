///////////////////////////////////////////////////////////
//  FrancisGovernorControlKind.h
//  Implementation of the Class FrancisGovernorControlKind
//  Created on:      28-Jan-2016 12:44:53
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_ABAD1020_D0CF_4f99_81ED_0757C17281BB__INCLUDED_)
#define EA_ABAD1020_D0CF_4f99_81ED_0757C17281BB__INCLUDED_

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace TurbineGovernorDynamics
			{
				/**
				 * Governor control flag for Francis hydro model.
				 */
				enum class FrancisGovernorControlKind
				{
					/**
					 * Mechanic-hydraulic regulator with tacho-accelerometer (Cflag = 1).
					 */
					mechanicHydrolicTachoAccelerator,
					/**
					 * Mechanic-hydraulic regulator with transient feedback (Cflag=2).
					 */
					mechanicHydraulicTransientFeedback,
					/**
					 * Electromechanical and electrohydraulic regulator (Cflag=3).
					 */
					electromechanicalElectrohydraulic
				};

			}

		}

	}

}
#endif // !defined(EA_ABAD1020_D0CF_4f99_81ED_0757C17281BB__INCLUDED_)
