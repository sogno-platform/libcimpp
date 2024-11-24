#ifndef PssPTIST3_H
#define PssPTIST3_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	PTI microprocessor-based stabilizer type 3.
	*/
	class PssPTIST3 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssPTIST3();
		~PssPTIST3() override;

		CIMPP::PU a0;  /* Filter coefficient (&lt;i&gt;A0&lt;/i&gt;). Default: nullptr */
		CIMPP::PU a1;  /* Limiter (&lt;i&gt;Al&lt;/i&gt;). Default: nullptr */
		CIMPP::PU a2;  /* Filter coefficient (&lt;i&gt;A2&lt;/i&gt;). Default: nullptr */
		CIMPP::PU a3;  /* Filter coefficient (&lt;i&gt;A3&lt;/i&gt;). Default: nullptr */
		CIMPP::PU a4;  /* Filter coefficient (&lt;i&gt;A4&lt;/i&gt;). Default: nullptr */
		CIMPP::PU a5;  /* Filter coefficient (&lt;i&gt;A5&lt;/i&gt;). Default: nullptr */
		CIMPP::PU al;  /* Limiter (&lt;i&gt;Al&lt;/i&gt;). Default: nullptr */
		CIMPP::PU athres;  /* Threshold value above which output averaging will be bypassed (&lt;i&gt;Athres&lt;/i&gt;).  Typical value = 0,005. Default: nullptr */
		CIMPP::PU b0;  /* Filter coefficient (&lt;i&gt;B0&lt;/i&gt;). Default: nullptr */
		CIMPP::PU b1;  /* Filter coefficient (&lt;i&gt;B1&lt;/i&gt;). Default: nullptr */
		CIMPP::PU b2;  /* Filter coefficient (&lt;i&gt;B2&lt;/i&gt;). Default: nullptr */
		CIMPP::PU b3;  /* Filter coefficient (&lt;i&gt;B3&lt;/i&gt;). Default: nullptr */
		CIMPP::PU b4;  /* Filter coefficient (&lt;i&gt;B4&lt;/i&gt;). Default: nullptr */
		CIMPP::PU b5;  /* Filter coefficient (&lt;i&gt;B5&lt;/i&gt;). Default: nullptr */
		CIMPP::PU dl;  /* Limiter (&lt;i&gt;Dl&lt;/i&gt;). Default: nullptr */
		CIMPP::Seconds dtc;  /* Time step related to activation of controls (&lt;i&gt;deltatc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,025 (0,03 for 50 Hz). Default: nullptr */
		CIMPP::Seconds dtf;  /* Time step frequency calculation (&lt;i&gt;deltatf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,025 (0,03 for 50 Hz). Default: nullptr */
		CIMPP::Seconds dtp;  /* Time step active power calculation (&lt;i&gt;deltatp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,0125  (0,015 for 50 Hz). Default: nullptr */
		CIMPP::Boolean isw;  /* Digital/analogue output switch (&lt;i&gt;Isw&lt;/i&gt;). true = produce analogue output false = convert to digital output, using tap selection table. Default: false */
		CIMPP::PU k;  /* Gain (&lt;i&gt;K&lt;/i&gt;).  Typical value = 9. Default: nullptr */
		CIMPP::PU lthres;  /* Threshold value (&lt;i&gt;Lthres&lt;/i&gt;). Default: nullptr */
		CIMPP::PU m;  /* (&lt;i&gt;M&lt;/i&gt;).  &lt;i&gt;M&lt;/i&gt; = 2 x &lt;i&gt;H&lt;/i&gt;.  Typical value = 5. Default: nullptr */
		CIMPP::Float nav;  /* Number of control outputs to average (&lt;i&gt;NAV&lt;/i&gt;) (1 &amp;lt;=  &lt;i&gt;NAV&lt;/i&gt; &amp;lt;= 16).  Typical value = 4. Default: 0.0 */
		CIMPP::Float ncl;  /* Number of counts at limit to active limit function (&lt;i&gt;NCL&lt;/i&gt;) (&amp;gt; 0). Default: 0.0 */
		CIMPP::Float ncr;  /* Number of counts until reset after limit function is triggered (&lt;i&gt;NCR&lt;/i&gt;). Default: 0.0 */
		CIMPP::PU pmin;  /* (&lt;i&gt;Pmin&lt;/i&gt;). Default: nullptr */
		CIMPP::Seconds t1;  /* Time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds t2;  /* Time constant (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds t3;  /* Time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds t4;  /* Time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds t5;  /* Time constant (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t6;  /* Time constant (&lt;i&gt;T6&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tf;  /* Time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds tp;  /* Time constant (&lt;i&gt;Tp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PssPTIST3_factory();
}
#endif
