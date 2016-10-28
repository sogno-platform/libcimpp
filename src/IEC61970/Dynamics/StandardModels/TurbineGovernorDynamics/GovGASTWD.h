///////////////////////////////////////////////////////////
//  GovGASTWD.h
//  Implementation of the Class GovGASTWD
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef GOVGASTWD_H
#define GOVGASTWD_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Temperature.h"
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
				 * Woodward Gas turbine governor model. 
				 */
				class GovGASTWD : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovGASTWD();
					virtual ~GovGASTWD();
					/**
					 * Valve positioner (<i>A</i>).
					 */
					IEC61970::Base::Domain::Float a;
					/**
					 * Exhaust temperature Parameter (Af1).
					 */
					IEC61970::Base::Domain::PU af1;
					/**
					 * Coefficient equal to 0.5(1-speed) (Af2).
					 */
					IEC61970::Base::Domain::PU af2;
					/**
					 * Valve positioner (<i>B</i>). 
					 */
					IEC61970::Base::Domain::Float b;
					/**
					 * (Bf1).  Bf1 = E(1-w) where E (speed sensitivity coefficient) is 0.55 to 0.65 x
					 * Tr.
					 */
					IEC61970::Base::Domain::PU bf1;
					/**
					 * Turbine Torque Coefficient K<sub>hhv</sub> (depends on heating value of fuel
					 * stream in combustion chamber) (Bf2).
					 */
					IEC61970::Base::Domain::PU bf2;
					/**
					 * Valve positioner (<i>C</i>). 
					 */
					IEC61970::Base::Domain::Float c;
					/**
					 * Coefficient defining fuel flow where power output is 0% (Cf2).  Synchronous but
					 * no output.  Typically 0.23 x K<sub>hhv </sub>(23% fuel flow).
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
					 * Drop Governor Gain (Kd).
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * (Kdroop).
					 */
					IEC61970::Base::Domain::PU kdroop;
					/**
					 * Fuel system feedback (Kf).
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Isochronous Governor Gain (Ki).
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * PID Proportional gain (Kp).
					 */
					IEC61970::Base::Domain::PU kp;
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
					 * Temperature control (Tc).
					 */
					IEC61970::Base::Domain::Temperature tc;
					/**
					 * Compressor discharge time constant (Tcd).
					 */
					IEC61970::Base::Domain::Seconds tcd;
					/**
					 * Power transducer time constant (Td).
					 */
					IEC61970::Base::Domain::Seconds td;
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
					 * Rated temperature (Tr).
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

				};

			}

		}

	}

}
#endif // GOVGASTWD_H
