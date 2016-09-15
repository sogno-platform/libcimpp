///////////////////////////////////////////////////////////
//  GovHydroIEEE0.h
//  Implementation of the Class GovHydroIEEE0
//  Created on:      28-Jan-2016 12:45:07
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_57B5715D_3D8D_4d30_AF5D_656D81737BA1__INCLUDED_)
#define EA_57B5715D_3D8D_4d30_AF5D_656D81737BA1__INCLUDED_

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
				 * IEEE Simplified Hydro Governor-Turbine Model.  Used for Mechanical-Hydraulic
				 * and Electro-Hydraulic turbine governors, with our without steam feedback.
				 * Typical values given are for Mechanical-Hydraulic.
				 * 
				 * Ref<font color="#0f0f0f">erence: IEEE Transactions on Power Apparatus and
				 * Systems</font>
				 * <font color="#0f0f0f">November/December 1973, Volume PAS-92, Number 6</font>
				 * <font color="#0f0f0f"><i><u>Dynamic Models for Steam and Hydro Turbines in
				 * Power System Studies</u></i>, Page 1904.</font>
				 */
				class GovHydroIEEE0 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovHydroIEEE0();
					virtual ~GovHydroIEEE0();
					/**
					 * Governor gain (K<i>)</i>.
					 */
					IEC61970::Base::Domain::PU k;
					/**
					 * Base for power values (MWbase) (> 0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Gate maximum (Pmax). 
					 */
					IEC61970::Base::Domain::PU pmax;
					/**
					 * Gate minimum (Pmin). 
					 */
					IEC61970::Base::Domain::PU pmin;
					/**
					 * Governor lag time constant (T1).  Typical Value = 0.25.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Governor lead time constant (T2<i>)</i>.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Gate actuator time constant (T3).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Water starting time (T4). 
					 */
					IEC61970::Base::Domain::Seconds t4;

				};

			}

		}

	}

}
#endif // !defined(EA_57B5715D_3D8D_4d30_AF5D_656D81737BA1__INCLUDED_)
