#ifndef ExcELIN1_H
#define ExcELIN1_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Static PI transformer fed excitation system ELIN (VATECH) - simplified model.  This model represents an all-static excitation system. A PI voltage controller establishes a desired field current set point for a proportional current controller. The integrator of the PI controller has a follow-up input to match its signal to the present field current.  A power system stabilizer with power input is included in the model. */
	class ExcELIN1 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcELIN1();
		~ExcELIN1() override;

		/** \brief Controller follow up deadband (&lt;i&gt;Dpnf&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU dpnf;

		/** \brief Maximum open circuit excitation voltage (&lt;i&gt;Efmax&lt;/i&gt;) (&amp;gt; ExcELIN1.efmin).  Typical value = 5. Default: nullptr */
		CIMPP::PU efmax;

		/** \brief Minimum open circuit excitation voltage (&lt;i&gt;Efmin&lt;/i&gt;) (&amp;lt; ExcELIN1.efmax).  Typical value = -5. Default: nullptr */
		CIMPP::PU efmin;

		/** \brief Stabilizer gain 1 (&lt;i&gt;Ks1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ks1;

		/** \brief Stabilizer gain 2 (&lt;i&gt;Ks2&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ks2;

		/** \brief Stabilizer limit output (&lt;i&gt;smax&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU smax;

		/** \brief Current transducer time constant (&lt;i&gt;Tfi&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tfi;

		/** \brief Controller reset time constant (&lt;i&gt;Tnu&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds tnu;

		/** \brief Stabilizer phase lag time constant (&lt;i&gt;Ts1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds ts1;

		/** \brief Stabilizer filter time constant (&lt;i&gt;Ts2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds ts2;

		/** \brief Stabilizer parameters (&lt;i&gt;Tsw&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3. Default: nullptr */
		CIMPP::Seconds tsw;

		/** \brief Current controller gain (&lt;i&gt;Vpi&lt;/i&gt;).  Typical value = 12,45. Default: nullptr */
		CIMPP::PU vpi;

		/** \brief Controller follow up gain (&lt;i&gt;Vpnf&lt;/i&gt;).  Typical value = 2. Default: nullptr */
		CIMPP::PU vpnf;

		/** \brief Voltage controller proportional gain (&lt;i&gt;Vpu&lt;/i&gt;).  Typical value = 34,5. Default: nullptr */
		CIMPP::PU vpu;

		/** \brief Excitation transformer effective reactance (&lt;i&gt;Xe&lt;/i&gt;) (&amp;gt;= 0).  &lt;i&gt;Xe&lt;/i&gt; represents the regulation of the transformer/rectifier unit.  Typical value = 0,06. Default: nullptr */
		CIMPP::PU xe;

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

	BaseClass* ExcELIN1_factory();
}
#endif
