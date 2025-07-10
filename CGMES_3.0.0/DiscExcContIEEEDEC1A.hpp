#ifndef DiscExcContIEEEDEC1A_H
#define DiscExcContIEEEDEC1A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DiscontinuousExcitationControlDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE type DEC1A discontinuous excitation control model that boosts generator excitation to a level higher than that demanded by the voltage regulator and stabilizer immediately following a system fault. Reference: IEEE 421.5-2005, 12.2. */
	class DiscExcContIEEEDEC1A : public DiscontinuousExcitationControlDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		DiscExcContIEEEDEC1A();
		~DiscExcContIEEEDEC1A() override;

		/** \brief Speed change reference (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;SC&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,0015. Default: nullptr */
		CIMPP::PU esc;

		/** \brief Discontinuous controller gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;AN&lt;/sub&gt;&lt;/i&gt;).  Typical value = 400. Default: nullptr */
		CIMPP::PU kan;

		/** \brief Terminal voltage limiter gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ETL&lt;/sub&gt;&lt;/i&gt;).  Typical value = 47. Default: nullptr */
		CIMPP::PU ketl;

		/** \brief Discontinuous controller time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;AN&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,08. Default: nullptr */
		CIMPP::Seconds tan;

		/** \brief Time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;D&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,03. Default: nullptr */
		CIMPP::Seconds td;

		/** \brief Time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt;1&lt;/sub&gt;) (&amp;gt;= 0).  Typical value = 0,025. Default: nullptr */
		CIMPP::Seconds tl1;

		/** \brief Time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt;2&lt;/sub&gt;) (&amp;gt;= 0).  Typical value = 1,25. Default: nullptr */
		CIMPP::Seconds tl2;

		/** \brief DEC washout time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;W&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt;5&lt;/sub&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds tw5;

		/** \brief Regulator voltage reference (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;AL&lt;/sub&gt;&lt;/i&gt;).  Typical value = 5,5. Default: nullptr */
		CIMPP::PU val;

		/** \brief Limiter for Van (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ANMAX&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU vanmax;

		/** \brief Limiter (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;OMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; DiscExcContIEEEDEC1A.vomin).  Typical value = 0,3. Default: nullptr */
		CIMPP::PU vomax;

		/** \brief Limiter (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;OMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; DiscExcContIEEEDEC1A.vomax).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU vomin;

		/** \brief Limiter (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;SMAX&lt;/sub&gt;&lt;/i&gt;)(&amp;gt; DiscExcContIEEEDEC1A.vsmin).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU vsmax;

		/** \brief Limiter (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;SMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; DiscExcContIEEEDEC1A.vsmax).  Typical value = -0,066. Default: nullptr */
		CIMPP::PU vsmin;

		/** \brief Terminal voltage level reference (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;TC&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,95. Default: nullptr */
		CIMPP::PU vtc;

		/** \brief Voltage reference (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;TLMT&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,1. Default: nullptr */
		CIMPP::PU vtlmt;

		/** \brief Voltage limits (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;TM&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,13. Default: nullptr */
		CIMPP::PU vtm;

		/** \brief Voltage limits (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;TN&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,12. Default: nullptr */
		CIMPP::PU vtn;

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

	BaseClass* DiscExcContIEEEDEC1A_factory();
}
#endif
