///////////////////////////////////////////////////////////
//  SynchronousMachineSimplified.h
//  Implementation of the Class SynchronousMachineSimplified
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef SYNCHRONOUSMACHINESIMPLIFIED_H
#define SYNCHRONOUSMACHINESIMPLIFIED_H

#include "IEC61970/Dynamics/StandardModels/SynchronousMachineDynamics/SynchronousMachineDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace SynchronousMachineDynamics
			{
				/**
				 * The simplified model represents a synchronous generator as a constant internal
				 * voltage behind an impedance (<b>Rs</b> + <b>jXp</b>) as shown in the Simplified
				 * diagram.
				 * 
				 * Since internal voltage is held constant, there is no <b>Efd</b> input and any
				 * excitation system model will be ignored.  There is also no <b>Ifd</b> output.
				 * 
				 * This model should not be used for representing a real generator except, perhaps,
				 * small generators whose response is insignificant.
				 * 
				 * The parameters used for the Simplified model include:
				 * <ul>
				 * 	<li>RotatingMachineDynamics.damping (D)</li>
				 * 	<li>RotatingMachineDynamics.inertia (H)</li>
				 * 	<li>RotatingMachineDynamics.statorLeakageReactance (used to exchange jXp for
				 * SynchronousMachineSimplified)</li>
				 * 	<li>RotatingMachineDynamics.statorResistance (Rs).</li>
				 * </ul>
				 */
				class SynchronousMachineSimplified : public IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics
				{

				public:
					SynchronousMachineSimplified();
					virtual ~SynchronousMachineSimplified();

				};

			}

		}

	}

}
#endif // SYNCHRONOUSMACHINESIMPLIFIED_H
