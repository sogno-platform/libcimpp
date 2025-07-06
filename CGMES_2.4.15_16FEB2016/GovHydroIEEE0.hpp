#ifndef GovHydroIEEE0_H
#define GovHydroIEEE0_H
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

	/** \brief IEEE Simplified Hydro Governor-Turbine Model.  Used for Mechanical-Hydraulic and Electro-Hydraulic turbine governors, with our without steam feedback. Typical values given are for Mechanical-Hydraulic.  Ref */
	class GovHydroIEEE0 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroIEEE0();
		~GovHydroIEEE0() override;

		/** \brief Governor gain (K. Default: nullptr */
		CIMPP::PU k;

		/** \brief Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Gate maximum (Pmax). Default: nullptr */
		CIMPP::PU pmax;

		/** \brief Gate minimum (Pmin). Default: nullptr */
		CIMPP::PU pmin;

		/** \brief Governor lag time constant (T1).  Typical Value = 0.25. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Governor lead time constant (T2.  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Gate actuator time constant (T3).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Water starting time (T4). Default: nullptr */
		CIMPP::Seconds t4;

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

	BaseClass* GovHydroIEEE0_factory();
}
#endif
