#ifndef ExcIEEEST5B_H
#define ExcIEEEST5B_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE 421.5-2005 type ST5B model. The type ST5B excitation system is a variation of the type ST1A model, with alternative overexcitation and underexcitation inputs and additional limits. The block diagram in the IEEE 421.5 standard has input signal <i>Vc </i>and does not indicate the summation point with <i>Vref</i>. The implementation of the ExcIEEEST5B shall consider summation point with <i>Vref</i>. Reference: IEEE 421.5-2005, 7.5. */
	class ExcIEEEST5B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST5B();
		~ExcIEEEST5B() override;

		/** \brief Rectifier regulation factor (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;C&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,004. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Regulator gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;R&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 200. Default: nullptr */
		CIMPP::PU kr;

		/** \brief Firing circuit time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,004. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Regulator lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;B1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 6. Default: nullptr */
		CIMPP::Seconds tb1;

		/** \brief Regulator lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;B2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,01. Default: nullptr */
		CIMPP::Seconds tb2;

		/** \brief Regulator lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;C1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,8. Default: nullptr */
		CIMPP::Seconds tc1;

		/** \brief Regulator lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;C2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,08. Default: nullptr */
		CIMPP::Seconds tc2;

		/** \brief OEL lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;OB1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds tob1;

		/** \brief OEL lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;OB2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,08. Default: nullptr */
		CIMPP::Seconds tob2;

		/** \brief OEL lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;OC1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds toc1;

		/** \brief OEL lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;OC2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,08. Default: nullptr */
		CIMPP::Seconds toc2;

		/** \brief UEL lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UB1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::Seconds tub1;

		/** \brief UEL lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UB2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tub2;

		/** \brief UEL lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UC1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds tuc1;

		/** \brief UEL lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UC2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tuc2;

		/** \brief Maximum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 5. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; 0).  Typical value = -4. Default: nullptr */
		CIMPP::PU vrmin;

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

	BaseClass* ExcIEEEST5B_factory();
}
#endif
