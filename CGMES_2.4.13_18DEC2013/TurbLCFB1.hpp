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
	Turbine Load Controller model developed in the WECC.  This model represents a supervisory turbine load controller that acts to maintain turbine power at a set value by continuous adjustment of the turbine governor speed-load reference. This model is intended to represent slow reset 'outer loop' controllers managing the action of the turbine governor.
	*/
	class TurbLCFB1 : public TurbineLoadControllerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		TurbLCFB1();
		~TurbLCFB1() override;

		CIMPP::PU db;  /* Controller dead band (db).  Typical Value = 0. Default: nullptr */
		CIMPP::PU emax;  /* Maximum control error (Emax) (note 4).  Typical Value = 0.02. Default: nullptr */
		CIMPP::PU fb;  /* Frequency bias gain (Fb).  Typical Value = 0. Default: nullptr */
		CIMPP::Boolean fbf;  /* Frequency bias flag (Fbf). true = enable frequency bias false = disable frequency bias. Typical Value = false. Default: false */
		CIMPP::PU irmax;  /* Maximum turbine speed/load reference bias (Irmax) (note 3).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ki;  /* Integral gain (Ki).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kp;  /* Proportional gain (Kp).  Typical Value = 0. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::Boolean pbf;  /* Power controller flag (Pbf). true = enable load controller false = disable load controller. Typical Value = false. Default: false */
		CIMPP::ActivePower pmwset;  /* Power controller setpoint (Pmwset) (note 1).  Unit = MW. Typical Value = 0. Default: nullptr */
		CIMPP::Boolean speedReferenceGovernor;  /* Type of turbine governor reference (Type). true = speed reference governor false = load reference governor. Typical Value = true. Default: false */
		CIMPP::Seconds tpelec;  /* Power transducer time constant (Tpelec).  Typical Value = 0. Default: nullptr */

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
