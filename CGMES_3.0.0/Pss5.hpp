#ifndef Pss5_H
#define Pss5_H
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
#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Detailed Italian PSS. */
	class Pss5 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss5();
		~Pss5() override;

		/** \brief Selector for second washout enabling (&lt;i&gt;C&lt;/i&gt;&lt;i&gt;&lt;sub&gt;TW2&lt;/sub&gt;&lt;/i&gt;). true = second washout filter is bypassed false = second washout filter in use. Typical value = true. Default: false */
		CIMPP::Boolean ctw2;

		/** \brief Stabilizer output deadband (&lt;i&gt;DEADBAND&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU deadband;

		/** \brief Selector for frequency/shaft speed input (&lt;i&gt;isFreq&lt;/i&gt;). true = speed (same meaning as InputSignaKind.rotorSpeed) false = frequency (same meaning as InputSignalKind.busFrequency). Typical value = true (same meaning as InputSignalKind.rotorSpeed). Default: false */
		CIMPP::Boolean isfreq;

		/** \brief Frequency/shaft speed input gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;F&lt;/sub&gt;&lt;/i&gt;).  Typical value = 5. Default: 0.0 */
		CIMPP::Float kf;

		/** \brief Electric power input gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PE&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float kpe;

		/** \brief PSS gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PSS&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: 0.0 */
		CIMPP::Float kpss;

		/** \brief Minimum power PSS enabling (&lt;i&gt;Pmin&lt;/i&gt;).  Typical value = 0,25. Default: nullptr */
		CIMPP::PU pmin;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tl1;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  If = 0, both blocks are bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tl2;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tl3;

		/** \brief Lead/lag time constant (T&lt;sub&gt;L4&lt;/sub&gt;) (&amp;gt;= 0).  If = 0, both blocks are bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tl4;

		/** \brief Electric power filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PE&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tpe;

		/** \brief First washout (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;W1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3,5. Default: nullptr */
		CIMPP::Seconds tw1;

		/** \brief Second washout (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;W2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tw2;

		/** \brief &lt;font color=`#0f0f0f`&gt;Signal selector (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;adAtt&lt;/sub&gt;&lt;/i&gt;).&lt;/font&gt; &lt;font color=`#0f0f0f`&gt;true = closed (generator power is greater than &lt;i&gt;Pmin&lt;/i&gt;)&lt;/font&gt; &lt;font color=`#0f0f0f`&gt;false = open (&lt;i&gt;Pe&lt;/i&gt; is smaller than &lt;i&gt;Pmin&lt;/i&gt;).&lt;/font&gt; &lt;font color=`#0f0f0f`&gt;Typical value = true.&lt;/font&gt; Default: false */
		CIMPP::Boolean vadat;

		/** \brief Stabilizer output maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;SMN&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,1. Default: nullptr */
		CIMPP::PU vsmn;

		/** \brief Stabilizer output minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;SMX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU vsmx;

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

	BaseClass* Pss5_factory();
}
#endif
