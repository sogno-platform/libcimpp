#ifndef GovSteam1_H
#define GovSteam1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Steam turbine governor, based on the GovSteamIEEE1 (with optional deadband and nonlinear valve gain added).
	*/
	class GovSteam1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteam1();
		~GovSteam1() override;

		CIMPP::Frequency db1;  /* Intentional deadband width (&lt;i&gt;db1&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::ActivePower db2;  /* Unintentional deadband (&lt;i&gt;db2&lt;/i&gt;).  Unit = MW.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency eps;  /* Intentional db hysteresis (&lt;i&gt;eps&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::PU gv1;  /* Nonlinear gain valve position point 1 (&lt;i&gt;GV1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv2;  /* Nonlinear gain valve position point 2 (&lt;i&gt;GV2&lt;/i&gt;).  Typical value = 0,4. Default: nullptr */
		CIMPP::PU gv3;  /* Nonlinear gain valve position point 3 (&lt;i&gt;GV3&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU gv4;  /* Nonlinear gain valve position point 4 (&lt;i&gt;GV4&lt;/i&gt;).  Typical value = 0,6. Default: nullptr */
		CIMPP::PU gv5;  /* Nonlinear gain valve position point 5 (&lt;i&gt;GV5&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU gv6;  /* Nonlinear gain valve position point 6 (&lt;i&gt;GV6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU k;  /* Governor gain (reciprocal of droop) (&lt;i&gt;K&lt;/i&gt;) (&amp;gt; 0).  Typical value = 25. Default: nullptr */
		CIMPP::Float k1;  /* Fraction of HP shaft power after first boiler pass (&lt;i&gt;K1&lt;/i&gt;).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Float k2;  /* Fraction of LP shaft power after first boiler pass (&lt;i&gt;K2&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k3;  /* Fraction of HP shaft power after second boiler pass (&lt;i&gt;K3&lt;/i&gt;).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float k4;  /* Fraction of LP shaft power after second boiler pass (&lt;i&gt;K4&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k5;  /* Fraction of HP shaft power after third boiler pass (&lt;i&gt;K5&lt;/i&gt;).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Float k6;  /* Fraction of LP shaft power after third boiler pass (&lt;i&gt;K6&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k7;  /* Fraction of HP shaft power after fourth boiler pass (&lt;i&gt;K7&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k8;  /* Fraction of LP shaft power after fourth boiler pass (&lt;i&gt;K8&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU pgv1;  /* Nonlinear gain power value point 1 (&lt;i&gt;Pgv1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv2;  /* Nonlinear gain power value point 2 (&lt;i&gt;Pgv2&lt;/i&gt;).  Typical value = 0,75. Default: nullptr */
		CIMPP::PU pgv3;  /* Nonlinear gain power value point 3 (&lt;i&gt;Pgv3&lt;/i&gt;).  Typical value = 0,91. Default: nullptr */
		CIMPP::PU pgv4;  /* Nonlinear gain power value point 4 (&lt;i&gt;Pgv4&lt;/i&gt;).  Typical value = 0,98. Default: nullptr */
		CIMPP::PU pgv5;  /* Nonlinear gain power value point 5 (&lt;i&gt;Pgv5&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU pgv6;  /* Nonlinear gain power value point 6 (&lt;i&gt;Pgv6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pmax;  /* Maximum valve opening (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovSteam1.pmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU pmin;  /* Minimum valve opening (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;gt;= 0 and &amp;lt; GovSteam1.pmax).  Typical value = 0. Default: nullptr */
		CIMPP::Boolean sdb1;  /* Intentional deadband indicator. true = intentional deadband is applied false = intentional deadband is not applied. Typical value = true. Default: false */
		CIMPP::Boolean sdb2;  /* Unintentional deadband location. true = intentional deadband is applied before point `A` false = intentional deadband is applied after point `A`. Typical value = true. Default: false */
		CIMPP::Seconds t1;  /* Governor lag time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t2;  /* Governor lead time constant (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t3;  /* Valve positioner time constant (&lt;i&gt;T3) &lt;/i&gt;(&amp;gt; 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t4;  /* Inlet piping/steam bowl time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds t5;  /* Time constant of second boiler pass (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds t6;  /* Time constant of third boiler pass (&lt;i&gt;T6&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds t7;  /* Time constant of fourth boiler pass (&lt;i&gt;T7&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Float uc;  /* Maximum valve closing velocity (&lt;i&gt;Uc&lt;/i&gt;) (&amp;lt; 0).  Unit = PU / s.  Typical value = -10. Default: 0.0 */
		CIMPP::Float uo;  /* Maximum valve opening velocity (&lt;i&gt;Uo&lt;/i&gt;) (&amp;gt; 0).  Unit = PU / s.  Typical value = 1. Default: 0.0 */
		CIMPP::Boolean valve;  /* Nonlinear valve characteristic. true = nonlinear valve characteristic is used false = nonlinear valve characteristic is not used. Typical value = true. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovSteam1_factory();
}
#endif
