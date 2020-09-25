#ifndef ExcAVR2_H
#define ExcAVR2_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Italian excitation system corresponding to IEEE (1968) Type 2 Model. It represents alternator and rotating diodes and electromechanic voltage regulators.
	*/
	class ExcAVR2: public ExcitationSystemDynamics
	{

	public:
					CIMPP::Simple_Float ka; 	/* AVR gain (K).  Typical Value = 500. Default: nullptr */
					CIMPP::PU vrmn; 	/* Maximum AVR output (V).  Typical Value = -6. Default: nullptr */
					CIMPP::PU vrmx; 	/* Minimum AVR output (V).  Typical Value = 7. Default: nullptr */
					CIMPP::Seconds ta; 	/* AVR time constant (T).  Typical Value = 0.02. Default: nullptr */
					CIMPP::Seconds tb; 	/* AVR time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds te; 	/* Exciter time constant (T).  Typical Value = 1. Default: nullptr */
					CIMPP::PU e1; 	/* Field voltage value 1 (E1).  Typical Value = 4.18. Default: nullptr */
					CIMPP::Simple_Float se1; 	/* Saturation factor at E1 (S(E1)).  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU e2; 	/* Field voltage value 2 (E2).  Typical Value = 3.14. Default: nullptr */
					CIMPP::Simple_Float se2; 	/* Saturation factor at E2 (S(E2)).  Typical Value = 0.03. Default: nullptr */
					CIMPP::Simple_Float kf; 	/* Rate feedback gain (K).  Typical Value = 0.02. Default: nullptr */
					CIMPP::Seconds tf1; 	/* Rate feedback time constant (T).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds tf2; 	/* Rate feedback time constant (T).  Typical Value = 1. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ExcAVR2();
		virtual ~ExcAVR2();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcAVR2_factory();
}
#endif
