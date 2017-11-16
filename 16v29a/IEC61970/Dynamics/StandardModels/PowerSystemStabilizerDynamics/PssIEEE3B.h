///////////////////////////////////////////////////////////
//  PssIEEE3B.h
//  Implementation of the Class PssIEEE3B
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef PSSIEEE3B_H
#define PSSIEEE3B_H

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
				 * The class represents IEEE Std 421.5-2005 type PSS3B power system stabilizer
				 * model. The PSS model PSS3B has dual inputs of electrical power and rotor
				 * angular frequency deviation. The signals are used to derive an equivalent
				 * mechanical power signal.
				 * 
				 * Reference: IEEE 3B 421.5-2005 Section 8.3. 
				 */
				class PssIEEE3B : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					PssIEEE3B();
					virtual ~PssIEEE3B();
					/**
					 * Notch filter parameter (A1).  Typical Value = 0.359.
					 */
					IEC61970::Base::Domain::PU a1;
					/**
					 * Notch filter parameter (A2).  Typical Value = 0.586.
					 */
					IEC61970::Base::Domain::PU a2;
					/**
					 * Notch filter parameter (A3).  Typical Value = 0.429.
					 */
					IEC61970::Base::Domain::PU a3;
					/**
					 * Notch filter parameter (A4).  Typical Value = 0.564.
					 */
					IEC61970::Base::Domain::PU a4;
					/**
					 * Notch filter parameter (A5).  Typical Value = 0.001.
					 */
					IEC61970::Base::Domain::PU a5;
					/**
					 * Notch filter parameter (A6).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU a6;
					/**
					 * Notch filter parameter (A7).  Typical Value = 0.031.
					 */
					IEC61970::Base::Domain::PU a7;
					/**
					 * Notch filter parameter (A8).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU a8;
					/**
					 * Type of input signal #1.  Typical Value = generatorElectricalPower.
					 */
					IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::InputSignalKind inputSignal1Type = IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::InputSignalKind::_undef;
					/**
					 * Type of input signal #2.  Typical Value = rotorSpeed.
					 */
					IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::InputSignalKind inputSignal2Type = IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::InputSignalKind::_undef;
					/**
					 * Gain on signal # 1 (Ks1).  Typical Value = -0.602.
					 */
					IEC61970::Base::Domain::PU ks1;
					/**
					 * Gain on signal # 2 (Ks2).  Typical Value = 30.12.
					 */
					IEC61970::Base::Domain::PU ks2;
					/**
					 * Transducer time constant (T1).  Typical Value = 0.012.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Transducer time constant (T2).  Typical Value = 0.012.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Washout time constant (Tw1).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Seconds tw1;
					/**
					 * Washout time constant (Tw2).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Seconds tw2;
					/**
					 * Washout time constant (Tw3).  Typical Value = 0.6.
					 */
					IEC61970::Base::Domain::Seconds tw3;
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
#endif // PSSIEEE3B_H
