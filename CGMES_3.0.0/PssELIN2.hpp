#ifndef PssELIN2_H
#define PssELIN2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Power system stabilizer typically associated with ExcELIN2 (though PssIEEE2B or Pss2B can also be used). */
	class PssELIN2 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssELIN2();
		~PssELIN2() override;

		/** \brief Coefficient (&lt;i&gt;a_PSS&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU apss;

		/** \brief Gain (&lt;i&gt;Ks1&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ks1;

		/** \brief Gain (&lt;i&gt;Ks2&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU ks2;

		/** \brief Coefficient (&lt;i&gt;p_PSS&lt;/i&gt;) (&amp;gt;= 0 and &amp;lt;= 4).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU ppss;

		/** \brief PSS limiter (&lt;i&gt;psslim&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU psslim;

		/** \brief Time constant (&lt;i&gt;Ts1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ts1;

		/** \brief Time constant (&lt;i&gt;Ts2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds ts2;

		/** \brief Time constant (&lt;i&gt;Ts3&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds ts3;

		/** \brief Time constant (&lt;i&gt;Ts4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds ts4;

		/** \brief Time constant (&lt;i&gt;Ts5&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ts5;

		/** \brief Time constant (&lt;i&gt;Ts6&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds ts6;

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

	BaseClass* PssELIN2_factory();
}
#endif
