///////////////////////////////////////////////////////////
//  ExcDC3A1.h
//  Implementation of the Class ExcDC3A1
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCDC3A1_H
#define EXCDC3A1_H

#include "IEC61970/Base/Domain/Boolean.h"
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
				 * This is modified old IEEE type 3 excitation system.
				 */
				class ExcDC3A1 : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcDC3A1();
					virtual ~ExcDC3A1();
					/**
					 * (exclim).
					 * true = lower limit of zero is applied to integrator output
					 * false = lower limit of zero not applied to integrator output.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean exclim;
					/**
					 * Voltage regulator gain (Ka).  Typical Value = 300.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Exciter constant related to self-excited field (Ke).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Excitation control system stabilizer gain (Kf).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Potential circuit gain coefficient (Ki).  Typical Value = 4.83.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Potential circuit gain coefficient (Kp).  Typical Value = 4.37.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Voltage regulator time constant (Ta).  Typical Value = 0.01.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Exciter time constant, integration rate associated with exciter control (Te).
					 * Typical Value = 1.83.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (Tf).  Typical Value = 0.675.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Available exciter voltage limiter (Vb1max).  Typical Value = 11.63.
					 */
					IEC61970::Base::Domain::PU vb1max;
					/**
					 * Vb limiter indicator.
					 * true = exciter Vbmax limiter is active
					 * false = Vb1max is active.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean vblim;
					/**
					 * Available exciter voltage limiter (Vbmax).  Typical Value = 11.63.
					 */
					IEC61970::Base::Domain::PU vbmax;
					/**
					 * Maximum voltage regulator output (Vrmax).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (Vrmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // EXCDC3A1_H
