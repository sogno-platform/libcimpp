///////////////////////////////////////////////////////////
//  GovGAST3.h
//  Implementation of the Class GovGAST3
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef GOVGAST3_H
#define GOVGAST3_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Temperature.h"
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
				 * Generic turbogas with acceleration and temperature controller.
				 */
				class GovGAST3 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovGAST3();
					virtual ~GovGAST3();
					/**
					 * Acceleration limit set-point (Bca).  Unit = 1/s.  Typical Value = 0.01.
					 */
					IEC61970::Base::Domain::Float bca;
					/**
					 * Droop (bp).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU bp;
					/**
					 * Exhaust temperature variation due to fuel flow increasing from 0 to 1 PU
					 * (deltaTc).  Typical Value = 390.
					 */
					IEC61970::Base::Domain::Temperature dtc;
					/**
					 * Minimum fuel flow (Ka).  Typical Value = 0.23.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Fuel system feedback (K<sub>AC</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float kac;
					/**
					 * Acceleration control integral gain (Kca). Unit = 1/s.  Typical Value = 100.
					 */
					IEC61970::Base::Domain::Float kca;
					/**
					 * Gain of radiation shield (Ksi).  Typical Value = 0.8.
					 */
					IEC61970::Base::Domain::Float ksi;
					/**
					 * Coefficient of transfer function of fuel valve positioner (Ky).  Typical Value
					 * = 1.
					 */
					IEC61970::Base::Domain::Float ky;
					/**
					 * Fuel flow maximum negative error value (MN<sub>EF</sub>).  Typical Value = -0.
					 * 05.
					 */
					IEC61970::Base::Domain::PU mnef;
					/**
					 * Fuel flow maximum positive error value (MX<sub>EF</sub>).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU mxef;
					/**
					 * Minimum fuel flow (RCMN).  Typical Value = -0.1.
					 */
					IEC61970::Base::Domain::PU rcmn;
					/**
					 * Maximum fuel flow (RCMX).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU rcmx;
					/**
					 * Fuel control time constant (Tac).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds tac;
					/**
					 * Compressor discharge volume time constant (Tc).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Temperature controller derivative gain (Td).  Typical Value = 3.3.
					 */
					IEC61970::Base::Domain::Seconds td;
					/**
					 * Turbine rated exhaust temperature correspondent to Pm=1 PU (Tfen).  Typical
					 * Value = 540.
					 */
					IEC61970::Base::Domain::Temperature tfen;
					/**
					 * Time constant of speed governor (Tg).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds tg;
					/**
					 * Time constant of radiation shield (Tsi).  Typical Value = 15.
					 */
					IEC61970::Base::Domain::Seconds tsi;
					/**
					 * Temperature controller integration rate (Tt).  Typical Value = 250.
					 */
					IEC61970::Base::Domain::Temperature tt;
					/**
					 * Time constant of thermocouple (Ttc).  Typical Value = 2.5.
					 */
					IEC61970::Base::Domain::Seconds ttc;
					/**
					 * Time constant of fuel valve positioner (Ty).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Seconds ty;

				};

			}

		}

	}

}
#endif // GOVGAST3_H
