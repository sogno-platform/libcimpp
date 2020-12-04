///////////////////////////////////////////////////////////
//  WindPlantIEC.h
//  Implementation of the Class WindPlantIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDPLANTIEC_H
#define WINDPLANTIEC_H

#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindPlantDynamics.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindPlantReactiveControlIEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Simplified IEC type plant level model.
				 * 
				 * Reference: IEC 61400-27-1, AnnexE.
				 */
				class WindPlantIEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantDynamics
				{

				public:
					WindPlantIEC();
					virtual ~WindPlantIEC();
					/**
					 * Wind plant model with which this wind reactive control is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantReactiveControlIEC *WindPlantReactiveControlIEC;

				};

			}

		}

	}

}
#endif // WINDPLANTIEC_H
