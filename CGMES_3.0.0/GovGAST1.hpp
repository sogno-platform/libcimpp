#ifndef GovGAST1_H
#define GovGAST1_H
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
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified single shaft gas turbine. */
	class GovGAST1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST1();
		~GovGAST1() override;

		/** \brief Turbine power time constant numerator scale factor (&lt;i&gt;a&lt;/i&gt;).  Typical value = 0,8. Default: 0.0 */
		CIMPP::Float a;

		/** \brief Turbine power time constant denominator scale factor (&lt;i&gt;b&lt;/i&gt;) (&amp;gt;0).  Typical value = 1. Default: 0.0 */
		CIMPP::Float b;

		/** \brief Intentional dead-band width (&lt;i&gt;db1&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (&lt;i&gt;db2&lt;/i&gt;).  Unit = MW.  Typical value = 0. Default: nullptr */
		CIMPP::ActivePower db2;

		/** \brief Intentional db hysteresis (&lt;i&gt;eps&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency eps;

		/** \brief Fuel flow at zero power output (&lt;i&gt;Fidle&lt;/i&gt;).  Typical value = 0,18. Default: nullptr */
		CIMPP::PU fidle;

		/** \brief Nonlinear gain point 1, PU gv (&lt;i&gt;Gv1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain point 2,PU gv (&lt;i&gt;Gv2&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain point 3, PU gv (&lt;i&gt;Gv3&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain point 4, PU gv (&lt;i&gt;Gv4&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain point 5, PU gv (&lt;i&gt;Gv5&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv5;

		/** \brief Nonlinear gain point 6, PU gv (&lt;i&gt;Gv6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv6;

		/** \brief Governor gain (&lt;i&gt;Ka&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Temperature limiter gain (&lt;i&gt;Kt&lt;/i&gt;).  Typical value = 3. Default: nullptr */
		CIMPP::PU kt;

		/** \brief Ambient temperature load limit (&lt;i&gt;Lmax&lt;/i&gt;).  &lt;i&gt;Lmax&lt;/i&gt; is the turbine power output corresponding to the limiting exhaust gas temperature.  Typical value = 1. Default: nullptr */
		CIMPP::PU lmax;

		/** \brief Valve position change allowed at fast rate (&lt;i&gt;Loadinc&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU loadinc;

		/** \brief Maximum long term fuel valve opening rate (&lt;i&gt;Ltrate&lt;/i&gt;).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Float ltrate;

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

		/** \brief Permanent droop (&lt;i&gt;R&lt;/i&gt;) (&amp;gt;0).  Typical value = 0,04. Default: nullptr */
		CIMPP::PU r;

		/** \brief Maximum fuel valve opening rate (&lt;i&gt;Rmax&lt;/i&gt;).  Unit = PU / s.  Typical value = 1. Default: 0.0 */
		CIMPP::Float rmax;

		/** \brief Governor mechanism time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  &lt;i&gt;T1&lt;/i&gt; represents the natural valve positioning time constant of the governor for small disturbances, as seen when rate limiting is not in effect.  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Turbine power time constant (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0). &lt;i&gt;T2&lt;/i&gt; represents delay due to internal energy storage of the gas turbine engine. &lt;i&gt;T2&lt;/i&gt; can be used to give a rough approximation to the delay associated with acceleration of the compressor spool of a multi-shaft engine, or with the compressibility of gas in the plenum of the free power turbine of an aero-derivative unit, for example.  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Turbine exhaust temperature time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0).  &lt;i&gt;T3&lt;/i&gt; represents delay in the exhaust temperature and load limiting system. Typical value = 3. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Governor lead time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Governor lag time constant (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt;= 0).  If = 0, entire gain and lead-lag block is bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Valve position averaging time constant (&lt;i&gt;Tltr&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::Seconds tltr;

		/** \brief Maximum turbine power, PU of MWbase (&lt;i&gt;Vmax&lt;/i&gt;) (&amp;gt; GovGAST1.vmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU vmax;

		/** \brief Minimum turbine power, PU of MWbase (&lt;i&gt;Vmin&lt;/i&gt;) (&amp;lt; GovGAST1.vmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU vmin;

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

	BaseClass* GovGAST1_factory();
}
#endif
