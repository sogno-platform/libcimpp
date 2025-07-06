#ifndef ExcANS_H
#define ExcANS_H
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
#include "Integer.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Italian excitation system. It represents static field voltage or excitation current feedback excitation system. */
	class ExcANS : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcANS();
		~ExcANS() override;

		/** \brief Governor control flag (&lt;i&gt;BLINT&lt;/i&gt;).  0 = lead-lag regulator 1 = proportional integral regulator. Typical value = 0. Default: 0 */
		CIMPP::Integer blint;

		/** \brief Minimum exciter current (&lt;i&gt;I&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FMN&lt;/sub&gt;&lt;/i&gt;).  Typical value = -5,2. Default: nullptr */
		CIMPP::PU ifmn;

		/** \brief Maximum exciter current (&lt;i&gt;I&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FMX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 6,5. Default: nullptr */
		CIMPP::PU ifmx;

		/** \brief Exciter gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 20. Default: 0.0 */
		CIMPP::Float k2;

		/** \brief AVR gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1000. Default: 0.0 */
		CIMPP::Float k3;

		/** \brief Ceiling factor (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;CE&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: 0.0 */
		CIMPP::Float kce;

		/** \brief Feedback enabling (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RVECC&lt;/sub&gt;&lt;/i&gt;).  0 = open loop control 1 = closed loop control. Typical value = 1. Default: 0 */
		CIMPP::Integer krvecc;

		/** \brief Rate feedback signal flag (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VFIF&lt;/sub&gt;&lt;/i&gt;).  0 = output voltage of the exciter 1 = exciter field current. Typical value = 0. Default: 0 */
		CIMPP::Integer kvfif;

		/** \brief Time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 20. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,6. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Exciter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;B&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,04. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Minimum AVR output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMN&lt;/sub&gt;&lt;/i&gt;).  Typical value = -5,2. Default: nullptr */
		CIMPP::PU vrmn;

		/** \brief Maximum AVR output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 6,5. Default: nullptr */
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

	BaseClass* ExcANS_factory();
}
#endif
