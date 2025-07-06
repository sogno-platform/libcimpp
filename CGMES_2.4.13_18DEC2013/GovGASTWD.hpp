#ifndef GovGASTWD_H
#define GovGASTWD_H
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
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Temperature.hpp"

namespace CIMPP
{

	/** \brief Woodward Gas turbine governor model. */
	class GovGASTWD : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGASTWD();
		~GovGASTWD() override;

		/** \brief Valve positioner (). Default: nullptr */
		CIMPP::Simple_Float a;

		/** \brief Exhaust temperature Parameter (Af1). Default: nullptr */
		CIMPP::PU af1;

		/** \brief Coefficient equal to 0.5(1-speed) (Af2). Default: nullptr */
		CIMPP::PU af2;

		/** \brief Valve positioner (). Default: nullptr */
		CIMPP::Simple_Float b;

		/** \brief (Bf1).  Bf1 = E(1-w) where E (speed sensitivity coefficient) is 0.55 to 0.65 x Tr. Default: nullptr */
		CIMPP::PU bf1;

		/** \brief Turbine Torque Coefficient K (depends on heating value of fuel stream in combustion chamber) (Bf2). Default: nullptr */
		CIMPP::PU bf2;

		/** \brief Valve positioner (). Default: nullptr */
		CIMPP::Simple_Float c;

		/** \brief Coefficient defining fuel flow where power output is 0% (Cf2).  Synchronous but no output.  Typically 0.23 x K(23% fuel flow). Default: nullptr */
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

		/** \brief Drop Governor Gain (Kd). Default: nullptr */
		CIMPP::PU kd;

		/** \brief (Kdroop). Default: nullptr */
		CIMPP::PU kdroop;

		/** \brief Fuel system feedback (Kf). Default: nullptr */
		CIMPP::PU kf;

		/** \brief Isochronous Governor Gain (Ki). Default: nullptr */
		CIMPP::PU ki;

		/** \brief PID Proportional gain (Kp). Default: nullptr */
		CIMPP::PU kp;

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

		/** \brief Temperature control (Tc). Default: nullptr */
		CIMPP::Temperature tc;

		/** \brief Compressor discharge time constant (Tcd). Default: nullptr */
		CIMPP::Seconds tcd;

		/** \brief Power transducer time constant (Td). Default: nullptr */
		CIMPP::Seconds td;

		/** \brief Fuel system time constant (Tf). Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Maximum Turbine limit (Tmax). Default: nullptr */
		CIMPP::PU tmax;

		/** \brief Minimum Turbine limit (Tmin). Default: nullptr */
		CIMPP::PU tmin;

		/** \brief Rated temperature (Tr). Default: nullptr */
		CIMPP::Temperature tr;

		/** \brief Turbine rating (Trate).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower trate;

		/** \brief Temperature controller integration rate (Tt). Default: nullptr */
		CIMPP::Seconds tt;

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

	BaseClass* GovGASTWD_factory();
}
#endif
