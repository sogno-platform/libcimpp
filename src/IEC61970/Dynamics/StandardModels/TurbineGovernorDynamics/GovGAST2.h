///////////////////////////////////////////////////////////
//  GovGAST2.h
//  Implementation of the Class GovGAST2
//  Created on:      28-Jan-2016 12:45:02
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_38FABC9F_9DF6_47cf_B968_5F136B1608B9__INCLUDED_)
#define EA_38FABC9F_9DF6_47cf_B968_5F136B1608B9__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Temperature.h"
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
				 * Gas turbine model.
				 */
				class GovGAST2 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovGAST2();
					virtual ~GovGAST2();
					/**
					 * Valve positioner (A).
					 */
					IEC61970::Base::Domain::Float a;
					/**
					 * Exhaust temperature Parameter (Af1).  Unit = per unit temperature.  Based on
					 * temperature in degrees C.
					 */
					IEC61970::Base::Domain::PU af1;
					/**
					 * Coefficient equal to 0.5(1-speed) (Af2).
					 */
					IEC61970::Base::Domain::PU af2;
					/**
					 * Valve positioner (B). 
					 */
					IEC61970::Base::Domain::Float b;
					/**
					 * (Bf1).  Bf1 = E(1-w) where E (speed sensitivity coefficient) is 0.55 to 0.65 x
					 * Tr.  Unit = per unit temperature.  Based on temperature in degrees C.
					 */
					IEC61970::Base::Domain::PU bf1;
					/**
					 * Turbine Torque Coefficient K<sub>hhv</sub> (depends on heating value of fuel
					 * stream in combustion chamber) (Bf2).
					 */
					IEC61970::Base::Domain::PU bf2;
					/**
					 * Valve positioner (C). 
					 */
					IEC61970::Base::Domain::Float c;
					/**
					 * Coefficient defining fuel flow where power output is 0% (Cf2).  Synchronous but
					 * no output.  Typically 0.23 x K<sub>hhv</sub> (23% fuel flow).
					 */
					IEC61970::Base::Domain::PU cf2;
					/**
					 * Combustion reaction time delay (Ecr).
					 */
					IEC61970::Base::Domain::Seconds ecr;
					/**
					 * Turbine and exhaust delay (Etd).
					 */
					IEC61970::Base::Domain::Seconds etd;
					/**
					 * Ratio of Fuel Adjustment (K3).
					 */
					IEC61970::Base::Domain::PU k3;
					/**
					 * Gain of radiation shield (K4).
					 */
					IEC61970::Base::Domain::PU k4;
					/**
					 * Gain of radiation shield (K5).
					 */
					IEC61970::Base::Domain::PU k5;
					/**
					 * Minimum fuel flow (K6). 
					 */
					IEC61970::Base::Domain::PU k6;
					/**
					 * Fuel system feedback (Kf).
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Base for power values (MWbase) (> 0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Fuel Control Time Constant (T).
					 */
					IEC61970::Base::Domain::Seconds t;
					/**
					 * Radiation shield time constant (T3).
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Thermocouple time constant (T4).
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Temperature control time constant (T5).
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Temperature control (Tc).  Unit = °F or °C depending on constants Af1 and Bf1. 
					 */
					IEC61970::Base::Domain::Temperature tc;
					/**
					 * Compressor discharge time constant (Tcd).
					 */
					IEC61970::Base::Domain::Seconds tcd;
					/**
					 * Fuel system time constant (Tf).
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Maximum Turbine limit (Tmax).
					 */
					IEC61970::Base::Domain::PU tmax;
					/**
					 * Minimum Turbine limit (Tmin).
					 */
					IEC61970::Base::Domain::PU tmin;
					/**
					 * Rated temperature (Tr).  Unit = °C depending on parameters Af1 and Bf1.
					 */
					IEC61970::Base::Domain::Temperature tr;
					/**
					 * Turbine rating (Trate).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower trate;
					/**
					 * Temperature controller integration rate (Tt).
					 */
					IEC61970::Base::Domain::Seconds tt;
					/**
					 * Governor gain (1/droop) on turbine rating (W).
					 */
					IEC61970::Base::Domain::PU w;
					/**
					 * Governor lead time constant (X).
					 */
					IEC61970::Base::Domain::Seconds x;
					/**
					 * Governor lag time constant (Y) (>0).
					 */
					IEC61970::Base::Domain::Seconds y;
					/**
					 * Governor mode (Z).
					 * true = Droop
					 * false = ISO.
					 */
					IEC61970::Base::Domain::Boolean z;

				};

			}

		}

	}

}
#endif // !defined(EA_38FABC9F_9DF6_47cf_B968_5F136B1608B9__INCLUDED_)
