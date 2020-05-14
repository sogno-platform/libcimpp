#ifndef GovSteamSGO_H
#define GovSteamSGO_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ActivePower.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

namespace CIMPP {


	/*
	Simplified Steam turbine governor model.
	*/
	class GovSteamSGO: public TurbineGovernorDynamics
	{

	public:
					CIMPP::ActivePower mwbase; 	/* Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
					CIMPP::Seconds t1; 	/* Controller lag (T1). Default: nullptr */
					CIMPP::Seconds t2; 	/* Controller lead compensation (T2). Default: nullptr */
					CIMPP::Seconds t3; 	/* Governor lag (T3) (&gt;0). Default: nullptr */
					CIMPP::Seconds t4; 	/* Delay due to steam inlet volumes associated with steam chest and inlet piping (T4). Default: nullptr */
					CIMPP::Seconds t5; 	/* Reheater delay including hot and cold leads (T5). Default: nullptr */
					CIMPP::Seconds t6; 	/* Delay due to IP-LP turbine, crossover pipes and LP end hoods (T6). Default: nullptr */
					CIMPP::PU k1; 	/* One/per unit regulation (K1). Default: nullptr */
					CIMPP::PU k2; 	/* Fraction (K2). Default: nullptr */
					CIMPP::PU k3; 	/* Fraction (K3). Default: nullptr */
					CIMPP::PU pmax; 	/* Upper power limit (Pmax). Default: nullptr */
					CIMPP::Seconds pmin; 	/* Lower power limit (Pmin). Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		GovSteamSGO();
		virtual ~GovSteamSGO();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovSteamSGO_factory();
}
#endif
