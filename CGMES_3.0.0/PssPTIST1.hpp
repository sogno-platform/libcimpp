#ifndef PssPTIST1_H
#define PssPTIST1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	PTI microprocessor-based stabilizer type 1.
	*/
	class PssPTIST1 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssPTIST1();
		~PssPTIST1() override;

		CIMPP::Seconds dtc;  /* Time step related to activation of controls (&lt;i&gt;deltatc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,025. Default: nullptr */
		CIMPP::Seconds dtf;  /* Time step frequency calculation (&lt;i&gt;deltatf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,025. Default: nullptr */
		CIMPP::Seconds dtp;  /* Time step active power calculation (&lt;i&gt;deltatp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,0125. Default: nullptr */
		CIMPP::PU k;  /* Gain (&lt;i&gt;K&lt;/i&gt;).  Typical value = 9. Default: nullptr */
		CIMPP::PU m;  /* (&lt;i&gt;M&lt;/i&gt;).  &lt;i&gt;M &lt;/i&gt;= 2 x &lt;i&gt;H&lt;/i&gt;.  Typical value = 5. Default: nullptr */
		CIMPP::Seconds t1;  /* Time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds t2;  /* Time constant (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds t3;  /* Time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds t4;  /* Time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tf;  /* Time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds tp;  /* Time constant (&lt;i&gt;Tp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PssPTIST1_factory();
}
#endif
