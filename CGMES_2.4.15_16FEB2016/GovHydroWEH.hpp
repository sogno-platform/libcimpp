#ifndef GovHydroWEH_H
#define GovHydroWEH_H
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
#include "CimClassDetails.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Woodward Electric Hydro Governor Model. */
	class GovHydroWEH : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroWEH();
		~GovHydroWEH() override;

		/** \brief Speed Dead Band (db). Default: nullptr */
		CIMPP::PU db;

		/** \brief Value to allow the integral controller to advance beyond the gate limits (Dicn). Default: nullptr */
		CIMPP::PU dicn;

		/** \brief Value to allow the Pilot valve controller to advance beyond the gate limits (Dpv). Default: nullptr */
		CIMPP::PU dpv;

		/** \brief Turbine damping factor (Dturb).  Unit = delta P (PU of MWbase) / delta speed (PU). Default: nullptr */
		CIMPP::PU dturb;

		/** \brief Feedback signal selection (Sw). true = PID Output (if R-Perm-Gate=droop and R-Perm-Pe=0) false = Electrical Power (if R-Perm-Gate=0 and R-Perm-Pe=droop) or false = Gate Position (if R-Perm-Gate=droop and R-Perm-Pe=0). Default: false */
		CIMPP::Boolean feedbackSignal;

		/** \brief Flow Gate 1 (Fl1).  Flow value for gate position point 1 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU fl1;

		/** \brief Flow Gate 2 (Fl2).  Flow value for gate position point 2 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU fl2;

		/** \brief Flow Gate 3 (Fl3).  Flow value for gate position point 3 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU fl3;

		/** \brief Flow Gate 4 (Fl4).  Flow value for gate position point 4 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU fl4;

		/** \brief Flow Gate 5 (Fl5).  Flow value for gate position point 5 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU fl5;

		/** \brief Flow P1 (Fp1).  Turbine Flow value for point 1 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp1;

		/** \brief Flow P10 (Fp10).  Turbine Flow value for point 10 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp10;

		/** \brief Flow P2 (Fp2).  Turbine Flow value for point 2 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp2;

		/** \brief Flow P3 (Fp3).  Turbine Flow value for point 3 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp3;

		/** \brief Flow P4 (Fp4).  Turbine Flow value for point 4 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp4;

		/** \brief Flow P5 (Fp5).  Turbine Flow value for point 5 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp5;

		/** \brief Flow P6 (Fp6).  Turbine Flow value for point 6 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp6;

		/** \brief Flow P7 (Fp7).  Turbine Flow value for point 7 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp7;

		/** \brief Flow P8 (Fp8).  Turbine Flow value for point 8 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp8;

		/** \brief Flow P9 (Fp9).  Turbine Flow value for point 9 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU fp9;

		/** \brief Maximum Gate Position (Gmax). Default: nullptr */
		CIMPP::PU gmax;

		/** \brief Minimum Gate Position (Gmin). Default: nullptr */
		CIMPP::PU gmin;

		/** \brief Maximum gate closing rate (Gtmxcl). Default: nullptr */
		CIMPP::PU gtmxcl;

		/** \brief Maximum gate opening rate (Gtmxop). Default: nullptr */
		CIMPP::PU gtmxop;

		/** \brief Gate 1 (Gv1).  Gate Position value for point 1 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU gv1;

		/** \brief Gate 2 (Gv2).  Gate Position value for point 2 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU gv2;

		/** \brief Gate 3 (Gv3).  Gate Position value for point 3 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU gv3;

		/** \brief Gate 4 (Gv4).  Gate Position value for point 4 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU gv4;

		/** \brief Gate 5 (Gv5).  Gate Position value for point 5 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: nullptr */
		CIMPP::PU gv5;

		/** \brief Derivative controller derivative gain (Kd). Default: nullptr */
		CIMPP::PU kd;

		/** \brief Derivative controller Integral gain (Ki). Default: nullptr */
		CIMPP::PU ki;

		/** \brief Derivative control gain (Kp). Default: nullptr */
		CIMPP::PU kp;

		/** \brief Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Pmss Flow P1 (Pmss1).  Mechanical Power output Pmss for Turbine Flow point 1 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss1;

		/** \brief Pmss Flow P10 (Pmss10).  Mechanical Power output Pmss for Turbine Flow point 10 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss10;

		/** \brief Pmss Flow P2 (Pmss2).  Mechanical Power output Pmss for Turbine Flow point 2 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss2;

		/** \brief Pmss Flow P3 (Pmss3).  Mechanical Power output Pmss for Turbine Flow point 3 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss3;

		/** \brief Pmss Flow P4 (Pmss4).  Mechanical Power output Pmss for Turbine Flow point 4 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss4;

		/** \brief Pmss Flow P5 (Pmss5).  Mechanical Power output Pmss for Turbine Flow point 5 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss5;

		/** \brief Pmss Flow P6 (Pmss6).  Mechanical Power output Pmss for Turbine Flow point 6 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss6;

		/** \brief Pmss Flow P7 (Pmss7).  Mechanical Power output Pmss for Turbine Flow point 7 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss7;

		/** \brief Pmss Flow P8 (Pmss8).  Mechanical Power output Pmss for Turbine Flow point 8 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss8;

		/** \brief Pmss Flow P9 (Pmss9).  Mechanical Power output Pmss for Turbine Flow point 9 for lookup table representing per unit mechanical power on machine MVA rating as a function of turbine flow. Default: nullptr */
		CIMPP::PU pmss9;

		/** \brief Permanent droop for governor output feedback (R-Perm-Gate). Default: nullptr */
		CIMPP::Simple_Float rpg;

		/** \brief Permanent droop for electrical power feedback (R-Perm-Pe). Default: nullptr */
		CIMPP::Simple_Float rpp;

		/** \brief Derivative controller time constant to limit the derivative characteristic beyond a breakdown frequency to avoid amplification of high-frequency noise (Td). Default: nullptr */
		CIMPP::Seconds td;

		/** \brief Distributive Valve time lag time constant (Tdv). Default: nullptr */
		CIMPP::Seconds tdv;

		/** \brief Value to allow the Distribution valve controller to advance beyond the gate movement rate limit (Tg). Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Pilot Valve time lag time constant (Tp). Default: nullptr */
		CIMPP::Seconds tp;

		/** \brief Electrical power droop time constant (Tpe). Default: nullptr */
		CIMPP::Seconds tpe;

		/** \brief Water inertia time constant (Tw) (&gt;0). Default: nullptr */
		CIMPP::Seconds tw;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* GovHydroWEH_factory();
}
#endif
