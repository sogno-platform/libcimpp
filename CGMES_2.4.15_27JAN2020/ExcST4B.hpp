#ifndef ExcST4B_H
#define ExcST4B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "AngleDegrees.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Modified IEEE ST4B static excitation system with maximum inner loop feedback gain .
	*/
	class ExcST4B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST4B();
		~ExcST4B() override;

		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (Kc). Typical Value = 0.113. Default: nullptr */
		CIMPP::PU kg;  /* Feedback gain constant of the inner loop field regulator (Kg). Typical Value = 0. Default: nullptr */
		CIMPP::PU ki;  /* Potential circuit gain coefficient (Ki).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kim;  /* Voltage regulator integral gain output (Kim).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kir;  /* Voltage regulator integral gain (Kir).  Typical Value = 10.75. Default: nullptr */
		CIMPP::PU kp;  /* Potential circuit gain coefficient (Kp).  Typical Value = 9.3. Default: nullptr */
		CIMPP::PU kpm;  /* Voltage regulator proportional gain output (Kpm).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kpr;  /* Voltage regulator proportional gain (Kpr).  Typical Value = 10.75. Default: nullptr */
		CIMPP::Boolean lvgate;  /* Selector (LVgate). true = LVgate is part of the block diagram false = LVgate is not part of the block diagram.  Typical Value = false. Default: false */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (Ta).  Typical Value = 0.02. Default: nullptr */
		CIMPP::AngleDegrees thetap;  /* Potential circuit phase angle (thetap).  Typical Value = 0. Default: nullptr */
		CIMPP::Boolean uel;  /* Selector (Uel). true = UEL is part of block diagram false = UEL is not part of block diagram.  Typical Value = false. Default: false */
		CIMPP::PU vbmax;  /* Maximum excitation voltage (Vbmax).  Typical Value = 11.63. Default: nullptr */
		CIMPP::PU vgmax;  /* Maximum inner loop feedback voltage (Vgmax).  Typical Value = 5.8. Default: nullptr */
		CIMPP::PU vmmax;  /* Maximum inner loop output (Vmmax).  Typical Value = 99. Default: nullptr */
		CIMPP::PU vmmin;  /* Minimum inner loop output (Vmmin).  Typical Value = -99. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (Vrmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (Vrmin).  Typical Value = -0.87. Default: nullptr */
		CIMPP::PU xl;  /* Reactance associated with potential source (Xl).  Typical Value = 0.124. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcST4B_factory();
}
#endif
