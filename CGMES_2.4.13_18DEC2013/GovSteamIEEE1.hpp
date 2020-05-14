#ifndef GovSteamIEEE1_H
#define GovSteamIEEE1_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP {


	/*
	IEEE steam turbine governor model.  Ref
	*/
	class GovSteamIEEE1: public TurbineGovernorDynamics
	{

	public:
					CIMPP::ActivePower mwbase; 	/* Base for power values (MWbase) (&gt; 0) Default: nullptr */
					CIMPP::PU k; 	/* Governor gain (reciprocal of droop) (K) (&gt; 0).  Typical Value = 25. Default: nullptr */
					CIMPP::Seconds t1; 	/* Governor lag time constant (T1).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t2; 	/* Governor lead time constant (T2).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t3; 	/* Valve positioner time constant (T3) (&gt; 0).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Simple_Float uo; 	/* Maximum valve opening velocity (Uo) (&gt; 0).  Unit = PU/sec.  Typical Value = 1. Default: nullptr */
					CIMPP::Simple_Float uc; 	/* Maximum valve closing velocity (Uc) (&lt; 0).  Unit = PU/sec.  Typical Value = -10. Default: nullptr */
					CIMPP::PU pmax; 	/* Maximum valve opening (Pmax) (&gt; Pmin).  Typical Value = 1. Default: nullptr */
					CIMPP::PU pmin; 	/* Minimum valve opening (Pmin) (&gt;= 0).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t4; 	/* Inlet piping/steam bowl time constant (T4).  Typical Value = 0.3. Default: nullptr */
					CIMPP::Simple_Float k1; 	/* Fraction of HP shaft power after first boiler pass (K1).  Typical Value = 0.2. Default: nullptr */
					CIMPP::Simple_Float k2; 	/* Fraction of LP shaft power after first boiler pass (K2).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t5; 	/* Time constant of second boiler pass (T5).  Typical Value = 5. Default: nullptr */
					CIMPP::Simple_Float k3; 	/* Fraction of HP shaft power after second boiler pass (K3).  Typical Value = 0.3. Default: nullptr */
					CIMPP::Simple_Float k4; 	/* Fraction of LP shaft power after second boiler pass (K4).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t6; 	/* Time constant of third boiler pass (T6).  Typical Value = 0.5. Default: nullptr */
					CIMPP::Simple_Float k5; 	/* Fraction of HP shaft power after third boiler pass (K5).  Typical Value = 0.5. Default: nullptr */
					CIMPP::Simple_Float k6; 	/* Fraction of LP shaft power after third boiler pass (K6).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t7; 	/* Time constant of fourth boiler pass (T7).  Typical Value = 0. Default: nullptr */
					CIMPP::Simple_Float k7; 	/* Fraction of HP shaft power after fourth boiler pass (K7).  Typical Value = 0. Default: nullptr */
					CIMPP::Simple_Float k8; 	/* Fraction of LP shaft power after fourth boiler pass (K8).  Typical Value = 0. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		GovSteamIEEE1();
		virtual ~GovSteamIEEE1();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovSteamIEEE1_factory();
}
#endif
