#ifndef PssRQB_H
#define PssRQB_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Power system stabilizer type RQB. This power system stabilizer is intended to be used together with excitation system type ExcRQB, which is primarily used in nuclear or thermal generating units. */
	class PssRQB : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssRQB();
		~PssRQB() override;

		/** \brief Lead lag gain (&lt;i&gt;KDPM&lt;/i&gt;). Typical value = 0,185. Default: 0.0 */
		CIMPP::Float kdpm;

		/** \brief Speed input gain (&lt;i&gt;Ki2&lt;/i&gt;). Typical value = 3,43. Default: 0.0 */
		CIMPP::Float ki2;

		/** \brief Electrical power input gain (&lt;i&gt;Ki3&lt;/i&gt;). Typical value = -11,45. Default: 0.0 */
		CIMPP::Float ki3;

		/** \brief Mechanical power input gain (&lt;i&gt;Ki4&lt;/i&gt;). Typical value = 11,86. Default: 0.0 */
		CIMPP::Float ki4;

		/** \brief Speed deadband (&lt;i&gt;SIBV&lt;/i&gt;). Typical value = 0,006. Default: nullptr */
		CIMPP::PU sibv;

		/** \brief Lead lag time constant (&lt;i&gt;T4F&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,045. Default: nullptr */
		CIMPP::Seconds t4f;

		/** \brief Input time constant (&lt;i&gt;T4M&lt;/i&gt;) (&amp;gt;= 0). Typical value = 5. Default: nullptr */
		CIMPP::Seconds t4m;

		/** \brief Speed time constant (&lt;i&gt;T4MOM&lt;/i&gt;) (&amp;gt;= 0). Typical value = 1,27. Default: nullptr */
		CIMPP::Seconds t4mom;

		/** \brief Speed delay (&lt;i&gt;TOMD&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds tomd;

		/** \brief Speed time constant (&lt;i&gt;TOMSL&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,04. Default: nullptr */
		CIMPP::Seconds tomsl;

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

	BaseClass* PssRQB_factory();
}
#endif
