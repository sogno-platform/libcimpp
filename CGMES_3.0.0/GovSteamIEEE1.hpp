#ifndef GovSteamIEEE1_H
#define GovSteamIEEE1_H
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
	IEEE steam turbine governor model. Ref<font color="#0f0f0f">erence: IEEE Transactions on Power Apparatus and Systems, November/December 1973, Volume PAS-92, Number 6, <i><u>Dynamic Models for Steam and Hydro Turbines in Power System Studies</u></i>, page 1904.</font>
	*/
	class GovSteamIEEE1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamIEEE1();
		~GovSteamIEEE1() override;

		CIMPP::PU k;  /* Governor gain (reciprocal of droop) (&lt;i&gt;K&lt;/i&gt;) (&amp;gt; 0).  Typical value = 25. Default: nullptr */
		CIMPP::Float k1;  /* Fraction of HP shaft power after first boiler pass (&lt;i&gt;K1&lt;/i&gt;).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Float k2;  /* Fraction of LP shaft power after first boiler pass (&lt;i&gt;K2&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k3;  /* Fraction of HP shaft power after second boiler pass (&lt;i&gt;K3&lt;/i&gt;).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float k4;  /* Fraction of LP shaft power after second boiler pass (&lt;i&gt;K4&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k5;  /* Fraction of HP shaft power after third boiler pass (&lt;i&gt;K5&lt;/i&gt;).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Float k6;  /* Fraction of LP shaft power after third boiler pass (&lt;i&gt;K6&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k7;  /* Fraction of HP shaft power after fourth boiler pass (&lt;i&gt;K7&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k8;  /* Fraction of LP shaft power after fourth boiler pass (&lt;i&gt;K8&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0)&lt;i&gt;. &lt;/i&gt;Unit = MW. Default: nullptr */
		CIMPP::PU pmax;  /* Maximum valve opening (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovSteamIEEE1.pmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU pmin;  /* Minimum valve opening (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;gt;= 0 and &amp;lt; GovSteamIEEE1.pmax).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t1;  /* Governor lag time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t2;  /* Governor lead time constant (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t3;  /* Valve positioner time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t4;  /* Inlet piping/steam bowl time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds t5;  /* Time constant of second boiler pass (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds t6;  /* Time constant of third boiler pass (&lt;i&gt;T6&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds t7;  /* Time constant of fourth boiler pass (&lt;i&gt;T7&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Float uc;  /* Maximum valve closing velocity (&lt;i&gt;Uc&lt;/i&gt;) (&amp;lt; 0).  Unit = PU / s.  Typical value = -10. Default: 0.0 */
		CIMPP::Float uo;  /* Maximum valve opening velocity (&lt;i&gt;Uo&lt;/i&gt;) (&amp;gt; 0).  Unit = PU / s.  Typical value = 1. Default: 0.0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovSteamIEEE1_factory();
}
#endif
