#ifndef ExcAC1A_H
#define ExcAC1A_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Modified IEEE AC1A alternator-supplied rectifier excitation system with different rate feedback source.
	*/
	class ExcAC1A: public ExcitationSystemDynamics
	{

	public:
					CIMPP::Boolean hvlvgates; 	/* Indicates if both HV gate and LV gate are active (HVLVgates). true = gates are used false = gates are not used. Typical Value = true. Default: false */
					CIMPP::PU ka; 	/* Voltage regulator gain (Ka).  Typical Value = 400. Default: nullptr */
					CIMPP::PU kc; 	/* Rectifier loading factor proportional to commutating reactance (Kc). Typical Value = 0.2. Default: nullptr */
					CIMPP::PU kd; 	/* Demagnetizing factor, a function of exciter alternator reactances (Kd).  Typical Value = 0.38. Default: nullptr */
					CIMPP::PU ke; 	/* Exciter constant related to self-excited field (Ke).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kf; 	/* Excitation control system stabilizer gains (Kf).  Typical Value = 0.03. Default: nullptr */
					CIMPP::PU kf1; 	/* Coefficient to allow different usage of the model (Kf1).  Typical Value = 0. Default: nullptr */
					CIMPP::PU kf2; 	/* Coefficient to allow different usage of the model (Kf2).  Typical Value = 1. Default: nullptr */
					CIMPP::PU ks; 	/* Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
					CIMPP::Simple_Float seve1; 	/* Exciter saturation function value at the corresponding exciter voltage, Ve1, back of commutating reactance (Se[Ve1]).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Simple_Float seve2; 	/* Exciter saturation function value at the corresponding exciter voltage, Ve2, back of commutating reactance (Se[Ve2]).  Typical Value = 0.03. Default: nullptr */
					CIMPP::Seconds ta; 	/* Voltage regulator time constant (Ta).  Typical Value = 0.02. Default: nullptr */
					CIMPP::Seconds tb; 	/* Voltage regulator time constant (Tb).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tc; 	/* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds te; 	/* Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 0.8. Default: nullptr */
					CIMPP::Seconds tf; 	/* Excitation control system stabilizer time constant (Tf).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vamax; 	/* Maximum voltage regulator output (V).  Typical Value = 14.5. Default: nullptr */
					CIMPP::PU vamin; 	/* Minimum voltage regulator output (V).  Typical Value = -14.5. Default: nullptr */
					CIMPP::PU ve1; 	/* Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve1).  Typical Value = 4.18. Default: nullptr */
					CIMPP::PU ve2; 	/* Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve2).  Typical Value = 3.14. Default: nullptr */
					CIMPP::PU vrmax; 	/* Maximum voltage regulator outputs (Vrmax).  Typical Value = 6.03. Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum voltage regulator outputs (Rrmin).  Typical Value = -5.43. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcAC1A();
		virtual ~ExcAC1A();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcAC1A_factory();
}
#endif
