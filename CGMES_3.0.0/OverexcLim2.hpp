#ifndef OverexcLim2_H
#define OverexcLim2_H
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

namespace CIMPP
{

	/** \brief Different from LimIEEEOEL, LimOEL2 has a fixed pickup threshold and reduces the excitation set-point by means of a non-windup integral regulator. <i>Irated</i> is the rated machine excitation current (calculated from nameplate conditions: <i>V</i><i><sub>nom</sub></i>, <i>P</i><i><sub>nom</sub></i>, <i>CosPhi</i><i><sub>nom</sub></i>). */
	class OverexcLim2 : public OverexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		OverexcLim2();
		~OverexcLim2() override;

		/** \brief Limit value of rated field current (&lt;i&gt;I&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FDLIM&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,05. Default: nullptr */
		CIMPP::PU ifdlim;

		/** \brief Gain Over excitation limiter (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;OI&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU koi;

		/** \brief Maximum error signal (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;OIMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; OverexcLim2.voimin).  Typical value = 0. Default: nullptr */
		CIMPP::PU voimax;

		/** \brief Minimum error signal (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;OIMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; OverexcLim2.voimax).  Typical value = -9999. Default: nullptr */
		CIMPP::PU voimin;

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

	BaseClass* OverexcLim2_factory();
}
#endif
