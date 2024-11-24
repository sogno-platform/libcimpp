#ifndef ExcIEEEST3A_H
#define ExcIEEEST3A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	IEEE 421.5-2005 type ST3A model.  Some static systems utilize a field voltage control loop to linearize the exciter control characteristic. This also makes the output independent of supply source variations until supply limitations are reached.  These systems utilize a variety of controlled-rectifier designs: full thyristor complements or hybrid bridges in either series or shunt configurations. The power source can consist of only a potential source, either fed from the machine terminals or from internal windings. Some designs can have compound power sources utilizing both machine potential and current. These power sources are represented as phasor combinations of machine terminal current and voltage and are accommodated by suitable parameters in model type ST3A which is represented by ExcIEEEST3A. Reference: IEEE 421.5-2005, 7.3.
	*/
	class ExcIEEEST3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST3A();
		~ExcIEEEST3A() override;

		CIMPP::PU ka;  /* Voltage regulator gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;A&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0). This is parameter &lt;i&gt;K&lt;/i&gt; in the IEEE standard. Typical value = 200. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;C&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,2. Default: nullptr */
		CIMPP::PU kg;  /* Feedback gain constant of the inner loop field regulator (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;G&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU ki;  /* Potential circuit gain coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU km;  /* Forward gain constant of the inner loop field regulator (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;M&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 7,93. Default: nullptr */
		CIMPP::PU kp;  /* Potential circuit gain coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;P&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 6,15. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;A&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb;  /* Voltage regulator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;B&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::Seconds tc;  /* Voltage regulator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;C&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::AngleDegrees thetap;  /* Potential circuit phase angle (&lt;i&gt;thetap&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tm;  /* Forward time constant of inner loop field regulator (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;M&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,4. Default: nullptr */
		CIMPP::PU vbmax;  /* Maximum excitation voltage (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;BMax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 6,9. Default: nullptr */
		CIMPP::PU vgmax;  /* Maximum inner loop feedback voltage (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;GMax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5,8. Default: nullptr */
		CIMPP::PU vimax;  /* Maximum voltage regulator input limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU vimin;  /* Minimum voltage regulator input limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; 0).  Typical value = -0,2. Default: nullptr */
		CIMPP::PU vmmax;  /* Maximum inner loop output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;MMax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU vmmin;  /* Minimum inner loop output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;MMin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 10. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; 0).  Typical value = -10. Default: nullptr */
		CIMPP::PU xl;  /* Reactance associated with potential source (&lt;i&gt;X&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,081. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcIEEEST3A_factory();
}
#endif
