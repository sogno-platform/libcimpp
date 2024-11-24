#ifndef ExcST1A_H
#define ExcST1A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Modification of an old IEEE ST1A static excitation system without overexcitation limiter (OEL) and underexcitation limiter (UEL).
	*/
	class ExcST1A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST1A();
		~ExcST1A() override;

		CIMPP::PU ilr;  /* Exciter output current limit reference (&lt;i&gt;Ilr&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ka;  /* Voltage regulator gain (&lt;i&gt;Ka&lt;/i&gt;) (&amp;gt; 0).  Typical value = 190. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier loading factor proportional to commutating reactance (&lt;i&gt;Kc&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,05. Default: nullptr */
		CIMPP::PU kf;  /* Excitation control system stabilizer gains (&lt;i&gt;Kf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU klr;  /* Exciter output current limiter gain (&lt;i&gt;Klr&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds tb;  /* Voltage regulator time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::Seconds tb1;  /* Voltage regulator time constant (&lt;i&gt;Tb1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc;  /* Voltage regulator time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tc1;  /* Voltage regulator time constant (&lt;i&gt;Tc1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU vamax;  /* Maximum voltage regulator output (&lt;i&gt;Vamax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 999. Default: nullptr */
		CIMPP::PU vamin;  /* Minimum voltage regulator output (&lt;i&gt;Vamin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -999. Default: nullptr */
		CIMPP::PU vimax;  /* Maximum voltage regulator input limit (&lt;i&gt;Vimax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 999. Default: nullptr */
		CIMPP::PU vimin;  /* Minimum voltage regulator input limit (&lt;i&gt;Vimin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -999. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator outputs (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; 0) .  Typical value = 7,8. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator outputs (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -6,7. Default: nullptr */
		CIMPP::PU xe;  /* Excitation xfmr effective reactance (&lt;i&gt;Xe&lt;/i&gt;).  Typical value = 0,04. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcST1A_factory();
}
#endif
