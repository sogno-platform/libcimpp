#ifndef GovSteam1_H
#define GovSteam1_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Frequency.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Steam turbine governor model, based on the GovSteamIEEE1 model  (with optional deadband and nonlinear valve gain added).
	*/
	class GovSteam1: public TurbineGovernorDynamics
	{

	public:
					CIMPP::Frequency db1; 	/* Intentional deadband width (db1).  Unit = Hz.  Typical Value = 0. Default: nullptr */
					CIMPP::ActivePower db2; 	/* Unintentional deadband (db2).  Unit = MW.  Typical Value = 0. Default: nullptr */
					CIMPP::Frequency eps; 	/* Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0. Default: nullptr */
					CIMPP::PU gv1; 	/* Nonlinear gain valve position point 1 (GV1).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gv2; 	/* Nonlinear gain valve position point 2 (GV2).  Typical Value = 0.4. Default: nullptr */
					CIMPP::PU gv3; 	/* Nonlinear gain valve position point 3 (GV3).  Typical Value = 0.5. Default: nullptr */
					CIMPP::PU gv4; 	/* Nonlinear gain valve position point 4 (GV4).  Typical Value = 0.6. Default: nullptr */
					CIMPP::PU gv5; 	/* Nonlinear gain valve position point 5 (GV5).  Typical Value = 1. Default: nullptr */
					CIMPP::PU gv6; 	/* Nonlinear gain valve position point 6 (GV6).  Typical Value = 0. Default: nullptr */
					CIMPP::PU k; 	/* Governor gain (reciprocal of droop) (K) (&gt;0).  Typical Value = 25. Default: nullptr */
					CIMPP::Simple_Float k1; 	/* Fraction of HP shaft power after first boiler pass (K1).  Typical Value = 0.2. Default: nullptr */
					CIMPP::Simple_Float k2; 	/* Fraction of LP shaft power after first boiler pass (K2).  Typical Value = 0. Default: nullptr */
					CIMPP::Simple_Float k3; 	/* Fraction of HP shaft power after second boiler pass (K3).  Typical Value = 0.3. Default: nullptr */
					CIMPP::Simple_Float k4; 	/* Fraction of LP shaft power after second boiler pass (K4).  Typical Value = 0. Default: nullptr */
					CIMPP::Simple_Float k5; 	/* Fraction of HP shaft power after third boiler pass (K5).  Typical Value = 0.5. Default: nullptr */
					CIMPP::Simple_Float k6; 	/* Fraction of LP shaft power after third boiler pass (K6).  Typical Value = 0. Default: nullptr */
					CIMPP::Simple_Float k7; 	/* Fraction of HP shaft power after fourth boiler pass (K7).  Typical Value = 0. Default: nullptr */
					CIMPP::Simple_Float k8; 	/* Fraction of LP shaft power after fourth boiler pass (K8).  Typical Value = 0. Default: nullptr */
					CIMPP::ActivePower mwbase; 	/* Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
					CIMPP::PU pgv1; 	/* Nonlinear gain power value point 1 (Pgv1).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pgv2; 	/* Nonlinear gain power value point 2 (Pgv2).  Typical Value = 0.75. Default: nullptr */
					CIMPP::PU pgv3; 	/* Nonlinear gain power value point 3 (Pgv3).  Typical Value = 0.91. Default: nullptr */
					CIMPP::PU pgv4; 	/* Nonlinear gain power value point 4 (Pgv4).  Typical Value = 0.98. Default: nullptr */
					CIMPP::PU pgv5; 	/* Nonlinear gain power value point 5 (Pgv5).  Typical Value = 1. Default: nullptr */
					CIMPP::PU pgv6; 	/* Nonlinear gain power value point 6 (Pgv6).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pmax; 	/* Maximum valve opening (Pmax) (&gt; Pmin).  Typical Value = 1. Default: nullptr */
					CIMPP::PU pmin; 	/* Minimum valve opening (Pmin) (&gt;=0).  Typical Value = 0. Default: nullptr */
					CIMPP::Boolean sdb1; 	/* Intentional deadband indicator. true = intentional deadband is applied false = intentional deadband is not applied. Typical Value = true. Default: false */
					CIMPP::Boolean sdb2; 	/* Unintentional deadband location. true = intentional deadband is applied before point `A` false = intentional deadband is applied after point `A`. Typical Value = true. Default: false */
					CIMPP::Seconds t1; 	/* Governor lag time constant (T1).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t2; 	/* Governor lead time constant (T2).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t3; 	/* Valve positioner time constant (T3(&gt;0).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds t4; 	/* Inlet piping/steam bowl time constant (T4).  Typical Value = 0.3. Default: nullptr */
					CIMPP::Seconds t5; 	/* Time constant of second boiler pass (T5).  Typical Value = 5. Default: nullptr */
					CIMPP::Seconds t6; 	/* Time constant of third boiler pass (T6).  Typical Value = 0.5. Default: nullptr */
					CIMPP::Seconds t7; 	/* Time constant of fourth boiler pass (T7).  Typical Value = 0. Default: nullptr */
					CIMPP::Simple_Float uc; 	/* Maximum valve closing velocity (Uc) (&lt;0).  Unit = PU/sec.  Typical Value = -10. Default: nullptr */
					CIMPP::Simple_Float uo; 	/* Maximum valve opening velocity (Uo) (&gt;0).  Unit = PU/sec.  Typical Value = 1. Default: nullptr */
					CIMPP::Boolean valve; 	/* Nonlinear valve characteristic. true = nonlinear valve characteristic is used false = nonlinear valve characteristic is not used. Typical Value = true. Default: false */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		GovSteam1();
		virtual ~GovSteam1();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovSteam1_factory();
}
#endif
