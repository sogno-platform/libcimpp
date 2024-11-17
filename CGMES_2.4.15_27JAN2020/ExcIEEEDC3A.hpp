#ifndef ExcIEEEDC3A_H
#define ExcIEEEDC3A_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	The class represents IEEE Std 421.5-2005 type DC3A model. This model represents represent older systems, in particular those dc commutator exciters with non-continuously acting regulators that were commonly used before the development of the continuously acting varieties.  These systems respond at basically two different rates, depending upon the magnitude of voltage error. For small errors, adjustment is made periodically with a signal to a motor-operated rheostat. Larger errors cause resistors to be quickly shorted or inserted and a strong forcing signal applied to the exciter. Continuous motion of the motor-operated rheostat occurs for these larger error signals, even though it is bypassed by contactor action.   Reference: IEEE Standard 421.5-2005 Section 5.3.
	*/
	class ExcIEEEDC3A: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU efd1; 	/* Exciter voltage at which exciter saturation is defined (E).  Typical Value = 3.375. Default: nullptr */
					CIMPP::PU efd2; 	/* Exciter voltage at which exciter saturation is defined (E).  Typical Value = 3.15. Default: nullptr */
					CIMPP::Boolean exclim; 	/* (exclim).  IEEE standard is ambiguous about lower limit on exciter output. true = a lower limit of zero is applied to integrator output false = a lower limit of zero is not applied to integrator output. Typical Value = true. Default: false */
					CIMPP::PU ke; 	/* Exciter constant related to self-excited field (K).  Typical Value = 0.05. Default: nullptr */
					CIMPP::PU kv; 	/* Fast raise/lower contact setting (K).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Simple_Float seefd1; 	/* Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.267. Default: nullptr */
					CIMPP::Simple_Float seefd2; 	/* Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.068. Default: nullptr */
					CIMPP::Seconds te; 	/* Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 0.5. Default: nullptr */
					CIMPP::Seconds trh; 	/* Rheostat travel time (T).  Typical Value = 20. Default: nullptr */
					CIMPP::PU vrmax; 	/* Maximum voltage regulator output (V).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum voltage regulator output (V).  Typical Value = 0. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcIEEEDC3A();
		virtual ~ExcIEEEDC3A();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcIEEEDC3A_factory();
}
#endif
