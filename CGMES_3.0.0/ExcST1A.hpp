#ifndef ExcST1A_H
#define ExcST1A_H
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

	/** \brief Modification of an old IEEE ST1A static excitation system without overexcitation limiter (OEL) and underexcitation limiter (UEL). */
	class ExcST1A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST1A();
		~ExcST1A() override;

		/** \brief Exciter output current limit reference (&lt;i&gt;Ilr&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ilr;

		/** \brief Voltage regulator gain (&lt;i&gt;Ka&lt;/i&gt;) (&amp;gt; 0).  Typical value = 190. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (&lt;i&gt;Kc&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,05. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Excitation control system stabilizer gains (&lt;i&gt;Kf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Exciter output current limiter gain (&lt;i&gt;Klr&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU klr;

		/** \brief Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tb1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb1;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tc1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc1;

		/** \brief Excitation control system stabilizer time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Maximum voltage regulator output (&lt;i&gt;Vamax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 999. Default: nullptr */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;Vamin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -999. Default: nullptr */
		CIMPP::PU vamin;

		/** \brief Maximum voltage regulator input limit (&lt;i&gt;Vimax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 999. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (&lt;i&gt;Vimin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -999. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief Maximum voltage regulator outputs (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; 0) .  Typical value = 7,8. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator outputs (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -6,7. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief Excitation xfmr effective reactance (&lt;i&gt;Xe&lt;/i&gt;).  Typical value = 0,04. Default: nullptr */
		CIMPP::PU xe;

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

	BaseClass* ExcST1A_factory();
}
#endif
