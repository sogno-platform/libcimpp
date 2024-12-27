#ifndef GovHydro3_H
#define GovHydro3_H
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
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Modified IEEE hydro governor-turbine. This model differs from that defined in the IEEE modelling guideline paper in that the limits on gate position and velocity do not permit "wind up" of the upstream signals.
	*/
	class GovHydro3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro3();
		~GovHydro3() override;

		CIMPP::PU at;  /* Turbine gain (&lt;i&gt;At&lt;/i&gt;) (&amp;gt;0).  Typical value = 1,2. Default: nullptr */
		CIMPP::Frequency db1;  /* Intentional dead-band width (&lt;i&gt;db1&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::ActivePower db2;  /* Unintentional dead-band (&lt;i&gt;db2&lt;/i&gt;).  Unit = MW.  Typical value = 0. Default: nullptr */
		CIMPP::PU dturb;  /* Turbine damping factor (&lt;i&gt;Dturb&lt;/i&gt;).  Typical value = 0,2. Default: nullptr */
		CIMPP::Frequency eps;  /* Intentional db hysteresis (&lt;i&gt;eps&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Boolean governorControl;  /* Governor control flag (&lt;i&gt;Cflag&lt;/i&gt;). true = PID control is active false = double derivative control is active. Typical value = true. Default: false */
		CIMPP::PU gv1;  /* Nonlinear gain point 1, PU gv (&lt;i&gt;Gv1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv2;  /* Nonlinear gain point 2, PU gv (&lt;i&gt;Gv2&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv3;  /* Nonlinear gain point 3, PU gv (&lt;i&gt;Gv3&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv4;  /* Nonlinear gain point 4, PU gv (&lt;i&gt;Gv4&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv5;  /* Nonlinear gain point 5, PU gv (&lt;i&gt;Gv5&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU gv6;  /* Nonlinear gain point 6, PU gv (&lt;i&gt;Gv6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU h0;  /* Turbine nominal head (&lt;i&gt;H0&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU k1;  /* Derivative gain (&lt;i&gt;K1&lt;/i&gt;).  Typical value = 0,01. Default: nullptr */
		CIMPP::PU k2;  /* Double derivative gain, if &lt;i&gt;Cflag&lt;/i&gt; = -1 (&lt;i&gt;K2&lt;/i&gt;).  Typical value = 2,5. Default: nullptr */
		CIMPP::PU kg;  /* Gate servo gain (&lt;i&gt;Kg&lt;/i&gt;).  Typical value = 2. Default: nullptr */
		CIMPP::PU ki;  /* Integral gain (&lt;i&gt;Ki&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU pgv1;  /* Nonlinear gain point 1, PU power (&lt;i&gt;Pgv1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv2;  /* Nonlinear gain point 2, PU power (&lt;i&gt;Pgv2&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv3;  /* Nonlinear gain point 3, PU power (&lt;i&gt;Pgv3&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv4;  /* Nonlinear gain point 4, PU power (&lt;i&gt;Pgv4&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv5;  /* Nonlinear gain point 5, PU power (&lt;i&gt;Pgv5&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv6;  /* Nonlinear gain point 6, PU power (&lt;i&gt;Pgv6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU pmax;  /* Maximum gate opening, PU of MWbase (&lt;i&gt;Pmax&lt;/i&gt;) (&amp;gt; GovHydro3.pmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU pmin;  /* Minimum gate opening, PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Pmin&lt;/i&gt;) (&amp;lt; GovHydro3.pmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU qnl;  /* No-load turbine flow at nominal head (&lt;i&gt;Qnl&lt;/i&gt;).  Typical value = 0,08. Default: nullptr */
		CIMPP::PU relec;  /* Steady-state droop, PU, for electrical power feedback (&lt;i&gt;Relec&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU rgate;  /* Steady-state droop, PU, for governor output feedback (&lt;i&gt;Rgate&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds td;  /* Input filter time constant (&lt;i&gt;Td&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tf;  /* Washout time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tp;  /* Gate servo time constant (&lt;i&gt;Tp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tt;  /* Power feedback time constant (&lt;i&gt;Tt&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds tw;  /* Water inertia time constant (&lt;i&gt;Tw&lt;/i&gt;) (&amp;gt;= 0).  If = 0, block is bypassed.  Typical value = 1. Default: nullptr */
		CIMPP::Float velcl;  /* Maximum gate closing velocity (&lt;i&gt;Velcl&lt;/i&gt;).  Unit = PU / s.  Typical value = -0,2. Default: 0.0 */
		CIMPP::Float velop;  /* Maximum gate opening velocity (&lt;i&gt;Velop&lt;/i&gt;).  Unit = PU / s. Typical value = 0,2. Default: 0.0 */

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

	BaseClass* GovHydro3_factory();
}
#endif
