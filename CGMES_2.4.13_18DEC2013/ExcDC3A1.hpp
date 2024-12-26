#ifndef ExcDC3A1_H
#define ExcDC3A1_H
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
	This is modified old IEEE type 3 excitation system.
	*/
	class ExcDC3A1 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcDC3A1();
		~ExcDC3A1() override;

		CIMPP::Boolean exclim;  /* (exclim). true = lower limit of zero is applied to integrator output false = lower limit of zero not applied to integrator output. Typical Value = true. Default: false */
		CIMPP::PU ka;  /* Voltage regulator gain (Ka).  Typical Value = 300. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (Ke).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kf;  /* Excitation control system stabilizer gain (Kf).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU ki;  /* Potential circuit gain coefficient (Ki).  Typical Value = 4.83. Default: nullptr */
		CIMPP::PU kp;  /* Potential circuit gain coefficient (Kp).  Typical Value = 4.37. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (Ta).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 1.83. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (Tf).  Typical Value = 0.675. Default: nullptr */
		CIMPP::PU vb1max;  /* Available exciter voltage limiter (Vb1max).  Typical Value = 11.63. Default: nullptr */
		CIMPP::Boolean vblim;  /* Vb limiter indicator. true = exciter Vbmax limiter is active false = Vb1max is active.  Typical Value = true. Default: false */
		CIMPP::PU vbmax;  /* Available exciter voltage limiter (Vbmax).  Typical Value = 11.63. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (Vrmax).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (Vrmin).  Typical Value = 0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcDC3A1_factory();
}
#endif
