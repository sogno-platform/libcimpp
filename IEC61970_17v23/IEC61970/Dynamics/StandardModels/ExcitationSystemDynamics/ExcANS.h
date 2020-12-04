///////////////////////////////////////////////////////////
//  ExcANS.h
//  Implementation of the Class ExcANS
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCANS_H
#define EXCANS_H

#include "IEC61970/Base/Domain/Integer.h"
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
				 * Italian excitation system. It represents static field voltage or excitation
				 * current feedback excitation system.
				 */
				class ExcANS : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcANS();
					virtual ~ExcANS();
					/**
					 * Governor Control Flag (BLINT).
					 * 0 = lead-lag regulator
					 * 1 = proportional integral regulator.
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::Integer blint;
					/**
					 * Minimum exciter current (I<sub>FMN</sub>).  Typical Value = -5.2.
					 */
					IEC61970::Base::Domain::PU ifmn;
					/**
					 * Maximum exciter current (I<sub>FMX</sub>).  Typical Value = 6.5.
					 */
					IEC61970::Base::Domain::PU ifmx;
					/**
					 * Exciter gain (K<sub>2</sub>).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::Float k2;
					/**
					 * AVR gain (K<sub>3</sub>).  Typical Value = 1000.
					 */
					IEC61970::Base::Domain::Float k3;
					/**
					 * Ceiling factor (K<sub>CE</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Float kce;
					/**
					 * Feedback enabling (K<sub>RVECC</sub>).
					 * 0 = Open loop control
					 * 1 = Closed loop control.
					 * Typical Value = 1.
					 */
					IEC61970::Base::Domain::Integer krvecc;
					/**
					 * Rate feedback signal flag (K<sub>VFIF</sub>).
					 * 0 = output voltage of the exciter
					 * 1 = exciter field current.
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::Integer kvfif;
					/**
					 * Time constant (T<sub>1</sub>).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Time constant (T<sub>2</sub>).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Time constant (T<sub>3</sub>).  Typical Value = 1.6.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Exciter time constant (T<sub>B</sub>).  Typical Value = 0.04.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Minimum AVR output (V<sub>RMN</sub>).  Typical Value = -5.2.
					 */
					IEC61970::Base::Domain::PU vrmn;
					/**
					 * Maximum AVR output (V<sub>RMX</sub>).  Typical Value = 6.5.
					 */
					IEC61970::Base::Domain::PU vrmx;

				};

			}

		}

	}

}
#endif // EXCANS_H
