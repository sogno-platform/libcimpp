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
#include "CimClassDetails.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "DroopSignalFeedbackKind.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief General governor model with frequency-dependent fuel flow limit.  This model is a modification of the GovCT1model in order to represent the frequency-dependent fuel flow limit of a specific gas turbine manufacturer. */
	class GovCT2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovCT2();
		~GovCT2() override;

		/** \brief Acceleration limiter setpoint (Aset).  Unit = PU/sec.  Typical Value = 10. Default: nullptr */
		CIMPP::Simple_Float aset;

		/** \brief Speed governor dead band in per unit speed (db).  In the majority of applications, it is recommended that this value be set to zero.  Typical Value = 0. Default: nullptr */
		CIMPP::PU db;

		/** \brief Speed sensitivity coefficient (Dm).  Dm can represent either the variation of the engine power with the shaft speed or the variation of maximum power capability with shaft speed.  If it is positive it describes the falling slope of the engine speed verses power characteristic as speed increases. A slightly falling characteristic is typical for reciprocating engines and some aero-derivative turbines.  If it is negative the engine power is assumed to be unaffected by the shaft speed, but the maximum permissible fuel flow is taken to fall with falling shaft speed. This is characteristic of single-shaft industrial turbines due to exhaust temperature limits.  Typical Value = 0. Default: nullptr */
		CIMPP::PU dm;

		/** \brief Frequency threshold 1 (Flim1).  Unit = Hz.  Typical Value = 59. Default: nullptr */
		CIMPP::Frequency flim1;

		/** \brief Frequency threshold 10 (Flim10).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim10;

		/** \brief Frequency threshold 2 (Flim2).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim2;

		/** \brief Frequency threshold 3 (Flim3).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim3;

		/** \brief Frequency threshold 4 (Flim4).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim4;

		/** \brief Frequency threshold 5 (Flim5).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim5;

		/** \brief Frequency threshold 6 (Flim6).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim6;

		/** \brief Frequency threshold 7 (Flim7).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim7;

		/** \brief Frequency threshold 8 (Flim8).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim8;

		/** \brief Frequency threshold 9 (Flim9).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency flim9;

		/** \brief Acceleration limiter Gain (Ka).  Typical Value = 10. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Governor derivative gain (Kdgov).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kdgov;

		/** \brief Governor integral gain (Kigov).  Typical Value = 0.45. Default: nullptr */
		CIMPP::PU kigov;

		/** \brief Load limiter integral gain for PI controller (Kiload).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kiload;

		/** \brief Power controller (reset) gain (Kimw).  The default value of 0.01 corresponds to a reset time of 100 seconds.  A value of 0.001 corresponds to a relatively slow acting load controller.  Typical Value = 0. Default: nullptr */
		CIMPP::PU kimw;

		/** \brief Governor proportional gain (Kpgov).  Typical Value = 4. Default: nullptr */
		CIMPP::PU kpgov;

		/** \brief Load limiter proportional gain for PI controller (Kpload).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kpload;

		/** \brief Turbine gain (Kturb).  Typical Value = 1.9168. Default: nullptr */
		CIMPP::PU kturb;

		/** \brief Load limiter reference value (Ldref).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ldref;

		/** \brief Maximum value for speed error signal (Maxerr).  Typical Value = 1. Default: nullptr */
		CIMPP::PU maxerr;

		/** \brief Minimum value for speed error signal (Minerr).  Typical Value = -1. Default: nullptr */
		CIMPP::PU minerr;

		/** \brief Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Power limit 1 (Plim1).  Typical Value = 0.8325. Default: nullptr */
		CIMPP::PU plim1;

		/** \brief Power limit 10 (Plim10).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim10;

		/** \brief Power limit 2 (Plim2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim2;

		/** \brief Power limit 3 (Plim3).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim3;

		/** \brief Power limit 4 (Plim4).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim4;

		/** \brief Power limit 5 (Plim5).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim5;

		/** \brief Power limit 6 (Plim6).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim6;

		/** \brief Power limit 7 (Plim7).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim7;

		/** \brief Power limit 8 (Plim8).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim8;

		/** \brief Power Limit 9 (Plim9).  Typical Value = 0. Default: nullptr */
		CIMPP::PU plim9;

		/** \brief Ramp rate for frequency-dependent power limit (Prate).  Typical Value = 0.017. Default: nullptr */
		CIMPP::PU prate;

		/** \brief Permanent droop (R).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU r;

		/** \brief Minimum valve closing rate (Rclose).  Unit = PU/sec.  Typical Value = -99. Default: nullptr */
		CIMPP::Simple_Float rclose;

		/** \brief Maximum rate of load limit decrease (Rdown).  Typical Value = -99. Default: nullptr */
		CIMPP::PU rdown;

		/** \brief Maximum valve opening rate (Ropen).  Unit = PU/sec.  Typical Value = 99. Default: nullptr */
		CIMPP::Simple_Float ropen;

		/** \brief Feedback signal for droop (Rselect).  Typical Value = electricalPower. Default: 0 */
		CIMPP::DroopSignalFeedbackKind rselect;

		/** \brief Maximum rate of load limit increase (Rup).  Typical Value = 99. Default: nullptr */
		CIMPP::PU rup;

		/** \brief Acceleration limiter time constant (Ta).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Actuator time constant (Tact).  Typical Value = 0.4. Default: nullptr */
		CIMPP::Seconds tact;

		/** \brief Turbine lag time constant (Tb).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Turbine lead time constant (Tc).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Governor derivative controller time constant (Tdgov).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tdgov;

		/** \brief Transport time delay for diesel engine used in representing diesel engines where there is a small but measurable transport delay between a change in fuel flow setting and the development of torque (Teng).  Teng should be zero in all but special cases where this transport delay is of particular concern.  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds teng;

		/** \brief Load Limiter time constant (Tfload).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds tfload;

		/** \brief Electrical power transducer time constant (Tpelec).  Typical Value = 2.5. Default: nullptr */
		CIMPP::Seconds tpelec;

		/** \brief Temperature detection lead time constant (Tsa).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tsa;

		/** \brief Temperature detection lag time constant (Tsb).  Typical Value = 50. Default: nullptr */
		CIMPP::Seconds tsb;

		/** \brief Maximum valve position limit (Vmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vmax;

		/** \brief Minimum valve position limit (Vmin).  Typical Value = 0.175. Default: nullptr */
		CIMPP::PU vmin;

		/** \brief No load fuel flow (Wfnl).  Typical Value = 0.187. Default: nullptr */
		CIMPP::PU wfnl;

		/** \brief Switch for fuel source characteristic to recognize that fuel flow, for a given fuel valve stroke, can be proportional to engine speed (Wfspd). true = fuel flow proportional to speed (for some gas turbines and diesel engines with positive displacement fuel injectors) false = fuel control system keeps fuel flow independent of engine speed. Typical Value = false. Default: false */
		CIMPP::Boolean wfspd;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* GovCT2_factory();
}
#endif
