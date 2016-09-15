///////////////////////////////////////////////////////////
//  PssIEEE2B.h
//  Implementation of the Class PssIEEE2B
//  Created on:      28-Jan-2016 12:46:18
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_1F889104_9C52_487c_862A_446475F99AF2__INCLUDED_)
#define EA_1F889104_9C52_487c_862A_446475F99AF2__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/PowerSystemStabilizerDynamics/InputSignalKind.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/PowerSystemStabilizerDynamics/PowerSystemStabilizerDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace PowerSystemStabilizerDynamics
			{
				/**
				 * The class represents IEEE Std 421.5-2005 type PSS2B power system stabilizer
				 * model. This stabilizer model is designed to represent a variety of dual-input
				 * stabilizers, which normally use combinations of power and speed or frequency to
				 * derive the stabilizing signal.
				 * 
				 * Reference: IEEE 2B 421.5-2005 Section 8.2.
				 */
				class PssIEEE2B : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					PssIEEE2B();
					virtual ~PssIEEE2B();
					/**
					 * Type of input signal #1.  Typical Value = rotorSpeed.
					 */
					IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::InputSignalKind inputSignal1Type;
					/**
					 * Type of input signal #2.  Typical Value = generatorElectricalPower.
					 */
					IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::InputSignalKind inputSignal2Type;
					/**
					 * Stabilizer gain (Ks1).  Typical Value = 12.
					 */
					IEC61970::Base::Domain::PU ks1;
					/**
					 * Gain on signal #2 (Ks2).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::PU ks2;
					/**
					 * Gain on signal #2 input before ramp-tracking filter (Ks3).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ks3;
					/**
					 * Denominator order of ramp tracking filter (M).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::Integer m;
					/**
					 * Order of ramp tracking filter (N).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Integer n;
					/**
					 * Lead/lag time constant (T1).  Typical Value = 0.12.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Lead/lag time constant (T10).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t10;
					/**
					 * Lead/lag time constant (T11).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t11;
					/**
					 * Lead/lag time constant (T2).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Lead/lag time constant (T3).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Lead/lag time constant (T4).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Time constant on signal #1 (T6).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t6;
					/**
					 * Time constant on signal #2 (T7).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Seconds t7;
					/**
					 * Lead of ramp tracking filter (T8).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Seconds t8;
					/**
					 * Lag of ramp tracking filter (T9).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t9;
					/**
					 * First washout on signal #1 (Tw1).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Seconds tw1;
					/**
					 * Second washout on signal #1 (Tw2).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Seconds tw2;
					/**
					 * First washout on signal #2 (Tw3).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Seconds tw3;
					/**
					 * Second washout on signal #2 (Tw4).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tw4;
					/**
					 * Input signal #1 max limit (Vsi1max).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::PU vsi1max;
					/**
					 * Input signal #1 min limit (Vsi1min).  Typical Value = -2.
					 */
					IEC61970::Base::Domain::PU vsi1min;
					/**
					 * Input signal #2 max limit (Vsi2max).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::PU vsi2max;
					/**
					 * Input signal #2 min limit (Vsi2min).  Typical Value = -2.
					 */
					IEC61970::Base::Domain::PU vsi2min;
					/**
					 * Stabilizer output max limit (Vstmax).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU vstmax;
					/**
					 * Stabilizer output min limit (Vstmin).  Typical Value = -0.1.
					 */
					IEC61970::Base::Domain::PU vstmin;

				};

			}

		}

	}

}
#endif // !defined(EA_1F889104_9C52_487c_862A_446475F99AF2__INCLUDED_)
