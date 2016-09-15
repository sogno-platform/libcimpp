///////////////////////////////////////////////////////////
//  ExcELIN2.h
//  Implementation of the Class ExcELIN2
//  Created on:      28-Jan-2016 12:44:29
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_07FBBBE0_B741_4cb6_9F97_01343BBCC3AE__INCLUDED_)
#define EA_07FBBBE0_B741_4cb6_9F97_01343BBCC3AE__INCLUDED_

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
				 * Detailed Excitation System Model - ELIN (VATECH).  This model represents an all-
				 * static excitation system. A PI voltage controller establishes a desired field
				 * current set point for a proportional current controller. The integrator of the
				 * PI controller has a follow-up input to match its signal to the present field
				 * current.  Power system stabilizer models used in conjunction with this
				 * excitation system model: PssELIN2, PssIEEE2B, Pss2B.
				 */
				class ExcELIN2 : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcELIN2();
					virtual ~ExcELIN2();
					/**
					 * Gain (Efdbas).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU efdbas;
					/**
					 * Limiter (Iefmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU iefmax;
					/**
					 * Minimum open circuit excitation voltage (Iefmax2).  Typical Value = -5.
					 */
					IEC61970::Base::Domain::PU iefmax2;
					/**
					 * Limiter (Iefmin).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU iefmin;
					/**
					 * Voltage regulator input gain (K1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU k1;
					/**
					 * Voltage regulator input limit (K1ec).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::PU k1ec;
					/**
					 * Gain (K2).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU k2;
					/**
					 * Gain (K3).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU k3;
					/**
					 * Gain (K4).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU k4;
					/**
					 * Voltage controller derivative gain (Kd1).  Typical Value = 34.5.
					 */
					IEC61970::Base::Domain::PU kd1;
					/**
					 * Gain (Ke2).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU ke2;
					/**
					 * Gain (Ketb).  Typical Value = 0.06.
					 */
					IEC61970::Base::Domain::PU ketb;
					/**
					 * Controller follow up gain (PID1max).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::PU pid1max;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Ve1,
					 * back of commutating reactance (Se[Ve1]).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU seve1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Ve2,
					 * back of commutating reactance (Se[Ve2]).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU seve2;
					/**
					 * Voltage controller derivative washout time constant (Tb1).  Typical Value = 12.
					 * 45.
					 */
					IEC61970::Base::Domain::Seconds tb1;
					/**
					 * Time constant (Te).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Time Constant (Te2).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds te2;
					/**
					 * Controller follow up dead band (Ti1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ti1;
					/**
					 * Time constant (Ti3).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds ti3;
					/**
					 * Time constant (Ti4).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ti4;
					/**
					 * Time constant (Tr4).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tr4;
					/**
					 * Limiter (Upmax).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::PU upmax;
					/**
					 * Limiter (Upmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU upmin;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (Ve1).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::PU ve1;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (Ve2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ve2;
					/**
					 * Excitation transformer effective reactance (Xp).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU xp;

				};

			}

		}

	}

}
#endif // !defined(EA_07FBBBE0_B741_4cb6_9F97_01343BBCC3AE__INCLUDED_)
