#ifndef GovHydroDD_H
#define GovHydroDD_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Double derivative hydro governor and turbine.
	*/
	class GovHydroDD : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroDD();
		~GovHydroDD() override;

		CIMPP::PU aturb;  /* Turbine numerator multiplier (Aturb) (note 3).  Typical Value = -1. Default: nullptr */
		CIMPP::PU bturb;  /* Turbine denominator multiplier (Bturb) (note 3).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Frequency db1;  /* Intentional dead-band width (db1).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::ActivePower db2;  /* Unintentional dead-band (db2).  Unit = MW.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency eps;  /* Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::PU gmax;  /* Maximum gate opening (Gmax).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gmin;  /* Minimum gate opening (Gmin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv1;  /* Nonlinear gain point 1, PU gv (Gv1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv2;  /* Nonlinear gain point 2, PU gv (Gv2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv3;  /* Nonlinear gain point 3, PU gv (Gv3).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv4;  /* Nonlinear gain point 4, PU gv (Gv4).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv5;  /* Nonlinear gain point 5, PU gv (Gv5).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv6;  /* Nonlinear gain point 6, PU gv (Gv6).  Typical Value = 0. Default: nullptr */
		CIMPP::Boolean inputSignal;  /* Input signal switch (Flag).  true = Pe input is used false = feedback is received from CV. Flag is normally dependent on Tt.  If Tf is zero, Flag is set to false. If Tf is not zero, Flag is set to true.   Typical Value = true. Default: false */
		CIMPP::PU k1;  /* Single derivative gain (K1).  Typical Value = 3.6. Default: nullptr */
		CIMPP::PU k2;  /* Double derivative gain (K2).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU kg;  /* Gate servo gain (Kg).  Typical Value = 3. Default: nullptr */
		CIMPP::PU ki;  /* Integral gain (Ki).  Typical Value = 1. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::PU pgv1;  /* Nonlinear gain point 1, PU power (Pgv1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv2;  /* Nonlinear gain point 2, PU power (Pgv2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv3;  /* Nonlinear gain point 3, PU power (Pgv3).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv4;  /* Nonlinear gain point 4, PU power (Pgv4).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv5;  /* Nonlinear gain point 5, PU power (Pgv5).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv6;  /* Nonlinear gain point 6, PU power (Pgv6).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pmax;  /* Maximum gate opening, PU of MWbase (Pmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU pmin;  /* Minimum gate opening, PU of MWbase (Pmin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU r;  /* Steady state droop (R).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds td;  /* Input filter time constant (Td).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tf;  /* Washout time constant (Tf).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tp;  /* Gate servo time constant (Tp).  Typical Value = 0.35. Default: nullptr */
		CIMPP::Seconds tt;  /* Power feedback time constant (Tt).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds tturb;  /* Turbine time constant (Tturb) (note 3).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Simple_Float velcl;  /* Maximum gate closing velocity (Velcl).  Unit = PU/sec.  Typical Value = -0.14. Default: nullptr */
		CIMPP::Simple_Float velop;  /* Maximum gate opening velocity (Velop).  Unit = PU/sec.  Typical Value = 0.09. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovHydroDD_factory();
}
#endif
