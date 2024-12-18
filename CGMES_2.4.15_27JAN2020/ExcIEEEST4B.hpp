#ifndef ExcIEEEST4B_H
#define ExcIEEEST4B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	The class represents IEEE Std 421.5-2005 type ST4B model. This model is a variation of the Type ST3A model, with a proportional plus integral (PI) regulator block replacing the lag-lead regulator characteristic that is in the ST3A model. Both potential and compound source rectifier excitation systems are modeled.  The PI regulator blocks have non-windup limits that are represented. The voltage regulator of this model is typically implemented digitally.  Reference: IEEE Standard 421.5-2005 Section 7.4.
	*/
	class ExcIEEEST4B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST4B();
		~ExcIEEEST4B() override;

		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (K). Typical Value = 0.113. Default: nullptr */
		CIMPP::PU kg;  /* Feedback gain constant of the inner loop field regulator (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ki;  /* Potential circuit gain coefficient (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kim;  /* Voltage regulator integral gain output (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kir;  /* Voltage regulator integral gain (K).  Typical Value = 10.75. Default: nullptr */
		CIMPP::PU kp;  /* Potential circuit gain coefficient (K).  Typical Value = 9.3. Default: nullptr */
		CIMPP::PU kpm;  /* Voltage regulator proportional gain output (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kpr;  /* Voltage regulator proportional gain (K).  Typical Value = 10.75. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (T).  Typical Value = 0.02. Default: nullptr */
		CIMPP::AngleDegrees thetap;  /* Potential circuit phase angle (thetap).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vbmax;  /* Maximum excitation voltage (V).  Typical Value = 11.63. Default: nullptr */
		CIMPP::PU vmmax;  /* Maximum inner loop output (V).  Typical Value = 99. Default: nullptr */
		CIMPP::PU vmmin;  /* Minimum inner loop output (V).  Typical Value = -99. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (V).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (V).  Typical Value = -0.87. Default: nullptr */
		CIMPP::PU xl;  /* Reactance associated with potential source (X).  Typical Value = 0.124. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcIEEEST4B_factory();
}
#endif
