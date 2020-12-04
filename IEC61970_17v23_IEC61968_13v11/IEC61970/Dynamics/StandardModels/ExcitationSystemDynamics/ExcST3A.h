///////////////////////////////////////////////////////////
//  ExcST3A.h
//  Implementation of the Class ExcST3A
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCST3A_H
#define EXCST3A_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/AngleDegrees.h"
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
				 * Modified IEEE ST3A static excitation system with added speed multiplier.
				 */
				class ExcST3A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcST3A();
					virtual ~ExcST3A();
					/**
					 * Maximum AVR output (Efdmax).  Typical Value = 6.9.
					 */
					IEC61970::Base::Domain::PU efdmax;
					/**
					 * Rectifier loading factor proportional to commutating reactance (Kc). Typical
					 * Value = 1.1.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Feedback gain constant of the inner loop field regulator (Kg).  Typical Value =
					 * 1.
					 */
					IEC61970::Base::Domain::PU kg;
					/**
					 * Potential circuit gain coefficient (Ki).  Typical Value = 4.83.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * AVR gain (Kj).  Typical Value = 200.
					 */
					IEC61970::Base::Domain::PU kj;
					/**
					 * Forward gain constant of the inner loop field regulator (Km).  Typical Value =
					 * 7.04.
					 */
					IEC61970::Base::Domain::PU km;
					/**
					 * Potential source gain (Kp) (>0).  Typical Value = 4.37.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Coefficient to allow different usage of the model-speed coefficient (Ks).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * Coefficient to allow different usage of the model-speed coefficient (Ks1).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks1;
					/**
					 * Voltage regulator time constant (Tb).  Typical Value = 6.67.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (Tc).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Potential circuit phase angle (thetap).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::AngleDegrees thetap;
					/**
					 * Forward time constant of inner loop field regulator (Tm).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tm;
					/**
					 * Maximum excitation voltage (Vbmax).  Typical Value = 8.63.
					 */
					IEC61970::Base::Domain::PU vbmax;
					/**
					 * Maximum inner loop feedback voltage (Vgmax).  Typical Value = 6.53.
					 */
					IEC61970::Base::Domain::PU vgmax;
					/**
					 * Maximum voltage regulator input limit (Vimax).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::PU vimax;
					/**
					 * Minimum voltage regulator input limit (Vimin).  Typical Value = -0.2.
					 */
					IEC61970::Base::Domain::PU vimin;
					/**
					 * Maximum voltage regulator output (Vrmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (Vrmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vrmin;
					/**
					 * Reactance associated with potential source (Xl).  Typical Value = 0.09.
					 */
					IEC61970::Base::Domain::PU xl;

				};

			}

		}

	}

}
#endif // EXCST3A_H
