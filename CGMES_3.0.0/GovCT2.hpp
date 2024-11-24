#ifndef GovCT2_H
#define GovCT2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "DroopSignalFeedbackKind.hpp"
#include "Float.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	General governor with frequency-dependent fuel flow limit.  This model is a modification of the GovCT1<b> </b>model in order to represent the frequency-dependent fuel flow limit of a specific gas turbine manufacturer.
	*/
	class GovCT2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovCT2();
		~GovCT2() override;

		CIMPP::Float aset;  /* Acceleration limiter setpoint (&lt;i&gt;Aset&lt;/i&gt;).  Unit = PU / s.  Typical value = 10. Default: 0.0 */
		CIMPP::PU db;  /* Speed governor deadband in PU speed (&lt;i&gt;db&lt;/i&gt;).  In the majority of applications, it is recommended that this value be set to zero.  Typical value = 0. Default: nullptr */
		CIMPP::PU dm;  /* Speed sensitivity coefficient (&lt;i&gt;Dm&lt;/i&gt;).  &lt;i&gt;Dm&lt;/i&gt; can represent either the variation of the engine power with the shaft speed or the variation of maximum power capability with shaft speed.  If it is positive it describes the falling slope of the engine speed verses power characteristic as speed increases. A slightly falling characteristic is typical for reciprocating engines and some aero-derivative turbines.  If it is negative the engine power is assumed to be unaffected by the shaft speed, but the maximum permissible fuel flow is taken to fall with falling shaft speed. This is characteristic of single-shaft industrial turbines due to exhaust temperature limits.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency flim1;  /* Frequency threshold 1 (&lt;i&gt;Flim1&lt;/i&gt;).  Unit = Hz.  Typical value = 59. Default: nullptr */
		CIMPP::Frequency flim10;  /* Frequency threshold 10 (&lt;i&gt;Flim10&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency flim2;  /* Frequency threshold 2 (&lt;i&gt;Flim2&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency flim3;  /* Frequency threshold 3 (&lt;i&gt;Flim3&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency flim4;  /* Frequency threshold 4 (&lt;i&gt;Flim4&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency flim5;  /* Frequency threshold 5 (&lt;i&gt;Flim5&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency flim6;  /* Frequency threshold 6 (&lt;i&gt;Flim6&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency flim7;  /* Frequency threshold 7 (&lt;i&gt;Flim7&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency flim8;  /* Frequency threshold 8 (&lt;i&gt;Flim8&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency flim9;  /* Frequency threshold 9 (&lt;i&gt;Flim9&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::PU ka;  /* Acceleration limiter gain (&lt;i&gt;Ka&lt;/i&gt;).  Typical value = 10. Default: nullptr */
		CIMPP::PU kdgov;  /* Governor derivative gain (&lt;i&gt;Kdgov&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kigov;  /* Governor integral gain (&lt;i&gt;Kigov&lt;/i&gt;).  Typical value = 0,45. Default: nullptr */
		CIMPP::PU kiload;  /* Load limiter integral gain for PI controller (&lt;i&gt;Kiload&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kimw;  /* Power controller (reset) gain (&lt;i&gt;Kimw&lt;/i&gt;).  The default value of 0,01 corresponds to a reset time of 100 seconds.  A value of 0,001 corresponds to a relatively slow-acting load controller.  Typical value = 0. Default: nullptr */
		CIMPP::PU kpgov;  /* Governor proportional gain (&lt;i&gt;Kpgov&lt;/i&gt;).  Typical value = 4. Default: nullptr */
		CIMPP::PU kpload;  /* Load limiter proportional gain for PI controller (&lt;i&gt;Kpload&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kturb;  /* Turbine gain (&lt;i&gt;Kturb&lt;/i&gt;).  Typical value = 1,9168. Default: nullptr */
		CIMPP::PU ldref;  /* Load limiter reference value (&lt;i&gt;Ldref&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU maxerr;  /* Maximum value for speed error signal (&lt;i&gt;Maxerr&lt;/i&gt;) (&amp;gt; GovCT2.minerr).  Typical value = 1. Default: nullptr */
		CIMPP::PU minerr;  /* Minimum value for speed error signal (&lt;i&gt;Minerr&lt;/i&gt;) (&amp;lt; GovCT2.maxerr).  Typical value = -1. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU plim1;  /* Power limit 1 (&lt;i&gt;Plim1&lt;/i&gt;).  Typical value = 0,8325. Default: nullptr */
		CIMPP::PU plim10;  /* Power limit 10 (&lt;i&gt;Plim10&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU plim2;  /* Power limit 2 (Plim2).  Typical value = 0. Default: nullptr */
		CIMPP::PU plim3;  /* Power limit 3 (&lt;i&gt;Plim3&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU plim4;  /* Power limit 4 (&lt;i&gt;Plim4&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU plim5;  /* Power limit 5 (&lt;i&gt;Plim5&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU plim6;  /* Power limit 6 (&lt;i&gt;Plim6&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU plim7;  /* Power limit 7 (&lt;i&gt;Plim7&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU plim8;  /* Power limit 8 (&lt;i&gt;Plim8&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU plim9;  /* Power Limit 9 (&lt;i&gt;Plim9&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU prate;  /* Ramp rate for frequency-dependent power limit (&lt;i&gt;Prate&lt;/i&gt;).  Typical value = 0,017. Default: nullptr */
		CIMPP::PU r;  /* Permanent droop (&lt;i&gt;R&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::Float rclose;  /* Minimum valve closing rate (&lt;i&gt;Rclose&lt;/i&gt;).  Unit = PU / s.  Typical value = -99. Default: 0.0 */
		CIMPP::PU rdown;  /* Maximum rate of load limit decrease (&lt;i&gt;Rdown&lt;/i&gt;).  Typical value = -99. Default: nullptr */
		CIMPP::Float ropen;  /* Maximum valve opening rate (&lt;i&gt;Ropen&lt;/i&gt;).  Unit = PU / s.  Typical value = 99. Default: 0.0 */
		CIMPP::DroopSignalFeedbackKind rselect;  /* Feedback signal for droop (&lt;i&gt;Rselect&lt;/i&gt;).  Typical value = electricalPower. Default: 0 */
		CIMPP::PU rup;  /* Maximum rate of load limit increase (&lt;i&gt;Rup&lt;/i&gt;).  Typical value = 99. Default: nullptr */
		CIMPP::Seconds ta;  /* Acceleration limiter time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tact;  /* Actuator time constant (&lt;i&gt;Tact&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,4. Default: nullptr */
		CIMPP::Seconds tb;  /* Turbine lag time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tc;  /* Turbine lead time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tdgov;  /* Governor derivative controller time constant (&lt;i&gt;Tdgov&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds teng;  /* Transport time delay for diesel engine used in representing diesel engines where there is a small but measurable transport delay between a change in fuel flow setting and the development of torque (&lt;i&gt;Teng&lt;/i&gt;) (&amp;gt;= 0).  &lt;i&gt;Teng&lt;/i&gt; should be zero in all but special cases where this transport delay is of particular concern.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tfload;  /* Load limiter time constant (&lt;i&gt;Tfload&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3. Default: nullptr */
		CIMPP::Seconds tpelec;  /* Electrical power transducer time constant (&lt;i&gt;Tpelec&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2,5. Default: nullptr */
		CIMPP::Seconds tsa;  /* Temperature detection lead time constant (&lt;i&gt;Tsa&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tsb;  /* Temperature detection lag time constant (&lt;i&gt;Tsb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 50. Default: nullptr */
		CIMPP::PU vmax;  /* Maximum valve position limit (&lt;i&gt;Vmax&lt;/i&gt;) (&amp;gt; GovCT2.vmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU vmin;  /* Minimum valve position limit (&lt;i&gt;Vmin&lt;/i&gt;) (&amp;lt; GovCT2.vmax).  Typical value = 0,175. Default: nullptr */
		CIMPP::PU wfnl;  /* No load fuel flow (&lt;i&gt;Wfnl&lt;/i&gt;).  Typical value = 0,187. Default: nullptr */
		CIMPP::Boolean wfspd;  /* Switch for fuel source characteristic to recognize that fuel flow, for a given fuel valve stroke, can be proportional to engine speed (&lt;i&gt;Wfspd&lt;/i&gt;). true = fuel flow proportional to speed (for some gas turbines and diesel engines with positive displacement fuel injectors) false = fuel control system keeps fuel flow independent of engine speed. Typical value = false. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovCT2_factory();
}
#endif
