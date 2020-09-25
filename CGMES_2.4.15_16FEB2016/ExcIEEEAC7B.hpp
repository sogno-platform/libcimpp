#ifndef ExcIEEEAC7B_H
#define ExcIEEEAC7B_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP {


	/*
	The class represents IEEE Std 421.5-2005 type AC7B model. The model represents excitation systems which consist of an ac alternator with either stationary or rotating rectifiers to produce the dc field requirements. It is an upgrade to earlier ac excitation systems, which replace only the controls but retain the ac alternator and diode rectifier bridge.  Reference: IEEE Standard 421.5-2005 Section 6.7.  In the IEEE Standard 421.5 - 2005, the [1 / sT] block is shown as [1 / (1 + sT)], which is incorrect.
	*/
	class ExcIEEEAC7B: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU kpr; 	/* Voltage regulator proportional gain (K).  Typical Value = 4.24. Default: nullptr */
					CIMPP::PU kir; 	/* Voltage regulator integral gain (K).  Typical Value = 4.24. Default: nullptr */
					CIMPP::PU kdr; 	/* Voltage regulator derivative gain (K).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tdr; 	/* Lag time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::PU vrmax; 	/* Maximum voltage regulator output (V).  Typical Value = 5.79. Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum voltage regulator output (V).  Typical Value = -5.79. Default: nullptr */
					CIMPP::PU kpa; 	/* Voltage regulator proportional gain (K).  Typical Value = 65.36. Default: nullptr */
					CIMPP::PU kia; 	/* Voltage regulator integral gain (K).  Typical Value = 59.69. Default: nullptr */
					CIMPP::PU vamax; 	/* Maximum voltage regulator output (V).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vamin; 	/* Minimum voltage regulator output (V).  Typical Value = -0.95. Default: nullptr */
					CIMPP::PU kp; 	/* Potential circuit gain coefficient (K).  Typical Value = 4.96. Default: nullptr */
					CIMPP::PU kl; 	/* Exciter field voltage lower limit parameter (K).  Typical Value = 10. Default: nullptr */
					CIMPP::Seconds te; 	/* Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 1.1. Default: nullptr */
					CIMPP::PU vfemax; 	/* Exciter field current limit reference (V).  Typical Value = 6.9. Default: nullptr */
					CIMPP::PU vemin; 	/* Minimum exciter voltage output (V).  Typical Value = 0. Default: nullptr */
					CIMPP::PU ke; 	/* Exciter constant related to self-excited field (K).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kc; 	/* Rectifier loading factor proportional to commutating reactance (K). Typical Value = 0.18. Default: nullptr */
					CIMPP::PU kd; 	/* Demagnetizing factor, a function of exciter alternator reactances (K).  Typical Value = 0.02. Default: nullptr */
					CIMPP::PU kf1; 	/* Excitation control system stabilizer gain (K).  Typical Value = 0.212. Default: nullptr */
					CIMPP::PU kf2; 	/* Excitation control system stabilizer gain (K).  Typical Value = 0. Default: nullptr */
					CIMPP::PU kf3; 	/* Excitation control system stabilizer gain (K).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tf; 	/* Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
					CIMPP::PU ve1; 	/* Exciter alternator output voltages back of commutating reactance at which saturation is defined (V) equals V (V).  Typical Value = 6.3. Default: nullptr */
					CIMPP::Simple_Float seve1; 	/* Exciter saturation function value at the corresponding exciter voltage, V, back of commutating reactance (S[V]).  Typical Value = 0.44. Default: nullptr */
					CIMPP::PU ve2; 	/* Exciter alternator output voltages back of commutating reactance at which saturation is defined (V).  Typical Value = 3.02. Default: nullptr */
					CIMPP::Simple_Float seve2; 	/* Exciter saturation function value at the corresponding exciter voltage, V, back of commutating reactance (S[V]).  Typical Value = 0.075. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ExcIEEEAC7B();
		virtual ~ExcIEEEAC7B();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcIEEEAC7B_factory();
}
#endif
