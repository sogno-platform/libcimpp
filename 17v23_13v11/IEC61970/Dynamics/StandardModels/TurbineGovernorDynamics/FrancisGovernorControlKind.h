///////////////////////////////////////////////////////////
//  FrancisGovernorControlKind.h
//  Implementation of the Class FrancisGovernorControlKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef FRANCISGOVERNORCONTROLKIND_H
#define FRANCISGOVERNORCONTROLKIND_H

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
					 _undef = -1, 	mechanicHydrolicTachoAccelerator,
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
#endif // FRANCISGOVERNORCONTROLKIND_H
