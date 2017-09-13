///////////////////////////////////////////////////////////
//  ExcELIN1.h
//  Implementation of the Class ExcELIN1
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCELIN1_H
#define EXCELIN1_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * Static PI transformer fed excitation system: ELIN (VATECH) - simplified model.
				 * This model represents an all-static excitation system. A PI voltage controller
				 * establishes a desired field current set point for a proportional current
				 * controller. The integrator of the PI controller has a follow-up input to match
				 * its signal to the present field current.  A power system stabilizer with power
				 * input is included in the model.
				 */
				class ExcELIN1 : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcELIN1();
					virtual ~ExcELIN1();
					/**
					 * Controller follow up dead band (Dpnf).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU dpnf;
					/**
					 * Maximum open circuit excitation voltage (Efmax).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU efmax;
					/**
					 * Minimum open circuit excitation voltage (Efmin).  Typical Value = -5.
					 */
					IEC61970::Base::Domain::PU efmin;
					/**
					 * Stabilizer Gain 1 (Ks1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks1;
					/**
					 * Stabilizer Gain 2 (Ks2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks2;
					/**
					 * Stabilizer Limit Output (smax).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU smax;
					/**
					 * Current transducer time constant (Tfi).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tfi;
					/**
					 * Controller reset time constant (Tnu).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Seconds tnu;
					/**
					 * Stabilizer Phase Lag Time Constant (Ts1).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds ts1;
					/**
					 * Stabilizer Filter Time Constant (Ts2).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds ts2;
					/**
					 * Stabilizer parameters (Tsw).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds tsw;
					/**
					 * Current controller gain (Vpi).  Typical Value = 12.45.
					 */
					IEC61970::Base::Domain::PU vpi;
					/**
					 * Controller follow up gain (Vpnf).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::PU vpnf;
					/**
					 * Voltage controller proportional gain (Vpu).  Typical Value = 34.5.
					 */
					IEC61970::Base::Domain::PU vpu;
					/**
					 * Excitation transformer effective reactance (Xe) (>=0).  Xe represents the
					 * regulation of the transformer/rectifier unit.  Typical Value = 0.06.
					 */
					IEC61970::Base::Domain::PU xe;

				};

			}

		}

	}

}
#endif // EXCELIN1_H
