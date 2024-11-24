#ifndef ExcAC3A_H
#define ExcAC3A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Modified IEEE AC3A alternator-supplied rectifier excitation system with different field current limit.
	*/
	class ExcAC3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC3A();
		~ExcAC3A() override;

		CIMPP::PU efdn;  /* Value of at which feedback gain changes (Efdn).  Typical Value = 2.36. Default: nullptr */
		CIMPP::Seconds ka;  /* Voltage regulator gain (Ka).  Typical Value = 45.62. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (Kc).  Typical Value = 0.104. Default: nullptr */
		CIMPP::PU kd;  /* Demagnetizing factor, a function of exciter alternator reactances (Kd).  Typical Value = 0.499. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (Ke).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kf;  /* Excitation control system stabilizer gains (Kf).  Typical Value = 0.143. Default: nullptr */
		CIMPP::PU kf1;  /* Coefficient to allow different usage of the model (Kf1).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kf2;  /* Coefficient to allow different usage of the model (Kf2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU klv;  /* Gain used in the minimum field voltage limiter loop (Klv).  Typical Value = 0.194. Default: nullptr */
		CIMPP::PU kn;  /* Excitation control system stabilizer gain (Kn).  Typical Value =0.05. Default: nullptr */
		CIMPP::PU kr;  /* Constant associated with regulator and alternator field power supply (Kr).  Typical Value =3.77. Default: nullptr */
		CIMPP::PU ks;  /* Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float seve1;  /* Exciter saturation function value at the corresponding exciter voltage, Ve, back of commutating reactance (Se[Ve]).  Typical Value = 1.143. Default: nullptr */
		CIMPP::Simple_Float seve2;  /* Exciter saturation function value at the corresponding exciter voltage, Ve, back of commutating reactance (Se[Ve]).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU ta;  /* Voltage regulator time constant (Ta).  Typical Value = 0.013. Default: nullptr */
		CIMPP::Seconds tb;  /* Voltage regulator time constant (Tb).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;  /* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 1.17. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (Tf).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vamax;  /* Maximum voltage regulator output (V).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vamin;  /* Minimum voltage regulator output (V).  Typical Value = -0.95. Default: nullptr */
		CIMPP::PU ve1;  /* Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve1) equals Vemax (Ve1).  Typical Value = 6.24. Default: nullptr */
		CIMPP::PU ve2;  /* Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve).  Typical Value = 4.68. Default: nullptr */
		CIMPP::PU vemin;  /* Minimum exciter voltage output (Vemin).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU vfemax;  /* Exciter field current limit reference (Vfemax).  Typical Value = 16. Default: nullptr */
		CIMPP::PU vlv;  /* Field voltage used in the minimum field voltage limiter loop (Vlv).  Typical Value = 0.79. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcAC3A_factory();
}
#endif
