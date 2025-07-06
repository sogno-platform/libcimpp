#ifndef GovSteamIEEE1_H
#define GovSteamIEEE1_H
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

namespace CIMPP
{

	/** \brief IEEE steam turbine governor model.  Ref */
	class GovSteamIEEE1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamIEEE1();
		~GovSteamIEEE1() override;

		/** \brief Governor gain (reciprocal of droop) (K) (&gt; 0).  Typical Value = 25. Default: nullptr */
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

		/** \brief Base for power values (MWbase) (&gt; 0) Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Maximum valve opening (Pmax) (&gt; Pmin).  Typical Value = 1. Default: nullptr */
		CIMPP::PU pmax;

		/** \brief Minimum valve opening (Pmin) (&gt;= 0).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pmin;

		/** \brief Governor lag time constant (T1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Governor lead time constant (T2).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Valve positioner time constant (T3) (&gt; 0).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Inlet piping/steam bowl time constant (T4).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Time constant of second boiler pass (T5).  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Time constant of third boiler pass (T6).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Time constant of fourth boiler pass (T7).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t7;

		/** \brief Maximum valve closing velocity (Uc) (&lt; 0).  Unit = PU/sec.  Typical Value = -10. Default: nullptr */
		CIMPP::Simple_Float uc;

		/** \brief Maximum valve opening velocity (Uo) (&gt; 0).  Unit = PU/sec.  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float uo;

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

	BaseClass* GovSteamIEEE1_factory();
}
#endif
