#ifndef ExcST6B_H
#define ExcST6B_H
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
#include "Boolean.hpp"
#include "ExcST6BOELselectorKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE ST6B static excitation system with PID controller and optional inner feedback loop. */
	class ExcST6B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST6B();
		~ExcST6B() override;

		/** \brief Exciter output current limit reference (&lt;i&gt;Ilr&lt;/i&gt;) (&amp;gt; 0).  Typical value = 4,164. Default: nullptr */
		CIMPP::PU ilr;

		/** \brief Selector (&lt;i&gt;K1&lt;/i&gt;). true = feedback is from &lt;i&gt;Ifd&lt;/i&gt; false = feedback is not from &lt;i&gt;Ifd&lt;/i&gt;. Typical value = true. Default: false */
		CIMPP::Boolean k1;

		/** \brief Exciter output current limit adjustment (&lt;i&gt;Kcl&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,0577. Default: nullptr */
		CIMPP::PU kcl;

		/** \brief Pre-control gain constant of the inner loop field regulator (&lt;i&gt;Kff&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kff;

		/** \brief Feedback gain constant of the inner loop field regulator (&lt;i&gt;Kg&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU kg;

		/** \brief Voltage regulator integral gain (&lt;i&gt;Kia&lt;/i&gt;) (&amp;gt; 0).  Typical value = 45,094. Default: nullptr */
		CIMPP::PU kia;

		/** \brief Exciter output current limit adjustment (&lt;i&gt;Kcl&lt;/i&gt;) (&amp;gt; 0).  Typical value = 17,33. Default: nullptr */
		CIMPP::PU klr;

		/** \brief Forward gain constant of the inner loop field regulator (&lt;i&gt;Km&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU km;

		/** \brief Voltage regulator proportional gain (&lt;i&gt;Kpa&lt;/i&gt;) (&amp;gt; 0).  Typical value = 18,038. Default: nullptr */
		CIMPP::PU kpa;

		/** \brief Voltage regulator derivative gain (&lt;i&gt;Kvd&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kvd;

		/** \brief OEL input selector (&lt;i&gt;OELin&lt;/i&gt;).  Typical value = noOELinput (corresponds to &lt;i&gt;OELin&lt;/i&gt; = 0 on diagram). Default: 0 */
		CIMPP::ExcST6BOELselectorKind oelin;

		/** \brief Feedback time constant of inner loop field voltage regulator (&lt;i&gt;Tg&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Rectifier firing time constant (&lt;i&gt;Ts&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ts;

		/** \brief Voltage regulator derivative gain (&lt;i&gt;Tvd&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tvd;

		/** \brief Maximum voltage regulator output (&lt;i&gt;Vamax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 4,81. Default: nullptr */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;Vamin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -3,85. Default: nullptr */
		CIMPP::PU vamin;

		/** \brief Selector (&lt;i&gt;Vilim&lt;/i&gt;). true = &lt;i&gt;Vimin&lt;/i&gt;-&lt;i&gt;Vimax&lt;/i&gt; limiter is active false = &lt;i&gt;Vimin&lt;/i&gt;-&lt;i&gt;Vimax&lt;/i&gt; limiter is not active. Typical value = true. Default: false */
		CIMPP::Boolean vilim;

		/** \brief Maximum voltage regulator input limit (&lt;i&gt;Vimax&lt;/i&gt;) (&amp;gt; ExcST6B.vimin).  Typical value = 10. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (&lt;i&gt;Vimin&lt;/i&gt;) (&amp;lt; ExcST6B.vimax).  Typical value = -10. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief Selector (&lt;i&gt;vmult&lt;/i&gt;). true = multiply regulator output by terminal voltage false = do not multiply regulator output by terminal voltage.  Typical value = true. Default: false */
		CIMPP::Boolean vmult;

		/** \brief Maximum voltage regulator output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 4,81. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -3,85. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief Excitation source reactance (&lt;i&gt;Xc&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU xc;

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

	BaseClass* ExcST6B_factory();
}
#endif
