#ifndef ExcDC2A_H
#define ExcDC2A_H
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
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE DC2A direct current commutator exciter with speed input, one more leg block in feedback loop and without underexcitation limiters (UEL) inputs.  DC type 2 excitation system model with added speed multiplier, added lead-lag, and voltage-dependent limits. */
	class ExcDC2A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcDC2A();
		~ExcDC2A() override;

		/** \brief Exciter voltage at which exciter saturation is defined (&lt;i&gt;Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 3,05. Default: nullptr */
		CIMPP::PU efd1;

		/** \brief Exciter voltage at which exciter saturation is defined (&lt;i&gt;Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 2,29. Default: nullptr */
		CIMPP::PU efd2;

		/** \brief (&lt;i&gt;exclim&lt;/i&gt;).  IEEE standard is ambiguous about lower limit on exciter output. true = a lower limit of zero is applied to integrator output false = a lower limit of zero is not applied to integrator output. Typical value = true. Default: false */
		CIMPP::Boolean exclim;

		/** \brief Voltage regulator gain (&lt;i&gt;Ka&lt;/i&gt;) (&amp;gt; 0).  Typical value = 300. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Exciter constant related to self-excited field (&lt;i&gt;Ke&lt;/i&gt;).  If &lt;i&gt;Ke&lt;/i&gt; is entered as zero, the model calculates an effective value of &lt;i&gt;Ke&lt;/i&gt; such that the initial condition value of &lt;i&gt;Vr&lt;/i&gt; is zero. The zero value of &lt;i&gt;Ke&lt;/i&gt; is not changed.  If &lt;i&gt;Ke&lt;/i&gt; is entered as non-zero, its value is used directly, without change.  Typical value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gain (&lt;i&gt;Kf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ks;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;Se[Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,279. Default: 0.0 */
		CIMPP::Float seefd1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;Se[Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,117. Default: 0.0 */
		CIMPP::Float seefd2;

		/** \brief Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,01. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,33. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,675. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Excitation control system stabilizer time constant (&lt;i&gt;Tf1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tf1;

		/** \brief Maximum voltage regulator output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; ExcDC2A.vrmin).  Typical value = 4,95. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0 and &amp;lt; ExcDC2A.vrmax).  Typical value = -4,9. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief (&lt;i&gt;Vtlim&lt;/i&gt;). true = limiter at the block (&lt;i&gt;Ka / [1 + sTa]&lt;/i&gt;) is dependent on &lt;i&gt;Vt &lt;/i&gt; false = limiter at the block is not dependent on &lt;i&gt;Vt&lt;/i&gt;. Typical value = true. Default: false */
		CIMPP::Boolean vtlim;

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

	BaseClass* ExcDC2A_factory();
}
#endif
