#ifndef ExcIEEEAC1A_H
#define ExcIEEEAC1A_H
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
	The class represents IEEE Std 421.5-2005 type AC1A model. The model represents the field-controlled alternator-rectifier excitation systems designated Type AC1A. These excitation systems consist of an alternator main exciter with non-controlled rectifiers.  Reference: IEEE Standard 421.5-2005 Section 6.1.
	*/
	class ExcIEEEAC1A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEAC1A();
		~ExcIEEEAC1A() override;

		CIMPP::PU ka;  /* Voltage regulator gain (K).  Typical Value = 400. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (K).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU kd;  /* Demagnetizing factor, a function of exciter alternator reactances (K).  Typical Value = 0.38. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kf;  /* Excitation control system stabilizer gains (K).  Typical Value = 0.03. Default: nullptr */
		CIMPP::Simple_Float seve1;  /* Exciter saturation function value at the corresponding exciter voltage, V, back of commutating reactance (S[V]).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Simple_Float seve2;  /* Exciter saturation function value at the corresponding exciter voltage, V, back of commutating reactance (S[V]).  Typical Value = 0.03. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (T).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds tb;  /* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;  /* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vamax;  /* Maximum voltage regulator output (V).  Typical Value = 14.5. Default: nullptr */
		CIMPP::PU vamin;  /* Minimum voltage regulator output (V).  Typical Value = -14.5. Default: nullptr */
		CIMPP::PU ve1;  /* Exciter alternator output voltages back of commutating reactance at which saturation is defined (V).  Typical Value = 4.18. Default: nullptr */
		CIMPP::PU ve2;  /* Exciter alternator output voltages back of commutating reactance at which saturation is defined (V).  Typical Value = 3.14. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator outputs (V).  Typical Value = 6.03. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator outputs (V).  Typical Value = -5.43. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcIEEEAC1A_factory();
}
#endif
