#ifndef ExcSK_H
#define ExcSK_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Boolean.hpp"
#include "ApparentPower.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Slovakian Excitation System Model.  UEL and secondary voltage control are included in this model. When this model is used, there cannot be a separate underexcitation limiter or VAr controller model.
	*/
	class ExcSK: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU efdmax; 	/* Field voltage clipping limit (Efdmax). Default: nullptr */
					CIMPP::PU efdmin; 	/* Field voltage clipping limit (Efdmin). Default: nullptr */
					CIMPP::PU emax; 	/* Maximum field voltage output (Emax).  Typical Value = 20. Default: nullptr */
					CIMPP::PU emin; 	/* Minimum field voltage output (Emin).  Typical Value = -20. Default: nullptr */
					CIMPP::PU k; 	/* Gain (K).  Typical Value = 1. Default: nullptr */
					CIMPP::PU k1; 	/* Parameter of underexcitation limit (K1).  Typical Value = 0.1364. Default: nullptr */
					CIMPP::PU k2; 	/* Parameter of underexcitation limit (K2).  Typical Value = -0.3861. Default: nullptr */
					CIMPP::PU kc; 	/* PI controller gain (Kc).  Typical Value = 70. Default: nullptr */
					CIMPP::PU kce; 	/* Rectifier regulation factor (Kce).  Typical Value = 0. Default: nullptr */
					CIMPP::PU kd; 	/* Exciter internal reactance (Kd).  Typical Value = 0. Default: nullptr */
					CIMPP::PU kgob; 	/* P controller gain (Kgob).  Typical Value = 10. Default: nullptr */
					CIMPP::PU kp; 	/* PI controller gain (Kp).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kqi; 	/* PI controller gain of integral component (Kqi).  Typical Value = 0. Default: nullptr */
					CIMPP::PU kqob; 	/* Rate of rise of the reactive power (Kqob). Default: nullptr */
					CIMPP::PU kqp; 	/* PI controller gain (Kqp).  Typical Value = 0. Default: nullptr */
					CIMPP::PU nq; 	/* Dead band of reactive power (nq).  Determines the range of sensitivity.  Typical Value = 0.001. Default: nullptr */
					CIMPP::Boolean qconoff; 	/* Secondary voltage control state (Qc_on_off). true = secondary voltage control is ON false = secondary voltage control is OFF. Typical Value = false. Default: false */
					CIMPP::PU qz; 	/* Desired value (setpoint) of reactive power, manual setting (Qz). Default: nullptr */
					CIMPP::Boolean remote; 	/* Selector to apply automatic calculation in secondary controller model. true = automatic calculation is activated false = manual set is active; the use of desired value of reactive power (Qz) is required. Typical Value = true. Default: false */
					CIMPP::ApparentPower sbase; 	/* Apparent power of the unit (Sbase).  Unit = MVA.  Typical Value = 259. Default: nullptr */
					CIMPP::Seconds tc; 	/* PI controller phase lead time constant (Tc).  Typical Value = 8. Default: nullptr */
					CIMPP::Seconds te; 	/* Time constant of gain block (Te).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds ti; 	/* PI controller phase lead time constant (Ti).  Typical Value = 2. Default: nullptr */
					CIMPP::Seconds tp; 	/* Time constant (Tp).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds tr; 	/* Voltage transducer time constant (Tr).  Typical Value = 0.01. Default: nullptr */
					CIMPP::PU uimax; 	/* Maximum error (Uimax).  Typical Value = 10. Default: nullptr */
					CIMPP::PU uimin; 	/* Minimum error (UImin).  Typical Value = -10. Default: nullptr */
					CIMPP::PU urmax; 	/* Maximum controller output (URmax).  Typical Value = 10. Default: nullptr */
					CIMPP::PU urmin; 	/* Minimum controller output (URmin).  Typical Value = -10. Default: nullptr */
					CIMPP::PU vtmax; 	/* Maximum terminal voltage input (Vtmax).  Determines the range of voltage dead band.  Typical Value = 1.05. Default: nullptr */
					CIMPP::PU vtmin; 	/* Minimum terminal voltage input (Vtmin).  Determines the range of voltage dead band.  Typical Value = 0.95. Default: nullptr */
					CIMPP::PU yp; 	/* Maximum output (Yp).  Minimum output = 0.  Typical Value = 1. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcSK();
		virtual ~ExcSK();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcSK_factory();
}
#endif
