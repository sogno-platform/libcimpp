#ifndef ExcST2A_H
#define ExcST2A_H
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

namespace CIMPP
{

	/*
	Modified IEEE ST2A static excitation system - another lead-lag block added to match  the model defined by WECC.
	*/
	class ExcST2A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST2A();
		~ExcST2A() override;

		CIMPP::PU efdmax;  /* Maximum field voltage (Efdmax).  Typical Value = 99. Default: nullptr */
		CIMPP::PU ka;  /* Voltage regulator gain (Ka).  Typical Value = 120. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (Kc).  Typical Value = 1.82. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (Ke).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kf;  /* Excitation control system stabilizer gains (Kf).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU ki;  /* Potential circuit gain coefficient (Ki).  Typical Value = 8. Default: nullptr */
		CIMPP::PU kp;  /* Potential circuit gain coefficient (Kp).  Typical Value = 4.88. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (Ta).  Typical Value = 0.15. Default: nullptr */
		CIMPP::Seconds tb;  /* Voltage regulator time constant (Tb).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;  /* Voltage regulator time constant (Tc).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (Tf).  Typical Value = 0.7. Default: nullptr */
		CIMPP::Boolean uelin;  /* UEL input (UELin). true = HV gate false = add to error signal. Typical Value = false. Default: false */
		CIMPP::PU vrmax;  /* Maximum voltage regulator outputs (Vrmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator outputs (Vrmin).  Typical Value = -1. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcST2A_factory();
}
#endif
