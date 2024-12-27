#ifndef GovHydroWEH_H
#define GovHydroWEH_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Woodward<sup>TM </sup>electric hydro governor.  [Footnote: Woodward electric hydro governors are an example of suitable products available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of these products.]
	*/
	class GovHydroWEH : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroWEH();
		~GovHydroWEH() override;

		CIMPP::PU db;  /* Speed deadband (&lt;i&gt;db&lt;/i&gt;). Default: nullptr */
		CIMPP::PU dicn;  /* Value to allow the integral controller to advance beyond the gate limits (&lt;i&gt;Dicn&lt;/i&gt;). Default: nullptr */
		CIMPP::PU dpv;  /* Value to allow the pilot valve controller to advance beyond the gate limits (&lt;i&gt;Dpv&lt;/i&gt;). Default: nullptr */
		CIMPP::PU dturb;  /* Turbine damping factor (&lt;i&gt;Dturb&lt;/i&gt;).  Unit = delta P (PU of &lt;i&gt;MWbase&lt;/i&gt;) / delta speed (PU). Default: nullptr */
		CIMPP::Boolean feedbackSignal;  /* Feedback signal selection (&lt;i&gt;Sw&lt;/i&gt;). true = PID output (if &lt;i&gt;R-Perm-Gate &lt;/i&gt;= droop and &lt;i&gt;R-Perm-Pe &lt;/i&gt;= 0) false = electrical power (if &lt;i&gt;R-Perm-Gate &lt;/i&gt;= 0 and &lt;i&gt;R-Perm-Pe &lt;/i&gt;= droop) or false = gate position (if R&lt;i&gt;-Perm-Gate &lt;/i&gt;= droop and &lt;i&gt;R-Perm-Pe &lt;/i&gt;= 0). Typical value = false. Default: false */
		CIMPP::PU fl1;  /* Flowgate 1 (&lt;i&gt;Fl1&lt;/i&gt;).  Flow value for gate position point 1 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU fl2;  /* Flowgate 2 (&lt;i&gt;Fl2&lt;/i&gt;).  Flow value for gate position point 2 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU fl3;  /* Flowgate 3 (&lt;i&gt;Fl3&lt;/i&gt;).  Flow value for gate position point 3 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU fl4;  /* Flowgate 4 (&lt;i&gt;Fl4&lt;/i&gt;).  Flow value for gate position point 4 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU fl5;  /* Flowgate 5 (&lt;i&gt;Fl5&lt;/i&gt;).  Flow value for gate position point 5 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU fp1;  /* Flow P1 (&lt;i&gt;Fp1&lt;/i&gt;).  Turbine flow value for point 1 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp10;  /* Flow P10 (&lt;i&gt;Fp10&lt;/i&gt;).  Turbine flow value for point 10 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp2;  /* Flow P2 (&lt;i&gt;Fp2&lt;/i&gt;).  Turbine flow value for point 2 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp3;  /* Flow P3 (&lt;i&gt;Fp3&lt;/i&gt;).  Turbine flow value for point 3 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp4;  /* Flow P4 (&lt;i&gt;Fp4&lt;/i&gt;).  Turbine flow value for point 4 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp5;  /* Flow P5 (&lt;i&gt;Fp5&lt;/i&gt;).  Turbine flow value for point 5 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp6;  /* Flow P6 (&lt;i&gt;Fp6&lt;/i&gt;).  Turbine flow value for point 6 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp7;  /* Flow P7 (&lt;i&gt;Fp7&lt;/i&gt;).  Turbine flow value for point 7 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp8;  /* Flow P8 (&lt;i&gt;Fp8&lt;/i&gt;).  Turbine flow value for point 8 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp9;  /* Flow P9 (&lt;i&gt;Fp9&lt;/i&gt;).  Turbine flow value for point 9 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU gmax;  /* Maximum gate position (&lt;i&gt;Gmax&lt;/i&gt;) (&amp;gt; GovHydroWEH.gmin). Default: nullptr */
		CIMPP::PU gmin;  /* Minimum gate position (&lt;i&gt;Gmin&lt;/i&gt;) (&amp;lt; GovHydroWEH.gmax). Default: nullptr */
		CIMPP::PU gtmxcl;  /* Maximum gate closing rate (&lt;i&gt;Gtmxcl&lt;/i&gt;). Default: nullptr */
		CIMPP::PU gtmxop;  /* Maximum gate opening rate (&lt;i&gt;Gtmxop&lt;/i&gt;). Default: nullptr */
		CIMPP::PU gv1;  /* Gate 1 (&lt;i&gt;Gv1&lt;/i&gt;).  Gate Position value for point 1 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU gv2;  /* Gate 2 (&lt;i&gt;Gv2&lt;/i&gt;).  Gate Position value for point 2 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU gv3;  /* Gate 3 (&lt;i&gt;Gv3&lt;/i&gt;).  Gate Position value for point 3 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU gv4;  /* Gate 4 (&lt;i&gt;Gv4&lt;/i&gt;).  Gate Position value for point 4 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU gv5;  /* Gate 5 (&lt;i&gt;Gv5&lt;/i&gt;).  Gate Position value for point 5 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU kd;  /* Derivative controller derivative gain (&lt;i&gt;Kd&lt;/i&gt;). Default: nullptr */
		CIMPP::PU ki;  /* Derivative controller Integral gain (&lt;i&gt;Ki&lt;/i&gt;). Default: nullptr */
		CIMPP::PU kp;  /* Derivative control gain (&lt;i&gt;Kp&lt;/i&gt;). Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU pmss1;  /* Pmss flow P1 (&lt;i&gt;Pmss1&lt;/i&gt;).  Mechanical power output for turbine flow point 1 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss10;  /* Pmss flow P10 (&lt;i&gt;Pmss10&lt;/i&gt;).  Mechanical power output for turbine flow point 10 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss2;  /* Pmss flow P2 (&lt;i&gt;Pmss2&lt;/i&gt;).  Mechanical power output for turbine flow point 2 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss3;  /* Pmss flow P3 (&lt;i&gt;Pmss3&lt;/i&gt;).  Mechanical power output for turbine flow point 3 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss4;  /* Pmss flow P4 (&lt;i&gt;Pmss4&lt;/i&gt;).  Mechanical power output for turbine flow point 4 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss5;  /* Pmss flow P5 (&lt;i&gt;Pmss5&lt;/i&gt;).  Mechanical power output for turbine flow point 5 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss6;  /* Pmss flow P6 (&lt;i&gt;Pmss6&lt;/i&gt;).  Mechanical power output for turbine flow point 6 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss7;  /* Pmss flow P7 (&lt;i&gt;Pmss7&lt;/i&gt;).  Mechanical power output for turbine flow point 7 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss8;  /* Pmss flow P8 (&lt;i&gt;Pmss8&lt;/i&gt;).  Mechanical power output for turbine flow point 8 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss9;  /* Pmss flow P9 (&lt;i&gt;Pmss9&lt;/i&gt;).  Mechanical power output for turbine flow point 9 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::Float rpg;  /* Permanent droop for governor output feedback (&lt;i&gt;R-Perm-Gate&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float rpp;  /* Permanent droop for electrical power feedback (&lt;i&gt;R-Perm-Pe&lt;/i&gt;). Default: 0.0 */
		CIMPP::Seconds td;  /* Derivative controller time constant (&lt;i&gt;Td&lt;/i&gt;) (&amp;gt;= 0).  Limits the derivative characteristic beyond a breakdown frequency to avoid amplification of high-frequency noise. Default: nullptr */
		CIMPP::Seconds tdv;  /* Distributive valve time lag time constant (&lt;i&gt;Tdv&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tg;  /* Value to allow the distribution valve controller to advance beyond the gate movement rate limit (&lt;i&gt;Tg&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tp;  /* Pilot valve time lag time constant (&lt;i&gt;Tp&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tpe;  /* Electrical power droop time constant (&lt;i&gt;Tpe&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tw;  /* Water inertia time constant (&lt;i&gt;Tw&lt;/i&gt;) (&amp;gt; 0). Default: nullptr */

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

	BaseClass* GovHydroWEH_factory();
}
#endif
