#ifndef GovHydroWPID_H
#define GovHydroWPID_H
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

namespace CIMPP
{

	/** \brief Woodward PID Hydro Governor. */
	class GovHydroWPID : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroWPID();
		~GovHydroWPID() override;

		/** \brief Turbine damping factor (D).  Unit = delta P / delta speed. Default: nullptr */
		CIMPP::PU d;

		/** \brief Gate opening Limit Maximum (Gatmax). Default: nullptr */
		CIMPP::PU gatmax;

		/** \brief Gate opening Limit Minimum (Gatmin). Default: nullptr */
		CIMPP::PU gatmin;

		/** \brief Gate position 1 (Gv1). Default: nullptr */
		CIMPP::PU gv1;

		/** \brief Gate position 2 (Gv2). Default: nullptr */
		CIMPP::PU gv2;

		/** \brief Gate position 3 (Gv3). Default: nullptr */
		CIMPP::PU gv3;

		/** \brief Derivative gain (Kd).  Typical Value = 1.11. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Reset gain (Ki).  Typical Value = 0.36. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Proportional gain (Kp).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Base for power values  (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Output at Gv1 PU of MWbase (Pgv1). Default: nullptr */
		CIMPP::PU pgv1;

		/** \brief Output at Gv2 PU of MWbase (Pgv2). Default: nullptr */
		CIMPP::PU pgv2;

		/** \brief Output at Gv3 PU of MWbase (Pgv3). Default: nullptr */
		CIMPP::PU pgv3;

		/** \brief Maximum Power Output (Pmax). Default: nullptr */
		CIMPP::PU pmax;

		/** \brief Minimum Power Output (Pmin). Default: nullptr */
		CIMPP::PU pmin;

		/** \brief Permanent drop (Reg). Default: nullptr */
		CIMPP::PU reg;

		/** \brief Controller time constant (Ta) (&gt;0).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Gate servo time constant (Tb) (&gt;0).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Speed detector time constant (Treg). Default: nullptr */
		CIMPP::Seconds treg;

		/** \brief Water inertia time constant (Tw) (&gt;0).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tw;

		/** \brief Maximum gate opening velocity (Velmax).  Unit = PU/sec.  Typical Value = 0. Default: nullptr */
		CIMPP::PU velmax;

		/** \brief Maximum gate closing velocity (Velmin).  Unit = PU/sec.  Typical Value = 0. Default: nullptr */
		CIMPP::PU velmin;

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

	BaseClass* GovHydroWPID_factory();
}
#endif
