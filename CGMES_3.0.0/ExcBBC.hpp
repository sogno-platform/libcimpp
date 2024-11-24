#ifndef ExcBBC_H
#define ExcBBC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Transformer fed static excitation system (static with ABB regulator). This model represents a static excitation system in which a gated thyristor bridge fed by a transformer at the main generator terminals feeds the main generator directly.
	*/
	class ExcBBC : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcBBC();
		~ExcBBC() override;

		CIMPP::PU efdmax;  /* Maximum open circuit exciter voltage (&lt;i&gt;Efdmax&lt;/i&gt;) (&amp;gt; ExcBBC.efdmin).  Typical value = 5. Default: nullptr */
		CIMPP::PU efdmin;  /* Minimum open circuit exciter voltage (&lt;i&gt;Efdmin&lt;/i&gt;) (&amp;lt; ExcBBC.efdmax).  Typical value = -5. Default: nullptr */
		CIMPP::PU k;  /* Steady state gain (&lt;i&gt;K&lt;/i&gt;) (not = 0).  Typical value = 300. Default: nullptr */
		CIMPP::Boolean _switch;  /* Supplementary signal routing selector (&lt;i&gt;switch&lt;/i&gt;). true = &lt;i&gt;Vs&lt;/i&gt; connected to 3rd summing point false =  &lt;i&gt;Vs&lt;/i&gt; connected to 1st summing point (see diagram). Typical value = false. Default: false */
		CIMPP::Seconds t1;  /* Controller time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 6. Default: nullptr */
		CIMPP::Seconds t2;  /* Controller time constant (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds t3;  /* Lead/lag time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0).  If = 0, block is bypassed.  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds t4;  /* Lead/lag time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0).  If = 0, block is bypassed.  Typical value = 0,01. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum control element output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; ExcBBC.vrmin).  Typical value = 5. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum control element output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; ExcBBC.vrmax).  Typical value = -5. Default: nullptr */
		CIMPP::PU xe;  /* Effective excitation transformer reactance (&lt;i&gt;Xe&lt;/i&gt;) (&amp;gt;= 0).  &lt;i&gt;Xe&lt;/i&gt; models the regulation of the transformer/rectifier unit.  Typical value = 0,05. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcBBC_factory();
}
#endif
