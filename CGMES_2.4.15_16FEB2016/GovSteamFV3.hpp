#ifndef GovSteamFV3_H
#define GovSteamFV3_H
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

	/** \brief Simplified GovSteamIEEE1 Steam turbine governor model with Prmax limit and fast valving. */
	class GovSteamFV3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamFV3();
		~GovSteamFV3() override;

		/** \brief Governor gain, (reciprocal of droop) (K).  Typical Value = 20. Default: nullptr */
		CIMPP::PU k;

		/** \brief Fraction of turbine power developed after first boiler pass (K1).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU k1;

		/** \brief Fraction of turbine power developed after second boiler pass (K2).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU k2;

		/** \brief Fraction of hp turbine power developed after crossover or third boiler pass (K3). Typical Value = 0.6. Default: nullptr */
		CIMPP::PU k3;

		/** \brief Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Maximum valve opening, PU of MWbase (Pmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU pmax;

		/** \brief Minimum valve opening, PU of MWbase (Pmin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pmin;

		/** \brief Max. pressure in reheater (Prmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU prmax;

		/** \brief Governor lead time constant (T1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Governor lag time constant (T2).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Valve positioner time constant (T3).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Inlet piping/steam bowl time constant (T4).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Time constant of second boiler pass (i.e. reheater) (T5).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Time constant of crossover or third boiler pass (T6).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Time to close intercept valve (IV) (Ta).  Typical Value = 0.97. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Time until IV starts to reopen (Tb).  Typical Value = 0.98. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Time until IV is fully open (Tc).  Typical Value = 0.99. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Maximum valve closing velocity (Uc).  Unit = PU/sec.  Typical Value = -1. Default: nullptr */
		CIMPP::Simple_Float uc;

		/** \brief Maximum valve opening velocity (Uo).  Unit = PU/sec.  Typical Value = 0.1. Default: nullptr */
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

	BaseClass* GovSteamFV3_factory();
}
#endif
