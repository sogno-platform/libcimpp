#ifndef GovHydro4_H
#define GovHydro4_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Hydro turbine and governor. Represents plants with straight-forward penstock configurations and hydraulic governors of traditional 'dashpot' type.  This model can be used to represent simple, Francis, Pelton or Kaplan turbines.
	*/
	class GovHydro4 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro4();
		~GovHydro4() override;

		CIMPP::PU at;  /* Turbine gain (At).  Typical Value = 1.2. Default: nullptr */
		CIMPP::PU bgv0;  /* Kaplan blade servo point 0 (Bgv0).  Typical Value = 0. Default: nullptr */
		CIMPP::PU bgv1;  /* Kaplan blade servo point 1 (Bgv1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU bgv2;  /* Kaplan blade servo point 2 (Bgv2). Typical Value = 0.  Typical Value Francis = 0, Kaplan = 0.1. Default: nullptr */
		CIMPP::PU bgv3;  /* Kaplan blade servo point 3 (Bgv3). Typical Value = 0.  Typical Value Francis = 0, Kaplan = 0.667. Default: nullptr */
		CIMPP::PU bgv4;  /* Kaplan blade servo point 4 (Bgv4).  Typical Value = 0.  Typical Value Francis = 0, Kaplan = 0.9. Default: nullptr */
		CIMPP::PU bgv5;  /* Kaplan blade servo point 5 (Bgv5). Typical Value = 0.  Typical Value Francis = 0, Kaplan = 1. Default: nullptr */
		CIMPP::Simple_Float bmax;  /* Maximum blade adjustment factor (Bmax). Typical Value = 0.  Typical Value Francis = 0, Kaplan = 1.1276. Default: nullptr */
		CIMPP::Frequency db1;  /* Intentional deadband width (db1).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::ActivePower db2;  /* Unintentional dead-band (db2).  Unit = MW.  Typical Value = 0. Default: nullptr */
		CIMPP::PU dturb;  /* Turbine damping factor (Dturb).  Unit = delta P (PU of MWbase) / delta speed (PU). Typical Value = 0.5.  Typical Value Francis = 1.1, Kaplan = 1.1. Default: nullptr */
		CIMPP::Frequency eps;  /* Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::PU gmax;  /* Maximum gate opening, PU of MWbase (Gmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU gmin;  /* Minimum gate opening, PU of MWbase (Gmin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv0;  /* Nonlinear gain point 0, PU gv (Gv0). Typical Value = 0.  Typical Value Francis = 0.1, Kaplan = 0.1. Default: nullptr */
		CIMPP::PU gv1;  /* Nonlinear gain point 1, PU gv (Gv1). Typical Value = 0.  Typical Value Francis = 0.4, Kaplan = 0.4. Default: nullptr */
		CIMPP::PU gv2;  /* Nonlinear gain point 2, PU gv (Gv2). Typical Value = 0.  Typical Value Francis = 0.5, Kaplan = 0.5. Default: nullptr */
		CIMPP::PU gv3;  /* Nonlinear gain point 3, PU gv (Gv3). Typical Value = 0.  Typical Value Francis = 0.7, Kaplan = 0.7. Default: nullptr */
		CIMPP::PU gv4;  /* Nonlinear gain point 4, PU gv (Gv4). Typical Value = 0.  Typical Value Francis = 0.8, Kaplan = 0.8. Default: nullptr */
		CIMPP::PU gv5;  /* Nonlinear gain point 5, PU gv (Gv5). Typical Value = 0.  Typical Value Francis = 0.9, Kaplan = 0.9. Default: nullptr */
		CIMPP::PU hdam;  /* Head available at dam (hdam).  Typical Value = 1. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::PU pgv0;  /* Nonlinear gain point 0, PU power (Pgv0).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv1;  /* Nonlinear gain point 1, PU power (Pgv1). Typical Value = 0.  Typical Value Francis = 0.42, Kaplan = 0.35. Default: nullptr */
		CIMPP::PU pgv2;  /* Nonlinear gain point 2, PU power (Pgv2). Typical Value = 0.  Typical Value Francis = 0.56, Kaplan = 0.468. Default: nullptr */
		CIMPP::PU pgv3;  /* Nonlinear gain point 3, PU power (Pgv3). Typical Value = 0.  Typical Value Francis = 0.8, Kaplan = 0.796. Default: nullptr */
		CIMPP::PU pgv4;  /* Nonlinear gain point 4, PU power (Pgv4). Typical Value = 0.  Typical Value Francis = 0.9, Kaplan = 0.917. Default: nullptr */
		CIMPP::PU pgv5;  /* Nonlinear gain point 5, PU power (Pgv5).  Typical Value = 0.  Typical Value Francis = 0.97, Kaplan = 0.99. Default: nullptr */
		CIMPP::PU qn1;  /* No-load flow at nominal head (Qnl). Typical Value = 0.08.  Typical Value Francis = 0, Kaplan = 0. Default: nullptr */
		CIMPP::Seconds rperm;  /* Permanent droop (Rperm).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds rtemp;  /* Temporary droop (Rtemp).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Seconds tblade;  /* Blade servo time constant (Tblade).  Typical Value = 100. Default: nullptr */
		CIMPP::Seconds tg;  /* Gate servo time constant (Tg) (&gt;0).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tp;  /* Pilot servo time constant (Tp).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tr;  /* Dashpot time constant (Tr) (&gt;0).  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds tw;  /* Water inertia time constant (Tw) (&gt;0).  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float uc;  /* Max gate closing velocity (Uc).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Simple_Float uo;  /* Max gate opening velocity (Uo).  Typical Vlaue = 0.2. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovHydro4_factory();
}
#endif
