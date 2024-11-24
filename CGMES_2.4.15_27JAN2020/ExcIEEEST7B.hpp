#ifndef ExcIEEEST7B_H
#define ExcIEEEST7B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ExcST7BOELselectorKind.hpp"
#include "ExcST7BUELselectorKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	The class represents IEEE Std 421.5-2005 type ST7B model. This model is representative of static potential-source excitation systems. In this system, the AVR consists of a PI voltage regulator. A phase lead-lag filter in series allows introduction of a derivative function, typically used with brushless excitation systems. In that case, the regulator is of the PID type. In addition, the terminal voltage channel includes a phase lead-lag filter.  The AVR includes the appropriate inputs on its reference for overexcitation limiter (OEL1), underexcitation limiter (UEL), stator current limiter (SCL), and current compensator (DROOP). All these limitations, when they work at voltage reference level, keep the PSS (VS signal from Type PSS1A, PSS2A, or PSS2B) in operation. However, the UEL limitation can also be transferred to the high value (HV) gate acting on the output signal. In addition, the output signal passes through a low value (LV) gate for a ceiling overexcitation limiter (OEL2).  Reference: IEEE Standard 421.5-2005 Section 7.7.
	*/
	class ExcIEEEST7B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST7B();
		~ExcIEEEST7B() override;

		CIMPP::PU kh;  /* High-value gate feedback gain (K).  Typical Value 1. Default: nullptr */
		CIMPP::PU kia;  /* Voltage regulator integral gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kl;  /* Low-value gate feedback gain (K).  Typical Value 1. Default: nullptr */
		CIMPP::PU kpa;  /* Voltage regulator proportional gain (K).  Typical Value = 40. Default: nullptr */
		CIMPP::ExcST7BOELselectorKind oelin;  /* OEL input selector (OELin). Typical Value = noOELinput. Default: 0 */
		CIMPP::Seconds tb;  /* Regulator lag time constant (T).  Typical Value 1. Default: nullptr */
		CIMPP::Seconds tc;  /* Regulator lead time constant (T).  Typical Value 1. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (T).  Typical Value 1. Default: nullptr */
		CIMPP::Seconds tg;  /* Feedback time constant of inner loop field voltage regulator (T). Typical Value 1. Default: nullptr */
		CIMPP::Seconds tia;  /* Feedback time constant (T).  Typical Value = 3. Default: nullptr */
		CIMPP::ExcST7BUELselectorKind uelin;  /* UEL input selector (UELin). Typical Value = noUELinput. Default: 0 */
		CIMPP::PU vmax;  /* Maximum voltage reference signal (V).  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU vmin;  /* Minimum voltage reference signal (V).  Typical Value = 0.9. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (V).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (V).  Typical Value = -4.5. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcIEEEST7B_factory();
}
#endif
