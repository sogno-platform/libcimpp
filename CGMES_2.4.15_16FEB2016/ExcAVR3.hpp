#ifndef ExcAVR3_H
#define ExcAVR3_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Italian excitation system. It represents exciter dynamo and electric regulator.
	*/
	class ExcAVR3: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU e1; 	/* Field voltage value 1 (E1).  Typical Value = 4.18. Default: nullptr */
					CIMPP::PU e2; 	/* Field voltage value 2 (E2).  Typical Value = 3.14. Default: nullptr */
					CIMPP::Simple_Float ka; 	/* AVR gain (K).  Typical Value = 3000. Default: nullptr */
					CIMPP::Simple_Float se1; 	/* Saturation factor at E1 (S(E1)).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Simple_Float se2; 	/* Saturation factor at E2 (S(E2)).  Typical Value = 0.03. Default: nullptr */
					CIMPP::Seconds t1; 	/* AVR time constant (T).  Typical Value = 220. Default: nullptr */
					CIMPP::Seconds t2; 	/* AVR time constant (T).  Typical Value = 1.6. Default: nullptr */
					CIMPP::Seconds t3; 	/* AVR time constant (T).  Typical Value = 0.66. Default: nullptr */
					CIMPP::Seconds t4; 	/* AVR time constant (T).  Typical Value = 0.07. Default: nullptr */
					CIMPP::Seconds te; 	/* Exciter time constant (T).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vrmn; 	/* Maximum AVR output (V).  Typical Value = -7.5. Default: nullptr */
					CIMPP::PU vrmx; 	/* Minimum AVR output (V).  Typical Value = 7.5. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcAVR3();
		virtual ~ExcAVR3();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcAVR3_factory();
}
#endif
