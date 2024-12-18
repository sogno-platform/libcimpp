#ifndef ExcIEEEAC4A_H
#define ExcIEEEAC4A_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	The class represents IEEE Std 421.5-2005 type AC4A model. The model represents type AC4A alternator-supplied controlled-rectifier excitation system which is quite different from the other type ac systems. This high initial response excitation system utilizes a full thyristor bridge in the exciter output circuit.  The voltage regulator controls the firing of the thyristor bridges. The exciter alternator uses an independent voltage regulator to control its output voltage to a constant value. These effects are not modeled; however, transient loading effects on the exciter alternator are included.   Reference: IEEE Standard 421.5-2005 Section 6.4.
	*/
	class ExcIEEEAC4A: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU ka; 	/* Voltage regulator gain (K).  Typical Value = 200. Default: nullptr */
					CIMPP::PU kc; 	/* Rectifier loading factor proportional to commutating reactance (K).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ta; 	/* Voltage regulator time constant (T).  Typical Value = 0.015. Default: nullptr */
					CIMPP::Seconds tb; 	/* Voltage regulator time constant (T).  Typical Value = 10. Default: nullptr */
					CIMPP::Seconds tc; 	/* Voltage regulator time constant (T).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vimax; 	/* Maximum voltage regulator input limit (V).  Typical Value = 10. Default: nullptr */
					CIMPP::PU vimin; 	/* Minimum voltage regulator input limit (V).  Typical Value = -10. Default: nullptr */
					CIMPP::PU vrmax; 	/* Maximum voltage regulator output (V).  Typical Value = 5.64. Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum voltage regulator output (V).  Typical Value = -4.53. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcIEEEAC4A();
		virtual ~ExcIEEEAC4A();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcIEEEAC4A_factory();
}
#endif
