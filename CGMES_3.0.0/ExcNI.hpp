#ifndef ExcNI_H
#define ExcNI_H
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

	/** \brief Bus or solid fed SCR (silicon-controlled rectifier) bridge excitation system model type NI (NVE). */
	class ExcNI : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcNI();
		~ExcNI() override;

		/** \brief Fed by selector (&lt;i&gt;BusFedSelector&lt;/i&gt;).  true = bus fed (switch is closed) false = solid fed (switch is open). Typical value = true. Default: false */
		CIMPP::Boolean busFedSelector;

		/** \brief Voltage regulator gain (&lt;i&gt;Ka&lt;/i&gt;) (&amp;gt; 0).  Typical value = 210. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Excitation control system stabilizer gain (&lt;i&gt;Kf&lt;/i&gt;) (&amp;gt; 0).  Typical value 0,01. Default: nullptr */
		CIMPP::PU kf;

		/** \brief &lt;i&gt;rc&lt;/i&gt; / &lt;i&gt;rfd&lt;/i&gt; (&lt;i&gt;R&lt;/i&gt;) (&amp;gt;= 0).  0 means exciter has negative current capability &amp;gt; 0 means exciter does not have negative current capability.   Typical value = 5. Default: nullptr */
		CIMPP::PU r;

		/** \brief Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Excitation control system stabilizer time constant (&lt;i&gt;Tf1&lt;/i&gt;) (&amp;gt; 0). Typical value = 1,0. Default: nullptr */
		CIMPP::Seconds tf1;

		/** \brief Excitation control system stabilizer time constant (&lt;i&gt;Tf2&lt;/i&gt;) (&amp;gt; 0). Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tf2;

		/** \brief Time constant (&lt;i&gt;Tr&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds tr;

		/** \brief Maximum voltage regulator ouput (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; ExcNI.vrmin). Typical value = 5,0. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator ouput (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; ExcNI.vrmax). Typical value = -2,0. Default: nullptr */
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

	BaseClass* ExcNI_factory();
}
#endif
