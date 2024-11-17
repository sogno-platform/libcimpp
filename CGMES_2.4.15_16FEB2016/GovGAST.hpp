#ifndef GovGAST_H
#define GovGAST_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "ActivePower.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Single shaft gas turbine.
	*/
	class GovGAST: public TurbineGovernorDynamics
	{

	public:
					CIMPP::PU at; 	/* Ambient temperature load limit (Load Limit).  Typical Value = 1. Default: nullptr */
					CIMPP::PU dturb; 	/* Turbine damping factor (Dturb).  Typical Value = 0.18. Default: nullptr */
					CIMPP::PU kt; 	/* Temperature limiter gain (Kt).  Typical Value = 3. Default: nullptr */
					CIMPP::ActivePower mwbase; 	/* Base for power values (MWbase) (&gt; 0). Default: nullptr */
					CIMPP::PU r; 	/* Permanent droop (R).  Typical Value = 0.04. Default: nullptr */
					CIMPP::Seconds t1; 	/* Governor mechanism time constant (T1).  T1 represents the natural valve positioning time constant of the governor for small disturbances, as seen when rate limiting is not in effect.  Typical Value = 0.5. Default: nullptr */
					CIMPP::Seconds t2; 	/* Turbine power time constant (T2).  T2 represents delay due to internal energy storage of the gas turbine engine. T2 can be used to give a rough approximation to the delay associated with acceleration of the compressor spool of a multi-shaft engine, or with the compressibility of gas in the plenum of a the free power turbine of an aero-derivative unit, for example.  Typical Value = 0.5. Default: nullptr */
					CIMPP::Seconds t3; 	/* Turbine exhaust temperature time constant (T3).  Typical Value = 3. Default: nullptr */
					CIMPP::PU vmax; 	/* Maximum turbine power, PU of MWbase (Vmax).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vmin; 	/* Minimum turbine power, PU of MWbase (Vmin).  Typical Value = 0. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		GovGAST();
		virtual ~GovGAST();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovGAST_factory();
}
#endif
