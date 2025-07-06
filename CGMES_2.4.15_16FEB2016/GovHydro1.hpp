#ifndef GovHydro1_H
#define GovHydro1_H
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

	/** \brief Basic Hydro turbine governor model. */
	class GovHydro1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro1();
		~GovHydro1() override;

		/** \brief Turbine gain (At) (&gt;0).  Typical Value = 1.2. Default: nullptr */
		CIMPP::PU at;

		/** \brief Turbine damping factor (Dturb) (&gt;=0).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU dturb;

		/** \brief Maximum gate opening (Gmax) (&gt;0).  Typical Value = 1. Default: nullptr */
		CIMPP::PU gmax;

		/** \brief Minimum gate opening (Gmin) (&gt;=0).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gmin;

		/** \brief Turbine nominal head (hdam).  Typical Value = 1. Default: nullptr */
		CIMPP::PU hdam;

		/** \brief Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief No-load flow at nominal head (qnl) (&gt;=0).  Typical Value = 0.08. Default: nullptr */
		CIMPP::PU qnl;

		/** \brief Permanent droop (R) (&gt;0).  Typical Value = 0.04. Default: nullptr */
		CIMPP::PU rperm;

		/** \brief Temporary droop (r) (&gt;R).  Typical Value = 0.3. Default: nullptr */
		CIMPP::PU rtemp;

		/** \brief Filter time constant () (&gt;0).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Gate servo time constant (Tg) (&gt;0).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Washout time constant (Tr) (&gt;0).  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds tr;

		/** \brief Water inertia time constant (Tw) (&gt;0).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tw;

		/** \brief Maximum gate velocity (Vlem) (&gt;0).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Simple_Float velm;

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

	BaseClass* GovHydro1_factory();
}
#endif
