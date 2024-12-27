#ifndef ExcNI_H
#define ExcNI_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Bus or solid fed SCR (silicon-controlled rectifier) bridge excitation system model type NI (NVE).
	*/
	class ExcNI : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcNI();
		~ExcNI() override;

		CIMPP::Boolean busFedSelector;  /* Fed by selector (&lt;i&gt;BusFedSelector&lt;/i&gt;).  true = bus fed (switch is closed) false = solid fed (switch is open). Typical value = true. Default: false */
		CIMPP::PU ka;  /* Voltage regulator gain (&lt;i&gt;Ka&lt;/i&gt;) (&amp;gt; 0).  Typical value = 210. Default: nullptr */
		CIMPP::PU kf;  /* Excitation control system stabilizer gain (&lt;i&gt;Kf&lt;/i&gt;) (&amp;gt; 0).  Typical value 0,01. Default: nullptr */
		CIMPP::PU r;  /* &lt;i&gt;rc&lt;/i&gt; / &lt;i&gt;rfd&lt;/i&gt; (&lt;i&gt;R&lt;/i&gt;) (&amp;gt;= 0).  0 means exciter has negative current capability &amp;gt; 0 means exciter does not have negative current capability.   Typical value = 5. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds tf1;  /* Excitation control system stabilizer time constant (&lt;i&gt;Tf1&lt;/i&gt;) (&amp;gt; 0). Typical value = 1,0. Default: nullptr */
		CIMPP::Seconds tf2;  /* Excitation control system stabilizer time constant (&lt;i&gt;Tf2&lt;/i&gt;) (&amp;gt; 0). Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tr;  /* Time constant (&lt;i&gt;Tr&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,02. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator ouput (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; ExcNI.vrmin). Typical value = 5,0. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator ouput (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; ExcNI.vrmax). Typical value = -2,0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcNI_factory();
}
#endif
