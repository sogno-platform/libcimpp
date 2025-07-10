#ifndef PssIEEE3B_H
#define PssIEEE3B_H
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

	/** \brief IEEE 421.5-2005 type PSS3B power system stabilizer model. The PSS model PSS3B has dual inputs of electrical power and rotor angular frequency deviation. The signals are used to derive an equivalent mechanical power signal. This model has 2 input signals. They have the following fixed types (expressed in terms of InputSignalKind values): the first one is of rotorAngleFrequencyDeviation type and the second one is of generatorElectricalPower type. Reference: IEEE 3B 421.5-2005, 8.3. */
	class PssIEEE3B : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssIEEE3B();
		~PssIEEE3B() override;

		/** \brief Notch filter parameter (&lt;i&gt;A1&lt;/i&gt;).  Typical value = 0,359. Default: nullptr */
		CIMPP::PU a1;

		/** \brief Notch filter parameter (&lt;i&gt;A2&lt;/i&gt;).  Typical value = 0,586. Default: nullptr */
		CIMPP::PU a2;

		/** \brief Notch filter parameter (&lt;i&gt;A3&lt;/i&gt;).  Typical value = 0,429. Default: nullptr */
		CIMPP::PU a3;

		/** \brief Notch filter parameter (&lt;i&gt;A4&lt;/i&gt;).  Typical value = 0,564. Default: nullptr */
		CIMPP::PU a4;

		/** \brief Notch filter parameter (&lt;i&gt;A5&lt;/i&gt;).  Typical value = 0,001. Default: nullptr */
		CIMPP::PU a5;

		/** \brief Notch filter parameter (&lt;i&gt;A6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU a6;

		/** \brief Notch filter parameter (&lt;i&gt;A7&lt;/i&gt;).  Typical value = 0,031. Default: nullptr */
		CIMPP::PU a7;

		/** \brief Notch filter parameter (&lt;i&gt;A8&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU a8;

		/** \brief Gain on signal # 1 (&lt;i&gt;Ks1&lt;/i&gt;).  Typical value = -0,602. Default: nullptr */
		CIMPP::PU ks1;

		/** \brief Gain on signal # 2 (&lt;i&gt;Ks2&lt;/i&gt;).  Typical value = 30,12. Default: nullptr */
		CIMPP::PU ks2;

		/** \brief Transducer time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,012. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Transducer time constant (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,012. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Washout time constant (&lt;i&gt;Tw1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds tw1;

		/** \brief Washout time constant (&lt;i&gt;Tw2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds tw2;

		/** \brief Washout time constant (&lt;i&gt;Tw3&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,6. Default: nullptr */
		CIMPP::Seconds tw3;

		/** \brief Stabilizer output maximum limit (&lt;i&gt;Vstmax&lt;/i&gt;) (&amp;gt; PssIEEE3B.vstmin).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU vstmax;

		/** \brief Stabilizer output minimum limit (&lt;i&gt;Vstmin&lt;/i&gt;) (&amp;lt; PssIEEE3B.vstmax).  Typical value = -0,1. Default: nullptr */
		CIMPP::PU vstmin;

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

	BaseClass* PssIEEE3B_factory();
}
#endif
