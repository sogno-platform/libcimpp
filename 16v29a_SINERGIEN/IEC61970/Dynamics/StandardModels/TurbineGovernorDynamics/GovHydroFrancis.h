///////////////////////////////////////////////////////////
//  GovHydroFrancis.h
//  Implementation of the Class GovHydroFrancis
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef GOVHYDROFRANCIS_H
#define GOVHYDROFRANCIS_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Area.h"
#include "IEC61970/Base/Domain/Frequency.h"
#include "IEC61970/Dynamics/StandardModels/TurbineGovernorDynamics/FrancisGovernorControlKind.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Domain/VolumeFlowRate.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Boolean.h"
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
				 * Detailed hydro unit - Francis model.  This model can be used to represent three
				 * types of governors.
				 * A schematic of the hydraulic system of detailed hydro unit models, like Francis
				 * and Pelton, is provided in the DetailedHydroModelHydraulicSystem diagram.
				 */
				class GovHydroFrancis : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovHydroFrancis();
					virtual ~GovHydroFrancis();
					/**
					 * Opening section S<sub>eff</sub> at the maximum efficiency (Am).  Typical Value
					 * = 0.7.
					 */
					IEC61970::Base::Domain::PU am;
					/**
					 * Area of the surge tank (A<sub>V0</sub>). Unit = m<sup>2</sup>. Typical Value =
					 * 30.
					 */
					IEC61970::Base::Domain::Area av0;
					/**
					 * Area of the compensation tank (A<sub>V1</sub>). Unit = m<sup>2</sup>. Typical
					 * Value = 700.
					 */
					IEC61970::Base::Domain::Area av1;
					/**
					 * Droop (Bp).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU bp;
					/**
					 * Intentional dead-band width (DB1).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency db1;
					/**
					 * Maximum efficiency (EtaMax).  Typical Value = 1.05.
					 */
					IEC61970::Base::Domain::PU etamax;
					/**
					 * Governor control flag (Cflag).  Typical Value =
					 * mechanicHydrolicTachoAccelerator.
					 */
					IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::FrancisGovernorControlKind governorControl = IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::FrancisGovernorControlKind::_undef;
					/**
					 * Head of compensation chamber water level with respect to the level of penstock
					 * (H<sub>1</sub>).  Unit = m. Typical Value = 4.
					 */
					IEC61970::Base::Domain::Length h1;
					/**
					 * Head of surge tank water level with respect to the level of penstock
					 * (H<sub>2</sub>).  Unit = m. Typical Value = 40.
					 */
					IEC61970::Base::Domain::Length h2;
					/**
					 * Rated hydraulic head (H<sub>n</sub>).  Unit = m. Typical Value = 250.
					 */
					IEC61970::Base::Domain::Length hn;
					/**
					 * Penstock loss coefficient (due to friction) (Kc).  Typical Value = 0.025.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Water tunnel and surge chamber loss coefficient (due to friction) (Kg).
					 * Typical Value = 0.025.
					 */
					IEC61970::Base::Domain::PU kg;
					/**
					 * Washout gain (Kt).  Typical Value = 0.25.
					 */
					IEC61970::Base::Domain::PU kt;
					/**
					 * No-load turbine flow at nominal head (Qc0).  Typical Value = 0.21.
					 */
					IEC61970::Base::Domain::PU qc0;
					/**
					 * Rated flow (Q<sub>n</sub>). Unit = m<sup>3</sup>/s. Typical Value = 40.
					 */
					IEC61970::Base::Domain::VolumeFlowRate qn;
					/**
					 * Derivative gain (Ta).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Washout time constant (Td).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds td;
					/**
					 * Gate servo time constant (Ts).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds ts;
					/**
					 * Water inertia time constant (Twnc).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds twnc;
					/**
					 * Water tunnel and surge chamber inertia time constant (Twng). Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds twng;
					/**
					 * Derivative feedback gain (Tx).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tx;
					/**
					 * Maximum gate opening velocity (Va).  Unit = PU/sec.  Typical Value = 0.011.
					 */
					IEC61970::Base::Domain::Float va;
					/**
					 * Maximum gate opening (ValvMax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU valvmax;
					/**
					 * Minimum gate opening (ValvMin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU valvmin;
					/**
					 * Maximum gate closing velocity (Vc).  Unit = PU/sec.  Typical Value = -0.011.
					 */
					IEC61970::Base::Domain::Float vc;
					/**
					 * Water tunnel and surge chamber simulation (Tflag).
					 * true = enable of water tunnel and surge chamber simulation
					 * false = inhibit of water tunnel and surge chamber simulation.
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean waterTunnelSurgeChamberSimulation;
					/**
					 * Head of upper water level with respect to the level of penstock (Zsfc).  Unit =
					 * m.  Typical Value = 25.
					 */
					IEC61970::Base::Domain::Length zsfc;

				};

			}

		}

	}

}
#endif // GOVHYDROFRANCIS_H
