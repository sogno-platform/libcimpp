#ifndef ExcAVR4_H
#define ExcAVR4_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

namespace CIMPP {


	/*
	Italian excitation system. It represents static exciter and electric voltage regulator.
	*/
	class ExcAVR4: public ExcitationSystemDynamics
	{

	public:
					CIMPP::Boolean imul; 	/* AVR output voltage dependency selector (Imul). true = selector is connected false = selector is not connected. Typical Value = true. Default: false */
					CIMPP::Simple_Float ka; 	/* AVR gain (K).  Typical Value = 300. Default: nullptr */
					CIMPP::Simple_Float ke; 	/* Exciter gain (K).  Typical Value = 1. Default: nullptr */
					CIMPP::Simple_Float kif; 	/* Exciter internal reactance (K).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t1; 	/* AVR time constant (T).  Typical Value = 4.8. Default: nullptr */
					CIMPP::Seconds t1if; 	/* Exciter current feedback time constant (T).  Typical Value = 60. Default: nullptr */
					CIMPP::Seconds t2; 	/* AVR time constant (T).  Typical Value = 1.5. Default: nullptr */
					CIMPP::Seconds t3; 	/* AVR time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t4; 	/* AVR time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tif; 	/* Exciter current feedback time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::PU vfmn; 	/* Minimum exciter output (V).  Typical Value = 0. Default: nullptr */
					CIMPP::PU vfmx; 	/* Maximum exciter output (V).  Typical Value = 5. Default: nullptr */
					CIMPP::PU vrmn; 	/* Maximum AVR output (V).  Typical Value = 0. Default: nullptr */
					CIMPP::PU vrmx; 	/* Minimum AVR output (V).  Typical Value = 5. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcAVR4();
		virtual ~ExcAVR4();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcAVR4_factory();
}
#endif
