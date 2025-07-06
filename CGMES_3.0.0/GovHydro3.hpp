#ifndef GovHydro3_H
#define GovHydro3_H
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

	/** \brief Modified IEEE hydro governor-turbine. This model differs from that defined in the IEEE modelling guideline paper in that the limits on gate position and velocity do not permit "wind up" of the upstream signals. */
	class GovHydro3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro3();
		~GovHydro3() override;

		/** \brief Turbine gain (&lt;i&gt;At&lt;/i&gt;) (&amp;gt;0).  Typical value = 1,2. Default: nullptr */
		CIMPP::PU at;

		/** \brief Intentional dead-band width (&lt;i&gt;db1&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (&lt;i&gt;db2&lt;/i&gt;).  Unit = MW.  Typical value = 0. Default: nullptr */
		CIMPP::ActivePower db2;

		/** \brief Turbine damping factor (&lt;i&gt;Dturb&lt;/i&gt;).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU dturb;

		/** \brief Intentional db hysteresis (&lt;i&gt;eps&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency eps;

		/** \brief Governor control flag (&lt;i&gt;Cflag&lt;/i&gt;). true = PID control is active false = double derivative control is active. Typical value = true. Default: false */
		CIMPP::Boolean governorControl;

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

		/** \brief Derivative gain (&lt;i&gt;K1&lt;/i&gt;).  Typical value = 0,01. Default: nullptr */
		CIMPP::PU k1;

		/** \brief Double derivative gain, if &lt;i&gt;Cflag&lt;/i&gt; = -1 (&lt;i&gt;K2&lt;/i&gt;).  Typical value = 2,5. Default: nullptr */
		CIMPP::PU k2;

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

		/** \brief Maximum gate opening, PU of MWbase (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovHydro3.pmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU pmax;

		/** \brief Minimum gate opening, PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;lt; GovHydro3.pmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU pmin;

		/** \brief No-load turbine flow at nominal head (&lt;i&gt;Qnl&lt;/i&gt;).  Typical value = 0,08. Default: nullptr */
		CIMPP::PU qnl;

		/** \brief Steady-state droop, PU, for electrical power feedback (&lt;i&gt;Relec&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU relec;

		/** \brief Steady-state droop, PU, for governor output feedback (&lt;i&gt;Rgate&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU rgate;

		/** \brief Input filter time constant (&lt;i&gt;Td&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds td;

		/** \brief Washout time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Gate servo time constant (&lt;i&gt;Tp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tp;

		/** \brief Power feedback time constant (&lt;i&gt;Tt&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds tt;

		/** \brief Water inertia time constant (&lt;i&gt;Tw&lt;/i&gt;) (&amp;gt;= 0).  If = 0, block is bypassed.  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tw;

		/** \brief Maximum gate closing velocity (&lt;i&gt;Velcl&lt;/i&gt;).  Unit = PU / s.  Typical value = -0,2. Default: 0.0 */
		CIMPP::Float velcl;

		/** \brief Maximum gate opening velocity (&lt;i&gt;Velop&lt;/i&gt;).  Unit = PU / s. Typical value = 0,2. Default: 0.0 */
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

	BaseClass* GovHydro3_factory();
}
#endif
