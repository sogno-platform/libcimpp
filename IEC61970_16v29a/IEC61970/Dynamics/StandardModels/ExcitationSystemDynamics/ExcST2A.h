///////////////////////////////////////////////////////////
//  ExcST2A.h
//  Implementation of the Class ExcST2A
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCST2A_H
#define EXCST2A_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Boolean.h"
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
				 * Modified IEEE ST2A static excitation system - another lead-lag block added to
				 * match  the model defined by WECC.
				 */
				class ExcST2A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcST2A();
					virtual ~ExcST2A();
					/**
					 * Maximum field voltage (Efdmax).  Typical Value = 99.
					 */
					IEC61970::Base::Domain::PU efdmax;
					/**
					 * Voltage regulator gain (Ka).  Typical Value = 120.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (Kc).  Typical
					 * Value = 1.82.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Exciter constant related to self-excited field (Ke).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Excitation control system stabilizer gains (Kf).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Potential circuit gain coefficient (Ki).  Typical Value = 8.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Potential circuit gain coefficient (Kp).  Typical Value = 4.88.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Voltage regulator time constant (Ta).  Typical Value = 0.15.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (Tb).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (Tc).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Exciter time constant, integration rate associated with exciter control (Te).
					 * Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (Tf).  Typical Value = 0.7.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * UEL input (UELin).
					 * true = HV gate
					 * false = add to error signal.
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean uelin;
					/**
					 * Maximum voltage regulator outputs (Vrmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator outputs (Vrmin).  Typical Value = -1.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // EXCST2A_H
