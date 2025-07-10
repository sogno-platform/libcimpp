#ifndef ExcDC3A1_H
#define ExcDC3A1_H
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

	/** \brief Modified old IEEE type 3 excitation system. */
	class ExcDC3A1 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcDC3A1();
		~ExcDC3A1() override;

		/** \brief (&lt;i&gt;exclim&lt;/i&gt;). true = lower limit of zero is applied to integrator output false = lower limit of zero not applied to integrator output. Typical value = true. Default: false */
		CIMPP::Boolean exclim;

		/** \brief Voltage regulator gain (&lt;i&gt;Ka&lt;/i&gt;) (&amp;gt; 0).  Typical value = 300. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Exciter constant related to self-excited field (&lt;i&gt;Ke&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gain (&lt;i&gt;Kf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Potential circuit gain coefficient (&lt;i&gt;Ki&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 4,83. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Potential circuit gain coefficient (&lt;i&gt;Kp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 4,37. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,01. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Exciter time constant, integration rate associated with exciter control (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,83. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,675. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Available exciter voltage limiter (&lt;i&gt;Vb1max&lt;/i&gt;) (&amp;gt; 0).  Typical value = 11,63. Default: nullptr */
		CIMPP::PU vb1max;

		/** \brief Vb limiter indicator. true = exciter &lt;i&gt;Vbmax&lt;/i&gt; limiter is active false = &lt;i&gt;Vb1max&lt;/i&gt; is active.  Typical value = true. Default: false */
		CIMPP::Boolean vblim;

		/** \brief Available exciter voltage limiter (&lt;i&gt;Vbmax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 11,63. Default: nullptr */
		CIMPP::PU vbmax;

		/** \brief Maximum voltage regulator output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; ExcDC3A1.vrmin).  Typical value = 5. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0 and &amp;lt; ExcDC3A1.vrmax).  Typical value = 0. Default: nullptr */
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

	BaseClass* ExcDC3A1_factory();
}
#endif
