#ifndef PssSK_H
#define PssSK_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Slovakian PSS with three inputs. */
	class PssSK : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssSK();
		~PssSK() override;

		/** \brief Gain &lt;i&gt;P&lt;/i&gt; (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,3. Default: nullptr */
		CIMPP::PU k1;

		/** \brief Gain &lt;i&gt;f&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;&lt;i&gt; &lt;/i&gt;(&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,15. Default: nullptr */
		CIMPP::PU k2;

		/** \brief Gain &lt;i&gt;I&lt;/i&gt;&lt;i&gt;&lt;sub&gt;f&lt;/sub&gt;&lt;/i&gt;&lt;i&gt; &lt;/i&gt;(&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;).  Typical value = 10. Default: nullptr */
		CIMPP::PU k3;

		/** \brief Denominator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0,005).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0,005).  Typical value = 0,35. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Denominator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0,005).  Typical value = 0,22. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0,005).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Denominator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;5&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0,005).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;6&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0,005).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Stabilizer output maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;SMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; PssSK.vsmin).  Typical value = 0,4. Default: nullptr */
		CIMPP::PU vsmax;

		/** \brief Stabilizer output minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;SMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; PssSK.vsmax).  Typical value = -0.4. Default: nullptr */
		CIMPP::PU vsmin;

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

	BaseClass* PssSK_factory();
}
#endif
