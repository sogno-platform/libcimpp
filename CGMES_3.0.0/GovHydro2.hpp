#ifndef GovHydro2_H
#define GovHydro2_H
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
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	IEEE hydro turbine governor with straightforward penstock configuration and hydraulic-dashpot governor.
	*/
	class GovHydro2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro2();
		~GovHydro2() override;

		CIMPP::PU aturb;  /* Turbine numerator multiplier (&lt;i&gt;Aturb&lt;/i&gt;).  Typical value = -1. Default: nullptr */
		CIMPP::PU bturb;  /* Turbine denominator multiplier (&lt;i&gt;Bturb&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Frequency db1;  /* Intentional deadband width (&lt;i&gt;db1&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::ActivePower db2;  /* Unintentional deadband (&lt;i&gt;db2&lt;/i&gt;).  Unit = MW.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency eps;  /* Intentional db hysteresis (&lt;i&gt;eps&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::PU gv1;  /* Nonlinear gain point 1, PU gv (&lt;i&gt;Gv1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv2;  /* Nonlinear gain point 2, PU gv (&lt;i&gt;Gv2&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv3;  /* Nonlinear gain point 3, PU gv (&lt;i&gt;Gv3&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv4;  /* Nonlinear gain point 4, PU gv (&lt;i&gt;Gv4&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv5;  /* Nonlinear gain point 5, PU gv (&lt;i&gt;Gv5&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv6;  /* Nonlinear gain point 6, PU gv (&lt;i&gt;Gv6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kturb;  /* Turbine gain (&lt;i&gt;Kturb&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU pgv1;  /* Nonlinear gain point 1, PU power (&lt;i&gt;Pgv1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv2;  /* Nonlinear gain point 2, PU power (&lt;i&gt;Pgv2&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv3;  /* Nonlinear gain point 3, PU power (&lt;i&gt;Pgv3&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv4;  /* Nonlinear gain point 4, PU power (P&lt;i&gt;gv4&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv5;  /* Nonlinear gain point 5, PU power (&lt;i&gt;Pgv5&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv6;  /* Nonlinear gain point 6, PU power (&lt;i&gt;Pgv6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pmax;  /* Maximum gate opening (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovHydro2.pmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU pmin;  /* Minimum gate opening (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;lt; GovHydro2.pmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU rperm;  /* Permanent droop (&lt;i&gt;Rperm&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU rtemp;  /* Temporary droop (&lt;i&gt;Rtemp&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds tg;  /* Gate servo time constant (&lt;i&gt;Tg&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds tp;  /* Pilot servo valve time constant (&lt;i&gt;Tp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,03. Default: nullptr */
		CIMPP::Seconds tr;  /* Dashpot time constant (&lt;i&gt;Tr&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 12. Default: nullptr */
		CIMPP::Seconds tw;  /* Water inertia time constant (&lt;i&gt;Tw&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Float uc;  /* Maximum gate closing velocity (&lt;i&gt;Uc&lt;/i&gt;) (&amp;lt; 0).  Unit = PU / s.   Typical value = -0,1. Default: 0.0 */
		CIMPP::Float uo;  /* Maximum gate opening velocity (&lt;i&gt;Uo&lt;/i&gt;).  Unit = PU / s.  Typical value = 0,1. Default: 0.0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovHydro2_factory();
}
#endif
