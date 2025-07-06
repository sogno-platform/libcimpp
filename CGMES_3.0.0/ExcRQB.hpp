#ifndef ExcRQB_H
#define ExcRQB_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Excitation system type RQB (four-loop regulator, r?gulateur quatre boucles, developed in France) primarily used in nuclear or thermal generating units. This excitation system shall be always used together with power system stabilizer type PssRQB. */
	class ExcRQB : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcRQB();
		~ExcRQB() override;

		/** \brief Voltage reference input gain (&lt;i&gt;Ki0&lt;/i&gt;).  Typical value = 12,7. Default: 0.0 */
		CIMPP::Float ki0;

		/** \brief Voltage input gain (&lt;i&gt;Ki1&lt;/i&gt;).  Typical value = -16,8. Default: 0.0 */
		CIMPP::Float ki1;

		/** \brief OEL input gain (&lt;i&gt;KLIR&lt;/i&gt;).  Typical value = 12,13. Default: 0.0 */
		CIMPP::Float klir;

		/** \brief Limiter gain (&lt;i&gt;KLUS&lt;/i&gt;).  Typical value = 50. Default: 0.0 */
		CIMPP::Float klus;

		/** \brief Integrator limiter (&lt;i&gt;LSAT&lt;/i&gt;).  Typical value = 5,73. Default: nullptr */
		CIMPP::PU lsat;

		/** \brief Setpoint (&lt;i&gt;LUS&lt;/i&gt;).  Typical value = 0,12. Default: nullptr */
		CIMPP::PU lus;

		/** \brief Voltage input time constant (&lt;i&gt;MESU&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds mesu;

		/** \brief Input time constant (&lt;i&gt;T4M&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds t4m;

		/** \brief Lead lag time constant (&lt;i&gt;TC&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Lead lag time constant (&lt;i&gt;TE&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,22. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Exciter time constant (&lt;i&gt;TF&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,01. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Maximum voltage reference limit (&lt;i&gt;UCMAX&lt;/i&gt;) (&amp;gt; ExcRQB.ucmin).  Typical value = 1,1. Default: nullptr */
		CIMPP::PU ucmax;

		/** \brief Minimum voltage reference limit (&lt;i&gt;UCMIN&lt;/i&gt;) (&amp;lt; ExcRQB.ucmax).  Typical value = 0,9. Default: nullptr */
		CIMPP::PU ucmin;

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

	BaseClass* ExcRQB_factory();
}
#endif
