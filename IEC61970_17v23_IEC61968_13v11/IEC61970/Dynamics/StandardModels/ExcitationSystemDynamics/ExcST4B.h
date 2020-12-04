///////////////////////////////////////////////////////////
//  ExcST4B.h
//  Implementation of the Class ExcST4B
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCST4B_H
#define EXCST4B_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
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
				 * Modified IEEE ST4B static excitation system with maximum inner loop feedback
				 * gain <b>Vgmax</b>.
				 */
				class ExcST4B : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcST4B();
					virtual ~ExcST4B();
					/**
					 * Rectifier loading factor proportional to commutating reactance (Kc). Typical
					 * Value = 0.113.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Feedback gain constant of the inner loop field regulator (Kg). Typical Value =
					 * 0.
					 */
					IEC61970::Base::Domain::PU kg;
					/**
					 * Potential circuit gain coefficient (Ki).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Voltage regulator integral gain output (Kim).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kim;
					/**
					 * Voltage regulator integral gain (Kir).  Typical Value = 10.75.
					 */
					IEC61970::Base::Domain::PU kir;
					/**
					 * Potential circuit gain coefficient (Kp).  Typical Value = 9.3.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Voltage regulator proportional gain output (Kpm).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kpm;
					/**
					 * Voltage regulator proportional gain (Kpr).  Typical Value = 10.75.
					 */
					IEC61970::Base::Domain::PU kpr;
					/**
					 * Selector (LVgate).
					 * true = LVgate is part of the block diagram
					 * false = LVgate is not part of the block diagram.
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean lvgate;
					/**
					 * Voltage regulator time constant (Ta).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Potential circuit phase angle (thetap).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::AngleDegrees thetap;
					/**
					 * Selector (Uel).
					 * true = UEL is part of block diagram
					 * false = UEL is not part of block diagram.
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean uel;
					/**
					 * Maximum excitation voltage (Vbmax).  Typical Value = 11.63.
					 */
					IEC61970::Base::Domain::PU vbmax;
					/**
					 * Maximum inner loop feedback voltage (Vgmax).  Typical Value = 5.8.
					 */
					IEC61970::Base::Domain::PU vgmax;
					/**
					 * Maximum inner loop output (Vmmax).  Typical Value = 99.
					 */
					IEC61970::Base::Domain::PU vmmax;
					/**
					 * Minimum inner loop output (Vmmin).  Typical Value = -99.
					 */
					IEC61970::Base::Domain::PU vmmin;
					/**
					 * Maximum voltage regulator output (Vrmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (Vrmin).  Typical Value = -0.87.
					 */
					IEC61970::Base::Domain::PU vrmin;
					/**
					 * Reactance associated with potential source (Xl).  Typical Value = 0.124.
					 */
					IEC61970::Base::Domain::PU xl;

				};

			}

		}

	}

}
#endif // EXCST4B_H
