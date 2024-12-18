#ifndef GovGAST1_H
#define GovGAST1_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "Frequency.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Modified single shaft gas turbine.
	*/
	class GovGAST1: public TurbineGovernorDynamics
	{

	public:
					CIMPP::Simple_Float a; 	/* Turbine power time constant numerator scale factor (a).  Typical Value = 0.8. Default: nullptr */
					CIMPP::Simple_Float b; 	/* Turbine power time constant denominator scale factor (b).  Typical Value = 1. Default: nullptr */
					CIMPP::Frequency db1; 	/* Intentional dead-band width (db1).  Unit = Hz.  Typical Value = 0. Default: nullptr */
					CIMPP::ActivePower db2; 	/* Unintentional dead-band (db2).  Unit = MW.  Typical Value = 0. Default: nullptr */
					CIMPP::Frequency eps; 	/* Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0. Default: nullptr */
					CIMPP::PU fidle; 	/* Fuel flow at zero power output (Fidle).  Typical Value = 0.18. Default: nullptr */
					CIMPP::PU gv1; 	/* Nonlinear gain point 1, PU gv (Gv1).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gv2; 	/* Nonlinear gain point 2,PU gv (Gv2).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gv3; 	/* Nonlinear gain point 3, PU gv (Gv3).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gv4; 	/* Nonlinear gain point 4, PU gv (Gv4).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gv5; 	/* Nonlinear gain point 5, PU gv (Gv5).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gv6; 	/* Nonlinear gain point 6, PU gv (Gv6).  Typical Value = 0. Default: nullptr */
					CIMPP::PU ka; 	/* Governor gain (Ka).  Typical Value = 0. Default: nullptr */
					CIMPP::PU kt; 	/* Temperature limiter gain (Kt).  Typical Value = 3. Default: nullptr */
					CIMPP::PU lmax; 	/* Ambient temperature load limit (Lmax).  Lmax is the turbine power output corresponding to the limiting exhaust gas temperature.  Typical Value = 1. Default: nullptr */
					CIMPP::PU loadinc; 	/* Valve position change allowed at fast rate (Loadinc).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Simple_Float ltrate; 	/* Maximum long term fuel valve opening rate (Ltrate).  Typical Value = 0.02. Default: nullptr */
					CIMPP::ActivePower mwbase; 	/* Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
					CIMPP::PU pgv1; 	/* Nonlinear gain point 1, PU power (Pgv1).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pgv2; 	/* Nonlinear gain point 2, PU power (Pgv2).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pgv3; 	/* Nonlinear gain point 3, PU power (Pgv3).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pgv4; 	/* Nonlinear gain point 4, PU power (Pgv4).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pgv5; 	/* Nonlinear gain point 5, PU power (Pgv5).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pgv6; 	/* Nonlinear gain point 6, PU power (Pgv6).  Typical Value = 0. Default: nullptr */
					CIMPP::PU r; 	/* Permanent droop (R).  Typical Value = 0.04. Default: nullptr */
					CIMPP::Simple_Float rmax; 	/* Maximum fuel valve opening rate (Rmax).  Unit = PU/sec.  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds t1; 	/* Governor mechanism time constant (T1).  T1 represents the natural valve positioning time constant of the governor for small disturbances, as seen when rate limiting is not in effect.  Typical Value = 0.5. Default: nullptr */
					CIMPP::Seconds t2; 	/* Turbine power time constant (T2).  T2 represents delay due to internal energy storage of the gas turbine engine. T2 can be used to give a rough approximation to the delay associated with acceleration of the compressor spool of a multi-shaft engine, or with the compressibility of gas in the plenum of the free power turbine of an aero-derivative unit, for example.  Typical Value = 0.5. Default: nullptr */
					CIMPP::Seconds t3; 	/* Turbine exhaust temperature time constant (T3).  T3 represents delay in the exhaust temperature and load limiting system. Typical Value = 3. Default: nullptr */
					CIMPP::Seconds t4; 	/* Governor lead time constant (T4).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t5; 	/* Governor lag time constant (T5).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tltr; 	/* Valve position averaging time constant (Tltr).  Typical Value = 10. Default: nullptr */
					CIMPP::PU vmax; 	/* Maximum turbine power, PU of MWbase (Vmax).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vmin; 	/* Minimum turbine power, PU of MWbase (Vmin).  Typical Value = 0. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		GovGAST1();
		virtual ~GovGAST1();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovGAST1_factory();
}
#endif
