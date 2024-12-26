#ifndef ExcST4B_H
#define ExcST4B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "AngleDegrees.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Modified IEEE ST4B static excitation system with maximum inner loop feedback gain <i>Vgmax</i>.
	*/
	class ExcST4B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST4B();
		~ExcST4B() override;

		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (&lt;i&gt;Kc&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,113. Default: nullptr */
		CIMPP::PU kg;  /* Feedback gain constant of the inner loop field regulator (&lt;i&gt;Kg&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0. Default: nullptr */
		CIMPP::PU ki;  /* Potential circuit gain coefficient (&lt;i&gt;Ki&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU kim;  /* Voltage regulator integral gain output (&lt;i&gt;Kim&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kir;  /* Voltage regulator integral gain (&lt;i&gt;Kir&lt;/i&gt;).  Typical value = 10,75. Default: nullptr */
		CIMPP::PU kp;  /* Potential circuit gain coefficient (&lt;i&gt;Kp&lt;/i&gt;) (&amp;gt; 0).  Typical value = 9,3. Default: nullptr */
		CIMPP::PU kpm;  /* Voltage regulator proportional gain output (&lt;i&gt;Kpm&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kpr;  /* Voltage regulator proportional gain (&lt;i&gt;Kpr&lt;/i&gt;).  Typical value = 10,75. Default: nullptr */
		CIMPP::Boolean lvgate;  /* Selector (&lt;i&gt;LVGate&lt;/i&gt;). true = &lt;i&gt;LVGate&lt;/i&gt; is part of the block diagram false = &lt;i&gt;LVGate&lt;/i&gt; is not part of the block diagram.  Typical value = false. Default: false */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::AngleDegrees thetap;  /* Potential circuit phase angle (&lt;i&gt;theta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;p&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::Boolean uel;  /* Selector (&lt;i&gt;UEL&lt;/i&gt;). true = &lt;i&gt;UEL&lt;/i&gt; is part of block diagram false = &lt;i&gt;UEL&lt;/i&gt; is not part of block diagram.  Typical value = false. Default: false */
		CIMPP::PU vbmax;  /* Maximum excitation voltage (&lt;i&gt;Vbmax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 11,63. Default: nullptr */
		CIMPP::PU vgmax;  /* Maximum inner loop feedback voltage (&lt;i&gt;Vgmax&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5,8. Default: nullptr */
		CIMPP::PU vmmax;  /* Maximum inner loop output (&lt;i&gt;Vmmax&lt;/i&gt;) (&amp;gt; ExcST4B.vmmin).  Typical value = 99. Default: nullptr */
		CIMPP::PU vmmin;  /* Minimum inner loop output (&lt;i&gt;Vmmin&lt;/i&gt;) (&amp;lt; ExcST4B.vmmax).  Typical value = -99. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -0,87. Default: nullptr */
		CIMPP::PU xl;  /* Reactance associated with potential source (&lt;i&gt;Xl&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,124. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcST4B_factory();
}
#endif