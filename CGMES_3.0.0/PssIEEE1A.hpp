#ifndef PssIEEE1A_H
#define PssIEEE1A_H
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
	IEEE 421.5-2005 type PSS1A power system stabilizer model. PSS1A is the generalized form of a PSS with a single input signal.  Reference: IEEE 1A 421.5-2005, 8.1.
	*/
	class PssIEEE1A : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssIEEE1A();
		~PssIEEE1A() override;

		CIMPP::PU a1;  /* PSS signal conditioning frequency filter constant (&lt;i&gt;A1&lt;/i&gt;).  Typical value = 0,061. Default: nullptr */
		CIMPP::PU a2;  /* PSS signal conditioning frequency filter constant (&lt;i&gt;A2&lt;/i&gt;).  Typical value = 0,0017. Default: nullptr */
		CIMPP::InputSignalKind inputSignalType;  /* Type of input signal (rotorAngularFrequencyDeviation, generatorElectricalPower, or busFrequencyDeviation).  Typical value = rotorAngularFrequencyDeviation. Default: 0 */
		CIMPP::PU ks;  /* Stabilizer gain (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds t1;  /* Lead/lag time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds t2;  /* Lead/lag time constant (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,03. Default: nullptr */
		CIMPP::Seconds t3;  /* Lead/lag time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds t4;  /* Lead/lag time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,03. Default: nullptr */
		CIMPP::Seconds t5;  /* Washout time constant (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::Seconds t6;  /* Transducer time constant (&lt;i&gt;T6&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,01. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum stabilizer output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; PssIEEE1A.vrmin).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum stabilizer output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; PssIEEE1A.vrmax).  Typical value = -0,05. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PssIEEE1A_factory();
}
#endif
