#ifndef GovHydroR_H
#define GovHydroR_H
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
#include "Boolean.hpp"
#include "Float.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Fourth order lead-lag governor and hydro turbine. */
	class GovHydroR : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroR();
		~GovHydroR() override;

		/** \brief Turbine gain (&lt;i&gt;At&lt;/i&gt;).  Typical value = 1,2. Default: nullptr */
		CIMPP::PU at;

		/** \brief Intentional dead-band width (&lt;i&gt;db1&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (&lt;i&gt;db2&lt;/i&gt;).  Unit = MW.  Typical value = 0. Default: nullptr */
		CIMPP::ActivePower db2;

		/** \brief Turbine damping factor (&lt;i&gt;Dturb&lt;/i&gt;).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU dturb;

		/** \brief Intentional db hysteresis (&lt;i&gt;eps&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency eps;

		/** \brief Maximum governor output (&lt;i&gt;Gmax&lt;/i&gt;) (&amp;gt; GovHydroR.gmin).  Typical value = 1,05. Default: nullptr */
		CIMPP::PU gmax;

		/** \brief Minimum governor output (&lt;i&gt;Gmin&lt;/i&gt;) (&amp;lt; GovHydroR.gmax).  Typical value = -0,05. Default: nullptr */
		CIMPP::PU gmin;

		/** \brief Nonlinear gain point 1, PU gv (&lt;i&gt;Gv1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain point 2, PU gv (&lt;i&gt;Gv2&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain point 3, PU gv (&lt;i&gt;Gv3&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain point 4, PU gv (&lt;i&gt;Gv4&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain point 5, PU gv (&lt;i&gt;Gv5&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv5;

		/** \brief Nonlinear gain point 6, PU gv (&lt;i&gt;Gv6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv6;

		/** \brief Turbine nominal head (&lt;i&gt;H0&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU h0;

		/** \brief Input signal switch (&lt;i&gt;Flag&lt;/i&gt;). true = &lt;i&gt;Pe&lt;/i&gt; input is used false = feedback is received from &lt;i&gt;CV&lt;/i&gt;. &lt;i&gt;Flag&lt;/i&gt; is normally dependent on &lt;i&gt;Tt&lt;/i&gt;.  If &lt;i&gt;Tt &lt;/i&gt;is zero, &lt;i&gt;Flag&lt;/i&gt; is set to false. If &lt;i&gt;Tt&lt;/i&gt; is not zero, &lt;i&gt;Flag&lt;/i&gt; is set to true.   Typical value = true. Default: false */
		CIMPP::Boolean inputSignal;

		/** \brief Gate servo gain (&lt;i&gt;Kg&lt;/i&gt;).  Typical value = 2. Default: nullptr */
		CIMPP::PU kg;

		/** \brief Integral gain (&lt;i&gt;Ki&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Nonlinear gain point 1, PU power (&lt;i&gt;Pgv1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv1;

		/** \brief Nonlinear gain point 2, PU power (&lt;i&gt;Pgv2&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv2;

		/** \brief Nonlinear gain point 3, PU power (&lt;i&gt;Pgv3&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv3;

		/** \brief Nonlinear gain point 4, PU power (&lt;i&gt;Pgv4&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv4;

		/** \brief Nonlinear gain point 5, PU power (&lt;i&gt;Pgv5&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv5;

		/** \brief Nonlinear gain point 6, PU power (&lt;i&gt;Pgv6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv6;

		/** \brief Maximum gate opening, PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovHydroR.pmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU pmax;

		/** \brief Minimum gate opening, PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;lt; GovHydroR.pmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU pmin;

		/** \brief No-load turbine flow at nominal head (&lt;i&gt;Qnl&lt;/i&gt;).  Typical value = 0,08. Default: nullptr */
		CIMPP::PU qnl;

		/** \brief Steady-state droop (&lt;i&gt;R&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU r;

		/** \brief Lead time constant 1 (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,5. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Lag time constant 1 (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Lead time constant 2 (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,5. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Lag time constant 2 (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Lead time constant 3 (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Lag time constant 3 (&lt;i&gt;T6&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Lead time constant 4 (&lt;i&gt;T7&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t7;

		/** \brief Lag time constant 4 (&lt;i&gt;T8&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds t8;

		/** \brief Input filter time constant (&lt;i&gt;Td&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds td;

		/** \brief Gate servo time constant (&lt;i&gt;Tp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tp;

		/** \brief Power feedback time constant (&lt;i&gt;Tt&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tt;

		/** \brief Water inertia time constant (&lt;i&gt;Tw&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tw;

		/** \brief Maximum gate closing velocity (&lt;i&gt;Velcl&lt;/i&gt;).  Unit = PU / s.  Typical value = -0,2. Default: 0.0 */
		CIMPP::Float velcl;

		/** \brief Maximum gate opening velocity (&lt;i&gt;Velop&lt;/i&gt;).  Unit = PU / s.  Typical value = 0,2. Default: 0.0 */
		CIMPP::Float velop;

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

	BaseClass* GovHydroR_factory();
}
#endif
