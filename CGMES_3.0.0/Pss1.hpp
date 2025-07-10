#ifndef Pss1_H
#define Pss1_H
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

	/** \brief Italian PSS with three inputs (speed, frequency, power). */
	class Pss1 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss1();
		~Pss1() override;

		/** \brief Frequency power input gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;F&lt;/sub&gt;&lt;/i&gt;).  Typical value = 5. Default: 0.0 */
		CIMPP::Float kf;

		/** \brief Shaft speed power input gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;omega&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float komega;

		/** \brief Electric power input gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PE&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float kpe;

		/** \brief PSS gain (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 1. Default: 0.0 */
		CIMPP::Float ks;

		/** \brief Minimum power PSS enabling (&lt;i&gt;Pmin&lt;/i&gt;).  Typical value = 0,25. Default: nullptr */
		CIMPP::PU pmin;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;10&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t10;

		/** \brief Washout (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;5&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3,5. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;6&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;7&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). If = 0, both blocks are bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t7;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;8&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t8;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;9&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  If = 0, both blocks are bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t9;

		/** \brief Electric power filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PE&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tpe;

		/** \brief &lt;font color=`#0f0f0f`&gt;Signal selector (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ADAT&lt;/sub&gt;&lt;/i&gt;).&lt;/font&gt; &lt;font color=`#0f0f0f`&gt;true = closed (generator power is greater than &lt;i&gt;Pmin&lt;/i&gt;)&lt;/font&gt; &lt;font color=`#0f0f0f`&gt;false = open (&lt;i&gt;Pe&lt;/i&gt; is smaller than &lt;i&gt;Pmin&lt;/i&gt;).&lt;/font&gt; &lt;font color=`#0f0f0f`&gt;Typical value = true.&lt;/font&gt; Default: false */
		CIMPP::Boolean vadat;

		/** \brief Stabilizer output maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;SMN&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,06. Default: nullptr */
		CIMPP::PU vsmn;

		/** \brief Stabilizer output minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;SMX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,06. Default: nullptr */
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

	BaseClass* Pss1_factory();
}
#endif
