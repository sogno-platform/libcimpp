///////////////////////////////////////////////////////////
//  GovHydroPelton.h
//  Implementation of the Class GovHydroPelton
//  Created on:      28-Jan-2016 12:45:08
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_61A1C278_E031_40cd_924C_609D0D434D8A__INCLUDED_)
#define EA_61A1C278_E031_40cd_924C_609D0D434D8A__INCLUDED_

#include "IEC61970/Base/Domain/Area.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Frequency.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Domain/VolumeFlowRate.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Float.h"
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
				 * Detailed hydro unit - Pelton model.  This model can be used to represent the
				 * dynamic related to water tunnel and surge chamber.
				 * A schematic of the hydraulic system of detailed hydro unit models, like Francis
				 * and Pelton, is located under the GovHydroFrancis class.
				 */
				class GovHydroPelton : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovHydroPelton();
					virtual ~GovHydroPelton();
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
					 * Droop (bp).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU bp;
					/**
					 * Intentional dead-band width (DB1).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency db1;
					/**
					 * Intentional dead-band width of valve opening error (DB2). Unit = Hz.  Typical
					 * Value = 0.01.
					 */
					IEC61970::Base::Domain::Frequency db2;
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
					 * Typical Value = -0.025.
					 */
					IEC61970::Base::Domain::PU kg;
					/**
					 * No-load turbine flow at nominal head (Qc0).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU qc0;
					/**
					 * Rated flow (Q<sub>n</sub>). Unit = m<sup>3</sup>/s. Typical Value = 40.
					 */
					IEC61970::Base::Domain::VolumeFlowRate qn;
					/**
					 * Simplified Pelton model simulation (Sflag).
					 * true = enable of simplified Pelton model simulation
					 * false = enable of complete Pelton model simulation (non linear gain).
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean simplifiedPelton;
					/**
					 * Static compensating characteristic (Cflag).
					 * true = enable of static compensating characteristic
					 * false = inhibit of static compensating characteristic.
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean staticCompensating;
					/**
					 * Derivative gain (accelerometer time constant) (Ta).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Gate servo time constant (Ts).  Typical Value = 0.15.
					 */
					IEC61970::Base::Domain::Seconds ts;
					/**
					 * Servomotor integrator time constant (TV).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Seconds tv;
					/**
					 * Water inertia time constant (Twnc).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds twnc;
					/**
					 * Water tunnel and surge chamber inertia time constant (Twng). Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds twng;
					/**
					 * Electronic integrator time constant (Tx).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds tx;
					/**
					 * Maximum gate opening velocity (Va).  Unit = PU/sec.  Typical Value = 0.016.
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
					 * Maximum servomotor valve opening velocity (Vav).  Typical Value = 0.017.
					 */
					IEC61970::Base::Domain::PU vav;
					/**
					 * Maximum gate closing velocity (Vc).  Unit = PU/sec.  Typical Value = -0.016.
					 */
					IEC61970::Base::Domain::Float vc;
					/**
					 * Maximum servomotor valve closing velocity (Vcv).  Typical Value = -0.017.
					 */
					IEC61970::Base::Domain::PU vcv;
					/**
					 * Water tunnel and surge chamber simulation (Tflag).
					 * true = enable of water tunnel and surge chamber simulation
					 * false = inhibit of water tunnel and surge chamber simulation.
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean waterTunnelSurgeChamberSimulation;
					/**
					 * Head of upper water level with respect to the level of penstock (Zsfc).  Unit =
					 * m. Typical Value = 25.
					 */
					IEC61970::Base::Domain::Length zsfc;

				};

			}

		}

	}

}
#endif // !defined(EA_61A1C278_E031_40cd_924C_609D0D434D8A__INCLUDED_)
