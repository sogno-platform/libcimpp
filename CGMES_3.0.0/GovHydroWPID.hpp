#ifndef GovHydroWPID_H
#define GovHydroWPID_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Woodward<sup>TM</sup> PID hydro governor. [Footnote: Woodward PID hydro governors are an example of suitable products available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of these products.] */
	class GovHydroWPID : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroWPID();
		~GovHydroWPID() override;

		/** \brief Turbine damping factor (&lt;i&gt;D&lt;/i&gt;).  Unit = delta P / delta speed. Default: nullptr */
		CIMPP::PU d;

		/** \brief Gate opening limit maximum (&lt;i&gt;Gatmax&lt;/i&gt;) (&amp;gt; GovHydroWPID.gatmin). Default: nullptr */
		CIMPP::PU gatmax;

		/** \brief Gate opening limit minimum (&lt;i&gt;Gatmin&lt;/i&gt;) (&amp;lt; GovHydroWPID.gatmax). Default: nullptr */
		CIMPP::PU gatmin;

		/** \brief Gate position 1 (&lt;i&gt;Gv1&lt;/i&gt;). Default: nullptr */
		CIMPP::PU gv1;

		/** \brief Gate position 2 (&lt;i&gt;Gv2&lt;/i&gt;). Default: nullptr */
		CIMPP::PU gv2;

		/** \brief Gate position 3 (&lt;i&gt;Gv3&lt;/i&gt;) (= 1,0). Default: nullptr */
		CIMPP::PU gv3;

		/** \brief Derivative gain (&lt;i&gt;Kd&lt;/i&gt;).  Typical value = 1,11. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Reset gain (&lt;i&gt;Ki&lt;/i&gt;).  Typical value = 0,36. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Proportional gain (&lt;i&gt;Kp&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Base for power values  (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Output at &lt;i&gt;Gv1&lt;/i&gt; PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Pgv1&lt;/i&gt;). Default: nullptr */
		CIMPP::PU pgv1;

		/** \brief Output at &lt;i&gt;Gv2&lt;/i&gt; PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Pgv2&lt;/i&gt;). Default: nullptr */
		CIMPP::PU pgv2;

		/** \brief Output at &lt;i&gt;Gv3&lt;/i&gt; PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Pgv3&lt;/i&gt;). Default: nullptr */
		CIMPP::PU pgv3;

		/** \brief Maximum power output (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovHydroWPID.pmin). Default: nullptr */
		CIMPP::PU pmax;

		/** \brief Minimum power output (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;lt; GovHydroWPID.pmax). Default: nullptr */
		CIMPP::PU pmin;

		/** \brief Permanent drop (&lt;i&gt;Reg&lt;/i&gt;). Default: nullptr */
		CIMPP::PU reg;

		/** \brief Controller time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Gate servo time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Speed detector time constant (&lt;i&gt;Treg&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds treg;

		/** \brief Water inertia time constant (&lt;i&gt;Tw&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tw;

		/** \brief Maximum gate opening velocity (&lt;i&gt;Velmax&lt;/i&gt;) (&amp;gt; GovHydroWPID.velmin).  Unit = PU / s.  Typical value = 0. Default: nullptr */
		CIMPP::PU velmax;

		/** \brief Maximum gate closing velocity (&lt;i&gt;Velmin&lt;/i&gt;) (&amp;lt; GovHydroWPID.velmax).  Unit = PU / s.  Typical value = 0. Default: nullptr */
		CIMPP::PU velmin;

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

	BaseClass* GovHydroWPID_factory();
}
#endif
