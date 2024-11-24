#ifndef ExcST7B_H
#define ExcST7B_H
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
	Modified IEEE ST7B static excitation system without stator current limiter (SCL) and current compensator (DROOP) inputs.
	*/
	class ExcST7B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST7B();
		~ExcST7B() override;

		CIMPP::PU kh;  /* High-value gate feedback gain (Kh).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kia;  /* Voltage regulator integral gain (Kia).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kl;  /* Low-value gate feedback gain (Kl).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kpa;  /* Voltage regulator proportional gain (Kpa).  Typical Value = 40. Default: nullptr */
		CIMPP::ExcST7BOELselectorKind oelin;  /* OEL input selector (OELin). Typical Value = noOELinput. Default: 0 */
		CIMPP::Seconds tb;  /* Regulator lag time constant (Tb).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tc;  /* Regulator lead time constant (Tc).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (Tf).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tg;  /* Feedback time constant of inner loop field voltage regulator (Tg).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tia;  /* Feedback time constant (Tia).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds ts;  /* Rectifier firing time constant (Ts).  Typical Value = 0. Default: nullptr */
		CIMPP::ExcST7BUELselectorKind uelin;  /* UEL input selector (UELin). Typical Value = noUELinput. Default: 0 */
		CIMPP::PU vmax;  /* Maximum voltage reference signal (Vmax).  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU vmin;  /* Minimum voltage reference signal (Vmin).  Typical Value = 0.9. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (Vrmax).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (Vrmin).  Typical Value = -4.5. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcST7B_factory();
}
#endif
