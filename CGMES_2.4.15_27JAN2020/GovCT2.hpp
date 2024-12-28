#ifndef GovCT2_H
#define GovCT2_H
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
#include "DroopSignalFeedbackKind.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	General governor model with frequency-dependent fuel flow limit.  This model is a modification of the GovCT1model in order to represent the frequency-dependent fuel flow limit of a specific gas turbine manufacturer.
	*/
	class GovCT2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovCT2();
		~GovCT2() override;

		CIMPP::Simple_Float aset;  /* Acceleration limiter setpoint (Aset).  Unit = PU/sec.  Typical Value = 10. Default: nullptr */
		CIMPP::PU db;  /* Speed governor dead band in per unit speed (db).  In the majority of applications, it is recommended that this value be set to zero.  Typical Value = 0. Default: nullptr */
		CIMPP::PU dm;  /* Speed sensitivity coefficient (Dm).  Dm can represent either the variation of the engine power with the shaft speed or the variation of maximum power capability with shaft speed.  If it is positive it describes the falling slope of the engine speed verses power characteristic as speed increases. A slightly falling characteristic is typical for reciprocating engines and some aero-derivative turbines.  If it is negative the engine power is assumed to be unaffected by the shaft speed, but the maximum permissible fuel flow is taken to fall with falling shaft speed. This is characteristic of single-shaft industrial turbines due to exhaust temperature limits.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim1;  /* Frequency threshold 1 (Flim1).  Unit = Hz.  Typical Value = 59. Default: nullptr */
		CIMPP::Frequency flim10;  /* Frequency threshold 10 (Flim10).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim2;  /* Frequency threshold 2 (Flim2).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim3;  /* Frequency threshold 3 (Flim3).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim4;  /* Frequency threshold 4 (Flim4).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim5;  /* Frequency threshold 5 (Flim5).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim6;  /* Frequency threshold 6 (Flim6).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim7;  /* Frequency threshold 7 (Flim7).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim8;  /* Frequency threshold 8 (Flim8).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim9;  /* Frequency threshold 9 (Flim9).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::PU ka;  /* Acceleration limiter Gain (Ka).  Typical Value = 10. Default: nullptr */
		CIMPP::PU kdgov;  /* Governor derivative gain (Kdgov).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kigov;  /* Governor integral gain (Kigov).  Typical Value = 0.45. Default: nullptr */
		CIMPP::PU kiload;  /* Load limiter integral gain for PI controller (Kiload).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kimw;  /* Power controller (reset) gain (Kimw).  The default value of 0.01 corresponds to a reset time of 100 seconds.  A value of 0.001 corresponds to a relatively slow acting load controller.  Typical Value = 0. Default: nullptr */
		CIMPP::PU kpgov;  /* Governor proportional gain (Kpgov).  Typical Value = 4. Default: nullptr */
		CIMPP::PU kpload;  /* Load limiter proportional gain for PI controller (Kpload).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kturb;  /* Turbine gain (Kturb).  Typical Value = 1.9168. Default: nullptr */
		CIMPP::PU ldref;  /* Load limiter reference value (Ldref).  Typical Value = 1. Default: nullptr */
		CIMPP::PU maxerr;  /* Maximum value for speed error signal (Maxerr).  Typical Value = 1. Default: nullptr */
		CIMPP::PU minerr;  /* Minimum value for speed error signal (Minerr).  Typical Value = -1. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU plim1;  /* Power limit 1 (Plim1).  Typical Value = 0.8325. Default: nullptr */
		CIMPP::PU plim10;  /* Power limit 10 (Plim10).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim2;  /* Power limit 2 (Plim2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim3;  /* Power limit 3 (Plim3).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim4;  /* Power limit 4 (Plim4).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim5;  /* Power limit 5 (Plim5).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim6;  /* Power limit 6 (Plim6).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim7;  /* Power limit 7 (Plim7).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim8;  /* Power limit 8 (Plim8).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim9;  /* Power Limit 9 (Plim9).  Typical Value = 0. Default: nullptr */
		CIMPP::PU prate;  /* Ramp rate for frequency-dependent power limit (Prate).  Typical Value = 0.017. Default: nullptr */
		CIMPP::PU r;  /* Permanent droop (R).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Simple_Float rclose;  /* Minimum valve closing rate (Rclose).  Unit = PU/sec.  Typical Value = -99. Default: nullptr */
		CIMPP::PU rdown;  /* Maximum rate of load limit decrease (Rdown).  Typical Value = -99. Default: nullptr */
		CIMPP::Simple_Float ropen;  /* Maximum valve opening rate (Ropen).  Unit = PU/sec.  Typical Value = 99. Default: nullptr */
		CIMPP::DroopSignalFeedbackKind rselect;  /* Feedback signal for droop (Rselect).  Typical Value = electricalPower. Default: 0 */
		CIMPP::PU rup;  /* Maximum rate of load limit increase (Rup).  Typical Value = 99. Default: nullptr */
		CIMPP::Seconds ta;  /* Acceleration limiter time constant (Ta).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tact;  /* Actuator time constant (Tact).  Typical Value = 0.4. Default: nullptr */
		CIMPP::Seconds tb;  /* Turbine lag time constant (Tb).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tc;  /* Turbine lead time constant (Tc).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tdgov;  /* Governor derivative controller time constant (Tdgov).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds teng;  /* Transport time delay for diesel engine used in representing diesel engines where there is a small but measurable transport delay between a change in fuel flow setting and the development of torque (Teng).  Teng should be zero in all but special cases where this transport delay is of particular concern.  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tfload;  /* Load Limiter time constant (Tfload).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds tpelec;  /* Electrical power transducer time constant (Tpelec).  Typical Value = 2.5. Default: nullptr */
		CIMPP::Seconds tsa;  /* Temperature detection lead time constant (Tsa).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tsb;  /* Temperature detection lag time constant (Tsb).  Typical Value = 50. Default: nullptr */
		CIMPP::PU vmax;  /* Maximum valve position limit (Vmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vmin;  /* Minimum valve position limit (Vmin).  Typical Value = 0.175. Default: nullptr */
		CIMPP::PU wfnl;  /* No load fuel flow (Wfnl).  Typical Value = 0.187. Default: nullptr */
		CIMPP::Boolean wfspd;  /* Switch for fuel source characteristic to recognize that fuel flow, for a given fuel valve stroke, can be proportional to engine speed (Wfspd). true = fuel flow proportional to speed (for some gas turbines and diesel engines with positive displacement fuel injectors) false = fuel control system keeps fuel flow independent of engine speed. Typical Value = false. Default: false */

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

	BaseClass* GovCT2_factory();
}
#endif
