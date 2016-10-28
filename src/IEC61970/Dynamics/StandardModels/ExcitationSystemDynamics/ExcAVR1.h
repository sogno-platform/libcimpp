///////////////////////////////////////////////////////////
//  ExcAVR1.h
//  Implementation of the Class ExcAVR1
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCAVR1_H
#define EXCAVR1_H

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
				 * Italian excitation system corresponding to IEEE (1968) Type 1 Model. It
				 * represents exciter dynamo and electromechanical regulator.
				 */
				class ExcAVR1 : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAVR1();
					virtual ~ExcAVR1();
					/**
					 * Field voltage value 1  (E1).  Typical Value = 4.18.
					 */
					IEC61970::Base::Domain::PU e1;
					/**
					 * Field voltage value 2 (E2).  Typical Value = 3.14.
					 */
					IEC61970::Base::Domain::PU e2;
					/**
					 * AVR gain (K<sub>A</sub>).  Typical Value = 500.
					 */
					IEC61970::Base::Domain::Float ka;
					/**
					 * Rate feedback gain (K<sub>F</sub>).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Float kf;
					/**
					 * Saturation factor at E1 (S(E1)).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Float se1;
					/**
					 * Saturation factor at E2 (S(E2)).  Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::Float se2;
					/**
					 * AVR time constant (T<sub>A</sub>).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * AVR time constant (T<sub>B</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Exciter time constant (T<sub>E</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Rate feedback time constant (T<sub>F</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Maximum AVR output (V<sub>RMN</sub>).  Typical Value = -6.
					 */
					IEC61970::Base::Domain::PU vrmn;
					/**
					 * Minimum AVR output (V<sub>RMX</sub>).  Typical Value = 7.
					 */
					IEC61970::Base::Domain::PU vrmx;

				};

			}

		}

	}

}
#endif // EXCAVR1_H
