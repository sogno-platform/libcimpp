#ifndef GovCT1_H
#define GovCT1_H
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
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief General model for any prime mover with a PID governor, used primarily for combustion turbine and combined cycle units. This model can be used to represent a variety of prime movers controlled by PID governors.  It is suitable, for example, for representation of     Additional information on this model is available in the 2012 IEEE report, , section 3.1.2.3 page 3-4 (GGOV1). */
	class GovCT1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovCT1();
		~GovCT1() override;

		/** \brief Acceleration limiter setpoint (Aset).  Unit = PU/sec.  Typical Value = 0.01. Default: nullptr */
		CIMPP::Simple_Float aset;

		/** \brief Speed governor dead band in per unit speed (db).  In the majority of applications, it is recommended that this value be set to zero.  Typical Value = 0. Default: nullptr */
		CIMPP::PU db;

		/** \brief Speed sensitivity coefficient (Dm).  Dm can represent either the variation of the engine power with the shaft speed or the variation of maximum power capability with shaft speed.  If it is positive it describes the falling slope of the engine speed verses power characteristic as speed increases. A slightly falling characteristic is typical for reciprocating engines and some aero-derivative turbines.  If it is negative the engine power is assumed to be unaffected by the shaft speed, but the maximum permissible fuel flow is taken to fall with falling shaft speed. This is characteristic of single-shaft industrial turbines due to exhaust temperature limits.  Typical Value = 0. Default: nullptr */
		CIMPP::PU dm;

		/** \brief Acceleration limiter gain (Ka).  Typical Value = 10. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Governor derivative gain (Kdgov).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kdgov;

		/** \brief Governor integral gain (Kigov).  Typical Value = 2. Default: nullptr */
		CIMPP::PU kigov;

		/** \brief Load limiter integral gain for PI controller (Kiload).  Typical Value = 0.67. Default: nullptr */
		CIMPP::PU kiload;

		/** \brief Power controller (reset) gain (Kimw).  The default value of 0.01 corresponds to a reset time of 100 seconds.  A value of 0.001 corresponds to a relatively slow acting load controller.  Typical Value = 0.01. Default: nullptr */
		CIMPP::PU kimw;

		/** \brief Governor proportional gain (Kpgov).  Typical Value = 10. Default: nullptr */
		CIMPP::PU kpgov;

		/** \brief Load limiter proportional gain for PI controller (Kpload).  Typical Value = 2. Default: nullptr */
		CIMPP::PU kpload;

		/** \brief Turbine gain (Kturb) (&gt;0).  Typical Value = 1.5. Default: nullptr */
		CIMPP::PU kturb;

		/** \brief Load limiter reference value (Ldref).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ldref;

		/** \brief Maximum value for speed error signal (maxerr).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU maxerr;

		/** \brief Minimum value for speed error signal (minerr).  Typical Value = -0.05. Default: nullptr */
		CIMPP::PU minerr;

		/** \brief Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Power controller setpoint (Pmwset).  Unit = MW.  Typical Value = 80. Default: nullptr */
		CIMPP::ActivePower pmwset;

		/** \brief Permanent droop (R).  Typical Value = 0.04. Default: nullptr */
		CIMPP::PU r;

		/** \brief Minimum valve closing rate (Rclose).  Unit = PU/sec.  Typical Value = -0.1. Default: nullptr */
		CIMPP::Simple_Float rclose;

		/** \brief Maximum rate of load limit decrease (Rdown).  Typical Value = -99. Default: nullptr */
		CIMPP::PU rdown;

		/** \brief Maximum valve opening rate (Ropen).  Unit = PU/sec.  Typical Value = 0.10. Default: nullptr */
		CIMPP::Simple_Float ropen;

		/** \brief Feedback signal for droop (Rselect).  Typical Value = electricalPower. Default: 0 */
		CIMPP::DroopSignalFeedbackKind rselect;

		/** \brief Maximum rate of load limit increase (Rup).  Typical Value = 99. Default: nullptr */
		CIMPP::PU rup;

		/** \brief Acceleration limiter time constant (Ta) (&gt;0).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Actuator time constant (Tact).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tact;

		/** \brief Turbine lag time constant (Tb) (&gt;0).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Turbine lead time constant (Tc).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Governor derivative controller time constant (Tdgov).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tdgov;

		/** \brief Transport time delay for diesel engine used in representing diesel engines where there is a small but measurable transport delay between a change in fuel flow setting and the development of torque (Teng).  Teng should be zero in all but special cases where this transport delay is of particular concern.  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds teng;

		/** \brief Load Limiter time constant (Tfload) (&gt;0).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds tfload;

		/** \brief Electrical power transducer time constant (Tpelec) (&gt;0).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tpelec;

		/** \brief Temperature detection lead time constant (Tsa).  Typical Value = 4. Default: nullptr */
		CIMPP::Seconds tsa;

		/** \brief Temperature detection lag time constant (Tsb).  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds tsb;

		/** \brief Maximum valve position limit (Vmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vmax;

		/** \brief Minimum valve position limit (Vmin).  Typical Value = 0.15. Default: nullptr */
		CIMPP::PU vmin;

		/** \brief No load fuel flow (Wfnl).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU wfnl;

		/** \brief Switch for fuel source characteristic to recognize that fuel flow, for a given fuel valve stroke, can be proportional to engine speed (Wfspd). true = fuel flow proportional to speed (for some gas turbines and diesel engines with positive displacement fuel injectors) false = fuel control system keeps fuel flow independent of engine speed. Typical Value = true. Default: false */
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

	BaseClass* GovCT1_factory();
}
#endif
