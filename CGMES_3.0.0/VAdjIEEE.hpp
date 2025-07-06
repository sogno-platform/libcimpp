#ifndef VAdjIEEE_H
#define VAdjIEEE_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "VoltageAdjusterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE voltage adjuster which is used to represent the voltage adjuster in either a power factor or VAr control system. Reference: IEEE 421.5-2005, 11.1. */
	class VAdjIEEE : public VoltageAdjusterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		VAdjIEEE();
		~VAdjIEEE() override;

		/** \brief Rate at which output of adjuster changes (&lt;i&gt;ADJ_SLEW&lt;/i&gt;).  Unit = s / PU.  Typical value = 300. Default: 0.0 */
		CIMPP::Float adjslew;

		/** \brief Time that adjuster pulses are off (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;AOFF&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds taoff;

		/** \brief Time that adjuster pulses are on (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;AON&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds taon;

		/** \brief Set high to provide a continuous raise or lower (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ADJF&lt;/sub&gt;&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float vadjf;

		/** \brief Maximum output of the adjuster (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ADJMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; VAdjIEEE.vadjmin).  Typical value = 1,1. Default: nullptr */
		CIMPP::PU vadjmax;

		/** \brief Minimum output of the adjuster (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ADJMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; VAdjIEEE.vadjmax).  Typical value = 0,9. Default: nullptr */
		CIMPP::PU vadjmin;

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

	BaseClass* VAdjIEEE_factory();
}
#endif
