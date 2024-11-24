#ifndef GovHydroIEEE0_H
#define GovHydroIEEE0_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	IEEE simplified hydro governor-turbine model.  Used for mechanical-hydraulic and electro-hydraulic turbine governors, with or without steam feedback. Typical values given are for mechanical-hydraulic turbine-governor. Ref<font color="#0f0f0f">erence: IEEE Transactions on Power Apparatus and Systems, November/December 1973, Volume PAS-92, Number 6, <i><u>Dynamic Models for Steam and Hydro Turbines in Power System Studies</u></i>, page 1904.</font>
	*/
	class GovHydroIEEE0 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroIEEE0();
		~GovHydroIEEE0() override;

		CIMPP::PU k;  /* Governor gain (&lt;i&gt;K)&lt;/i&gt;. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU pmax;  /* Gate maximum (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovHydroIEEE0.pmin). Default: nullptr */
		CIMPP::PU pmin;  /* Gate minimum (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;lt; GovHydroIEEE.pmax). Default: nullptr */
		CIMPP::Seconds t1;  /* Governor lag time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,25. Default: nullptr */
		CIMPP::Seconds t2;  /* Governor lead time constant (&lt;i&gt;T2)&lt;/i&gt; (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t3;  /* Gate actuator time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t4;  /* Water starting time (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovHydroIEEE0_factory();
}
#endif
