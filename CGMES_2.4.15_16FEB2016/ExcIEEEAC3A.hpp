#ifndef ExcIEEEAC3A_H
#define ExcIEEEAC3A_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	The class represents IEEE Std 421.5-2005 type AC3A model. The model represents the field-controlled alternator-rectifier excitation systems designated Type AC3A. These excitation systems include an alternator main exciter with non-controlled rectifiers. The exciter employs self-excitation, and the voltage regulator power is derived from the exciter output voltage.  Therefore, this system has an additional nonlinearity, simulated by the use of a multiplier whose inputs are the voltage regulator command signal, , and the exciter output voltage, , times .  This model is applicable to excitation systems employing static voltage regulators.   Reference: IEEE Standard 421.5-2005 Section 6.3.
	*/
	class ExcIEEEAC3A: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU efdn; 	/* Value of at which feedback gain changes (E).  Typical Value = 2.36. Default: nullptr */
					CIMPP::PU ka; 	/* Voltage regulator gain (K).  Typical Value = 45.62. Default: nullptr */
					CIMPP::PU kc; 	/* Rectifier loading factor proportional to commutating reactance (K).  Typical Value = 0.104. Default: nullptr */
					CIMPP::PU kd; 	/* Demagnetizing factor, a function of exciter alternator reactances (K).  Typical Value = 0.499. Default: nullptr */
					CIMPP::PU ke; 	/* Exciter constant related to self-excited field (K).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kf; 	/* Excitation control system stabilizer gains (K).  Typical Value = 0.143. Default: nullptr */
					CIMPP::PU kn; 	/* Excitation control system stabilizer gain (K).  Typical Value = 0.05. Default: nullptr */
					CIMPP::PU kr; 	/* Constant associated with regulator and alternator field power supply (K).  Typical Value = 3.77. Default: nullptr */
					CIMPP::Simple_Float seve1; 	/* Exciter saturation function value at the corresponding exciter voltage, V, back of commutating reactance (S[V]).  Typical Value = 1.143. Default: nullptr */
					CIMPP::Simple_Float seve2; 	/* Exciter saturation function value at the corresponding exciter voltage, V, back of commutating reactance (S[V]).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds ta; 	/* Voltage regulator time constant (T).  Typical Value = 0.013. Default: nullptr */
					CIMPP::Seconds tb; 	/* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tc; 	/* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds te; 	/* Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 1.17. Default: nullptr */
					CIMPP::Seconds tf; 	/* Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vamax; 	/* Maximum voltage regulator output (V).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vamin; 	/* Minimum voltage regulator output (V).  Typical Value = -0.95. Default: nullptr */
					CIMPP::PU ve1; 	/* Exciter alternator output voltages back of commutating reactance at which saturation is defined (V) equals V(V).  Typical Value = 6.24. Default: nullptr */
					CIMPP::PU ve2; 	/* Exciter alternator output voltages back of commutating reactance at which saturation is defined (V).  Typical Value = 4.68. Default: nullptr */
					CIMPP::PU vemin; 	/* Minimum exciter voltage output (V).  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU vfemax; 	/* Exciter field current limit reference (V).  Typical Value = 16. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcIEEEAC3A();
		virtual ~ExcIEEEAC3A();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcIEEEAC3A_factory();
}
#endif
