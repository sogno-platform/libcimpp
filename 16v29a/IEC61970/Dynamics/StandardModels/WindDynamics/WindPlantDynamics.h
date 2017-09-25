///////////////////////////////////////////////////////////
//  WindPlantDynamics.h
//  Implementation of the Class WindPlantDynamics
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDPLANTDYNAMICS_H
#define WINDPLANTDYNAMICS_H

#include <list>

#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType3or4Dynamics.h"
#include "IEC61970/Dynamics/StandardModels/DynamicsFunctionBlock.h"
#include "IEC61970/Dynamics/StandardInterconnections/RemoteInputSignal.h"

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
				 * plant IEC and user defined wind plants including their control models.
				 */
				class WindPlantDynamics : public IEC61970::Dynamics::StandardModels::DynamicsFunctionBlock
				{

				public:
					WindPlantDynamics();
					virtual ~WindPlantDynamics();
					/**
					 * The wind turbine type 3 or 4 associated with this wind plant.
					 */
					std::list<IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4Dynamics*> WindTurbineType3or4Dynamics;
					/**
					 * The remote signal with which this power plant is associated.
					 */
					IEC61970::Dynamics::StandardInterconnections::RemoteInputSignal *RemoteInputSignal;

				};

			}

		}

	}

}
#endif // WINDPLANTDYNAMICS_H
