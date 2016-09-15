///////////////////////////////////////////////////////////
//  WindPlantIEC.h
//  Implementation of the Class WindPlantIEC
//  Created on:      28-Jan-2016 12:47:56
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_01F84FC2_5961_45b5_A6A3_308583E1E745__INCLUDED_)
#define EA_01F84FC2_5961_45b5_A6A3_308583E1E745__INCLUDED_

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
#endif // !defined(EA_01F84FC2_5961_45b5_A6A3_308583E1E745__INCLUDED_)
