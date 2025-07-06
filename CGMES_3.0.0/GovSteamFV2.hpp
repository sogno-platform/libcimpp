#ifndef GovSteamFV2_H
#define GovSteamFV2_H
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

	/** \brief Steam turbine governor with reheat time constants and modelling of the effects of fast valve closing to reduce mechanical power. */
	class GovSteamFV2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamFV2();
		~GovSteamFV2() override;

		/** \brief (&lt;i&gt;Dt&lt;/i&gt;). Default: nullptr */
		CIMPP::PU dt;

		/** \brief Fraction of the turbine power developed by turbine sections not involved in fast valving (&lt;i&gt;K&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k;

		/** \brief Alternate base used instead of machine base in equipment model if necessary (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief (&lt;i&gt;R&lt;/i&gt;). Default: nullptr */
		CIMPP::PU r;

		/** \brief Governor time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Reheater time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Time after initial time for valve to close (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Time after initial time for valve to begin opening (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Time after initial time for valve to become fully open (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Time constant with which power falls off after intercept valve closure (&lt;i&gt;Tt&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tt;

		/** \brief (&lt;i&gt;Vmax&lt;/i&gt;) (&amp;gt; GovSteamFV2.vmin). Default: nullptr */
		CIMPP::PU vmax;

		/** \brief (&lt;i&gt;Vmin&lt;/i&gt;) (&amp;lt; GovSteamFV2.vmax). Default: nullptr */
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

	BaseClass* GovSteamFV2_factory();
}
#endif
