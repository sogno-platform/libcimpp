#ifndef GovGAST3_H
#define GovGAST3_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Temperature.hpp"

namespace CIMPP
{

	/*
	Generic turbogas with acceleration and temperature controller.
	*/
	class GovGAST3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST3();
		~GovGAST3() override;

		CIMPP::Float bca;  /* Acceleration limit set-point (&lt;i&gt;Bca&lt;/i&gt;).  Unit = 1/s.  Typical value = 0,01. Default: 0.0 */
		CIMPP::PU bp;  /* Droop (&lt;i&gt;bp&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::Temperature dtc;  /* Exhaust temperature variation due to fuel flow increasing from 0 to 1 PU (&lt;i&gt;deltaTc&lt;/i&gt;).  Typical value = 390. Default: nullptr */
		CIMPP::PU ka;  /* Minimum fuel flow (&lt;i&gt;Ka&lt;/i&gt;).  Typical value = 0,23. Default: nullptr */
		CIMPP::Float kac;  /* Fuel system feedback (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;AC&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float kca;  /* Acceleration control integral gain (&lt;i&gt;Kca&lt;/i&gt;). Unit = 1/s.  Typical value = 100. Default: 0.0 */
		CIMPP::Float ksi;  /* Gain of radiation shield (&lt;i&gt;Ksi&lt;/i&gt;).  Typical value = 0,8. Default: 0.0 */
		CIMPP::Float ky;  /* Coefficient of transfer function of fuel valve positioner (&lt;i&gt;Ky&lt;/i&gt;).  Typical value = 1. Default: 0.0 */
		CIMPP::PU mnef;  /* Fuel flow maximum negative error value (&lt;i&gt;MNef&lt;/i&gt;).  Typical value = -0,05. Default: nullptr */
		CIMPP::PU mxef;  /* Fuel flow maximum positive error value (&lt;i&gt;MXef&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU rcmn;  /* Minimum fuel flow (&lt;i&gt;RCMN&lt;/i&gt;).  Typical value = -0,1. Default: nullptr */
		CIMPP::PU rcmx;  /* Maximum fuel flow (&lt;i&gt;RCMX&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tac;  /* Fuel control time constant (&lt;i&gt;Tac&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tc;  /* Compressor discharge volume time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds td;  /* Temperature controller derivative gain (&lt;i&gt;Td&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3,3. Default: nullptr */
		CIMPP::Temperature tfen;  /* Turbine rated exhaust temperature correspondent to Pm=1 PU (&lt;i&gt;Tfen&lt;/i&gt;).  Typical value = 540. Default: nullptr */
		CIMPP::Seconds tg;  /* Time constant of speed governor (&lt;i&gt;Tg&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tsi;  /* Time constant of radiation shield (&lt;i&gt;Tsi&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 15. Default: nullptr */
		CIMPP::Temperature tt;  /* Temperature controller integration rate (&lt;i&gt;Tt&lt;/i&gt;).  Typical value = 250. Default: nullptr */
		CIMPP::Seconds ttc;  /* Time constant of thermocouple (&lt;i&gt;Ttc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2,5. Default: nullptr */
		CIMPP::Seconds ty;  /* Time constant of fuel valve positioner (&lt;i&gt;Ty&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovGAST3_factory();
}
#endif
