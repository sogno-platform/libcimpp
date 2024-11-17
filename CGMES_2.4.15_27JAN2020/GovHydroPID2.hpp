#ifndef GovHydroPID2_H
#define GovHydroPID2_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "ActivePower.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Hydro turbine and governor. Represents plants with straight forward penstock configurations and "three term" electro-hydraulic governors (i.e. Woodard electronic).
	*/
	class GovHydroPID2: public TurbineGovernorDynamics
	{

	public:
					CIMPP::PU atw; 	/* Factor multiplying Tw (Atw).  Typical Value = 0. Default: nullptr */
					CIMPP::PU d; 	/* Turbine damping factor (D).  Unit = delta P / delta speed.  Typical Value = 0. Default: nullptr */
					CIMPP::Boolean feedbackSignal; 	/* Feedback signal type flag (Flag). true = use gate position feedback signal false = use Pe. Default: false */
					CIMPP::PU g0; 	/* Gate opening at speed no load (G0).  Typical Value = 0. Default: nullptr */
					CIMPP::PU g1; 	/* Intermediate gate opening (G1).  Typical Value = 0. Default: nullptr */
					CIMPP::PU g2; 	/* Intermediate gate opening (G2).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gmax; 	/* Maximum gate opening (Gmax).  Typical Value = 0. Default: nullptr */
					CIMPP::PU gmin; 	/* Minimum gate opening (Gmin).  Typical Value = 0. Default: nullptr */
					CIMPP::PU kd; 	/* Derivative gain (Kd).  Typical Value = 0. Default: nullptr */
					CIMPP::Simple_Float ki; 	/* Reset gain (Ki).  Unit = PU/ sec.  Typical Value = 0. Default: nullptr */
					CIMPP::PU kp; 	/* Proportional gain (Kp).  Typical Value = 0. Default: nullptr */
					CIMPP::ActivePower mwbase; 	/* Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
					CIMPP::PU p1; 	/* Power at gate opening G1 (P1).  Typical Value = 0. Default: nullptr */
					CIMPP::PU p2; 	/* Power at gate opening G2 (P2).  Typical Value = 0. Default: nullptr */
					CIMPP::PU p3; 	/* Power at full opened gate (P3).  Typical Value = 0. Default: nullptr */
					CIMPP::PU rperm; 	/* Permanent drop (Rperm).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ta; 	/* Controller time constant (Ta) (&gt;0).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tb; 	/* Gate servo time constant (Tb) (&gt;0).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds treg; 	/* Speed detector time constant (Treg).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tw; 	/* Water inertia time constant (Tw) (&gt;0).  Typical Value = 0. Default: nullptr */
					CIMPP::Simple_Float velmax; 	/* Maximum gate opening velocity (Velmax).  Unit = PU/sec.  Typical Value = 0. Default: nullptr */
					CIMPP::Simple_Float velmin; 	/* Maximum gate closing velocity (Velmin).  Unit = PU/sec.  Typical Value = 0. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		GovHydroPID2();
		virtual ~GovHydroPID2();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovHydroPID2_factory();
}
#endif
