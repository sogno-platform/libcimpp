#ifndef ExcSCRX_H
#define ExcSCRX_H
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

	/** \brief Simple excitation system with generic characteristics typical of many excitation systems; intended for use where negative field current could be a problem. */
	class ExcSCRX : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcSCRX();
		~ExcSCRX() override;

		/** \brief Power source switch (&lt;i&gt;Cswitch&lt;/i&gt;). true = fixed voltage of 1.0 PU false = generator terminal voltage. Default: false */
		CIMPP::Boolean cswitch;

		/** \brief Maximum field voltage output (&lt;i&gt;Emax&lt;/i&gt;) (&amp;gt; ExcSCRX.emin).  Typical value = 5. Default: nullptr */
		CIMPP::PU emax;

		/** \brief Minimum field voltage output (&lt;i&gt;Emin&lt;/i&gt;) (&amp;lt; ExcSCRX.emax).  Typical value = 0. Default: nullptr */
		CIMPP::PU emin;

		/** \brief Gain (&lt;i&gt;K&lt;/i&gt;) (&amp;gt; 0).  Typical value = 200. Default: nullptr */
		CIMPP::PU k;

		/** \brief Ratio of field discharge resistance to field winding resistance ([&lt;i&gt;rc / rfd]&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float rcrfd;

		/** \brief Gain reduction ratio of lag-lead element ([&lt;i&gt;Ta&lt;/i&gt; / &lt;i&gt;Tb&lt;/i&gt;]). The parameter &lt;i&gt;Ta&lt;/i&gt; is not defined explicitly.  Typical value = 0.1. Default: 0.0 */
		CIMPP::Float tatb;

		/** \brief Denominator time constant of lag-lead block (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Time constant of gain block (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds te;

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

	BaseClass* ExcSCRX_factory();
}
#endif
