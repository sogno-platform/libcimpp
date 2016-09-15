///////////////////////////////////////////////////////////
//  ExcAVR3.h
//  Implementation of the Class ExcAVR3
//  Created on:      28-Jan-2016 12:44:23
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_A606A7B6_637E_461a_BC59_314B615F42AE__INCLUDED_)
#define EA_A606A7B6_637E_461a_BC59_314B615F42AE__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
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
				 * Italian excitation system. It represents exciter dynamo and electric regulator. 
				 */
				class ExcAVR3 : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAVR3();
					virtual ~ExcAVR3();
					/**
					 * Field voltage value 1 (E1).  Typical Value = 4.18.
					 */
					IEC61970::Base::Domain::PU e1;
					/**
					 * Field voltage value 2 (E2).  Typical Value = 3.14.
					 */
					IEC61970::Base::Domain::PU e2;
					/**
					 * AVR gain (K<sub>A</sub>).  Typical Value = 3000.
					 */
					IEC61970::Base::Domain::Float ka;
					/**
					 * Saturation factor at E1 (S(E1)).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Float se1;
					/**
					 * Saturation factor at E2 (S(E2)).  Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::Float se2;
					/**
					 * AVR time constant (T<sub>1</sub>).  Typical Value = 220.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * AVR time constant (T<sub>2</sub>).  Typical Value = 1.6.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * AVR time constant (T<sub>3</sub>).  Typical Value = 0.66.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * AVR time constant (T<sub>4</sub>).  Typical Value = 0.07.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Exciter time constant (T<sub>E</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Maximum AVR output (V<sub>RMN</sub>).  Typical Value = -7.5.
					 */
					IEC61970::Base::Domain::PU vrmn;
					/**
					 * Minimum AVR output (V<sub>RMX</sub>).  Typical Value = 7.5.
					 */
					IEC61970::Base::Domain::PU vrmx;

				};

			}

		}

	}

}
#endif // !defined(EA_A606A7B6_637E_461a_BC59_314B615F42AE__INCLUDED_)
