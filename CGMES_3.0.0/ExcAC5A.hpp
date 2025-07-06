#ifndef ExcAC5A_H
#define ExcAC5A_H
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

	/** \brief Modified IEEE AC5A alternator-supplied rectifier excitation system with different minimum controller output. */
	class ExcAC5A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC5A();
		~ExcAC5A() override;

		/** \brief Coefficient to allow different usage of the model (&lt;i&gt;a&lt;/i&gt;).  Typical value = 1. Default: 0.0 */
		CIMPP::Float a;

		/** \brief Exciter voltage at which exciter saturation is defined (&lt;i&gt;Efd1&lt;/i&gt;) (&amp;gt; 0).  Typical value = 5,6. Default: nullptr */
		CIMPP::PU efd1;

		/** \brief Exciter voltage at which exciter saturation is defined (&lt;i&gt;Efd2&lt;/i&gt;) (&amp;gt; 0).  Typical value = 4,2. Default: nullptr */
		CIMPP::PU efd2;

		/** \brief Voltage regulator gain (&lt;i&gt;Ka&lt;/i&gt;) (&amp;gt; 0).  Typical value = 400. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Exciter constant related to self-excited field (&lt;i&gt;Ke&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gains (&lt;i&gt;Kf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,03. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ks;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;Se[Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,86. Default: 0.0 */
		CIMPP::Float seefd1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;Se[Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Float seefd2;

		/** \brief Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,8. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (&lt;i&gt;Tf1&lt;/i&gt;) (&amp;gt; 0).  Typical value  = 1. Default: nullptr */
		CIMPP::Seconds tf1;

		/** \brief Excitation control system stabilizer time constant (&lt;i&gt;Tf2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,8. Default: nullptr */
		CIMPP::Seconds tf2;

		/** \brief Excitation control system stabilizer time constant (&lt;i&gt;Tf3&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tf3;

		/** \brief Maximum voltage regulator output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 7,3. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0).  Typical value =-7,3. Default: nullptr */
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

	BaseClass* ExcAC5A_factory();
}
#endif
