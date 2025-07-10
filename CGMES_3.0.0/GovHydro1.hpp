#ifndef GovHydro1_H
#define GovHydro1_H
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

	/** \brief Basic hydro turbine governor. */
	class GovHydro1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro1();
		~GovHydro1() override;

		/** \brief Turbine gain (&lt;i&gt;At&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,2. Default: nullptr */
		CIMPP::PU at;

		/** \brief Turbine damping factor (&lt;i&gt;Dturb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU dturb;

		/** \brief Maximum gate opening (&lt;i&gt;Gmax&lt;/i&gt;) (&amp;gt; 0 and &amp;gt; GovHydro.gmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU gmax;

		/** \brief Minimum gate opening (&lt;i&gt;Gmin&lt;/i&gt;) (&amp;gt;= 0 and &amp;lt; GovHydro1.gmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU gmin;

		/** \brief Turbine nominal head (&lt;i&gt;hdam&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU hdam;

		/** \brief Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief No-load flow at nominal head (&lt;i&gt;qnl&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,08. Default: nullptr */
		CIMPP::PU qnl;

		/** \brief Permanent droop (&lt;i&gt;R&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,04. Default: nullptr */
		CIMPP::PU rperm;

		/** \brief Temporary droop (&lt;i&gt;r&lt;/i&gt;) (&amp;gt; GovHydro1.rperm).  Typical value = 0,3. Default: nullptr */
		CIMPP::PU rtemp;

		/** \brief Filter time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Gate servo time constant (&lt;i&gt;Tg&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Washout time constant (&lt;i&gt;Tr&lt;/i&gt;) (&amp;gt; 0).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds tr;

		/** \brief Water inertia time constant (&lt;i&gt;Tw&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tw;

		/** \brief Maximum gate velocity (&lt;i&gt;Vlem&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Float velm;

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

	BaseClass* GovHydro1_factory();
}
#endif
