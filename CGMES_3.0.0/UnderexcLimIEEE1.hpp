#ifndef UnderexcLimIEEE1_H
#define UnderexcLimIEEE1_H
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
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Type UEL1 model which has a circular limit boundary when plotted in terms of machine reactive power vs. real power output. Reference: IEEE UEL1 421.5-2005, 10.1. */
	class UnderexcLimIEEE1 : public UnderexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		UnderexcLimIEEE1();
		~UnderexcLimIEEE1() override;

		/** \brief UEL centre setting (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UC&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,38. Default: nullptr */
		CIMPP::PU kuc;

		/** \brief UEL excitation system stabilizer gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UF&lt;/sub&gt;&lt;/i&gt;).  Typical value = 3,3. Default: nullptr */
		CIMPP::PU kuf;

		/** \brief UEL integral gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UI&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kui;

		/** \brief UEL proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UL&lt;/sub&gt;&lt;/i&gt;).  Typical value = 100. Default: nullptr */
		CIMPP::PU kul;

		/** \brief UEL radius setting (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UR&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,95. Default: nullptr */
		CIMPP::PU kur;

		/** \brief UEL lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;U1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tu1;

		/** \brief UEL lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;U2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tu2;

		/** \brief UEL lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;U3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tu3;

		/** \brief UEL lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;U4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tu4;

		/** \brief UEL maximum limit for operating point phasor magnitude (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UCMAX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 5,8. Default: nullptr */
		CIMPP::PU vucmax;

		/** \brief UEL integrator output maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UIMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; UnderexcLimIEEE1.vuimin). Default: nullptr */
		CIMPP::PU vuimax;

		/** \brief UEL integrator output minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UIMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; UnderexcLimIEEE1.vuimax). Default: nullptr */
		CIMPP::PU vuimin;

		/** \brief UEL output maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ULMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; UnderexcLimIEEE1.vulmin).  Typical value = 18. Default: nullptr */
		CIMPP::PU vulmax;

		/** \brief UEL output minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ULMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; UnderexcLimIEEE1.vulmax).  Typical value = -18. Default: nullptr */
		CIMPP::PU vulmin;

		/** \brief UEL maximum limit for radius phasor magnitude (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;URMAX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 5,8. Default: nullptr */
		CIMPP::PU vurmax;

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

	BaseClass* UnderexcLimIEEE1_factory();
}
#endif
