///////////////////////////////////////////////////////////
//  PssIEEE1A.h
//  Implementation of the Class PssIEEE1A
//  Created on:      28-Jan-2016 12:46:17
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_1199AC5B_EF1A_410d_B984_F849F68074AA__INCLUDED_)
#define EA_1199AC5B_EF1A_410d_B984_F849F68074AA__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/PowerSystemStabilizerDynamics/InputSignalKind.h"
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
				 * The class represents IEEE Std 421.5-2005 type PSS1A power system stabilizer
				 * model. PSS1A is the generalized form of a PSS with a single input. Some common
				 * stabilizer input signals are speed, frequency, and power.
				 * 
				 * Reference: IEEE 1A 421.5-2005 Section 8.1. 
				 */
				class PssIEEE1A : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					PssIEEE1A();
					virtual ~PssIEEE1A();
					/**
					 * PSS signal conditioning frequency filter constant (A1).  Typical Value = 0.061.
					 */
					IEC61970::Base::Domain::PU a1;
					/**
					 * PSS signal conditioning frequency filter constant (A2).  Typical Value = 0.0017.
					 */
					IEC61970::Base::Domain::PU a2;
					/**
					 * Type of input signal.  Typical Value = rotorAngularFrequencyDeviation.
					 */
					IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::InputSignalKind inputSignalType;
					/**
					 * Stabilizer gain (Ks).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * Lead/lag time constant (T1).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Lead/lag time constant (T2).  Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Lead/lag time constant (T3).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Lead/lag time constant (T4).  Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Washout time constant (T5).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Transducer time constant (T6).  Typical Value = 0.01.
					 */
					IEC61970::Base::Domain::Seconds t6;
					/**
					 * Maximum stabilizer output (Vrmax).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum stabilizer output (Vrmin).  Typical Value = -0.05.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_1199AC5B_EF1A_410d_B984_F849F68074AA__INCLUDED_)
