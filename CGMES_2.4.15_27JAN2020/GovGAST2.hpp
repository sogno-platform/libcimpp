#ifndef GovGAST2_H
#define GovGAST2_H
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
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Temperature.hpp"

namespace CIMPP
{

	/** \brief Gas turbine model. */
	class GovGAST2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST2();
		~GovGAST2() override;

		/** \brief Valve positioner (A). Default: nullptr */
		CIMPP::Simple_Float a;

		/** \brief Exhaust temperature Parameter (Af1).  Unit = per unit temperature.  Based on temperature in degrees C. Default: nullptr */
		CIMPP::PU af1;

		/** \brief Coefficient equal to 0.5(1-speed) (Af2). Default: nullptr */
		CIMPP::PU af2;

		/** \brief Valve positioner (B). Default: nullptr */
		CIMPP::Simple_Float b;

		/** \brief (Bf1).  Bf1 = E(1-w) where E (speed sensitivity coefficient) is 0.55 to 0.65 x Tr.  Unit = per unit temperature.  Based on temperature in degrees C. Default: nullptr */
		CIMPP::PU bf1;

		/** \brief Turbine Torque Coefficient K (depends on heating value of fuel stream in combustion chamber) (Bf2). Default: nullptr */
		CIMPP::PU bf2;

		/** \brief Valve positioner (C). Default: nullptr */
		CIMPP::Simple_Float c;

		/** \brief Coefficient defining fuel flow where power output is 0% (Cf2).  Synchronous but no output.  Typically 0.23 x K (23% fuel flow). Default: nullptr */
		CIMPP::PU cf2;

		/** \brief Combustion reaction time delay (Ecr). Default: nullptr */
		CIMPP::Seconds ecr;

		/** \brief Turbine and exhaust delay (Etd). Default: nullptr */
		CIMPP::Seconds etd;

		/** \brief Ratio of Fuel Adjustment (K3). Default: nullptr */
		CIMPP::PU k3;

		/** \brief Gain of radiation shield (K4). Default: nullptr */
		CIMPP::PU k4;

		/** \brief Gain of radiation shield (K5). Default: nullptr */
		CIMPP::PU k5;

		/** \brief Minimum fuel flow (K6). Default: nullptr */
		CIMPP::PU k6;

		/** \brief Fuel system feedback (Kf). Default: nullptr */
		CIMPP::PU kf;

		/** \brief Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Fuel Control Time Constant (T). Default: nullptr */
		CIMPP::Seconds t;

		/** \brief Radiation shield time constant (T3). Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Thermocouple time constant (T4). Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Temperature control time constant (T5). Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Temperature control (Tc).  Unit = [SYMBOL REMOVED]F or [SYMBOL REMOVED]C depending on constants Af1 and Bf1. Default: nullptr */
		CIMPP::Temperature tc;

		/** \brief Compressor discharge time constant (Tcd). Default: nullptr */
		CIMPP::Seconds tcd;

		/** \brief Fuel system time constant (Tf). Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Maximum Turbine limit (Tmax). Default: nullptr */
		CIMPP::PU tmax;

		/** \brief Minimum Turbine limit (Tmin). Default: nullptr */
		CIMPP::PU tmin;

		/** \brief Rated temperature (Tr).  Unit = [SYMBOL REMOVED]C depending on parameters Af1 and Bf1. Default: nullptr */
		CIMPP::Temperature tr;

		/** \brief Turbine rating (Trate).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower trate;

		/** \brief Temperature controller integration rate (Tt). Default: nullptr */
		CIMPP::Seconds tt;

		/** \brief Governor gain (1/droop) on turbine rating (W). Default: nullptr */
		CIMPP::PU w;

		/** \brief Governor lead time constant (X). Default: nullptr */
		CIMPP::Seconds x;

		/** \brief Governor lag time constant (Y) (&gt;0). Default: nullptr */
		CIMPP::Seconds y;

		/** \brief Governor mode (Z). true = Droop false = ISO. Default: false */
		CIMPP::Boolean z;

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

	BaseClass* GovGAST2_factory();
}
#endif
