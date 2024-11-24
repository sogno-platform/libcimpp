#ifndef ExcAC8B_H
#define ExcAC8B_H
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
	Modified IEEE AC8B alternator-supplied rectifier excitation system with speed input and input limiter.
	*/
	class ExcAC8B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC8B();
		~ExcAC8B() override;

		CIMPP::Boolean inlim;  /* Input limiter indicator. true = input limiter Vimax and Vimin is considered false = input limiter Vimax and Vimin is not considered. Typical Value = true. Default: false */
		CIMPP::PU ka;  /* Voltage regulator gain (Ka).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (Kc). Typical Value = 0.55. Default: nullptr */
		CIMPP::PU kd;  /* Demagnetizing factor, a function of exciter alternator reactances (Kd).  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU kdr;  /* Voltage regulator derivative gain (Kdr).  Typical Value = 10. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (Ke).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kir;  /* Voltage regulator integral gain (Kir).  Typical Value = 5. Default: nullptr */
		CIMPP::PU kpr;  /* Voltage regulator proportional gain (Kpr).  Typical Value = 80. Default: nullptr */
		CIMPP::PU ks;  /* Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::Boolean pidlim;  /* PID limiter indicator. true = input limiter Vpidmax and Vpidmin is considered false = input limiter Vpidmax and Vpidmin is not considered. Typical Value = true. Default: false */
		CIMPP::Simple_Float seve1;  /* Exciter saturation function value at the corresponding exciter voltage, Ve, back of commutating reactance (Se[Ve1]).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Simple_Float seve2;  /* Exciter saturation function value at the corresponding exciter voltage, Ve, back of commutating reactance (Se[Ve2]).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (Ta).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tdr;  /* Lag time constant (Tdr).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 1.2. Default: nullptr */
		CIMPP::Boolean telim;  /* Selector for the limiter on the block [1/sTe].  See diagram for meaning of true and false. Typical Value = false. Default: false */
		CIMPP::PU ve1;  /* Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve) equals V (Ve1).  Typical Value = 6.5. Default: nullptr */
		CIMPP::PU ve2;  /* Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve).  Typical Value = 9. Default: nullptr */
		CIMPP::PU vemin;  /* Minimum exciter voltage output (Vemin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vfemax;  /* Exciter field current limit reference (Vfemax).  Typical Value = 6. Default: nullptr */
		CIMPP::PU vimax;  /* Input signal maximum (Vimax).  Typical Value = 35. Default: nullptr */
		CIMPP::PU vimin;  /* Input signal minimum (Vimin).  Typical Value = -10. Default: nullptr */
		CIMPP::PU vpidmax;  /* PID maximum controller output (Vpidmax).  Typical Value = 35. Default: nullptr */
		CIMPP::PU vpidmin;  /* PID minimum controller output (Vpidmin).  Typical Value = -10. Default: nullptr */
		CIMPP::PU vrmax;  /* Input signal maximum (Vimax).  Typical Value = 35. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (Vrmin).  Typical Value = 0. Default: nullptr */
		CIMPP::Boolean vtmult;  /* Multiply by generator`s terminal voltage indicator. true =the limits Vrmax and Vrmin are multiplied by the generator`s terminal voltage to represent a thyristor power stage fed from the generator terminals false = limits are not multiplied by generator`s terminal voltage.  Typical Value = false. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcAC8B_factory();
}
#endif
