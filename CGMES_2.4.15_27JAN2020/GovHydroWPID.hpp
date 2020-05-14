#ifndef GovHydroWPID_H
#define GovHydroWPID_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ActivePower.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

namespace CIMPP {


	/*
	Woodward PID Hydro Governor.
	*/
	class GovHydroWPID: public TurbineGovernorDynamics
	{

	public:
					CIMPP::ActivePower mwbase; 	/* Base for power values  (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
					CIMPP::Seconds treg; 	/* Speed detector time constant (Treg). Default: nullptr */
					CIMPP::PU reg; 	/* Permanent drop (Reg). Default: nullptr */
					CIMPP::PU kp; 	/* Proportional gain (Kp).  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU ki; 	/* Reset gain (Ki).  Typical Value = 0.36. Default: nullptr */
					CIMPP::PU kd; 	/* Derivative gain (Kd).  Typical Value = 1.11. Default: nullptr */
					CIMPP::Seconds ta; 	/* Controller time constant (Ta) (&gt;0).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tb; 	/* Gate servo time constant (Tb) (&gt;0).  Typical Value = 0. Default: nullptr */
					CIMPP::PU velmax; 	/* Maximum gate opening velocity (Velmax).  Unit = PU/sec.  Typical Value = 0. Default: nullptr */
					CIMPP::PU velmin; 	/* Maximum gate closing velocity (Velmin).  Unit = PU/sec.  Typical Value = 0. Default: nullptr */
					CIMPP::PU gatmax; 	/* Gate opening Limit Maximum (Gatmax). Default: nullptr */
					CIMPP::PU gatmin; 	/* Gate opening Limit Minimum (Gatmin). Default: nullptr */
					CIMPP::Seconds tw; 	/* Water inertia time constant (Tw) (&gt;0).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pmax; 	/* Maximum Power Output (Pmax). Default: nullptr */
					CIMPP::PU pmin; 	/* Minimum Power Output (Pmin). Default: nullptr */
					CIMPP::PU d; 	/* Turbine damping factor (D).  Unit = delta P / delta speed. Default: nullptr */
					CIMPP::PU gv3; 	/* Gate position 3 (Gv3). Default: nullptr */
					CIMPP::PU gv1; 	/* Gate position 1 (Gv1). Default: nullptr */
					CIMPP::PU pgv1; 	/* Output at Gv1 PU of MWbase (Pgv1). Default: nullptr */
					CIMPP::PU gv2; 	/* Gate position 2 (Gv2). Default: nullptr */
					CIMPP::PU pgv2; 	/* Output at Gv2 PU of MWbase (Pgv2). Default: nullptr */
					CIMPP::PU pgv3; 	/* Output at Gv3 PU of MWbase (Pgv3). Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		GovHydroWPID();
		virtual ~GovHydroWPID();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovHydroWPID_factory();
}
#endif
