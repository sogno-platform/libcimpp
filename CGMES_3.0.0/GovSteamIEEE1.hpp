#ifndef GovSteamIEEE1_H
#define GovSteamIEEE1_H
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
#include "CimClassDetails.hpp"
#include "ActivePower.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE steam turbine governor model. Ref<font color="#0f0f0f">erence: IEEE Transactions on Power Apparatus and Systems, November/December 1973, Volume PAS-92, Number 6, <i><u>Dynamic Models for Steam and Hydro Turbines in Power System Studies</u></i>, page 1904.</font> */
	class GovSteamIEEE1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamIEEE1();
		~GovSteamIEEE1() override;

		/** \brief Governor gain (reciprocal of droop) (&lt;i&gt;K&lt;/i&gt;) (&amp;gt; 0).  Typical value = 25. Default: nullptr */
		CIMPP::PU k;

		/** \brief Fraction of HP shaft power after first boiler pass (&lt;i&gt;K1&lt;/i&gt;).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Float k1;

		/** \brief Fraction of LP shaft power after first boiler pass (&lt;i&gt;K2&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k2;

		/** \brief Fraction of HP shaft power after second boiler pass (&lt;i&gt;K3&lt;/i&gt;).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float k3;

		/** \brief Fraction of LP shaft power after second boiler pass (&lt;i&gt;K4&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k4;

		/** \brief Fraction of HP shaft power after third boiler pass (&lt;i&gt;K5&lt;/i&gt;).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Float k5;

		/** \brief Fraction of LP shaft power after third boiler pass (&lt;i&gt;K6&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k6;

		/** \brief Fraction of HP shaft power after fourth boiler pass (&lt;i&gt;K7&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k7;

		/** \brief Fraction of LP shaft power after fourth boiler pass (&lt;i&gt;K8&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k8;

		/** \brief Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0)&lt;i&gt;. &lt;/i&gt;Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Maximum valve opening (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovSteamIEEE1.pmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU pmax;

		/** \brief Minimum valve opening (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;gt;= 0 and &amp;lt; GovSteamIEEE1.pmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU pmin;

		/** \brief Governor lag time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Governor lead time constant (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Valve positioner time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Inlet piping/steam bowl time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Time constant of second boiler pass (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Time constant of third boiler pass (&lt;i&gt;T6&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Time constant of fourth boiler pass (&lt;i&gt;T7&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t7;

		/** \brief Maximum valve closing velocity (&lt;i&gt;Uc&lt;/i&gt;) (&amp;lt; 0).  Unit = PU / s.  Typical value = -10. Default: 0.0 */
		CIMPP::Float uc;

		/** \brief Maximum valve opening velocity (&lt;i&gt;Uo&lt;/i&gt;) (&amp;gt; 0).  Unit = PU / s.  Typical value = 1. Default: 0.0 */
		CIMPP::Float uo;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* GovSteamIEEE1_factory();
}
#endif
