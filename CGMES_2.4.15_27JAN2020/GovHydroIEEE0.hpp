#ifndef GovHydroIEEE0_H
#define GovHydroIEEE0_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "ActivePower.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	IEEE Simplified Hydro Governor-Turbine Model.  Used for Mechanical-Hydraulic and Electro-Hydraulic turbine governors, with our without steam feedback. Typical values given are for Mechanical-Hydraulic.  Ref
	*/
	class GovHydroIEEE0: public TurbineGovernorDynamics
	{

	public:
					CIMPP::PU k; 	/* Governor gain (K. Default: nullptr */
					CIMPP::ActivePower mwbase; 	/* Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
					CIMPP::PU pmax; 	/* Gate maximum (Pmax). Default: nullptr */
					CIMPP::PU pmin; 	/* Gate minimum (Pmin). Default: nullptr */
					CIMPP::Seconds t1; 	/* Governor lag time constant (T1).  Typical Value = 0.25. Default: nullptr */
					CIMPP::Seconds t2; 	/* Governor lead time constant (T2.  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t3; 	/* Gate actuator time constant (T3).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds t4; 	/* Water starting time (T4). Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		GovHydroIEEE0();
		virtual ~GovHydroIEEE0();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovHydroIEEE0_factory();
}
#endif
