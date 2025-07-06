#ifndef ExcAC3A_H
#define ExcAC3A_H
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
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE AC3A alternator-supplied rectifier excitation system with different field current limit. */
	class ExcAC3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC3A();
		~ExcAC3A() override;

		/** \brief Value of &lt;i&gt;Efd &lt;/i&gt;at which feedback gain changes (&lt;i&gt;Efdn&lt;/i&gt;) (&amp;gt; 0).  Typical value = 2,36. Default: nullptr */
		CIMPP::PU efdn;

		/** \brief Voltage regulator gain (&lt;i&gt;Ka&lt;/i&gt;) (&amp;gt; 0).  Typical value = 45,62. Default: nullptr */
		CIMPP::Seconds ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (&lt;i&gt;Kc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,104. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Demagnetizing factor, a function of exciter alternator reactances (&lt;i&gt;Kd&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,499. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Exciter constant related to self-excited field (&lt;i&gt;Ke&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gains (&lt;i&gt;Kf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,143. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Coefficient to allow different usage of the model (&lt;i&gt;Kf1&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kf1;

		/** \brief Coefficient to allow different usage of the model (&lt;i&gt;Kf2&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kf2;

		/** \brief Gain used in the minimum field voltage limiter loop (&lt;i&gt;Klv&lt;/i&gt;).  Typical value = 0,194. Default: nullptr */
		CIMPP::PU klv;

		/** \brief Excitation control system stabilizer gain (&lt;i&gt;Kn&lt;/i&gt;) (&amp;gt;= 0).  Typical value =0,05. Default: nullptr */
		CIMPP::PU kn;

		/** \brief Constant associated with regulator and alternator field power supply (&lt;i&gt;Kr&lt;/i&gt;) (&amp;gt; 0).  Typical value =3,77. Default: nullptr */
		CIMPP::PU kr;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ks;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;, back of commutating reactance (&lt;i&gt;Se[Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,143. Default: 0.0 */
		CIMPP::Float seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;, back of commutating reactance (&lt;i&gt;Se[Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Float seve2;

		/** \brief Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,013. Default: nullptr */
		CIMPP::PU ta;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,17. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Maximum voltage regulator output (&lt;i&gt;Vamax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;Vamin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -0,95. Default: nullptr */
		CIMPP::PU vamin;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (&lt;i&gt;Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 6.24. Default: nullptr */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (&lt;i&gt;Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 4,68. Default: nullptr */
		CIMPP::PU ve2;

		/** \brief Minimum exciter voltage output (&lt;i&gt;Vemin&lt;/i&gt;) (&amp;lt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU vemin;

		/** \brief Exciter field current limit reference (&lt;i&gt;Vfemax&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 16. Default: nullptr */
		CIMPP::PU vfemax;

		/** \brief Field voltage used in the minimum field voltage limiter loop (&lt;i&gt;Vlv&lt;/i&gt;).  Typical value = 0,79. Default: nullptr */
		CIMPP::PU vlv;

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

	BaseClass* ExcAC3A_factory();
}
#endif
