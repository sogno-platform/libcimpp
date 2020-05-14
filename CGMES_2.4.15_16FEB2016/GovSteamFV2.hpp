#ifndef GovSteamFV2_H
#define GovSteamFV2_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Steam turbine governor with reheat time constants and modeling of the effects of fast valve closing to reduce mechanical power.
	*/
	class GovSteamFV2: public TurbineGovernorDynamics
	{

	public:
					CIMPP::ActivePower mwbase; 	/* Alternate Base used instead of Machine base in equipment model if necessary (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
					CIMPP::PU r; 	/* (R). Default: nullptr */
					CIMPP::Seconds t1; 	/* Governor time constant (T1). Default: nullptr */
					CIMPP::PU vmax; 	/* (Vmax). Default: nullptr */
					CIMPP::PU vmin; 	/* (Vmin). Default: nullptr */
					CIMPP::PU k; 	/* Fraction of the turbine power developed by turbine sections not involved in fast valving (K). Default: nullptr */
					CIMPP::Seconds t3; 	/* Reheater time constant (T3). Default: nullptr */
					CIMPP::PU dt; 	/* (Dt). Default: nullptr */
					CIMPP::Seconds tt; 	/* Time constant with which power falls off after intercept valve closure (Tt). Default: nullptr */
					CIMPP::Seconds ta; 	/* Time after initial time for valve to close (Ta). Default: nullptr */
					CIMPP::Seconds tb; 	/* Time after initial time for valve to begin opening (Tb). Default: nullptr */
					CIMPP::Seconds tc; 	/* Time after initial time for valve to become fully open (Tc). Default: nullptr */
					CIMPP::Seconds ti; 	/* Initial time to begin fast valving (Ti). Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		GovSteamFV2();
		virtual ~GovSteamFV2();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovSteamFV2_factory();
}
#endif
