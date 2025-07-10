#ifndef GovGAST3_H
#define GovGAST3_H
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
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Temperature.hpp"

namespace CIMPP
{

	/** \brief Generic turbogas with acceleration and temperature controller. */
	class GovGAST3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST3();
		~GovGAST3() override;

		/** \brief Acceleration limit set-point (Bca).  Unit = 1/s.  Typical Value = 0.01. Default: nullptr */
		CIMPP::Simple_Float bca;

		/** \brief Droop (bp).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU bp;

		/** \brief Exhaust temperature variation due to fuel flow increasing from 0 to 1 PU (deltaTc).  Typical Value = 390. Default: nullptr */
		CIMPP::Temperature dtc;

		/** \brief Minimum fuel flow (Ka).  Typical Value = 0.23. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Fuel system feedback (K).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float kac;

		/** \brief Acceleration control integral gain (Kca). Unit = 1/s.  Typical Value = 100. Default: nullptr */
		CIMPP::Simple_Float kca;

		/** \brief Gain of radiation shield (Ksi).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Simple_Float ksi;

		/** \brief Coefficient of transfer function of fuel valve positioner (Ky).  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float ky;

		/** \brief Fuel flow maximum negative error value (MN).  Typical Value = -0.05. Default: nullptr */
		CIMPP::PU mnef;

		/** \brief Fuel flow maximum positive error value (MX).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU mxef;

		/** \brief Minimum fuel flow (RCMN).  Typical Value = -0.1. Default: nullptr */
		CIMPP::PU rcmn;

		/** \brief Maximum fuel flow (RCMX).  Typical Value = 1. Default: nullptr */
		CIMPP::PU rcmx;

		/** \brief Fuel control time constant (Tac).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tac;

		/** \brief Compressor discharge volume time constant (Tc).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Temperature controller derivative gain (Td).  Typical Value = 3.3. Default: nullptr */
		CIMPP::Seconds td;

		/** \brief Turbine rated exhaust temperature correspondent to Pm=1 PU (Tfen).  Typical Value = 540. Default: nullptr */
		CIMPP::Temperature tfen;

		/** \brief Time constant of speed governor (Tg).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Time constant of radiation shield (Tsi).  Typical Value = 15. Default: nullptr */
		CIMPP::Seconds tsi;

		/** \brief Temperature controller integration rate (Tt).  Typical Value = 250. Default: nullptr */
		CIMPP::Temperature tt;

		/** \brief Time constant of thermocouple (Ttc).  Typical Value = 2.5. Default: nullptr */
		CIMPP::Seconds ttc;

		/** \brief Time constant of fuel valve positioner (Ty).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds ty;

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

	BaseClass* GovGAST3_factory();
}
#endif
