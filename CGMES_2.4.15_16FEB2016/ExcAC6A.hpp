#ifndef ExcAC6A_H
#define ExcAC6A_H
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
	Modified IEEE AC6A alternator-supplied rectifier excitation system with speed input.
	*/
	class ExcAC6A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC6A();
		~ExcAC6A() override;

		CIMPP::PU ka;  /* Voltage regulator gain (Ka).  Typical Value = 536. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (Kc).  Typical Value = 0.173. Default: nullptr */
		CIMPP::PU kd;  /* Demagnetizing factor, a function of exciter alternator reactances (Kd).  Typical Value = 1.91. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (Ke).  Typical Value = 1.6. Default: nullptr */
		CIMPP::PU kh;  /* Exciter field current limiter gain (Kh).  Typical Value = 92. Default: nullptr */
		CIMPP::PU ks;  /* Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float seve1;  /* Exciter saturation function value at the corresponding exciter voltage, Ve1, back of commutating reactance (Se[Ve1]).  Typical Value = 0.214. Default: nullptr */
		CIMPP::Simple_Float seve2;  /* Exciter saturation function value at the corresponding exciter voltage, Ve2, back of commutating reactance (Se[Ve2]).  Typical Value = 0.044. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (Ta).  Typical Value = 0.086. Default: nullptr */
		CIMPP::Seconds tb;  /* Voltage regulator time constant (Tb).  Typical Value = 9. Default: nullptr */
		CIMPP::Seconds tc;  /* Voltage regulator time constant (Tc).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds th;  /* Exciter field current limiter time constant (Th).  Typical Value = 0.08. Default: nullptr */
		CIMPP::Seconds tj;  /* Exciter field current limiter time constant (Tj).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds tk;  /* Voltage regulator time constant (Tk).  Typical Value = 0.18. Default: nullptr */
		CIMPP::PU vamax;  /* Maximum voltage regulator output (Vamax).  Typical Value = 75. Default: nullptr */
		CIMPP::PU vamin;  /* Minimum voltage regulator output (Vamin).  Typical Value = -75. Default: nullptr */
		CIMPP::PU ve1;  /* Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve).  Typical Value = 7.4. Default: nullptr */
		CIMPP::PU ve2;  /* Exciter alternator output voltages back of commutating reactance at which saturation is defined (Ve2).  Typical Value = 5.55. Default: nullptr */
		CIMPP::PU vfelim;  /* Exciter field current limit reference (Vfelim).  Typical Value = 19. Default: nullptr */
		CIMPP::PU vhmax;  /* Maximum field current limiter signal reference (Vhmax).  Typical Value = 75. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (Vrmax).  Typical Value = 44. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (Vrmin).  Typical Value = -36. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcAC6A_factory();
}
#endif
