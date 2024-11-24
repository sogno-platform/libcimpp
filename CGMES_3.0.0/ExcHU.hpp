#ifndef ExcHU_H
#define ExcHU_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Hungarian excitation system, with built-in voltage transducer.
	*/
	class ExcHU : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcHU();
		~ExcHU() override;

		CIMPP::PU ae;  /* Major loop PI tag gain factor (&lt;i&gt;Ae&lt;/i&gt;).  Typical value = 3. Default: nullptr */
		CIMPP::PU ai;  /* Minor loop PI tag gain factor (&lt;i&gt;Ai&lt;/i&gt;).  Typical value = 22. Default: nullptr */
		CIMPP::PU atr;  /* AVR constant (&lt;i&gt;Atr&lt;/i&gt;).  Typical value = 2,19. Default: nullptr */
		CIMPP::PU emax;  /* Field voltage control signal upper limit on AVR base (&lt;i&gt;Emax&lt;/i&gt;) (&amp;gt; ExcHU.emin).  Typical value = 0,996. Default: nullptr */
		CIMPP::PU emin;  /* Field voltage control signal lower limit on AVR base (&lt;i&gt;Emin&lt;/i&gt;) (&amp;lt; ExcHU.emax).  Typical value = -0,866. Default: nullptr */
		CIMPP::PU imax;  /* Major loop PI tag output signal upper limit (&lt;i&gt;Imax&lt;/i&gt;) (&amp;gt; ExcHU.imin).  Typical value = 2,19. Default: nullptr */
		CIMPP::PU imin;  /* Major loop PI tag output signal lower limit (&lt;i&gt;Imin&lt;/i&gt;) (&amp;lt; ExcHU.imax).  Typical value = 0,1. Default: nullptr */
		CIMPP::Float ke;  /* Voltage base conversion constant (&lt;i&gt;Ke&lt;/i&gt;).  Typical value = 4,666. Default: 0.0 */
		CIMPP::Float ki;  /* Current base conversion constant (&lt;i&gt;Ki&lt;/i&gt;).  Typical value = 0,21428. Default: 0.0 */
		CIMPP::Seconds te;  /* Major loop PI tag integration time constant (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,154. Default: nullptr */
		CIMPP::Seconds ti;  /* Minor loop PI control tag integration time constant (&lt;i&gt;Ti&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,01333. Default: nullptr */
		CIMPP::Seconds tr;  /* Filter time constant (&lt;i&gt;Tr&lt;/i&gt;) (&amp;gt;= 0). If a voltage compensator is used in conjunction with this excitation system model, &lt;i&gt;Tr &lt;/i&gt;should be set to 0.  Typical value = 0,01. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcHU_factory();
}
#endif
