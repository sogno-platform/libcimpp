#ifndef TurbLCFB1_H
#define TurbLCFB1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineLoadControllerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Turbine load controller model developed by WECC.  This model represents a supervisory turbine load controller that acts to maintain turbine power at a set value by continuous adjustment of the turbine governor speed-load reference. This model is intended to represent slow reset 'outer loop' controllers managing the action of the turbine governor.
	*/
	class TurbLCFB1 : public TurbineLoadControllerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		TurbLCFB1();
		~TurbLCFB1() override;

		CIMPP::PU db;  /* Controller deadband (&lt;i&gt;db&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU emax;  /* Maximum control error (&lt;i&gt;Emax&lt;/i&gt;) (see parameter detail 4).  Typical value = 0,02. Default: nullptr */
		CIMPP::PU fb;  /* Frequency bias gain (&lt;i&gt;Fb&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::Boolean fbf;  /* Frequency bias flag (&lt;i&gt;Fbf&lt;/i&gt;). true = enable frequency bias false = disable frequency bias. Typical value = false. Default: false */
		CIMPP::PU irmax;  /* Maximum turbine speed/load reference bias (&lt;i&gt;Irmax&lt;/i&gt;) (see parameter detail 3).  Typical value = 0. Default: nullptr */
		CIMPP::PU ki;  /* Integral gain (&lt;i&gt;Ki&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kp;  /* Proportional gain (&lt;i&gt;Kp&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::Boolean pbf;  /* Power controller flag (&lt;i&gt;Pbf&lt;/i&gt;). true = enable load controller false = disable load controller. Typical value = false. Default: false */
		CIMPP::ActivePower pmwset;  /* Power controller setpoint (&lt;i&gt;Pmwset&lt;/i&gt;) (see parameter detail 1).  Unit = MW. Typical value = 0. Default: nullptr */
		CIMPP::Boolean speedReferenceGovernor;  /* Type of turbine governor reference (&lt;i&gt;Type&lt;/i&gt;). true = speed reference governor false = load reference governor. Typical value = true. Default: false */
		CIMPP::Seconds tpelec;  /* Power transducer time constant (&lt;i&gt;Tpelec&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */

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

	BaseClass* TurbLCFB1_factory();
}
#endif
