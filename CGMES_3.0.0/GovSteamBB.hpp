#ifndef GovSteamBB_H
#define GovSteamBB_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	European governor model.
	*/
	class GovSteamBB : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamBB();
		~GovSteamBB() override;

		CIMPP::PU fcut;  /* Frequency deadband (&lt;i&gt;f&lt;/i&gt;&lt;i&gt;&lt;sub&gt;cut&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,002. Default: nullptr */
		CIMPP::PU k2;  /* Gain (&lt;i&gt;K2&lt;/i&gt;).  Typical value = 0,75. Default: nullptr */
		CIMPP::PU k3;  /* Gain (&lt;i&gt;K3&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU kd;  /* Gain (&lt;i&gt;Kd&lt;/i&gt;).  Typical value = 1,0. Default: nullptr */
		CIMPP::PU kg;  /* Gain (&lt;i&gt;Kg&lt;/i&gt;).  Typical value = 1,0. Default: nullptr */
		CIMPP::PU kls;  /* Gain (&lt;i&gt;Kls&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU kp;  /* Gain (&lt;i&gt;Kp&lt;/i&gt;).  Typical value = 1,0. Default: nullptr */
		CIMPP::PU ks;  /* Gain (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 21,0. Default: nullptr */
		CIMPP::Boolean peflag;  /* Electric power input selection (Peflag).   true = electric power input false = feedback signal. Typical value = false. Default: false */
		CIMPP::PU pmax;  /* High power limit (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovSteamBB.pmin).  Typical value = 1,0. Default: nullptr */
		CIMPP::PU pmin;  /* Low power limit (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;lt; GovSteamBB.pmax).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t1;  /* Time constant (&lt;i&gt;T1&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds t4;  /* Time constant (&lt;i&gt;T4&lt;/i&gt;).  Typical value = 0,15. Default: nullptr */
		CIMPP::Seconds t5;  /* Time constant (&lt;i&gt;T5&lt;/i&gt;).  Typical value = 12,0. Default: nullptr */
		CIMPP::Seconds t6;  /* Time constant (&lt;i&gt;T6&lt;/i&gt;).  Typical value = 0,75. Default: nullptr */
		CIMPP::Seconds td;  /* Time constant (&lt;i&gt;Td&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,0. Default: nullptr */
		CIMPP::Seconds tn;  /* Time constant (&lt;i&gt;Tn&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovSteamBB_factory();
}
#endif
