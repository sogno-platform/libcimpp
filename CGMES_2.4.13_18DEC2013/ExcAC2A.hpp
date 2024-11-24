#ifndef ExcAC2A_H
#define ExcAC2A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Modified IEEE AC2A alternator-supplied rectifier excitation system with different field current limit.
	*/
	class ExcAC2A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC2A();
		~ExcAC2A() override;

		CIMPP::Boolean hvgate;  /* Indicates if HV gate is active (HVgate). true = gate is used false = gate is not used. Typical Value = true. Default: false */
		CIMPP::PU ka;  /* Voltage regulator gain (Ka).  Typical Value = 400. Default: nullptr */
		CIMPP::PU kb;  /* Second stage regulator gain (Kb) (&gt;0).  Exciter field current controller gain.  Typical Value = 25. Default: nullptr */
		CIMPP::PU kb1;  /* Second stage regulator gain (Kb1). It is exciter field current controller gain used as alternative to Kb to represent a variant of the ExcAC2A model.  Typical Value = 25. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (Kc).  Typical Value = 0.28. Default: nullptr */
		CIMPP::PU kd;  /* Demagnetizing factor, a function of exciter alternator reactances (Kd).  Typical Value = 0.35. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (Ke).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kf;  /* Excitation control system stabilizer gains (Kf).  Typical Value = 0.03. Default: nullptr */
		CIMPP::PU kh;  /* Exciter field current feedback gain (Kh).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kl;  /* Exciter field current limiter gain (Kl).  Typical Value = 10. Default: nullptr */
		CIMPP::PU kl1;  /* Coefficient to allow different usage of the model (Kl1).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ks;  /* Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::Boolean lvgate;  /* Indicates if LV gate is active (LVgate). true = gate is used false = gate is not used. Typical Value = true. Default: false */
		CIMPP::Simple_Float seve1;  /* Exciter saturation function value at the corresponding exciter voltage, Ve, back of commutating reactance (Se[Ve]).  Typical Value = 0.037. Default: nullptr */
		CIMPP::Simple_Float seve2;  /* Exciter saturation function value at the corresponding exciter voltage, Ve, back of commutating reactance (Se[Ve]).  Typical Value = 0.012. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (Ta).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds tb;  /* Voltage regulator time constant (Tb).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;  /* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 0.6. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (Tf).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vamax;  /* Maximum voltage regulator output (V).  Typical Value = 8. Default: nullptr */
		CIMPP::PU vamin;  /* Minimum voltage regulator output (V).  Typical Value = -8. Default: nullptr */
		CIMPP::PU ve1;  /* Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve).  Typical Value = 4.4. Default: nullptr */
		CIMPP::PU ve2;  /* Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve).  Typical Value = 3.3. Default: nullptr */
		CIMPP::PU vfemax;  /* Exciter field current limit reference (Vfemax).  Typical Value = 4.4. Default: nullptr */
		CIMPP::PU vlr;  /* Maximum exciter field current (Vlr).  Typical Value = 4.4. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator outputs (Vrmax).  Typical Value = 105. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator outputs (Vrmin).  Typical Value = -95. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcAC2A_factory();
}
#endif
