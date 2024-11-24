#ifndef PssWECC_H
#define PssWECC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Dual input power system stabilizer, based on IEEE type 2, with modified output limiter defined by WECC (Western Electricity Coordinating Council, USA).
	*/
	class PssWECC : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssWECC();
		~PssWECC() override;

		CIMPP::InputSignalKind inputSignal1Type;  /* Type of input signal #1 (rotorAngularFrequencyDeviation, busFrequencyDeviation, generatorElectricalPower, generatorAcceleratingPower, busVoltage, or busVoltageDerivative - shall be different than PssWECC.inputSignal2Type).  Typical value = rotorAngularFrequencyDeviation. Default: 0 */
		CIMPP::InputSignalKind inputSignal2Type;  /* Type of input signal #2 (rotorAngularFrequencyDeviation, busFrequencyDeviation, generatorElectricalPower, generatorAcceleratingPower, busVoltage, busVoltageDerivative - shall be different than PssWECC.inputSignal1Type).  Typical value = busVoltageDerivative. Default: 0 */
		CIMPP::PU k1;  /* Input signal 1 gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,13. Default: nullptr */
		CIMPP::PU k2;  /* Input signal 2 gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,0. Default: nullptr */
		CIMPP::Seconds t1;  /* Input signal 1 transducer time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,037. Default: nullptr */
		CIMPP::Seconds t10;  /* Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;10&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t2;  /* Input signal 2 transducer time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,0. Default: nullptr */
		CIMPP::Seconds t3;  /* Stabilizer washout time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 9,5. Default: nullptr */
		CIMPP::Seconds t4;  /* Stabilizer washout time lag constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 9,5. Default: nullptr */
		CIMPP::Seconds t5;  /* Lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;5&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,7. Default: nullptr */
		CIMPP::Seconds t6;  /* Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;6&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,5. Default: nullptr */
		CIMPP::Seconds t7;  /* Lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;7&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,7. Default: nullptr */
		CIMPP::Seconds t8;  /* Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;8&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,5. Default: nullptr */
		CIMPP::Seconds t9;  /* Lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;9&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU vcl;  /* Minimum value for voltage compensator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;CL&lt;/sub&gt;&lt;/i&gt;). Typical value = 0. Default: nullptr */
		CIMPP::PU vcu;  /* Maximum value for voltage compensator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;CU&lt;/sub&gt;&lt;/i&gt;). Typical value = 0. Default: nullptr */
		CIMPP::PU vsmax;  /* Maximum output signal (&lt;i&gt;Vsmax&lt;/i&gt;) (&amp;gt; PssWECC.vsmin). Typical value = 0,05. Default: nullptr */
		CIMPP::PU vsmin;  /* Minimum output signal (&lt;i&gt;Vsmin&lt;/i&gt;) (&amp;lt; PssWECC.vsmax).  Typical value = -0,05. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PssWECC_factory();
}
#endif
