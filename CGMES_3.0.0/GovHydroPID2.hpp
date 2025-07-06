#ifndef GovHydroPID2_H
#define GovHydroPID2_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Hydro turbine and governor. Represents plants with straightforward penstock configurations and "three term" electro-hydraulic governors (i.e. Woodward<sup>TM</sup> electronic). [Footnote: Woodward electronic governors are an example of suitable products available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of these products.] */
	class GovHydroPID2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroPID2();
		~GovHydroPID2() override;

		/** \brief Factor multiplying &lt;i&gt;Tw&lt;/i&gt; (&lt;i&gt;Atw&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU atw;

		/** \brief Turbine damping factor (&lt;i&gt;D&lt;/i&gt;).  Unit = delta P / delta speed.  Typical value = 0. Default: nullptr */
		CIMPP::PU d;

		/** \brief Feedback signal type flag (&lt;i&gt;Flag&lt;/i&gt;). true = use gate position feedback signal false = use Pe. Default: false */
		CIMPP::Boolean feedbackSignal;

		/** \brief Gate opening at speed no load (&lt;i&gt;G0&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU g0;

		/** \brief Intermediate gate opening (&lt;i&gt;G1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU g1;

		/** \brief Intermediate gate opening (&lt;i&gt;G2&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU g2;

		/** \brief Maximum gate opening (&lt;i&gt;Gmax&lt;/i&gt;) (&amp;gt; GovHydroPID2.gmin).  Typical value = 0. Default: nullptr */
		CIMPP::PU gmax;

		/** \brief Minimum gate opening (&lt;i&gt;Gmin&lt;/i&gt;) (&amp;gt; GovHydroPID2.gmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU gmin;

		/** \brief Derivative gain (&lt;i&gt;Kd&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Reset gain (&lt;i&gt;Ki&lt;/i&gt;).  Unit = PU/s.  Typical value = 0. Default: 0.0 */
		CIMPP::Float ki;

		/** \brief Proportional gain (&lt;i&gt;Kp&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt;0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Power at gate opening &lt;i&gt;G1&lt;/i&gt; (&lt;i&gt;P1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU p1;

		/** \brief Power at gate opening G2 (&lt;i&gt;P2&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU p2;

		/** \brief Power at full opened gate (&lt;i&gt;P3&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU p3;

		/** \brief Permanent drop (&lt;i&gt;Rperm&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU rperm;

		/** \brief Controller time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Gate servo time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt; 0). Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Speed detector time constant (&lt;i&gt;Treg&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds treg;

		/** \brief Water inertia time constant (&lt;i&gt;Tw&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tw;

		/** \brief Maximum gate opening velocity (&lt;i&gt;Velmax&lt;/i&gt;) (&amp;lt; GovHydroPID2.velmin).  Unit = PU / s.  Typical value = 0. Default: 0.0 */
		CIMPP::Float velmax;

		/** \brief Maximum gate closing velocity (&lt;i&gt;Velmin&lt;/i&gt;) (&amp;gt; GovHydroPID2.velmax).  Unit = PU / s.  Typical value = 0. Default: 0.0 */
		CIMPP::Float velmin;

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

	BaseClass* GovHydroPID2_factory();
}
#endif
