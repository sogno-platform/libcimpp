#ifndef ExcAC8B_H
#define ExcAC8B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Modified IEEE AC8B alternator-supplied rectifier excitation system with speed input and input limiter.
	*/
	class ExcAC8B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC8B();
		~ExcAC8B() override;

		CIMPP::Boolean inlim;  /* Input limiter indicator. true = input limiter &lt;i&gt;Vimax&lt;/i&gt; and &lt;i&gt;Vimin&lt;/i&gt; is considered false = input limiter &lt;i&gt;Vimax &lt;/i&gt;and &lt;i&gt;Vimin&lt;/i&gt; is not considered. Typical value = true. Default: false */
		CIMPP::PU ka;  /* Voltage regulator gain (&lt;i&gt;Ka&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (&lt;i&gt;Kc&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,55. Default: nullptr */
		CIMPP::PU kd;  /* Demagnetizing factor, a function of exciter alternator reactances (&lt;i&gt;Kd&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,1. Default: nullptr */
		CIMPP::PU kdr;  /* Voltage regulator derivative gain (&lt;i&gt;Kdr&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (&lt;i&gt;Ke&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kir;  /* Voltage regulator integral gain (&lt;i&gt;Kir&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::PU kpr;  /* Voltage regulator proportional gain (&lt;i&gt;Kpr&lt;/i&gt;) (&amp;gt; 0 if ExcAC8B.kir = 0).  Typical value = 80. Default: nullptr */
		CIMPP::PU ks;  /* Coefficient to allow different usage of the model-speed coefficient (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::Boolean pidlim;  /* PID limiter indicator. true = input limiter &lt;i&gt;Vpidmax&lt;/i&gt; and &lt;i&gt;Vpidmin&lt;/i&gt; is considered false = input limiter &lt;i&gt;Vpidmax&lt;/i&gt; and &lt;i&gt;Vpidmin&lt;/i&gt; is not considered. Typical value = true. Default: false */
		CIMPP::Float seve1;  /* Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;, back of commutating reactance (&lt;i&gt;Se[Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float seve2;  /* Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;, back of commutating reactance (&lt;i&gt;Se[Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3. Default: 0.0 */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tdr;  /* Lag time constant (&lt;i&gt;Tdr&lt;/i&gt;) (&amp;gt; 0 if ExcAC8B.kdr &amp;gt; 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,2. Default: nullptr */
		CIMPP::Boolean telim;  /* Selector for the limiter on the block (&lt;i&gt;1/sTe&lt;/i&gt;).  See diagram for meaning of true and false. Typical value = false. Default: false */
		CIMPP::PU ve1;  /* Exciter alternator output voltages back of commutating reactance at which saturation is defined (&lt;i&gt;Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 6,5. Default: nullptr */
		CIMPP::PU ve2;  /* Exciter alternator output voltages back of commutating reactance at which saturation is defined (&lt;i&gt;Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 9. Default: nullptr */
		CIMPP::PU vemin;  /* Minimum exciter voltage output (&lt;i&gt;Vemin&lt;/i&gt;) (&amp;lt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU vfemax;  /* Exciter field current limit reference (&lt;i&gt;Vfemax&lt;/i&gt;).  Typical value = 6. Default: nullptr */
		CIMPP::PU vimax;  /* Input signal maximum (&lt;i&gt;Vimax&lt;/i&gt;) (&amp;gt; ExcAC8B.vimin).  Typical value = 35. Default: nullptr */
		CIMPP::PU vimin;  /* Input signal minimum (&lt;i&gt;Vimin&lt;/i&gt;) (&amp;lt; ExcAC8B.vimax).  Typical value = -10. Default: nullptr */
		CIMPP::PU vpidmax;  /* PID maximum controller output (&lt;i&gt;Vpidmax&lt;/i&gt;) (&amp;gt; ExcAC8B.vpidmin).  Typical value = 35. Default: nullptr */
		CIMPP::PU vpidmin;  /* PID minimum controller output (&lt;i&gt;Vpidmin&lt;/i&gt;) (&amp;lt; ExcAC8B.vpidmax).  Typical value = -10. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; 0). Typical value = 35. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0).  Typical value = 0. Default: nullptr */
		CIMPP::Boolean vtmult;  /* Multiply by generator`s terminal voltage indicator. true =the limits &lt;i&gt;Vrmax&lt;/i&gt; and &lt;i&gt;Vrmin&lt;/i&gt; are multiplied by the generator`s terminal voltage to represent a thyristor power stage fed from the generator terminals false = limits are not multiplied by generator`s terminal voltage.  Typical value = false. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcAC8B_factory();
}
#endif
