#ifndef GovSteamFV2_H
#define GovSteamFV2_H
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
	Steam turbine governor with reheat time constants and modelling of the effects of fast valve closing to reduce mechanical power.
	*/
	class GovSteamFV2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamFV2();
		~GovSteamFV2() override;

		CIMPP::PU dt;  /* (&lt;i&gt;Dt&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k;  /* Fraction of the turbine power developed by turbine sections not involved in fast valving (&lt;i&gt;K&lt;/i&gt;). Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Alternate base used instead of machine base in equipment model if necessary (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU r;  /* (&lt;i&gt;R&lt;/i&gt;). Default: nullptr */
		CIMPP::Seconds t1;  /* Governor time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t3;  /* Reheater time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds ta;  /* Time after initial time for valve to close (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tb;  /* Time after initial time for valve to begin opening (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tc;  /* Time after initial time for valve to become fully open (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tt;  /* Time constant with which power falls off after intercept valve closure (&lt;i&gt;Tt&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::PU vmax;  /* (&lt;i&gt;Vmax&lt;/i&gt;) (&amp;gt; GovSteamFV2.vmin). Default: nullptr */
		CIMPP::PU vmin;  /* (&lt;i&gt;Vmin&lt;/i&gt;) (&amp;lt; GovSteamFV2.vmax). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovSteamFV2_factory();
}
#endif
