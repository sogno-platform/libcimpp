#ifndef ExcIEEEST6B_H
#define ExcIEEEST6B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ExcST6BOELselectorKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	IEEE 421.5-2005 type ST6B model. This model consists of a PI voltage regulator with an inner loop field voltage regulator and pre-control. The field voltage regulator implements a proportional control. The pre-control and the delay in the feedback circuit increase the dynamic response. Reference: IEEE 421.5-2005, 7.6.
	*/
	class ExcIEEEST6B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST6B();
		~ExcIEEEST6B() override;

		CIMPP::PU ilr;  /* Exciter output current limit reference (&lt;i&gt;I&lt;/i&gt;&lt;i&gt;&lt;sub&gt;LR&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 4,164. Default: nullptr */
		CIMPP::PU kci;  /* Exciter output current limit adjustment (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;CI&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,0577. Default: nullptr */
		CIMPP::PU kff;  /* Pre-control gain constant of the inner loop field regulator (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FF&lt;/sub&gt;&lt;/i&gt;). Typical value = 1. Default: nullptr */
		CIMPP::PU kg;  /* Feedback gain constant of the inner loop field regulator (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;G&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU kia;  /* Voltage regulator integral gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IA&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 45,094. Default: nullptr */
		CIMPP::PU klr;  /* Exciter output current limiter gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;LR&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 17,33. Default: nullptr */
		CIMPP::PU km;  /* Forward gain constant of the inner loop field regulator (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;M&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kpa;  /* Voltage regulator proportional gain (&lt;u&gt;K&lt;/u&gt;&lt;u&gt;&lt;sub&gt;PA&lt;/sub&gt;&lt;/u&gt;) (&amp;gt; 0).  Typical value = 18,038. Default: nullptr */
		CIMPP::ExcST6BOELselectorKind oelin;  /* OEL input selector (&lt;i&gt;OELin&lt;/i&gt;). Typical value = noOELinput. Default: 0 */
		CIMPP::Seconds tg;  /* Feedback time constant of inner loop field voltage regulator (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;G&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,02. Default: nullptr */
		CIMPP::PU vamax;  /* Maximum voltage regulator output (V&lt;i&gt;&lt;sub&gt;AMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 4,81. Default: nullptr */
		CIMPP::PU vamin;  /* Minimum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;AMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; 0).  Typical value = -3,85. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 4,81. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; 0).  Typical value = -3,85. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcIEEEST6B_factory();
}
#endif
