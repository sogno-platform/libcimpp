///////////////////////////////////////////////////////////
//  PowerSystemStabilizerDynamics.h
//  Implementation of the Class PowerSystemStabilizerDynamics
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef POWERSYSTEMSTABILIZERDYNAMICS_H
#define POWERSYSTEMSTABILIZERDYNAMICS_H

#include <list>

#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"
#include "IEC61970/Dynamics/StandardInterconnections/RemoteInputSignal.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace PowerSystemStabilizerDynamics
			{
				/**
				 * Power system stabilizer function block whose behaviour is described by
				 * reference to a standard model <font color="#0f0f0f">or by definition of a user-
				 * defined model.</font>
				 */
				class PowerSystemStabilizerDynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					PowerSystemStabilizerDynamics();
					virtual ~PowerSystemStabilizerDynamics();
					/**
					 * Excitation system model with which this power system stabilizer model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics *ExcitationSystemDynamics;
					/**
					 * Remote input signal used by this power system stabilizer model.
					 */
					std::list<IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal*> RemoteInputSignal;

				};

			}

		}

	}

}
#endif // POWERSYSTEMSTABILIZERDYNAMICS_H
