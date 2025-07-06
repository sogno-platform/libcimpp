#ifndef GovSteam1_H
#define GovSteam1_H
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
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Steam turbine governor model, based on the GovSteamIEEE1 model  (with optional deadband and nonlinear valve gain added). */
	class GovSteam1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteam1();
		~GovSteam1() override;

		/** \brief Intentional deadband width (db1).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency db1;

		/** \brief Unintentional deadband (db2).  Unit = MW.  Typical Value = 0. Default: nullptr */
		CIMPP::ActivePower db2;

		/** \brief Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency eps;

		/** \brief Nonlinear gain valve position point 1 (GV1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain valve position point 2 (GV2).  Typical Value = 0.4. Default: nullptr */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain valve position point 3 (GV3).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain valve position point 4 (GV4).  Typical Value = 0.6. Default: nullptr */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain valve position point 5 (GV5).  Typical Value = 1. Default: nullptr */
		CIMPP::PU gv5;

		/** \brief Nonlinear gain valve position point 6 (GV6).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv6;

		/** \brief Governor gain (reciprocal of droop) (K) (&gt;0).  Typical Value = 25. Default: nullptr */
		CIMPP::PU k;

		/** \brief Fraction of HP shaft power after first boiler pass (K1).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Simple_Float k1;

		/** \brief Fraction of LP shaft power after first boiler pass (K2).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float k2;

		/** \brief Fraction of HP shaft power after second boiler pass (K3).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Simple_Float k3;

		/** \brief Fraction of LP shaft power after second boiler pass (K4).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float k4;

		/** \brief Fraction of HP shaft power after third boiler pass (K5).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Simple_Float k5;

		/** \brief Fraction of LP shaft power after third boiler pass (K6).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float k6;

		/** \brief Fraction of HP shaft power after fourth boiler pass (K7).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float k7;

		/** \brief Fraction of LP shaft power after fourth boiler pass (K8).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float k8;

		/** \brief Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Nonlinear gain power value point 1 (Pgv1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv1;

		/** \brief Nonlinear gain power value point 2 (Pgv2).  Typical Value = 0.75. Default: nullptr */
		CIMPP::PU pgv2;

		/** \brief Nonlinear gain power value point 3 (Pgv3).  Typical Value = 0.91. Default: nullptr */
		CIMPP::PU pgv3;

		/** \brief Nonlinear gain power value point 4 (Pgv4).  Typical Value = 0.98. Default: nullptr */
		CIMPP::PU pgv4;

		/** \brief Nonlinear gain power value point 5 (Pgv5).  Typical Value = 1. Default: nullptr */
		CIMPP::PU pgv5;

		/** \brief Nonlinear gain power value point 6 (Pgv6).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv6;

		/** \brief Maximum valve opening (Pmax) (&gt; Pmin).  Typical Value = 1. Default: nullptr */
		CIMPP::PU pmax;

		/** \brief Minimum valve opening (Pmin) (&gt;=0).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pmin;

		/** \brief Intentional deadband indicator. true = intentional deadband is applied false = intentional deadband is not applied. Typical Value = true. Default: false */
		CIMPP::Boolean sdb1;

		/** \brief Unintentional deadband location. true = intentional deadband is applied before point `A` false = intentional deadband is applied after point `A`. Typical Value = true. Default: false */
		CIMPP::Boolean sdb2;

		/** \brief Governor lag time constant (T1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Governor lead time constant (T2).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Valve positioner time constant (T3(&gt;0).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Inlet piping/steam bowl time constant (T4).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Time constant of second boiler pass (T5).  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Time constant of third boiler pass (T6).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Time constant of fourth boiler pass (T7).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t7;

		/** \brief Maximum valve closing velocity (Uc) (&lt;0).  Unit = PU/sec.  Typical Value = -10. Default: nullptr */
		CIMPP::Simple_Float uc;

		/** \brief Maximum valve opening velocity (Uo) (&gt;0).  Unit = PU/sec.  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float uo;

		/** \brief Nonlinear valve characteristic. true = nonlinear valve characteristic is used false = nonlinear valve characteristic is not used. Typical Value = true. Default: false */
		CIMPP::Boolean valve;

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

	BaseClass* GovSteam1_factory();
}
#endif
