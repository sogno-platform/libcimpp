#ifndef LoadMotor_H
#define LoadMotor_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

namespace CIMPP {


class LoadAggregate;
	/*
	Aggregate induction motor load. This model  is used to represent a fraction of an ordinary load as "induction motor load".  It allows load that is treated as ordinary constant power in power flow analysis to be represented by an induction motor in dynamic simulation.  If  = 0. or  = , or  = 0.,  only one cage is represented. Magnetic saturation is not modelled. Either a "one-cage" or "two-cage" model of the induction machine can be modelled. Magnetic saturation is not modelled.  This model is intended for representation of aggregations of many motors dispersed through a load represented at a high voltage bus but where there is no information on the characteristics of individual motors.  This model treats a fraction of the constant power part of a load as a motor. During initialisation, the initial power drawn by the motor is set equal to  times the constant  part of the static load.  The remainder of the load is left as static load.  The reactive power demand of the motor is calculated during initialisation as a function of voltage at the load bus. This reactive power demand may be less than or greater than the constant  component of the load.  If the motor's reactive demand is greater than the constant  component of the load, the model inserts a shunt capacitor at the terminal of the motor to bring its reactive demand down to equal the constant  reactive load.   If a motor model and a static load model are both present for a load, the motor  is assumed to be subtracted from the power flow constant  load before the static load model is applied.  The remainder of the load, if any, is then represented by the static load model.
	*/
	class LoadMotor: public IdentifiedObject
	{

	public:
					CIMPP::LoadAggregate* LoadAggregate; 	/* Aggregate load to which this aggregate motor (dynamic) load belongs. Default: 0 */
					CIMPP::Simple_Float d; 	/* Damping factor (D).  Unit = delta P/delta speed.  Typical Value = 2. Default: nullptr */
					CIMPP::Seconds h; 	/* Inertia constant (H) (not=0).  Typical Value = 0.4. Default: nullptr */
					CIMPP::Simple_Float lfac; 	/* Loading factor - ratio of initial P to motor MVA base (Lfac).  Typical Value = 0.8. Default: nullptr */
					CIMPP::PU lp; 	/* Transient reactance (Lp).  Typical Value = 0.15. Default: nullptr */
					CIMPP::PU lpp; 	/* Subtransient reactance (Lpp).  Typical Value = 0.15. Default: nullptr */
					CIMPP::PU ls; 	/* Synchronous reactance (Ls).  Typical Value = 3.2. Default: nullptr */
					CIMPP::Simple_Float pfrac; 	/* Fraction of constant-power load to be represented by this motor model (Pfrac) (&gt;=0.0 and &lt;=1.0).  Typical Value = 0.3. Default: nullptr */
					CIMPP::PU ra; 	/* Stator resistance (Ra).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tbkr; 	/* Circuit breaker operating time (Tbkr).  Typical Value = 0.08. Default: nullptr */
					CIMPP::Seconds tpo; 	/* Transient rotor time constant (Tpo) (not=0).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds tppo; 	/* Subtransient rotor time constant (Tppo).  Typical Value = 0.02. Default: nullptr */
					CIMPP::Seconds tv; 	/* Voltage trip pickup time (Tv).  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU vt; 	/* Voltage threshold for tripping (Vt).  Typical Value = 0.7. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		LoadMotor();
		virtual ~LoadMotor();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* LoadMotor_factory();
}
#endif
