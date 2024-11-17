#ifndef GovHydroWEH_H
#define GovHydroWEH_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Boolean.hpp"
#include "ActivePower.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Woodward Electric Hydro Governor Model.
	*/
	class GovHydroWEH: public TurbineGovernorDynamics
	{

	public:
					CIMPP::PU db; 	/* Speed Dead Band (db). Default: nullptr */
					CIMPP::PU dicn; 	/* Value to allow the integral controller to advance beyond the gate limits (Dicn). Default: nullptr */
					CIMPP::PU dpv; 	/* Value to allow the Pilot valve controller to advance beyond the gate limits (Dpv). Default: nullptr */
					CIMPP::PU dturb; 	/* Turbine damping factor (Dturb).  Unit = delta P (PU of MWbase) / delta speed (PU). Default: nullptr */
					CIMPP::Boolean feedbackSignal; 	/* Feedback signal selection (Sw). true = PID Output (if R-Perm-Gate=droop and R-Perm-Pe=0) false = Electrical Power (if R-Perm-Gate=0 and R-Perm-Pe=droop) or false = Gate Position (if R-Perm-Gate=droop and R-Perm-Pe=0). Default: false */
					CIMPP::PU fl1; 	/* Flow Gate 1 (Fl1).  Flow value for gate position point 1 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
					CIMPP::PU fl2; 	/* Flow Gate 2 (Fl2).  Flow value for gate position point 2 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
					CIMPP::PU fl3; 	/* Flow Gate 3 (Fl3).  Flow value for gate position point 3 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
					CIMPP::PU fl4; 	/* Flow Gate 4 (Fl4).  Flow value for gate position point 4 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
					CIMPP::PU fl5; 	/* Flow Gate 5 (Fl5).  Flow value for gate position point 5 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
					CIMPP::PU fp1; 	/* Flow P1 (Fp1).  Turbine Flow value for point 1 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU fp10; 	/* Flow P10 (Fp10).  Turbine Flow value for point 10 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU fp2; 	/* Flow P2 (Fp2).  Turbine Flow value for point 2 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU fp3; 	/* Flow P3 (Fp3).  Turbine Flow value for point 3 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU fp4; 	/* Flow P4 (Fp4).  Turbine Flow value for point 4 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU fp5; 	/* Flow P5 (Fp5).  Turbine Flow value for point 5 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU fp6; 	/* Flow P6 (Fp6).  Turbine Flow value for point 6 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU fp7; 	/* Flow P7 (Fp7).  Turbine Flow value for point 7 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU fp8; 	/* Flow P8 (Fp8).  Turbine Flow value for point 8 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU fp9; 	/* Flow P9 (Fp9).  Turbine Flow value for point 9 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU gmax; 	/* Maximum Gate Position (Gmax). Default: nullptr */
					CIMPP::PU gmin; 	/* Minimum Gate Position (Gmin). Default: nullptr */
					CIMPP::PU gtmxcl; 	/* Maximum gate closing rate (Gtmxcl). Default: nullptr */
					CIMPP::PU gtmxop; 	/* Maximum gate opening rate (Gtmxop). Default: nullptr */
					CIMPP::PU gv1; 	/* Gate 1 (Gv1).  Gate Position value for point 1 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
					CIMPP::PU gv2; 	/* Gate 2 (Gv2).  Gate Position value for point 2 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
					CIMPP::PU gv3; 	/* Gate 3 (Gv3).  Gate Position value for point 3 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
					CIMPP::PU gv4; 	/* Gate 4 (Gv4).  Gate Position value for point 4 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
					CIMPP::PU gv5; 	/* Gate 5 (Gv5).  Gate Position value for point 5 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
					CIMPP::PU kd; 	/* Derivative controller derivative gain (Kd). Default: nullptr */
					CIMPP::PU ki; 	/* Derivative controller Integral gain (Ki). Default: nullptr */
					CIMPP::PU kp; 	/* Derivative control gain (Kp). Default: nullptr */
					CIMPP::ActivePower mwbase; 	/* Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
					CIMPP::PU pmss1; 	/* Pmss Flow P1 (Pmss1).  Mechanical Power output Pmss for Turbine Flow point 1 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU pmss10; 	/* Pmss Flow P10 (Pmss10).  Mechanical Power output Pmss for Turbine Flow point 10 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU pmss2; 	/* Pmss Flow P2 (Pmss2).  Mechanical Power output Pmss for Turbine Flow point 2 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU pmss3; 	/* Pmss Flow P3 (Pmss3).  Mechanical Power output Pmss for Turbine Flow point 3 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU pmss4; 	/* Pmss Flow P4 (Pmss4).  Mechanical Power output Pmss for Turbine Flow point 4 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU pmss5; 	/* Pmss Flow P5 (Pmss5).  Mechanical Power output Pmss for Turbine Flow point 5 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU pmss6; 	/* Pmss Flow P6 (Pmss6).  Mechanical Power output Pmss for Turbine Flow point 6 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU pmss7; 	/* Pmss Flow P7 (Pmss7).  Mechanical Power output Pmss for Turbine Flow point 7 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU pmss8; 	/* Pmss Flow P8 (Pmss8).  Mechanical Power output Pmss for Turbine Flow point 8 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::PU pmss9; 	/* Pmss Flow P9 (Pmss9).  Mechanical Power output Pmss for Turbine Flow point 9 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
					CIMPP::Simple_Float rpg; 	/* Permanent droop for governor output feedback (R-Perm-Gate). Default: nullptr */
					CIMPP::Simple_Float rpp; 	/* Permanent droop for electrical power feedback (R-Perm-Pe). Default: nullptr */
					CIMPP::Seconds td; 	/* Derivative controller time constant to limit the derivative characteristic beyond a breakdown frequency to avoid amplification of high-frequency noise (Td). Default: nullptr */
					CIMPP::Seconds tdv; 	/* Distributive Valve time lag time constant (Tdv). Default: nullptr */
					CIMPP::Seconds tg; 	/* Value to allow the Distribution valve controller to advance beyond the gate movement rate limit (Tg). Default: nullptr */
					CIMPP::Seconds tp; 	/* Pilot Valve time lag time constant (Tp). Default: nullptr */
					CIMPP::Seconds tpe; 	/* Electrical power droop time constant (Tpe). Default: nullptr */
					CIMPP::Seconds tw; 	/* Water inertia time constant (Tw) (&gt;0). Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		GovHydroWEH();
		virtual ~GovHydroWEH();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovHydroWEH_factory();
}
#endif
