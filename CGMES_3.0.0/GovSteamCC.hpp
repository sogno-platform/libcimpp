#ifndef GovSteamCC_H
#define GovSteamCC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "CrossCompoundTurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Cross compound turbine governor.  Unlike tandem compound units, cross compound units are not on the same shaft.
	*/
	class GovSteamCC : public CrossCompoundTurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamCC();
		~GovSteamCC() override;

		CIMPP::PU dhp;  /* HP damping factor (&lt;i&gt;Dhp&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU dlp;  /* LP damping factor (&lt;i&gt;Dlp&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU fhp;  /* Fraction of HP power ahead of reheater (&lt;i&gt;Fhp&lt;/i&gt;).  Typical value = 0,3. Default: nullptr */
		CIMPP::PU flp;  /* Fraction of LP power ahead of reheater (&lt;i&gt;Flp&lt;/i&gt;).  Typical value = 0,7. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU pmaxhp;  /* Maximum HP value position (&lt;i&gt;Pmaxhp&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU pmaxlp;  /* Maximum LP value position (&lt;i&gt;Pmaxlp&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU rhp;  /* HP governor droop (&lt;i&gt;Rhp&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU rlp;  /* LP governor droop (&lt;i&gt;Rlp&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds t1hp;  /* HP governor time constant (&lt;i&gt;T1hp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t1lp;  /* LP governor time constant (&lt;i&gt;T1lp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t3hp;  /* HP turbine time constant (&lt;i&gt;T3hp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t3lp;  /* LP turbine time constant (&lt;i&gt;T3lp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t4hp;  /* HP turbine time constant (&lt;i&gt;T4hp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t4lp;  /* LP turbine time constant (&lt;i&gt;T4lp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t5hp;  /* HP reheater time constant (&lt;i&gt;T5hp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::Seconds t5lp;  /* LP reheater time constant (&lt;i&gt;T5lp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */

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

	BaseClass* GovSteamCC_factory();
}
#endif
