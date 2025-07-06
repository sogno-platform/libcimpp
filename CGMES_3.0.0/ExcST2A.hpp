#ifndef ExcST2A_H
#define ExcST2A_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE ST2A static excitation system with another lead-lag block added to match the model defined by WECC. */
	class ExcST2A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST2A();
		~ExcST2A() override;

		/** \brief Maximum field voltage (&lt;i&gt;Efdmax&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 99. Default: nullptr */
		CIMPP::PU efdmax;

		/** \brief Voltage regulator gain (&lt;i&gt;Ka&lt;/i&gt;) (&amp;gt; 0).  Typical value = 120. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (&lt;i&gt;Kc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,82. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Exciter constant related to self-excited field (&lt;i&gt;Ke&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gains (&lt;i&gt;kf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Potential circuit gain coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;i&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 8. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Potential circuit gain coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;p&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 4,88. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,15. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,7. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief UEL input (&lt;i&gt;UELin&lt;/i&gt;). true = HV gate false = add to error signal. Typical value = false. Default: false */
		CIMPP::Boolean uelin;

		/** \brief Maximum voltage regulator outputs (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator outputs (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -1. Default: nullptr */
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

	BaseClass* ExcST2A_factory();
}
#endif
