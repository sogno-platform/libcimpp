///////////////////////////////////////////////////////////
//  GovSteamSGO.h
//  Implementation of the Class GovSteamSGO
//  Created on:      28-Jan-2016 12:45:15
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_3EB7D4D3_999B_4e2b_866D_BF40283270D5__INCLUDED_)
#define EA_3EB7D4D3_999B_4e2b_866D_BF40283270D5__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/TurbineGovernorDynamics/TurbineGovernorDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace TurbineGovernorDynamics
			{
				/**
				 * Simplified Steam turbine governor model.
				 */
				class GovSteamSGO : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovSteamSGO();
					virtual ~GovSteamSGO();
					/**
					 * One/per unit regulation (K1). 
					 */
					IEC61970::Base::Domain::PU k1;
					/**
					 * Fraction (K2). 
					 */
					IEC61970::Base::Domain::PU k2;
					/**
					 * Fraction (K3).
					 */
					IEC61970::Base::Domain::PU k3;
					/**
					 * Base for power values (MWbase) (>0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Upper power limit (Pmax). 
					 */
					IEC61970::Base::Domain::PU pmax;
					/**
					 * Lower power limit (Pmin).
					 */
					IEC61970::Base::Domain::Seconds pmin;
					/**
					 * Controller lag (T1).
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Controller lead compensation (T2).
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Governor lag (T3) (>0). 
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Delay due to steam inlet volumes associated with steam chest and inlet piping
					 * (T4). 
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Reheater delay including hot and cold leads (T5). 
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Delay due to IP-LP turbine, crossover pipes and LP end hoods (T6). 
					 */
					IEC61970::Base::Domain::Seconds t6;

				};

			}

		}

	}

}
#endif // !defined(EA_3EB7D4D3_999B_4e2b_866D_BF40283270D5__INCLUDED_)
