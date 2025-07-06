#ifndef GovSteamSGO_H
#define GovSteamSGO_H
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

	/** \brief Simplified steam turbine governor. */
	class GovSteamSGO : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamSGO();
		~GovSteamSGO() override;

		/** \brief One / PU regulation (&lt;i&gt;K1&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k1;

		/** \brief Fraction (&lt;i&gt;K2&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k2;

		/** \brief Fraction (&lt;i&gt;K3&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k3;

		/** \brief Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Upper power limit (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovSteamSGO.pmin). Default: nullptr */
		CIMPP::PU pmax;

		/** \brief Lower power limit (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;gt;= 0 and &amp;lt; GovSteamSGO.pmax). Default: nullptr */
		CIMPP::Seconds pmin;

		/** \brief Controller lag (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Controller lead compensation (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Governor lag (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt; 0). Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Delay due to steam inlet volumes associated with steam chest and inlet piping (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Reheater delay including hot and cold leads (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Delay due to IP-LP turbine, crossover pipes and LP end hoods (&lt;i&gt;T6&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t6;

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

	BaseClass* GovSteamSGO_factory();
}
#endif
