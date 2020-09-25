#ifndef ExcST6B_H
#define ExcST6B_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Boolean.hpp"
#include "ExcST6BOELselectorKind.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Modified IEEE ST6B static excitation system with PID controller and optional inner feedbacks loop.
	*/
	class ExcST6B: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU ilr; 	/* Exciter output current limit reference (Ilr).  Typical Value = 4.164. Default: nullptr */
					CIMPP::Boolean k1; 	/* Selector (K1). true = feedback is from Ifd false = feedback is not from Ifd. Typical Value = true. Default: false */
					CIMPP::PU kcl; 	/* Exciter output current limit adjustment (Kcl).  Typical Value = 1.0577. Default: nullptr */
					CIMPP::PU kff; 	/* Pre-control gain constant of the inner loop field regulator (Kff).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kg; 	/* Feedback gain constant of the inner loop field regulator (Kg).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kia; 	/* Voltage regulator integral gain (Kia).  Typical Value = 45.094. Default: nullptr */
					CIMPP::PU klr; 	/* Exciter output current limit adjustment (Kcl).  Typical Value = 17.33. Default: nullptr */
					CIMPP::PU km; 	/* Forward gain constant of the inner loop field regulator (Km).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kpa; 	/* Voltage regulator proportional gain (Kpa).  Typical Value = 18.038. Default: nullptr */
					CIMPP::PU kvd; 	/* Voltage regulator derivative gain (Kvd).  Typical Value = 0. Default: nullptr */
					CIMPP::ExcST6BOELselectorKind oelin; 	/* OEL input selector (OELin). Typical Value = noOELinput. Default: 0 */
					CIMPP::Seconds tg; 	/* Feedback time constant of inner loop field voltage regulator (Tg).  Typical Value = 0.02. Default: nullptr */
					CIMPP::Seconds ts; 	/* Rectifier firing time constant (Ts).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tvd; 	/* Voltage regulator derivative gain (Tvd).  Typical Value = 0. Default: nullptr */
					CIMPP::PU vamax; 	/* Maximum voltage regulator output (Vamax).  Typical Value = 4.81. Default: nullptr */
					CIMPP::PU vamin; 	/* Minimum voltage regulator output (Vamin).  Typical Value = -3.85. Default: nullptr */
					CIMPP::Boolean vilim; 	/* Selector (Vilim). true = Vimin-Vimax limiter is active false = Vimin-Vimax limiter is not active. Typical Value = true. Default: false */
					CIMPP::PU vimax; 	/* Maximum voltage regulator input limit (Vimax).  Typical Value = 10. Default: nullptr */
					CIMPP::PU vimin; 	/* Minimum voltage regulator input limit (Vimin).  Typical Value = -10. Default: nullptr */
					CIMPP::Boolean vmult; 	/* Selector (Vmult). true = multiply regulator output by terminal voltage false = do not multiply regulator output by terminal voltage.  Typical Value = true. Default: false */
					CIMPP::PU vrmax; 	/* Maximum voltage regulator output (Vrmax).  Typical Value = 4.81. Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum voltage regulator output (Vrmin).  Typical Value = -3.85. Default: nullptr */
					CIMPP::PU xc; 	/* Excitation source reactance (Xc).  Typical Value = 0.05. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ExcST6B();
		virtual ~ExcST6B();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcST6B_factory();
}
#endif
