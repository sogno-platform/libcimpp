#ifndef UnderexcLim2Simplified_H
#define UnderexcLim2Simplified_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "UnderexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"

namespace CIMPP
{

	/** \brief Simplified type UEL2 underexcitation limiter.  This model can be derived from UnderexcLimIEEE2.  The limit characteristic (look -up table) is a single straight-line, the same as UnderexcLimIEEE2 (see Figure 10.4 (p 32), IEEE 421.5-2005 Section 10.2). */
	class UnderexcLim2Simplified : public UnderexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		UnderexcLim2Simplified();
		~UnderexcLim2Simplified() override;

		/** \brief Gain Under excitation limiter (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UI&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU kui;

		/** \brief Segment P initial point (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;0&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU p0;

		/** \brief Segment P end point (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU p1;

		/** \brief Segment Q initial point (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;0&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,31. Default: nullptr */
		CIMPP::PU q0;

		/** \brief Segment Q end point (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,1. Default: nullptr */
		CIMPP::PU q1;

		/** \brief Maximum error signal (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UIMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; UnderexcLim2Simplified.vuimin).  Typical value = 1. Default: nullptr */
		CIMPP::PU vuimax;

		/** \brief Minimum error signal (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UIMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; UnderexcLim2Simplified.vuimax).  Typical value = 0. Default: nullptr */
		CIMPP::PU vuimin;

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

	BaseClass* UnderexcLim2Simplified_factory();
}
#endif
