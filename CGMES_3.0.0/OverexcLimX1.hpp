#ifndef OverexcLimX1_H
#define OverexcLimX1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "OverexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Field voltage over excitation limiter. */
	class OverexcLimX1 : public OverexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		OverexcLimX1();
		~OverexcLimX1() override;

		/** \brief Low voltage point on the inverse time characteristic (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,1. Default: nullptr */
		CIMPP::PU efd1;

		/** \brief Mid voltage point on the inverse time characteristic (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,2. Default: nullptr */
		CIMPP::PU efd2;

		/** \brief High voltage point on the inverse time characteristic (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,5. Default: nullptr */
		CIMPP::PU efd3;

		/** \brief Desired field voltage (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DES&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,9. Default: nullptr */
		CIMPP::PU efddes;

		/** \brief Rated field voltage (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RATED&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,05. Default: nullptr */
		CIMPP::PU efdrated;

		/** \brief Gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;MX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,01. Default: nullptr */
		CIMPP::PU kmx;

		/** \brief Time to trip the exciter at the low voltage point on the inverse time characteristic (&lt;i&gt;TIME&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 120. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Time to trip the exciter at the mid voltage point on the inverse time characteristic (&lt;i&gt;TIME&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 40. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Time to trip the exciter at the high voltage point on the inverse time characteristic (&lt;i&gt;TIME&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 15. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Low voltage limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;LOW&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0). Default: nullptr */
		CIMPP::PU vlow;

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

	BaseClass* OverexcLimX1_factory();
}
#endif
