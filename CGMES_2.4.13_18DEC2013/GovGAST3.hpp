#ifndef GovGAST3_H
#define GovGAST3_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Temperature.hpp"

namespace CIMPP
{

	/*
	Generic turbogas with acceleration and temperature controller.
	*/
	class GovGAST3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST3();
		~GovGAST3() override;

		CIMPP::Simple_Float bca;  /* Acceleration limit set-point (Bca).  Unit = 1/s.  Typical Value = 0.01. Default: nullptr */
		CIMPP::PU bp;  /* Droop (bp).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Temperature dtc;  /* Exhaust temperature variation due to fuel flow increasing from 0 to 1 PU (deltaTc).  Typical Value = 390. Default: nullptr */
		CIMPP::PU ka;  /* Minimum fuel flow (Ka).  Typical Value = 0.23. Default: nullptr */
		CIMPP::Simple_Float kac;  /* Fuel system feedback (K).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float kca;  /* Acceleration control integral gain (Kca). Unit = 1/s.  Typical Value = 100. Default: nullptr */
		CIMPP::Simple_Float ksi;  /* Gain of radiation shield (Ksi).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Simple_Float ky;  /* Coefficient of transfer function of fuel valve positioner (Ky).  Typical Value = 1. Default: nullptr */
		CIMPP::PU mnef;  /* Fuel flow maximum negative error value (MN).  Typical Value = -0.05. Default: nullptr */
		CIMPP::PU mxef;  /* Fuel flow maximum positive error value (MX).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU rcmn;  /* Minimum fuel flow (RCMN).  Typical Value = -0.1. Default: nullptr */
		CIMPP::PU rcmx;  /* Maximum fuel flow (RCMX).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tac;  /* Fuel control time constant (Tac).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tc;  /* Compressor discharge volume time constant (Tc).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds td;  /* Temperature controller derivative gain (Td).  Typical Value = 3.3. Default: nullptr */
		CIMPP::Temperature tfen;  /* Turbine rated exhaust temperature correspondent to Pm=1 PU (Tfen).  Typical Value = 540. Default: nullptr */
		CIMPP::Seconds tg;  /* Time constant of speed governor (Tg).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds tsi;  /* Time constant of radiation shield (Tsi).  Typical Value = 15. Default: nullptr */
		CIMPP::Temperature tt;  /* Temperature controller integration rate (Tt).  Typical Value = 250. Default: nullptr */
		CIMPP::Seconds ttc;  /* Time constant of thermocouple (Ttc).  Typical Value = 2.5. Default: nullptr */
		CIMPP::Seconds ty;  /* Time constant of fuel valve positioner (Ty).  Typical Value = 0.2. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovGAST3_factory();
}
#endif
