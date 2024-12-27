#ifndef GovSteam0_H
#define GovSteam0_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	A simplified steam turbine governor.
	*/
	class GovSteam0 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteam0();
		~GovSteam0() override;

		CIMPP::PU dt;  /* Turbine damping coefficient (&lt;i&gt;Dt&lt;/i&gt;).  Unit = delta P / delta speed. Typical value = 0. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU r;  /* Permanent droop (&lt;i&gt;R&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds t1;  /* Steam bowl time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds t2;  /* Numerator time constant of &lt;i&gt;T2&lt;/i&gt;/&lt;i&gt;T3&lt;/i&gt; block (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3. Default: nullptr */
		CIMPP::Seconds t3;  /* Reheater time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt; 0).  Typical value = 10. Default: nullptr */
		CIMPP::PU vmax;  /* Maximum valve position, PU of &lt;i&gt;mwcap&lt;/i&gt; (&lt;i&gt;Vmax&lt;/i&gt;) (&amp;gt; GovSteam0.vmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU vmin;  /* Minimum valve position, PU of &lt;i&gt;mwcap&lt;/i&gt; (&lt;i&gt;Vmin&lt;/i&gt;) (&amp;lt; GovSteam0.vmax).  Typical value = 0. Default: nullptr */

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

	BaseClass* GovSteam0_factory();
}
#endif
