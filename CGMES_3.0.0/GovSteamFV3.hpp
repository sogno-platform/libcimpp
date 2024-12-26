#ifndef GovSteamFV3_H
#define GovSteamFV3_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Simplified GovSteamIEEE1 steam turbine governor with Prmax limit and fast valving.
	*/
	class GovSteamFV3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamFV3();
		~GovSteamFV3() override;

		CIMPP::PU gv1;  /* Nonlinear gain valve position point 1 (&lt;i&gt;GV1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv2;  /* Nonlinear gain valve position point 2 (&lt;i&gt;GV2&lt;/i&gt;).  Typical value = 0,4. Default: nullptr */
		CIMPP::PU gv3;  /* Nonlinear gain valve position point 3 (&lt;i&gt;GV3&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU gv4;  /* Nonlinear gain valve position point 4 (&lt;i&gt;GV4&lt;/i&gt;).  Typical value = 0,6. Default: nullptr */
		CIMPP::PU gv5;  /* Nonlinear gain valve position point 5 (&lt;i&gt;GV5&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU gv6;  /* Nonlinear gain valve position point 6 (&lt;i&gt;GV6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU k;  /* Governor gain, (reciprocal of droop) (&lt;i&gt;K&lt;/i&gt;).  Typical value = 20. Default: nullptr */
		CIMPP::PU k1;  /* Fraction of turbine power developed after first boiler pass (&lt;i&gt;K1&lt;/i&gt;).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU k2;  /* Fraction of turbine power developed after second boiler pass (&lt;i&gt;K2&lt;/i&gt;).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU k3;  /* Fraction of hp turbine power developed after crossover or third boiler pass (&lt;i&gt;K3&lt;/i&gt;). Typical value = 0,6. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU pgv1;  /* Nonlinear gain power value point 1 (&lt;i&gt;Pgv1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv2;  /* Nonlinear gain power value point 2 (&lt;i&gt;Pgv2&lt;/i&gt;).  Typical value = 0,75. Default: nullptr */
		CIMPP::PU pgv3;  /* Nonlinear gain power value point 3 (&lt;i&gt;Pgv3&lt;/i&gt;).  Typical value = 0,91. Default: nullptr */
		CIMPP::PU pgv4;  /* Nonlinear gain power value point 4 (&lt;i&gt;Pgv4&lt;/i&gt;).  Typical value = 0,98. Default: nullptr */
		CIMPP::PU pgv5;  /* Nonlinear gain power value point 5 (&lt;i&gt;Pgv5&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU pgv6;  /* Nonlinear gain power value point 6 (&lt;i&gt;Pgv6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pmax;  /* Maximum valve opening, PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovSteamFV3.pmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU pmin;  /* Minimum valve opening, PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;lt; GovSteamFV3.pmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU prmax;  /* Max. pressure in reheater (&lt;i&gt;Prmax&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds t1;  /* Governor lead time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t2;  /* Governor lag time constant (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t3;  /* Valve positioner time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t4;  /* Inlet piping/steam bowl time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds t5;  /* Time constant of second boiler pass (i.e. reheater) (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt; 0 if fast valving is used, otherwise &amp;gt;= 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds t6;  /* Time constant of crossover or third boiler pass (&lt;i&gt;T6&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::Seconds ta;  /* Time to close intercept valve (IV) (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,97. Default: nullptr */
		CIMPP::Seconds tb;  /* Time until IV starts to reopen (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,98. Default: nullptr */
		CIMPP::Seconds tc;  /* Time until IV is fully open (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,99. Default: nullptr */
		CIMPP::Float uc;  /* Maximum valve closing velocity (&lt;i&gt;Uc&lt;/i&gt;).  Unit = PU / s.  Typical value = -1. Default: 0.0 */
		CIMPP::Float uo;  /* Maximum valve opening velocity (&lt;i&gt;Uo&lt;/i&gt;).  Unit = PU / s.  Typical value = 0,1. Default: 0.0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovSteamFV3_factory();
}
#endif