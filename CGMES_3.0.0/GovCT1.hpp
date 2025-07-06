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
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief General model for any prime mover with a PID governor, used primarily for combustion turbine and combined cycle units. This model can be used to represent a variety of prime movers controlled by PID governors.  It is suitable, for example, for the representation of:  <ul> 	<li>gas turbine and single shaft combined cycle turbines</li> </ul> <ul> 	<li>diesel engines with modern electronic or digital governors  </li> </ul> <ul> 	<li>steam turbines where steam is supplied from a large boiler drum or a large header whose pressure is substantially constant over the period under study</li> 	<li>simple hydro turbines in dam configurations where the water column length is short and water inertia effects are minimal.</li> </ul> Additional information on this model is available in the 2012 IEEE report, <i><u>Dynamic Models for Turbine-Governors in Power System Studies</u></i>, 3.1.2.3 pages 3-4 (GGOV1). */
	class GovCT1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovCT1();
		~GovCT1() override;

		/** \brief Acceleration limiter setpoint (&lt;i&gt;Aset&lt;/i&gt;).  Unit = PU / s.  Typical value = 0,01. Default: 0.0 */
		CIMPP::Float aset;

		/** \brief Speed governor deadband in PU speed (&lt;i&gt;db&lt;/i&gt;).  In the majority of applications, it is recommended that this value be set to zero.  Typical value = 0. Default: nullptr */
		CIMPP::PU db;

		/** \brief Speed sensitivity coefficient (&lt;i&gt;Dm&lt;/i&gt;).  &lt;i&gt;Dm&lt;/i&gt; can represent either the variation of the engine power with the shaft speed or the variation of maximum power capability with shaft speed.  If it is positive it describes the falling slope of the engine speed verses power characteristic as speed increases. A slightly falling characteristic is typical for reciprocating engines and some aero-derivative turbines.  If it is negative the engine power is assumed to be unaffected by the shaft speed, but the maximum permissible fuel flow is taken to fall with falling shaft speed. This is characteristic of single-shaft industrial turbines due to exhaust temperature limits.  Typical value = 0. Default: nullptr */
		CIMPP::PU dm;

		/** \brief Acceleration limiter gain (&lt;i&gt;Ka&lt;/i&gt;).  Typical value = 10. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Governor derivative gain (&lt;i&gt;Kdgov&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kdgov;

		/** \brief Governor integral gain (&lt;i&gt;Kigov&lt;/i&gt;).  Typical value = 2. Default: nullptr */
		CIMPP::PU kigov;

		/** \brief Load limiter integral gain for PI controller (&lt;i&gt;Kiload&lt;/i&gt;).  Typical value = 0,67. Default: nullptr */
		CIMPP::PU kiload;

		/** \brief Power controller (reset) gain (&lt;i&gt;Kimw&lt;/i&gt;).  The default value of 0,01 corresponds to a reset time of 100 s.  A value of 0,001 corresponds to a relatively slow-acting load controller.  Typical value = 0,01. Default: nullptr */
		CIMPP::PU kimw;

		/** \brief Governor proportional gain (&lt;i&gt;Kpgov&lt;/i&gt;).  Typical value = 10. Default: nullptr */
		CIMPP::PU kpgov;

		/** \brief Load limiter proportional gain for PI controller (&lt;i&gt;Kpload&lt;/i&gt;).  Typical value = 2. Default: nullptr */
		CIMPP::PU kpload;

		/** \brief Turbine gain (&lt;i&gt;Kturb&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,5. Default: nullptr */
		CIMPP::PU kturb;

		/** \brief Load limiter reference value (&lt;i&gt;Ldref&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ldref;

		/** \brief Maximum value for speed error signal (&lt;i&gt;maxerr&lt;/i&gt;) (&amp;gt; GovCT1.minerr).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU maxerr;

		/** \brief Minimum value for speed error signal (&lt;i&gt;minerr&lt;/i&gt;) (&amp;lt; GovCT1.maxerr).  Typical value = -0,05. Default: nullptr */
		CIMPP::PU minerr;

		/** \brief Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Permanent droop (&lt;i&gt;R&lt;/i&gt;).  Typical value = 0,04. Default: nullptr */
		CIMPP::PU r;

		/** \brief Minimum valve closing rate (&lt;i&gt;Rclose&lt;/i&gt;).  Unit = PU / s.  Typical value = -0,1. Default: 0.0 */
		CIMPP::Float rclose;

		/** \brief Maximum rate of load limit decrease (&lt;i&gt;Rdown&lt;/i&gt;).  Typical value = -99. Default: nullptr */
		CIMPP::PU rdown;

		/** \brief Maximum valve opening rate (&lt;i&gt;Ropen&lt;/i&gt;).  Unit = PU / s.  Typical value = 0.10. Default: 0.0 */
		CIMPP::Float ropen;

		/** \brief Feedback signal for droop (&lt;i&gt;Rselect&lt;/i&gt;).  Typical value = electricalPower. Default: 0 */
		CIMPP::DroopSignalFeedbackKind rselect;

		/** \brief Maximum rate of load limit increase (&lt;i&gt;Rup&lt;/i&gt;).  Typical value = 99. Default: nullptr */
		CIMPP::PU rup;

		/** \brief Acceleration limiter time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Actuator time constant (&lt;i&gt;Tact&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds tact;

		/** \brief Turbine lag time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Turbine lead time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Governor derivative controller time constant (&lt;i&gt;Tdgov&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tdgov;

		/** \brief Transport time delay for diesel engine used in representing diesel engines where there is a small but measurable transport delay between a change in fuel flow setting and the development of torque (&lt;i&gt;Teng&lt;/i&gt;) (&amp;gt;= 0).  &lt;i&gt;Teng&lt;/i&gt; should be zero in all but special cases where this transport delay is of particular concern.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds teng;

		/** \brief Load-limiter time constant (&lt;i&gt;Tfload&lt;/i&gt;) (&amp;gt; 0).  Typical value = 3. Default: nullptr */
		CIMPP::Seconds tfload;

		/** \brief Electrical power transducer time constant (&lt;i&gt;Tpelec&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tpelec;

		/** \brief Temperature detection lead time constant (&lt;i&gt;Tsa&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 4. Default: nullptr */
		CIMPP::Seconds tsa;

		/** \brief Temperature detection lag time constant (&lt;i&gt;Tsb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds tsb;

		/** \brief Maximum valve position limit (&lt;i&gt;Vmax&lt;/i&gt;) (&amp;gt; GovCT1.vmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU vmax;

		/** \brief Minimum valve position limit (&lt;i&gt;Vmin&lt;/i&gt;) (&amp;lt; GovCT1.vmax).  Typical value = 0,15. Default: nullptr */
		CIMPP::PU vmin;

		/** \brief No load fuel flow (&lt;i&gt;Wfnl&lt;/i&gt;).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU wfnl;

		/** \brief Switch for fuel source characteristic to recognize that fuel flow, for a given fuel valve stroke, can be proportional to engine speed (&lt;i&gt;Wfspd&lt;/i&gt;). true = fuel flow proportional to speed (for some gas turbines and diesel engines with positive displacement fuel injectors) false = fuel control system keeps fuel flow independent of engine speed. Typical value = true. Default: false */
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
