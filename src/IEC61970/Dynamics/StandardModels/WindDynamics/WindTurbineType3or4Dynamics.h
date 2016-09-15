///////////////////////////////////////////////////////////
//  WindTurbineType3or4Dynamics.h
//  Implementation of the Class WindTurbineType3or4Dynamics
//  Created on:      28-Jan-2016 12:48:00
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_B9FBD473_8FFA_4369_9E66_253921670F5B__INCLUDED_)
#define EA_B9FBD473_8FFA_4369_9E66_253921670F5B__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
#include "IEC61970/Dynamics/StandardInterconnections/RemoteInputSignal.h"
#include "IEC61970/Base/Wires/WindTurbineType3or4.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Parent class supporting relationships to wind turbines Type 3 and 4 and wind
				 * plant including their control models.
				 */
				class WindTurbineType3or4Dynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					WindTurbineType3or4Dynamics();
					virtual ~WindTurbineType3or4Dynamics();
					/**
					 * Remote input signal used by these wind turbine Type 3 or 4 models.
					 */
					IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal *RemoteInputSignal;
					IEC61970::Base::Wires::WindTurbineType3or4 *WindTurbineType3or4;

				};

			}

		}

	}

}
#endif // !defined(EA_B9FBD473_8FFA_4369_9E66_253921670F5B__INCLUDED_)
