#ifndef ExcAVR4_H
#define ExcAVR4_H
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

	/** \brief Italian excitation system. It represents a static exciter and electric voltage regulator. */
	class ExcAVR4 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAVR4();
		~ExcAVR4() override;

		/** \brief AVR output voltage dependency selector (&lt;i&gt;I&lt;/i&gt;&lt;i&gt;&lt;sub&gt;MUL&lt;/sub&gt;&lt;/i&gt;). true = selector is connected false = selector is not connected. Typical value = true. Default: false */
		CIMPP::Boolean imul;

		/** \brief AVR gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;A&lt;/sub&gt;&lt;/i&gt;).  Typical value = 300. Default: 0.0 */
		CIMPP::Float ka;

		/** \brief Exciter gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;)&lt;/i&gt;.  Typical value = 1. Default: 0.0 */
		CIMPP::Float ke;

		/** \brief Exciter internal reactance (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IF&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float kif;

		/** \brief AVR time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 4,8. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Exciter current feedback time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1IF&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 60. Default: nullptr */
		CIMPP::Seconds t1if;

		/** \brief AVR time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,5. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief AVR time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief AVR time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Exciter current feedback time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IF&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tif;

		/** \brief Minimum exciter output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FMN&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU vfmn;

		/** \brief Maximum exciter output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FMX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 5. Default: nullptr */
		CIMPP::PU vfmx;

		/** \brief Minimum AVR output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMN&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU vrmn;

		/** \brief Maximum AVR output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 5. Default: nullptr */
		CIMPP::PU vrmx;

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

	BaseClass* ExcAVR4_factory();
}
#endif
