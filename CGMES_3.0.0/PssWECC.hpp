#ifndef PssWECC_H
#define PssWECC_H
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
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Dual input power system stabilizer, based on IEEE type 2, with modified output limiter defined by WECC (Western Electricity Coordinating Council, USA). */
	class PssWECC : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssWECC();
		~PssWECC() override;

		/** \brief Type of input signal #1 (rotorAngularFrequencyDeviation, busFrequencyDeviation, generatorElectricalPower, generatorAcceleratingPower, busVoltage, or busVoltageDerivative - shall be different than PssWECC.inputSignal2Type).  Typical value = rotorAngularFrequencyDeviation. Default: 0 */
		CIMPP::InputSignalKind inputSignal1Type;

		/** \brief Type of input signal #2 (rotorAngularFrequencyDeviation, busFrequencyDeviation, generatorElectricalPower, generatorAcceleratingPower, busVoltage, busVoltageDerivative - shall be different than PssWECC.inputSignal1Type).  Typical value = busVoltageDerivative. Default: 0 */
		CIMPP::InputSignalKind inputSignal2Type;

		/** \brief Input signal 1 gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,13. Default: nullptr */
		CIMPP::PU k1;

		/** \brief Input signal 2 gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,0. Default: nullptr */
		CIMPP::PU k2;

		/** \brief Input signal 1 transducer time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,037. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;10&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t10;

		/** \brief Input signal 2 transducer time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,0. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Stabilizer washout time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 9,5. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Stabilizer washout time lag constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 9,5. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;5&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,7. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;6&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,5. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;7&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,7. Default: nullptr */
		CIMPP::Seconds t7;

		/** \brief Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;8&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,5. Default: nullptr */
		CIMPP::Seconds t8;

		/** \brief Lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;9&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t9;

		/** \brief Minimum value for voltage compensator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;CL&lt;/sub&gt;&lt;/i&gt;). Typical value = 0. Default: nullptr */
		CIMPP::PU vcl;

		/** \brief Maximum value for voltage compensator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;CU&lt;/sub&gt;&lt;/i&gt;). Typical value = 0. Default: nullptr */
		CIMPP::PU vcu;

		/** \brief Maximum output signal (&lt;i&gt;Vsmax&lt;/i&gt;) (&amp;gt; PssWECC.vsmin). Typical value = 0,05. Default: nullptr */
		CIMPP::PU vsmax;

		/** \brief Minimum output signal (&lt;i&gt;Vsmin&lt;/i&gt;) (&amp;lt; PssWECC.vsmax).  Typical value = -0,05. Default: nullptr */
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

	BaseClass* PssWECC_factory();
}
#endif
