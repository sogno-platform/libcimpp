#ifndef ExcIEEEST4B_H
#define ExcIEEEST4B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE 421.5-2005 type ST4B model. This model is a variation of the type ST3A model, with a proportional plus integral (PI) regulator block replacing the lag-lead regulator characteristic that is in the ST3A model. Both potential and compound source rectifier excitation systems are modelled.  The PI regulator blocks have non-windup limits that are represented. The voltage regulator of this model is typically implemented digitally. Reference: IEEE 421.5-2005, 7.4. */
	class ExcIEEEST4B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST4B();
		~ExcIEEEST4B() override;

		/** \brief Rectifier loading factor proportional to commutating reactance (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;C&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,113. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Feedback gain constant of the inner loop field regulator (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;G&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU kg;

		/** \brief Potential circuit gain coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Voltage regulator integral gain output (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IM&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kim;

		/** \brief Voltage regulator integral gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IR&lt;/sub&gt;&lt;/i&gt;).  Typical value = 10,75. Default: nullptr */
		CIMPP::PU kir;

		/** \brief Potential circuit gain coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;P&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 9,3. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Voltage regulator proportional gain output (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PM&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kpm;

		/** \brief Voltage regulator proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PR&lt;/sub&gt;&lt;/i&gt;).  Typical value = 10,75. Default: nullptr */
		CIMPP::PU kpr;

		/** \brief Voltage regulator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;A&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Potential circuit phase angle (&lt;i&gt;thetap&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::AngleDegrees thetap;

		/** \brief Maximum excitation voltage (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;BMax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 11,63. Default: nullptr */
		CIMPP::PU vbmax;

		/** \brief Maximum inner loop output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;MMax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; ExcIEEEST4B.vmmin).  Typical value = 99. Default: nullptr */
		CIMPP::PU vmmax;

		/** \brief Minimum inner loop output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;MMin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; ExcIEEEST4B.vmmax).  Typical value = -99. Default: nullptr */
		CIMPP::PU vmmin;

		/** \brief Maximum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; 0).  Typical value = -0,87. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief Reactance associated with potential source (&lt;i&gt;X&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,124. Default: nullptr */
		CIMPP::PU xl;

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

	BaseClass* ExcIEEEST4B_factory();
}
#endif
