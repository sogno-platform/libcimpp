///////////////////////////////////////////////////////////
//  ExcAVR2.h
//  Implementation of the Class ExcAVR2
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCAVR2_H
#define EXCAVR2_H

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
				 * Italian excitation system corresponding to IEEE (1968) Type 2 Model. It
				 * represents alternator and rotating diodes and electromechanic voltage
				 * regulators.
				 */
				class ExcAVR2 : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAVR2();
					virtual ~ExcAVR2();
					/**
					 * Field voltage value 1 (E1).  Typical Value = 4.18.
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
					 * Rate feedback gain (K<sub>F</sub>).  Typical Value = 0.12.
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
					 * AVR time constant (T<sub>A</sub>).  Typical Value = 0.02.
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
					 * Rate feedback time constant (T<sub>F1</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf1;
					/**
					 * Rate feedback time constant (T<sub>F2</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf2;
					/**
					 * Minimum AVR output (V<sub>RMN</sub>).  Typical Value = -6.
					 */
					IEC61970::Base::Domain::PU vrmn;
					/**
					 * Maximum AVR output (V<sub>RMX</sub>).  Typical Value = 7.
					 */
					IEC61970::Base::Domain::PU vrmx;

				};

			}

		}

	}

}
#endif // EXCAVR2_H
