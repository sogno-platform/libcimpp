///////////////////////////////////////////////////////////
//  LoadMotor.h
//  Implementation of the Class LoadMotor
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef LOADMOTOR_H
#define LOADMOTOR_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/LoadDynamics/LoadAggregate.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace LoadDynamics
			{
				/**
				 * Aggregate induction motor load. This model  is used to represent a fraction of
				 * an ordinary load as "induction motor load".  It allows load that is treated as
				 * ordinary constant power in power flow analysis to be represented by an
				 * induction motor in dynamic simulation.  If <b>Lpp</b> = 0. or <b>Lpp</b> =
				 * <b>Lp</b>, or <b>Tppo</b> = 0.,  only one cage is represented. Magnetic
				 * saturation is not modelled. Either a "one-cage" or "two-cage" model of the
				 * induction machine can be modelled. Magnetic saturation is not modelled.
				 * 
				 * This model is intended for representation of aggregations of many motors
				 * dispersed through a load represented at a high voltage bus but where there is
				 * no information on the characteristics of individual motors.
				 * 
				 * This model treats a fraction of the constant power part of a load as a motor.
				 * During initialisation, the initial power drawn by the motor is set equal to
				 * <b>Pfrac</b> times the constant <b>P</b> part of the static load.  The
				 * remainder of the load is left as static load.
				 * 
				 * The reactive power demand of the motor is calculated during initialisation as a
				 * function of voltage at the load bus. This reactive power demand may be less
				 * than or greater than the constant <b>Q</b> component of the load.  If the
				 * motor's reactive demand is greater than the constant <b>Q</b> component of the
				 * load, the model inserts a shunt capacitor at the terminal of the motor to bring
				 * its reactive demand down to equal the constant <b>Q</b> reactive load.
				 * If a motor model and a static load model are both present for a load, the motor
				 * <b>Pfrac</b> is assumed to be subtracted from the power flow constant <b>P</b>
				 * load before the static load model is applied.  The remainder of the load, if
				 * any, is then represented by the static load model.
				 */
				class LoadMotor : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					LoadMotor();
					virtual ~LoadMotor();
					/**
					 * Damping factor (D).  Unit = delta P/delta speed.  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Float d;
					/**
					 * Inertia constant (H) (not=0).  Typical Value = 0.4.
					 */
					IEC61970::Base::Domain::Seconds h;
					/**
					 * Loading factor – ratio of initial P to motor MVA base (Lfac).  Typical Value =
					 * 0.8.
					 */
					IEC61970::Base::Domain::Float lfac;
					/**
					 * Transient reactance (Lp).  Typical Value = 0.15.
					 */
					IEC61970::Base::Domain::PU lp;
					/**
					 * Subtransient reactance (Lpp).  Typical Value = 0.15.
					 */
					IEC61970::Base::Domain::PU lpp;
					/**
					 * Synchronous reactance (Ls).  Typical Value = 3.2.
					 */
					IEC61970::Base::Domain::PU ls;
					/**
					 * Fraction of constant-power load to be represented by this motor model (Pfrac)
					 * (>=0.0 and <=1.0).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Float pfrac;
					/**
					 * Stator resistance (Ra).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ra;
					/**
					 * Circuit breaker operating time (Tbkr).  Typical Value = 0.08.
					 */
					IEC61970::Base::Domain::Seconds tbkr;
					/**
					 * Transient rotor time constant (Tpo) (not=0).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tpo;
					/**
					 * Subtransient rotor time constant (Tppo).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds tppo;
					/**
					 * Voltage trip pickup time (Tv).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds tv;
					/**
					 * Voltage threshold for tripping (Vt).  Typical Value = 0.7.
					 */
					IEC61970::Base::Domain::PU vt;
					/**
					 * Aggregate load to which this aggregate motor (dynamic) load belongs.
					 */
					IEC61970::Dynamics::StandardModels::LoadDynamics::LoadAggregate *LoadAggregate;

				};

			}

		}

	}

}
#endif // LOADMOTOR_H
