#ifndef GovHydro3_H
#define GovHydro3_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE Hydro Governor-Turbine Model.  This model differs from that defined in the IEEE modeling guideline paper in that the limits on gate position and velocity do not permit "wind up" of the upstream signals. */
	class GovHydro3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro3();
		~GovHydro3() override;

		/** \brief Turbine gain (At).  Typical Value = 1.2. Default: nullptr */
		CIMPP::PU at;

		/** \brief Intentional dead-band width (db1).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (db2).  Unit = MW.  Typical Value = 0. Default: nullptr */
		CIMPP::ActivePower db2;

		/** \brief Turbine damping factor (Dturb).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU dturb;

		/** \brief Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency eps;

		/** \brief Governor control flag (Cflag). true = PID control is active false = double derivative control is active. Typical Value = true. Default: false */
		CIMPP::Boolean governorControl;

		/** \brief Nonlinear gain point 1, PU gv (Gv1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain point 2, PU gv (Gv2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain point 3, PU gv (Gv3).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain point 4, PU gv (Gv4).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain point 5, PU gv (Gv5).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv5;

		/** \brief Nonlinear gain point 6, PU gv (Gv6).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv6;

		/** \brief Turbine nominal head (H0).  Typical Value = 1. Default: nullptr */
		CIMPP::PU h0;

		/** \brief Derivative gain (K1).  Typical Value = 0.01. Default: nullptr */
		CIMPP::PU k1;

		/** \brief Double derivative gain, if Cflag = -1 (K2).  Typical Value = 2.5. Default: nullptr */
		CIMPP::PU k2;

		/** \brief Gate servo gain (Kg).  Typical Value = 2. Default: nullptr */
		CIMPP::PU kg;

		/** \brief Integral gain (Ki).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Nonlinear gain point 1, PU power (Pgv1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv1;

		/** \brief Nonlinear gain point 2, PU power (Pgv2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv2;

		/** \brief Nonlinear gain point 3, PU power (Pgv3).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv3;

		/** \brief Nonlinear gain point 4, PU power (Pgv4).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv4;

		/** \brief Nonlinear gain point 5, PU power (Pgv5).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv5;

		/** \brief Nonlinear gain point 6, PU power (Pgv6).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv6;

		/** \brief Maximum gate opening, PU of MWbase (Pmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU pmax;

		/** \brief Minimum gate opening, PU of MWbase (Pmin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pmin;

		/** \brief No-load turbine flow at nominal head (Qnl).  Typical Value = 0.08. Default: nullptr */
		CIMPP::PU qnl;

		/** \brief Steady-state droop, PU, for electrical power feedback (Relec).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU relec;

		/** \brief Steady-state droop, PU, for governor output feedback (Rgate).  Typical Value = 0. Default: nullptr */
		CIMPP::PU rgate;

		/** \brief Input filter time constant (Td).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds td;

		/** \brief Washout time constant (Tf).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Gate servo time constant (Tp).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds tp;

		/** \brief Power feedback time constant (Tt).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds tt;

		/** \brief Water inertia time constant (Tw).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tw;

		/** \brief Maximum gate closing velocity (Velcl).  Unit = PU/sec.  Typical Value = -0.2. Default: nullptr */
		CIMPP::Simple_Float velcl;

		/** \brief Maximum gate opening velocity (Velop).  Unit = PU/sec. Typical Value = 0.2. Default: nullptr */
		CIMPP::Simple_Float velop;

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* GovHydro3_factory();
}
#endif
