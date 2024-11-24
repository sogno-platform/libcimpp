#ifndef GovGAST2_H
#define GovGAST2_H
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
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Temperature.hpp"

namespace CIMPP
{

	/*
	Gas turbine model.
	*/
	class GovGAST2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST2();
		~GovGAST2() override;

		CIMPP::Simple_Float a;  /* Valve positioner (A). Default: nullptr */
		CIMPP::PU af1;  /* Exhaust temperature Parameter (Af1).  Unit = per unit temperature.  Based on temperature in degrees C. Default: nullptr */
		CIMPP::PU af2;  /* Coefficient equal to 0.5(1-speed) (Af2). Default: nullptr */
		CIMPP::Simple_Float b;  /* Valve positioner (B). Default: nullptr */
		CIMPP::PU bf1;  /* (Bf1).  Bf1 = E(1-w) where E (speed sensitivity coefficient) is 0.55 to 0.65 x Tr.  Unit = per unit temperature.  Based on temperature in degrees C. Default: nullptr */
		CIMPP::PU bf2;  /* Turbine Torque Coefficient K (depends on heating value of fuel stream in combustion chamber) (Bf2). Default: nullptr */
		CIMPP::Simple_Float c;  /* Valve positioner (C). Default: nullptr */
		CIMPP::PU cf2;  /* Coefficient defining fuel flow where power output is 0% (Cf2).  Synchronous but no output.  Typically 0.23 x K (23% fuel flow). Default: nullptr */
		CIMPP::Seconds ecr;  /* Combustion reaction time delay (Ecr). Default: nullptr */
		CIMPP::Seconds etd;  /* Turbine and exhaust delay (Etd). Default: nullptr */
		CIMPP::PU k3;  /* Ratio of Fuel Adjustment (K3). Default: nullptr */
		CIMPP::PU k4;  /* Gain of radiation shield (K4). Default: nullptr */
		CIMPP::PU k5;  /* Gain of radiation shield (K5). Default: nullptr */
		CIMPP::PU k6;  /* Minimum fuel flow (K6). Default: nullptr */
		CIMPP::PU kf;  /* Fuel system feedback (Kf). Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::Seconds t;  /* Fuel Control Time Constant (T). Default: nullptr */
		CIMPP::Seconds t3;  /* Radiation shield time constant (T3). Default: nullptr */
		CIMPP::Seconds t4;  /* Thermocouple time constant (T4). Default: nullptr */
		CIMPP::Seconds t5;  /* Temperature control time constant (T5). Default: nullptr */
		CIMPP::Temperature tc;  /* Temperature control (Tc).  Unit = [SYMBOL REMOVED]F or [SYMBOL REMOVED]C depending on constants Af1 and Bf1. Default: nullptr */
		CIMPP::Seconds tcd;  /* Compressor discharge time constant (Tcd). Default: nullptr */
		CIMPP::Seconds tf;  /* Fuel system time constant (Tf). Default: nullptr */
		CIMPP::PU tmax;  /* Maximum Turbine limit (Tmax). Default: nullptr */
		CIMPP::PU tmin;  /* Minimum Turbine limit (Tmin). Default: nullptr */
		CIMPP::Temperature tr;  /* Rated temperature (Tr).  Unit = [SYMBOL REMOVED]C depending on parameters Af1 and Bf1. Default: nullptr */
		CIMPP::ActivePower trate;  /* Turbine rating (Trate).  Unit = MW. Default: nullptr */
		CIMPP::Seconds tt;  /* Temperature controller integration rate (Tt). Default: nullptr */
		CIMPP::PU w;  /* Governor gain (1/droop) on turbine rating (W). Default: nullptr */
		CIMPP::Seconds x;  /* Governor lead time constant (X). Default: nullptr */
		CIMPP::Seconds y;  /* Governor lag time constant (Y) (&gt;0). Default: nullptr */
		CIMPP::Boolean z;  /* Governor mode (Z). true = Droop false = ISO. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovGAST2_factory();
}
#endif
