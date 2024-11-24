#ifndef ExcDC3A1_H
#define ExcDC3A1_H
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
	Modified old IEEE type 3 excitation system.
	*/
	class ExcDC3A1 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcDC3A1();
		~ExcDC3A1() override;

		CIMPP::Boolean exclim;  /* (&lt;i&gt;exclim&lt;/i&gt;). true = lower limit of zero is applied to integrator output false = lower limit of zero not applied to integrator output. Typical value = true. Default: false */
		CIMPP::PU ka;  /* Voltage regulator gain (&lt;i&gt;Ka&lt;/i&gt;) (&amp;gt; 0).  Typical value = 300. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (&lt;i&gt;Ke&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kf;  /* Excitation control system stabilizer gain (&lt;i&gt;Kf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU ki;  /* Potential circuit gain coefficient (&lt;i&gt;Ki&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 4,83. Default: nullptr */
		CIMPP::PU kp;  /* Potential circuit gain coefficient (&lt;i&gt;Kp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 4,37. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,01. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,83. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,675. Default: nullptr */
		CIMPP::PU vb1max;  /* Available exciter voltage limiter (&lt;i&gt;Vb1max&lt;/i&gt;) (&amp;gt; 0).  Typical value = 11,63. Default: nullptr */
		CIMPP::Boolean vblim;  /* Vb limiter indicator. true = exciter &lt;i&gt;Vbmax&lt;/i&gt; limiter is active false = &lt;i&gt;Vb1max&lt;/i&gt; is active.  Typical value = true. Default: false */
		CIMPP::PU vbmax;  /* Available exciter voltage limiter (&lt;i&gt;Vbmax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 11,63. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; ExcDC3A1.vrmin).  Typical value = 5. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0 and &amp;lt; ExcDC3A1.vrmax).  Typical value = 0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcDC3A1_factory();
}
#endif
